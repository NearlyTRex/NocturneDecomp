; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053e040(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_0053ea00 at 0053ebb4
;
; Referenced Globals:
;   TerminatedCString s_shb_die_wav_005e66eb
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e040
        ;   Label: core_shadow.cpp_FUN_0053e040
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053e041
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053e045
    PUSH EDX                            ; 0053e04b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0053e04c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0053e051
    TEST EAX,EAX                        ; 0053e054
    JZ 0x0053e05a                       ; 0053e056
        ;   XREF to: 0053e05a (CONDITIONAL_JUMP)  ; LAB_0053e05a
    POP EBX                             ; 0053e058
    RET                                 ; 0053e059
    PUSH 0x5e66eb                       ; 0053e05a | = "shb_die??.wav"
        ;   Label: LAB_0053e05a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053e05f
    PUSH EBX                            ; 0053e065
    CALL dword ptr [EAX + 0x34]         ; 0053e066
    MOV dword ptr [EBX + 0x10b20],0x41000000 ; 0053e069
    ADD ESP,0x8                         ; 0053e073
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0053e076
    POP EBX                             ; 0053e07c
    RET                                 ; 0053e07d

