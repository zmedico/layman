#ifndef MESSAGE_H
#define MESSAGE_H

#include <Python.h>
#include "stringlist.h"

typedef struct Message Message;

/*
 * arguments : module (String), stdout (fd), stderr (fd), stderr (fd), debug_level, debug_verbosity, info_level, warn_level, ?, ?, ?, ?
 */
Message *messageCreate(const char* module, FILE* out, FILE* err, FILE* dbg);
PyObject*	_messageObject(Message* m);
void		messageFree(Message *m);

#endif
