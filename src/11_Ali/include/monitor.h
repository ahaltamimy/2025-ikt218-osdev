#ifndef MONITOR_H
#define MONITOR_H

void monitor_clear();
void monitor_put(char c);
void monitor_write(const char* c);
void monitor_write_hex(unsigned int n);
void monitor_write_dec(unsigned int n);

#endif
