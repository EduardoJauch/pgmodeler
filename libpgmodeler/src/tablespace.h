/*
# PostgreSQL Database Modeler (pgModeler)
# Sub-project: Core library (libpgmodeler)
# Class: Tablespace
# Description: Implements the operations to manipulate tablespace on the database.
#
# Creation date: 05/06/2008
#
# Copyright 2006-2012 - Raphael Araújo e Silva <rkhaotix@gmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation version 3.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# The complete text of GPLv3 is at LICENSE file on source code root directory.
# Also, you can get the complete GNU General Public License at <http://www.gnu.org/licenses/>
*/
#ifndef TABLESPACE_H
#define TABLESPACE_H

#include "baseobject.h"

class Tablespace: public BaseObject{
 private:
  static unsigned tabspace_id;

  //Directory where the tablespace resides
  QString directory;

 public:
  Tablespace(void);

  void setName(const QString &name);

  //Sets the directory where tablespace resides
  void setDirectory(const QString &dir);

  //Returns the directory where the tablespace resides
  QString getDirectory(void);

  //Returns the SQL / XML code for the tablespace
  QString getCodeDefinition(unsigned def_type);
};

#endif