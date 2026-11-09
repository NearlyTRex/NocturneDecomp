; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004ab530(CFilmReel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ab530
        ;   Label: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004ab530
    CMP dword ptr [EAX + 0x2d4],0x0     ; 004ab534
    SETZ AL                             ; 004ab53b
    AND EAX,0xff                        ; 004ab53e
    RET                                 ; 004ab543

