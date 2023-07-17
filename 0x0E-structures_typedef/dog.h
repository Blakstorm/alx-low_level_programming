#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - A struct datatype that stores info of a dog
 *  @name: dog's name
 *  @age: dog's age
 *  @owner: dog's owner
 *
 * Description: struct called 'dog' storing name, age and owner
 *
*/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

#endif

#ifndef FUNC
#define FUNC

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
