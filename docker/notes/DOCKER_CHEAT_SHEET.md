# Docker Cheat Sheet

This document for learning purposes. it contain some usefull docker commands.

Useful tips : `docker help`

## Docker run example
```docker
docker run -d --rm -p 12345:80 -v /home/web-page:/usr/share/nginx/html --name nginx nginx:latest
```
* `-d`, this command is used for detache, or the short term it will make container running on the background.
* `--rm`, this command is used for automatically removing/deleting the container when it stopped.
* `p`, this command is used for exposing container port, on this example we are exposing port `12345`. so we can access it via web browser or curl. example curl `curl http://localhost:12345`.
* `v`, this used for sharing your saved file on host machine and container. in this example we are sharing folder directory on host machine `/home/web-page` with container directory `/usr/share/nginx/html
* `--name`, is used for set name into running container. if you do not specify this docker will generate random name for your container.

## Docker system prune example
```docker
docker system prune
```
* This command basically will made your running container stop directly and clear your containers

## Docker pull example
```docker
docker pull alpine:latest
```
* `alpine`, is docker image that we gonna pull.
* `latest`, is tag of alpine images. obviously docker images will have various tages like version, latest or etc. `latest` doesn't mean this is the latest version, it just a tag that define by the authors. obviously latest is default tag for docker images, but in some cases it maybe have different tag name.

## Docker exec example
```docker
docker exec -it local_redis bash
```
* this command will allow you to execute command inside the container
* `exec`, this command is used for whenever we want to execute some command inside the container
* `-it`, basically it is two different thing. `i` is stand for interactive so you can type a command into the container, while `t` is stand for tty or in a shor term it gives you a terminal shell.
* `bash`, this is shell we are gonna use. notes the value of this is not only a `bash` but we also can use `sh`. just use whatever you want.
