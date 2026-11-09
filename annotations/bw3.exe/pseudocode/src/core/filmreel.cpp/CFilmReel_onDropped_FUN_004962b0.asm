; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_onDropped_FUN_004962b0(CFilmReel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004962b0
        ;   Label: core_filmreel.cpp_CFilmReel_onDropped_FUN_004962b0
    MOV dword ptr [EAX + 0x2d4],0x0     ; 004962b4
    RET                                 ; 004962be

