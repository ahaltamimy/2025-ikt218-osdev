#include "isr.h"
#include "monitor.h"

void isr_handler(registers_t regs) {
    monitor_write("Received interrupt: ");
    monitor_write_dec(regs.int_no);
    monitor_put('\n');
}
