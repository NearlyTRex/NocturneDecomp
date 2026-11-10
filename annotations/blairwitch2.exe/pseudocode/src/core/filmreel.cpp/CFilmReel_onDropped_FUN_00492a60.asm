; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_onDropped_FUN_00492a60(CFilmReel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492a60
        ;   Label: core_filmreel.cpp_CFilmReel_onDropped_FUN_00492a60
    MOV dword ptr [EAX + 0x430],0x0     ; 00492a64
    RET                                 ; 00492a6e

