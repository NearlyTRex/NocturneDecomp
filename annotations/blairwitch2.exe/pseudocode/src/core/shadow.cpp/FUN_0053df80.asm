; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053df80(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_process_FUN_0053c500 at 0053d36e
;
; Referenced Globals:
;   TerminatedCString s_shb_alert_wav_005e66b9
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053df80
        ;   Label: core_shadow.cpp_FUN_0053df80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053df81
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053df85
    PUSH EDX                            ; 0053df8b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0053df8c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0053df91
    TEST EAX,EAX                        ; 0053df94
    JZ 0x0053df9a                       ; 0053df96
        ;   XREF to: 0053df9a (CONDITIONAL_JUMP)  ; LAB_0053df9a
    POP EBX                             ; 0053df98
    RET                                 ; 0053df99
    PUSH 0x5e66b9                       ; 0053df9a | = "shb_alert??.wav"
        ;   Label: LAB_0053df9a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053df9f
    PUSH EBX                            ; 0053dfa5
    CALL dword ptr [EAX + 0x34]         ; 0053dfa6
    MOV dword ptr [EBX + 0x10b20],0x41700000 ; 0053dfa9
    ADD ESP,0x8                         ; 0053dfb3
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0053dfb6
    POP EBX                             ; 0053dfbc
    RET                                 ; 0053dfbd

