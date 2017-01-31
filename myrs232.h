int rs232_open_from_server(int uart_port_no);
int rs232_write_to_client(int server_fd,char* buffer,int buff_len);
int rs232_read_from_client(int server_fd,char* buffer,int buff_len);
void rs232_close(int server_fd);
