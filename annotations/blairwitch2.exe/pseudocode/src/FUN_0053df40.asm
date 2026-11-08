; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053df40(int param_1)
;
;
; XREF[1]:
;   FUN_0053ea00 at 0053eaeb
;
; Referenced Globals:
;   undefined4 s_shb_alert_wav_005e66a7+2
;
; Called Functions:
;   FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053df40
        ;   Label: FUN_0053df40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053df41
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053df45
    PUSH EDX                            ; 0053df4b
    CALL FUN_00550b70                   ; 0053df4c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0053df51
    TEST EAX,EAX                        ; 0053df54
    JZ 0x0053df5a                       ; 0053df56
        ;   XREF to: 0053df5a (CONDITIONAL_JUMP)  ; LAB_0053df5a
    POP EBX                             ; 0053df58
    RET                                 ; 0053df59
    PUSH 0x5e66a9                       ; 0053df5a | s_shb_alert_wav_005e66a7+2
        ;   Label: LAB_0053df5a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053df5f
    PUSH EBX                            ; 0053df65
    CALL dword ptr [EAX + 0x34]         ; 0053df66
    MOV dword ptr [EBX + 0x10b20],0x41a00000 ; 0053df69
    ADD ESP,0x8                         ; 0053df73
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0053df76
    POP EBX                             ; 0053df7c
    RET                                 ; 0053df7d

