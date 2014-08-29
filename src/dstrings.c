/*
========================================================================

  DOOM RETRO
  The classic, refined DOOM source port. For Windows PC.
  Copyright (C) 2013-2014 Brad Harding.

  This file is part of DOOM RETRO.

  DOOM RETRO is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  DOOM RETRO is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with DOOM RETRO. If not, see <http://www.gnu.org/licenses/>.

========================================================================
*/

#include "d_deh.h"
#include "dstrings.h"

char **endmsg[] =
{
    // DOOM1
    &s_QUITMSG,
    &s_DOOM_ENDMSG1,
    &s_DOOM_ENDMSG2,
    &s_DOOM_ENDMSG3,
    &s_DOOM_ENDMSG4,
    &s_DOOM_ENDMSG5,
    &s_DOOM_ENDMSG6,
    &s_DOOM_ENDMSG7,

    // QuitDOOM II messages
    &s_QUITMSG,
    &s_DOOM2_ENDMSG1,
    &s_DOOM2_ENDMSG2,
    &s_DOOM2_ENDMSG3,
    &s_DOOM2_ENDMSG4,
    &s_DOOM2_ENDMSG5,
    &s_DOOM2_ENDMSG6,
    &s_DOOM2_ENDMSG7
};
