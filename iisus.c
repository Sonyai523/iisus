int main(void)
{
	char wer[5] = "zzzz";
	char cvb[5] = "aaaa";

	ft_memcpy(wer, cvb, 1);
	printf("%s\n", wer);
	memcpy (wer, cvb, 1);
	printf("%s", wer);
}

python3 -m pip install --upgrade norminette
// проверка нормы
python3 -m pip install norminette==3.3.2
//  откат нормы
return(&((void*)arr)[i]);
//возврат адреса 
void *ft_memccpy(void *dst, const void *src, int c)
{
    size_t s;
    size_t d;
    char *src1;
    char *dst1;

    s = 0;
    d = 0;
    src1 = (char*)src;
    dst1 = (char*)dst;
    while(src1[s] && src1[s] == (char)c)
        s++;
    while(src1[s] && src1[s] != (char)c)
    {
        dst1[d] = src1[s];
        d++;
        s++;
    }
    dst1[d] = '\0';
    return((void *) dst);
}
leaks - atExit -- ./ft_split.c
//проверять лики
git add .
git status
git commit -m "name comit"
git remote origin ссылка на твой репозиторий из интры
git push origin master

ls -al
git clone твоя репа с интры
//пушить

//https://www.youtube.com/watch?v=13YBlD0SOJo - настройка борн ту бирут

//На экзамене s,d,x. Обрабатываем флаги ширины и точности. Ширина не может быть отрицательной.  Флаги заданны не в аргументах а непосредственно в строке.

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarthric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 15:42:49 by rarthric          #+#    #+#              #
#    Updated: 2021/10/28 18:36:25 by rarthric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_isascii.c ft_putchar_fd.c ft_strjoin.c ft_substr.c ft_isdigit.c ft_putendl_fd.c ft_strlcat.c ft_tolower.c ft_isprint.c ft_putnbr_fd.c ft_strlcpy.c ft_toupper.c ft_itoa.c ft_putstr_fd.c ft_strlen.c ft_atoi.c ft_memchr.c ft_split.c ft_strmapi.c ft_bzero.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_calloc.c ft_memcpy.c ft_strnstr.c ft_isalnum.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_isalpha.c ft_memset.c ft_striteri.c ft_strtrim.c

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}


CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

%.o: %.c $(HEADER)
    $(CC) $(FLAGS) -I./$(HEADER) -c $< -o $@

all:      ${NAME}

${NAME}:     ${OBJS}
            ar rc ${NAME} ${OBJS} $?
            ranlib ${NAME}

clean:
    ${RM} ${OBJS}

fclean:       clean
    ${RM} ${NAME}

re:          fclean all


.PHONY:       all clean fclean re
//make file

int main(void)
{
    ft_printf("it is str = %s", "qqqqqqqqqq     ");

    ft_printf("it is num = %i", 123458);

}
//main для printf

https://github.com/yuran653/ft_printf/blob/master/ft_printf.c
//Гит Юры
https://account.jetbrains.com/licenses
//аккаунт в clion
https://github.com/EarielFlare
//гит Леши
https://github.com/Maxxis91
//гит Сережи
https://github.com/luta-wolf/ExamRank_42/tree/master/ExamRank_02
//гит Дениса


{
int fd;
fd = open("text", O_RDONLY);
    printf("fd = %i\n", fd);
char *str;
str = get_next_line(fd);
printf("%s", str);
//str = malloc(sizeof(char) * BUFFER_SIZE);
//while(str)
//{
//    str = get_next_line(fd);
//    if(str != NULL)
//        printf("%s\n", str);
//}
}
//main для гнл
