// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials

#include "monitor.h"

int main(struct multiboot *mboot_ptr) {
  // Initialize the screen (by clearing it)
  monitor_clear();
  // Write out a sample string
  monitor_write("Hello, world! Hoang Tran");

  return 0;
}
