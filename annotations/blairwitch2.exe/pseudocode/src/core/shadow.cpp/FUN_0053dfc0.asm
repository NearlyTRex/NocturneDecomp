; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053dfc0(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_process_FUN_0053c500 at 0053cdc9
;
; Referenced Globals:
;   TerminatedCString s_shb_attack_wav_005e66c9
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dfc0
        ;   Label: core_shadow.cpp_FUN_0053dfc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053dfc1
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053dfc5
    PUSH EDX                            ; 0053dfcb
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0053dfcc
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0053dfd1
    TEST EAX,EAX                        ; 0053dfd4
    JZ 0x0053dfda                       ; 0053dfd6
        ;   XREF to: 0053dfda (CONDITIONAL_JUMP)  ; LAB_0053dfda
    POP EBX                             ; 0053dfd8
    RET                                 ; 0053dfd9
    PUSH 0x5e66c9                       ; 0053dfda | = "shb_attack??.wav"
        ;   Label: LAB_0053dfda
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053dfdf
    PUSH EBX                            ; 0053dfe5
    CALL dword ptr [EAX + 0x34]         ; 0053dfe6
    MOV dword ptr [EBX + 0x10b20],0x41000000 ; 0053dfe9
    ADD ESP,0x8                         ; 0053dff3
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0053dff6
    POP EBX                             ; 0053dffc
    RET                                 ; 0053dffd

