; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_hasCollision_FUN_004be8f0(CFilmReel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004be8f0
        ;   Label: core_filmreel.cpp_CFilmReel_hasCollision_FUN_004be8f0
    CMP dword ptr [EAX + 0x2d4],0x0     ; 004be8f4
    SETZ AL                             ; 004be8fb
    AND EAX,0xff                        ; 004be8fe
    RET                                 ; 004be903

