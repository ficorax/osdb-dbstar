/***************************************************************************
 *                                                                         *
 * db.*                                                                    *
 * open source database kernel                                             *
 *                                                                         *
 * Copyright (c) 2000 Centura Software Corporation. All rights reserved.   *
 *                                                                         *
 * Use of this software, whether in source code format, or in executable,  *
 * binary object code form, is governed by the CENTURA OPEN SOURCE LICENSE *
 * which is fully described in the LICENSE.TXT file, included within this  *
 * distribution of source code files.                                      * 
 *                                                                         *
 **************************************************************************/

#ifndef APINAMES_H
#define APINAMES_H

/* NOTE: The names in these lists must match one-for-one with the enumeration
            contained in apidefs.h.
*/

/*
    d_ API names
*/

static DB_TCHAR *dbstar_api[] =
{
    DB_TEXT("d_checkid"),
    DB_TEXT("d_close"),
    DB_TEXT("d_closeall"),
    DB_TEXT("d_cmstat"),
    DB_TEXT("d_cmtype"),
    DB_TEXT("d_connect"),
    DB_TEXT("d_costat"),
    DB_TEXT("d_cotype"),
    DB_TEXT("d_crget"),
    DB_TEXT("d_crread"),
    DB_TEXT("d_crset"),
    DB_TEXT("d_crstat"),
    DB_TEXT("d_crtype"),
    DB_TEXT("d_crwrite"),
    DB_TEXT("d_csmget"),
    DB_TEXT("d_csmread"),
    DB_TEXT("d_csmset"),
    DB_TEXT("d_csmwrite"),
    DB_TEXT("d_csoget"),
    DB_TEXT("d_csoread"),
    DB_TEXT("d_csoset"),
    DB_TEXT("d_csowrite"),
    DB_TEXT("d_csstat"),
    DB_TEXT("d_ctbpath"),
    DB_TEXT("d_ctscm"),
    DB_TEXT("d_ctsco"),
    DB_TEXT("d_ctscr"),
    DB_TEXT("d_curkey"),
    DB_TEXT("d_dbdpath"),
    DB_TEXT("d_dberr"),
    DB_TEXT("d_dbfpath"),
    DB_TEXT("d_dblog"),
    DB_TEXT("d_dbnum"),
    DB_TEXT("d_dbstat"),
    DB_TEXT("d_dbtaf"),
    DB_TEXT("d_dbtmp"),
    DB_TEXT("d_dbuserid"),
    DB_TEXT("d_def_opt"),
    DB_TEXT("d_delete"),
    DB_TEXT("d_destroy"),
    DB_TEXT("d_discon"),
    DB_TEXT("d_disdel"),
    DB_TEXT("d_fillnew"),
    DB_TEXT("d_findco"),
    DB_TEXT("d_findfm"),
    DB_TEXT("d_findlm"),
    DB_TEXT("d_findnm"),
    DB_TEXT("d_findpm"),
    DB_TEXT("d_fldnum"),
    DB_TEXT("d_freeall"),
    DB_TEXT("d_gtscm"),
    DB_TEXT("d_gtsco"),
    DB_TEXT("d_gtscr"),
    DB_TEXT("d_gtscs"),
    DB_TEXT("d_iclose"),
    DB_TEXT("d_initfile"),
    DB_TEXT("d_initialize"),
    DB_TEXT("d_internals"),
    DB_TEXT("d_iopen"),
    DB_TEXT("d_ismember"),
    DB_TEXT("d_isowner"),
    DB_TEXT("d_keybuild"),
    DB_TEXT("d_keydel"),
    DB_TEXT("d_keyexist"),
    DB_TEXT("d_keyfind"),
    DB_TEXT("d_keyfree"),
    DB_TEXT("d_keyfrst"),
    DB_TEXT("d_keylast"),
    DB_TEXT("d_keylock"),
    DB_TEXT("d_keylstat"),
    DB_TEXT("d_keynext"),
    DB_TEXT("d_keyprev"),
    DB_TEXT("d_keyread"),
    DB_TEXT("d_keystore"),
    DB_TEXT("d_lmclear"),
    DB_TEXT("d_lmstat"),
    DB_TEXT("d_lock"),
    DB_TEXT("d_lockcomm"),
    DB_TEXT("d_lockmgr"),
    DB_TEXT("d_locktimeout"),
    DB_TEXT("d_makenew"),
    DB_TEXT("d_mapchar"),
    DB_TEXT("d_members"),
    DB_TEXT("d_off_opt"),
    DB_TEXT("d_on_opt"),
    DB_TEXT("d_open"),
    DB_TEXT("d_rdcurr"),
    DB_TEXT("d_dbini"),
    DB_TEXT("d_recfree"),
    DB_TEXT("d_recfrst"),
    DB_TEXT("d_reclast"),
    DB_TEXT("d_reclock"),
    DB_TEXT("d_reclstat"),
    DB_TEXT("d_recnext"),
    DB_TEXT("d_recnum"),
    DB_TEXT("d_recover"),
    DB_TEXT("d_recprev"),
    DB_TEXT("d_recread"),
    DB_TEXT("d_recset"),
    DB_TEXT("d_recstat"),
    DB_TEXT("d_recwrite"),
    DB_TEXT("d_renclean"),
    DB_TEXT("d_renfile"),
    DB_TEXT("d_rerdcurr"),
    DB_TEXT("d_rlbclr"),
    DB_TEXT("d_rlbset"),
    DB_TEXT("d_rlbtst"),
    DB_TEXT("d_set_dberr"),
    DB_TEXT("d_setdb"),
    DB_TEXT("d_setfiles"),
    DB_TEXT("d_setfree"),
    DB_TEXT("d_setkey"),
    DB_TEXT("d_setlock"),
    DB_TEXT("d_setlstat"),
    DB_TEXT("d_setmm"),
    DB_TEXT("d_setmo"),
    DB_TEXT("d_setmr"),
    DB_TEXT("d_setnum"),
    DB_TEXT("d_setom"),
    DB_TEXT("d_setoo"),
    DB_TEXT("d_setor"),
    DB_TEXT("d_setpages"),
    DB_TEXT("d_setrm"),
    DB_TEXT("d_setro"),
    DB_TEXT("d_stscm"),
    DB_TEXT("d_stsco"),
    DB_TEXT("d_stscr"),
    DB_TEXT("d_stscs"),
    DB_TEXT("d_timeout"),
    DB_TEXT("d_trabort"),
    DB_TEXT("d_trbegin"),
    DB_TEXT("d_trend"),
    DB_TEXT("d_utscm"),
    DB_TEXT("d_utsco"),
    DB_TEXT("d_utscr"),
    DB_TEXT("d_utscs"),
    DB_TEXT("d_wrcurr"),
    DB_TEXT("d_opentask"),
    DB_TEXT("d_closetask"),
    DB_TEXT("d_open_sg"),
    DB_TEXT("d_iopen_sg")
};

#endif /* APINAMES_H */

