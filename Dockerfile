FROM gcc:latest

WORKDIR /app

COPY timerr.c .

RUN gcc -o timerr timerr.c

CMD ["./timerr"]
