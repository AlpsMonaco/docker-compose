FROM gcc:14
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -o myapp main.cc
CMD ["./myapp"]