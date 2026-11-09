; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_00554a30(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a30
        ;   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_00554a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554a31
    PUSH EBX                            ; 00554a35
    CALL sound_sndmain.cpp_FUN_00550070 ; 00554a36
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550070(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00554a3b
    MOV EAX,EBX                         ; 00554a3e
    POP EBX                             ; 00554a40
    RET                                 ; 00554a41

