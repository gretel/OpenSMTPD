#include "smtpd-api.h"

void
helo_cb(uint64_t id, struct filter_helo *helo, void *arg)
{
	filter_accept(id);
}

int
main(int argc, char *argv[])
{
	filter_init();
	filter_register_helo_callback(helo_cb, NULL);
	filter_loop();
}