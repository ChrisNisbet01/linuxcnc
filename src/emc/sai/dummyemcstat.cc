// keep linker happy so TaskMod can be resolved

#include "rcs.hh"		// NML classes, nmlErrorFormat()
#include "emc.hh"		// EMC NML
#include "emc_nml.hh"


EMC_STAT *emcStatus = new EMC_STAT;

EMC_IO_STAT *emcIoStatus = new EMC_IO_STAT;
