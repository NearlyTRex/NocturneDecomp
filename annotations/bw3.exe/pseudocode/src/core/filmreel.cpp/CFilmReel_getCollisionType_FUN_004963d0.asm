; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004963d0(CFilmReel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004963d0
        ;   Label: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004963d0
    CMP dword ptr [EAX + 0x2d4],0x0     ; 004963d4
    SETZ AL                             ; 004963db
    AND EAX,0xff                        ; 004963de
    RET                                 ; 004963e3

