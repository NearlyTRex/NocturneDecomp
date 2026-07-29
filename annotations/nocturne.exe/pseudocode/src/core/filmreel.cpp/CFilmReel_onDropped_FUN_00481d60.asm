; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_onDropped_FUN_00481d60(CFilmReel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481d60
        ;   Label: core_filmreel.cpp_CFilmReel_onDropped_FUN_00481d60
    MOV dword ptr [EAX + 0x2cc],0x0     ; 00481d64
    RET                                 ; 00481d6e

