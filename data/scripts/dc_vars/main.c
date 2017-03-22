// External Dependencies
#include    "data/scripts/dc_error/main.c"

// Package files
#include    "data/scripts/dc_vars/settings.h"
#import     "data/scripts/dc_vars/entity.c"
#import     "data/scripts/dc_vars/global.c"
#import     "data/scripts/dc_vars/local.c"
#import     "data/scripts/dc_vars/validate.c"
#import     "data/scripts/dc_vars/operation.c"
#import     "data/scripts/dc_vars/random.c"

/*
    dc_vars
    Caskey, Damon V.
    2015-12-23

    -Get and set wrappers with strong typing and error trapping
        for all OpenBOR variant scopes.

    -Type conversion utilities.

    ***Source License***

        By making use of all or part of this script package,
        you agree to the following license, including the
        retention of this license link itself.

        http://www.caskeys.com/dc/?p=5067

    ***Install***

        1. Add container folder folder to your data/scripts folder.
        2. #Include main.c from container folder in whatever script you
            would like to call the functions from.

        See the readme for specific details.

    ***External Dependencies***

        The following are other script packages this one requires
        to run. Make sure you have downloaded and installed them
        first. Otherwise this package will fail to work and likely
        cause the engine to report an error and shut down.

        -dc_error

*/




