; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554c80(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   FUN_00555130 at 0055519a
;   FUN_00555a80 at 00555b42
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Lock_secondary_buffer_005e9a5a
;   TerminatedCString s_Unlock_secondary_buffer_005e9a70
;   undefined4 DAT_0264a5cc
;   undefined4 DAT_0264a5d8
;   undefined4 DAT_0264a5dc
;   undefined4 DAT_0264a5e0
;   undefined4 DAT_0264a5e4
;   undefined4 DAT_0264a5e8
;   undefined4 DAT_0264a5ec
;   undefined4 DAT_0264a5f0
;
; Called Functions:
;   FUN_005541f0
;   FUN_005549c0
;   FUN_00554ad0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554c80
        ;   Label: FUN_00554c80
    PUSH ESI                            ; 00554c81
    PUSH EDI                            ; 00554c82
    PUSH EBP                            ; 00554c83
    SUB ESP,0x350                       ; 00554c84
    MOV EDX,dword ptr [0x0264a5cc]      ; 00554c8a | DAT_0264a5cc
    TEST EDX,EDX                        ; 00554c90
    JNZ 0x00554ca1                      ; 00554c92
        ;   XREF to: 00554ca1 (CONDITIONAL_JUMP)  ; LAB_00554ca1
    XOR EAX,EAX                         ; 00554c94
        ;   Label: LAB_00554c94
    ADD ESP,0x350                       ; 00554c96
        ;   Label: LAB_00554c96
    POP EBP                             ; 00554c9c
    POP EDI                             ; 00554c9d
    POP ESI                             ; 00554c9e
    POP EBX                             ; 00554c9f
    RET                                 ; 00554ca0
    PUSH 0x0                            ; 00554ca1
        ;   Label: LAB_00554ca1
    LEA EAX,[ESP + 0x350]               ; 00554ca3
    PUSH EAX                            ; 00554caa
    LEA EAX,[ESP + 0x348]               ; 00554cab
    PUSH EAX                            ; 00554cb2
    LEA EAX,[ESP + 0x354]               ; 00554cb3
    PUSH EAX                            ; 00554cba
    LEA EAX,[ESP + 0x354]               ; 00554cbb
    MOV EBX,dword ptr [0x0264a5e8]      ; 00554cc2 | DAT_0264a5e8
    PUSH EAX                            ; 00554cc8
    MOV EAX,[0x0264a5f0]                ; 00554cc9 | DAT_0264a5f0
    IMUL EAX,EBX                        ; 00554cce
    PUSH EBX                            ; 00554cd1
    PUSH EAX                            ; 00554cd2
    MOV ECX,dword ptr [EDX]             ; 00554cd3
    PUSH EDX                            ; 00554cd5
    CALL dword ptr [ECX + 0x2c]         ; 00554cd6
    TEST EAX,EAX                        ; 00554cd9
    JNZ 0x00554dcd                      ; 00554cdb
        ;   XREF to: 00554dcd (CONDITIONAL_JUMP)  ; LAB_00554dcd
    CMP dword ptr [ESP + 0x340],0x0     ; 00554ce1
    JNZ 0x00554c96                      ; 00554ce9
        ;   XREF to: 00554c96 (CONDITIONAL_JUMP)  ; LAB_00554c96
    MOV EAX,dword ptr [ESP + 0x348]     ; 00554ceb
    CMP EAX,dword ptr [0x0264a5e8]      ; 00554cf2 | DAT_0264a5e8
    JNZ 0x00554c94                      ; 00554cf8
        ;   XREF to: 00554c94 (CONDITIONAL_JUMP)  ; LAB_00554c94
    MOV EAX,[0x0264a5d8]                ; 00554cfa | DAT_0264a5d8
    MOV EDX,EAX                         ; 00554cff
    SAR EDX,0x1f                        ; 00554d01
    SHL EDX,0x3                         ; 00554d04
    SBB EAX,EDX                         ; 00554d07
    SAR EAX,0x3                         ; 00554d09
    MOV ESI,EAX                         ; 00554d0c
    MOV EBX,ESI                         ; 00554d0e
    IMUL EDX,ESI,0x0                    ; 00554d10
    ADD EDX,dword ptr [ESP + 0x344]     ; 00554d13
    MOV ECX,dword ptr [0x0264a5e0]      ; 00554d1a | DAT_0264a5e0
    SHL ECX,0x2                         ; 00554d20
    XOR EAX,EAX                         ; 00554d23
    TEST ECX,ECX                        ; 00554d25
    JLE 0x00554d40                      ; 00554d27
        ;   XREF to: 00554d40 (CONDITIONAL_JUMP)  ; LAB_00554d40
    MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX ; 00554d29
        ;   Label: LAB_00554d29
    ADD EAX,0x4                         ; 00554d30
    ADD EDX,EBX                         ; 00554d33
    CMP EAX,ECX                         ; 00554d35
    JL 0x00554d29                       ; 00554d37
        ;   XREF to: 00554d29 (CONDITIONAL_JUMP)  ; LAB_00554d29
    LEA EAX,[EAX]                       ; 00554d39
    NOP                                 ; 00554d3f
    MOV EBX,dword ptr [0x0264a5e0]      ; 00554d40 | DAT_0264a5e0
        ;   Label: LAB_00554d40
    IMUL ESI,EBX                        ; 00554d46
    PUSH ESI                            ; 00554d49
    MOV ESI,dword ptr [0x0264a5e4]      ; 00554d4a | DAT_0264a5e4
    PUSH ESI                            ; 00554d50
    MOV EDI,dword ptr [0x0264a5dc]      ; 00554d51 | DAT_0264a5dc
    PUSH EDI                            ; 00554d57
    PUSH EBX                            ; 00554d58
    MOV EAX,[0x0264a5d8]                ; 00554d59 | DAT_0264a5d8
    PUSH EAX                            ; 00554d5e
    LEA EAX,[ESP + 0x334]               ; 00554d5f
    PUSH EAX                            ; 00554d66
    CALL FUN_005541f0                   ; 00554d67
        ;   XREF to: 005541f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005541f0()
    MOV EDX,dword ptr [0x0264a5f0]      ; 00554d6c | DAT_0264a5f0
    MOV ECX,dword ptr [0x0264a5ec]      ; 00554d72 | DAT_0264a5ec
    INC EDX                             ; 00554d78
    ADD ESP,0x18                        ; 00554d79
    MOV dword ptr [0x0264a5f0],EDX      ; 00554d7c | DAT_0264a5f0
    CMP EDX,ECX                         ; 00554d82
    JL 0x00554d8e                       ; 00554d84
        ;   XREF to: 00554d8e (CONDITIONAL_JUMP)  ; LAB_00554d8e
    XOR EBX,EBX                         ; 00554d86
    MOV dword ptr [0x0264a5f0],EBX      ; 00554d88 | DAT_0264a5f0
    MOV ESI,dword ptr [ESP + 0x34c]     ; 00554d8e
        ;   Label: LAB_00554d8e
    PUSH ESI                            ; 00554d95
    MOV EDI,dword ptr [ESP + 0x344]     ; 00554d96
    PUSH EDI                            ; 00554d9d
    MOV EBP,dword ptr [ESP + 0x350]     ; 00554d9e
    PUSH EBP                            ; 00554da5
    MOV ECX,dword ptr [ESP + 0x350]     ; 00554da6
    MOV EAX,[0x0264a5cc]                ; 00554dad | DAT_0264a5cc
    PUSH ECX                            ; 00554db2
    MOV EDX,dword ptr [EAX]             ; 00554db3
    PUSH EAX                            ; 00554db5
    CALL dword ptr [EDX + 0x4c]         ; 00554db6
    TEST EAX,EAX                        ; 00554db9
    JNZ 0x00554e06                      ; 00554dbb
        ;   XREF to: 00554e06 (CONDITIONAL_JUMP)  ; LAB_00554e06
    MOV EAX,0x1                         ; 00554dbd
    ADD ESP,0x350                       ; 00554dc2
    POP EBP                             ; 00554dc8
    POP EDI                             ; 00554dc9
    POP ESI                             ; 00554dca
    POP EBX                             ; 00554dcb
    RET                                 ; 00554dcc
    PUSH EAX                            ; 00554dcd
        ;   Label: LAB_00554dcd
    CALL FUN_00554ad0                   ; 00554dce
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 00554dd3
    PUSH EAX                            ; 00554dd6
    PUSH 0x5e9a5a                       ; 00554dd7 | = "Lock secondary buffer"
    PUSH 0x5e9a3b                       ; 00554ddc | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00554de1
    PUSH EAX                            ; 00554de5
    CALL FUN_005b7790                   ; 00554de6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00554deb
    MOV EAX,ESP                         ; 00554dee
    PUSH EAX                            ; 00554df0
    CALL FUN_005549c0                   ; 00554df1
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00554df6
    XOR EAX,EAX                         ; 00554df9
    ADD ESP,0x350                       ; 00554dfb
    POP EBP                             ; 00554e01
    POP EDI                             ; 00554e02
    POP ESI                             ; 00554e03
    POP EBX                             ; 00554e04
    RET                                 ; 00554e05
    PUSH EAX                            ; 00554e06
        ;   Label: LAB_00554e06
    CALL FUN_00554ad0                   ; 00554e07
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 00554e0c
    PUSH EAX                            ; 00554e0f
    PUSH 0x5e9a70                       ; 00554e10 | = "Unlock secondary buffer"
    PUSH 0x5e9a3b                       ; 00554e15 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00554e1a
    PUSH EAX                            ; 00554e21
    CALL FUN_005b7790                   ; 00554e22
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00554e27
    LEA EAX,[ESP + 0x190]               ; 00554e2a
    PUSH EAX                            ; 00554e31
    CALL FUN_005549c0                   ; 00554e32
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00554e37
    XOR EAX,EAX                         ; 00554e3a
    ADD ESP,0x350                       ; 00554e3c
    POP EBP                             ; 00554e42
    POP EDI                             ; 00554e43
    POP ESI                             ; 00554e44
    POP EBX                             ; 00554e45
    RET                                 ; 00554e46

