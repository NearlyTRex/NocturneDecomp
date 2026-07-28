; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxOptions * sound_sndmain_cpp_FUN_00529a20(CSfxOptions *param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529a20
        ;   Label: sound_sndmain.cpp_FUN_00529a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529a21
    PUSH EBX                            ; 00529a25
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0 ; 00529a26
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00529a2b
    MOV EAX,EBX                         ; 00529a2e
    POP EBX                             ; 00529a30
    RET                                 ; 00529a31

