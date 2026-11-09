; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_00577460(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005726e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577460
        ;   Label: sound_sndmain.cpp_CSfxOptions_ctor_FUN_00577460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577461
    PUSH EBX                            ; 00577465
    CALL sound_sndmain.cpp_FUN_005726e0 ; 00577466
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005726e0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0057746b
    MOV EAX,EBX                         ; 0057746e
    POP EBX                             ; 00577470
    RET                                 ; 00577471

