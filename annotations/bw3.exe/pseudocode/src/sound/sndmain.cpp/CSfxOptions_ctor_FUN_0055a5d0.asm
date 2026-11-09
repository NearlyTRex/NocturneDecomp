; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_0055a5d0(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00555bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a5d0
        ;   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_0055a5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a5d1
    PUSH EBX                            ; 0055a5d5
    CALL sound_sndmain.cpp_FUN_00555bf0 ; 0055a5d6
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555bf0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0055a5db
    MOV EAX,EBX                         ; 0055a5de
    POP EBX                             ; 0055a5e0
    RET                                 ; 0055a5e1

