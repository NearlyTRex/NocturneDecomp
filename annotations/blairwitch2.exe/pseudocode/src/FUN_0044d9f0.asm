; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044d9f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0046b880
;   FUN_00534610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d9f0
        ;   Label: FUN_0044d9f0
    PUSH ESI                            ; 0044d9f1
    PUSH EDI                            ; 0044d9f2
    PUSH EBP                            ; 0044d9f3
    SUB ESP,0x28                        ; 0044d9f4
    MOV EDX,0x4                         ; 0044d9f7
    PUSH 0x1                            ; 0044d9fc
    MOV ESI,0x2                         ; 0044d9fe
    MOV EBP,dword ptr [0x0060b280]      ; 0044da03 | DAT_0060b280
    XOR ECX,ECX                         ; 0044da09
    XOR EBX,EBX                         ; 0044da0b
    MOV dword ptr [ESP + 0x8],EDX       ; 0044da0d
    MOV dword ptr [ESP + 0x18],ECX      ; 0044da11
    MOV dword ptr [ESP + 0x14],ECX      ; 0044da15
    PUSH EBP                            ; 0044da19 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x14],ECX      ; 0044da1a
    MOV dword ptr [ESP + 0x10],ECX      ; 0044da1e
    CALL FUN_0046b880                   ; 0044da22
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    MOV EDX,0x4                         ; 0044da27
    MOV ECX,0x6                         ; 0044da2c
    ADD ESP,0x8                         ; 0044da31
    MOV EAX,ESP                         ; 0044da34
    MOV EDI,dword ptr [0x0061b5a8]      ; 0044da36 | DAT_0061b5a8
    PUSH EAX                            ; 0044da3c
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044da3d
    MOV dword ptr [ESP + 0x20],EDX      ; 0044da41
    PUSH EDI                            ; 0044da45 | DAT_01e661b8
    MOV dword ptr [ESP + 0x28],ECX      ; 0044da46
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044da4a
    CALL FUN_00534610                   ; 0044da4e
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044da53
    TEST EAX,EAX                        ; 0044da56
    JZ 0x0044da79                       ; 0044da58
        ;   XREF to: 0044da79 (CONDITIONAL_JUMP)  ; LAB_0044da79
    MOV EBX,0x1                         ; 0044da5a
        ;   Label: LAB_0044da5a
    PUSH 0x0                            ; 0044da5f
        ;   Label: LAB_0044da5f
    MOV EAX,[0x0060b280]                ; 0044da61 | DAT_0060b280
    PUSH EAX                            ; 0044da66 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 0044da67
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 0044da6c
    MOV EAX,EBX                         ; 0044da6f
    ADD ESP,0x28                        ; 0044da71
    POP EBP                             ; 0044da74
    POP EDI                             ; 0044da75
    POP ESI                             ; 0044da76
    POP EBX                             ; 0044da77
    RET                                 ; 0044da78
    MOV EBP,0x1                         ; 0044da79
        ;   Label: LAB_0044da79
    MOV EAX,0x3                         ; 0044da7e
    MOV EDX,0x7                         ; 0044da83
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044da88
    MOV EAX,ESP                         ; 0044da8c
    MOV ECX,0x5                         ; 0044da8e
    PUSH EAX                            ; 0044da93
    MOV ESI,dword ptr [0x0061b5a8]      ; 0044da94 | DAT_0061b5a8
    MOV dword ptr [ESP + 0x1c],EBP      ; 0044da9a
    PUSH ESI                            ; 0044da9e | DAT_01e661b8
    MOV dword ptr [ESP + 0x28],EDX      ; 0044da9f
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044daa3
    CALL FUN_00534610                   ; 0044daa7
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044daac
    TEST EAX,EAX                        ; 0044daaf
    JZ 0x0044dab7                       ; 0044dab1
        ;   XREF to: 0044dab7 (CONDITIONAL_JUMP)  ; LAB_0044dab7
    MOV EBX,EBP                         ; 0044dab3
    JMP 0x0044da5f                      ; 0044dab5
        ;   XREF to: 0044da5f (UNCONDITIONAL_JUMP)  ; LAB_0044da5f
    MOV dword ptr [ESP + 0x20],0x5      ; 0044dab7
        ;   Label: LAB_0044dab7
    MOV EAX,ESP                         ; 0044dabf
    MOV EDX,0x4                         ; 0044dac1
    PUSH EAX                            ; 0044dac6
    MOV ECX,dword ptr [0x0061b5a8]      ; 0044dac7 | DAT_0061b5a8
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044dacd
    PUSH ECX                            ; 0044dad1 | DAT_01e661b8
    MOV dword ptr [ESP + 0x24],EBP      ; 0044dad2
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044dad6
    CALL FUN_00534610                   ; 0044dada
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044dadf
    TEST EAX,EAX                        ; 0044dae2
    JZ 0x0044daed                       ; 0044dae4
        ;   XREF to: 0044daed (CONDITIONAL_JUMP)  ; LAB_0044daed
    MOV EBX,EBP                         ; 0044dae6
    JMP 0x0044da5f                      ; 0044dae8
        ;   XREF to: 0044da5f (UNCONDITIONAL_JUMP)  ; LAB_0044da5f
    MOV ESI,0x2                         ; 0044daed
        ;   Label: LAB_0044daed
    MOV EAX,0x3                         ; 0044daf2
    MOV EDI,0x6                         ; 0044daf7
    MOV dword ptr [ESP + 0x24],EAX      ; 0044dafc
    MOV EAX,ESP                         ; 0044db00
    MOV EBP,0x7                         ; 0044db02
    PUSH EAX                            ; 0044db07
    MOV EDX,dword ptr [0x0061b5a8]      ; 0044db08 | DAT_0061b5a8
    MOV dword ptr [ESP + 0x1c],ESI      ; 0044db0e
    PUSH EDX                            ; 0044db12 | DAT_01e661b8
    MOV dword ptr [ESP + 0x24],EDI      ; 0044db13
    MOV dword ptr [ESP + 0x28],EBP      ; 0044db17
    CALL FUN_00534610                   ; 0044db1b
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044db20
    TEST EAX,EAX                        ; 0044db23
    JNZ 0x0044da5a                      ; 0044db25
        ;   XREF to: 0044da5a (CONDITIONAL_JUMP)  ; LAB_0044da5a
    MOV EDI,0x3                         ; 0044db2b
    MOV EBP,0x1                         ; 0044db30
    MOV EAX,ESP                         ; 0044db35
    MOV dword ptr [ESP + 0x18],EBX      ; 0044db37
    PUSH EAX                            ; 0044db3b
    MOV EAX,[0x0061b5a8]                ; 0044db3c | DAT_0061b5a8
    MOV dword ptr [ESP + 0x20],ESI      ; 0044db41
    PUSH EAX                            ; 0044db45 | DAT_01e661b8
    MOV dword ptr [ESP + 0x28],EDI      ; 0044db46
    MOV dword ptr [ESP + 0x2c],EBP      ; 0044db4a
    CALL FUN_00534610                   ; 0044db4e
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044db53
    TEST EAX,EAX                        ; 0044db56
    JZ 0x0044db61                       ; 0044db58
        ;   XREF to: 0044db61 (CONDITIONAL_JUMP)  ; LAB_0044db61
    MOV EBX,EBP                         ; 0044db5a
    JMP 0x0044da5f                      ; 0044db5c
        ;   XREF to: 0044da5f (UNCONDITIONAL_JUMP)  ; LAB_0044da5f
    MOV EDX,0x4                         ; 0044db61
        ;   Label: LAB_0044db61
    MOV ECX,0x5                         ; 0044db66
    MOV ESI,0x7                         ; 0044db6b
    MOV EDI,0x6                         ; 0044db70
    MOV EAX,ESP                         ; 0044db75
    MOV EBP,dword ptr [0x0061b5a8]      ; 0044db77 | DAT_0061b5a8
    PUSH EAX                            ; 0044db7d
    MOV dword ptr [ESP + 0x1c],EDX      ; 0044db7e
    MOV dword ptr [ESP + 0x20],ECX      ; 0044db82
    PUSH EBP                            ; 0044db86 | DAT_01e661b8
    MOV dword ptr [ESP + 0x28],ESI      ; 0044db87
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044db8b
    CALL FUN_00534610                   ; 0044db8f
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; undefined FUN_00534610()
    ADD ESP,0x8                         ; 0044db94
    TEST EAX,EAX                        ; 0044db97
    JZ 0x0044da5f                       ; 0044db99
        ;   XREF to: 0044da5f (CONDITIONAL_JUMP)  ; LAB_0044da5f
    JMP 0x0044da5a                      ; 0044db9f
        ;   XREF to: 0044da5a (UNCONDITIONAL_JUMP)  ; LAB_0044da5a

