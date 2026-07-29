; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00481e70(CFilmReel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481e70
        ;   Label: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_00481e70
    CMP dword ptr [EAX + 0x2cc],0x0     ; 00481e74
    SETZ AL                             ; 00481e7b
    AND EAX,0xff                        ; 00481e7e
    RET                                 ; 00481e83

