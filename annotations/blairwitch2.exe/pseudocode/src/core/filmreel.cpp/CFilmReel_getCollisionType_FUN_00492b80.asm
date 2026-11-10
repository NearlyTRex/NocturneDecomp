; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00492b80(CFilmReel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492b80
        ;   Label: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_00492b80
    CMP dword ptr [EAX + 0x430],0x0     ; 00492b84
    SETZ AL                             ; 00492b8b
    AND EAX,0xff                        ; 00492b8e
    RET                                 ; 00492b93

