; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521af0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b5190 at 004b5b07
;
; Referenced Globals:
;   undefined4 DAT_005e2eb7
;   TerminatedCString s_No_script_loaded_005e2eba
;
; Called Functions:
;   FUN_00465d30
;   FUN_00465ea0
;   FUN_00466350
;   FUN_004673b0
;   FUN_00467ac0
;   FUN_00468240
;   FUN_00468a70
;   FUN_00468b30
;   FUN_00481240
;   FUN_004858f0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521af0
        ;   Label: FUN_00521af0
    PUSH ESI                            ; 00521af1
    PUSH EDI                            ; 00521af2
    PUSH EBP                            ; 00521af3
    SUB ESP,0x94                        ; 00521af4
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00521afa
    MOV EDX,dword ptr [ESP + 0xac]      ; 00521b01
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00521b08
    MOV EDI,dword ptr [ESP + 0xb8]      ; 00521b0f
    PUSH 0x0                            ; 00521b16
    SUB EDI,EBX                         ; 00521b18
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00521b1a
    INC EDI                             ; 00521b21
    SUB EAX,EDX                         ; 00521b22
    PUSH EDI                            ; 00521b24
    INC EAX                             ; 00521b25
    PUSH EAX                            ; 00521b26
    PUSH EBX                            ; 00521b27
    PUSH EDX                            ; 00521b28
    LEA EAX,[ESP + 0x78]                ; 00521b29
    PUSH EAX                            ; 00521b2d
    CALL FUN_00465d30                   ; 00521b2e
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00465d30()
    ADD ESP,0x18                        ; 00521b33
    PUSH 0x0                            ; 00521b36
    CALL FUN_00465ea0                   ; 00521b38
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ea0()
    ADD ESP,0x4                         ; 00521b3d
    LEA EAX,[ESP + 0x64]                ; 00521b40
    PUSH EAX                            ; 00521b44
    CALL FUN_00467ac0                   ; 00521b45
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00467ac0()
    ADD ESP,0x4                         ; 00521b4a
    PUSH 0x0                            ; 00521b4d
    CALL FUN_00466350                   ; 00521b4f
        ;   XREF to: 00466350 (UNCONDITIONAL_CALL)  ; undefined FUN_00466350()
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00521b54
    ADD ESP,0x4                         ; 00521b57
    TEST EDX,EDX                        ; 00521b5a
    JLE 0x00521cc6                      ; 00521b5c
        ;   XREF to: 00521cc6 (CONDITIONAL_JUMP)  ; LAB_00521cc6
    LEA EAX,[ESP + 0x64]                ; 00521b62
    PUSH EAX                            ; 00521b66
    CALL FUN_00468b30                   ; 00521b67
        ;   XREF to: 00468b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00468b30()
    MOV EBX,EAX                         ; 00521b6c
    ADD ESP,0x4                         ; 00521b6e
    MOV EDX,dword ptr [EBP + 0x44]      ; 00521b71
    MOV dword ptr [ESP + 0x88],EAX      ; 00521b74
    MOV EAX,dword ptr [EBP + 0x30]      ; 00521b7b
    MOV EAX,dword ptr [EAX + EDX*0x8]   ; 00521b7e
    DEC EAX                             ; 00521b81
    MOV EDX,EDI                         ; 00521b82
    MOV dword ptr [ESP + 0x84],EAX      ; 00521b84
    SAR EDX,0x1f                        ; 00521b8b
    MOV EAX,EDI                         ; 00521b8e
    IDIV EBX                            ; 00521b90
    MOV EDX,EAX                         ; 00521b92
    SAR EDX,0x1f                        ; 00521b94
    SUB EAX,EDX                         ; 00521b97
    SAR EAX,0x1                         ; 00521b99
    MOV EBX,dword ptr [ESP + 0x84]      ; 00521b9b
    SUB EBX,EAX                         ; 00521ba2
    TEST EBX,EBX                        ; 00521ba4
    JL 0x00521c9c                       ; 00521ba6
        ;   XREF to: 00521c9c (CONDITIONAL_JUMP)  ; LAB_00521c9c
    MOV ECX,dword ptr [ESP + 0x88]      ; 00521bac
        ;   Label: LAB_00521bac
    MOV ESI,0x2                         ; 00521bb3
    LEA EAX,[EBP + 0x34]                ; 00521bb8
    SUB EDI,ECX                         ; 00521bbb
    MOV dword ptr [ESP + 0x90],EAX      ; 00521bbd
    MOV dword ptr [ESP + 0x8c],EDI      ; 00521bc4
    CMP EDI,ESI                         ; 00521bcb
    JLE 0x00521c77                      ; 00521bcd
        ;   XREF to: 00521c77 (CONDITIONAL_JUMP)  ; LAB_00521c77
    MOV EDI,dword ptr [ESP + 0x90]      ; 00521bd3
        ;   Label: LAB_00521bd3
    PUSH EDI                            ; 00521bda
    CALL FUN_004858f0                   ; 00521bdb
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004858f0()
    ADD ESP,0x4                         ; 00521be0
    CMP EBX,EAX                         ; 00521be3
    JGE 0x00521c77                      ; 00521be5
        ;   XREF to: 00521c77 (CONDITIONAL_JUMP)  ; LAB_00521c77
    CMP EBX,dword ptr [ESP + 0x84]      ; 00521beb
    JNZ 0x00521cbc                      ; 00521bf2
        ;   XREF to: 00521cbc (CONDITIONAL_JUMP)  ; LAB_00521cbc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00521bf8
    TEST EDX,EDX                        ; 00521bfb
    JNZ 0x00521ca3                      ; 00521bfd
        ;   XREF to: 00521ca3 (CONDITIONAL_JUMP)  ; LAB_00521ca3
    PUSH 0xfa                           ; 00521c03
    CALL FUN_00465ea0                   ; 00521c08
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ea0()
        ;   Label: LAB_00521c08
    ADD ESP,0x4                         ; 00521c0d
    LEA EDI,[EBX + 0x1]                 ; 00521c10
    PUSH EDI                            ; 00521c13
    PUSH 0x5e2eb7                       ; 00521c14 | DAT_005e2eb7
    LEA EAX,[ESP + 0x8]                 ; 00521c19
    PUSH EAX                            ; 00521c1d
    CALL FUN_005b7790                   ; 00521c1e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00521c23
    PUSH ESI                            ; 00521c26
    PUSH 0x2                            ; 00521c27
    LEA EAX,[ESP + 0x8]                 ; 00521c29
    PUSH EAX                            ; 00521c2d
    LEA EAX,[ESP + 0x70]                ; 00521c2e
    PUSH EAX                            ; 00521c32
    CALL FUN_00468240                   ; 00521c33
        ;   XREF to: 00468240 (UNCONDITIONAL_CALL)  ; undefined FUN_00468240()
    ADD ESP,0x10                        ; 00521c38
    PUSH ESI                            ; 00521c3b
    PUSH 0x1e                           ; 00521c3c
    PUSH EBX                            ; 00521c3e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00521c3f
    PUSH EAX                            ; 00521c46
    CALL FUN_00481240                   ; 00521c47
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 00521c4c
    PUSH EAX                            ; 00521c4f
    LEA EAX,[ESP + 0x70]                ; 00521c50
    PUSH EAX                            ; 00521c54
    CALL FUN_00468240                   ; 00521c55
        ;   XREF to: 00468240 (UNCONDITIONAL_CALL)  ; undefined FUN_00468240()
    ADD ESP,0x10                        ; 00521c5a
    MOV EDX,dword ptr [ESP + 0x88]      ; 00521c5d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00521c64
    ADD ESI,EDX                         ; 00521c6b
    MOV EBX,EDI                         ; 00521c6d
    CMP ESI,ECX                         ; 00521c6f
    JL 0x00521bd3                       ; 00521c71
        ;   XREF to: 00521bd3 (CONDITIONAL_JUMP)  ; LAB_00521bd3
    PUSH 0xff                           ; 00521c77
        ;   Label: LAB_00521c77
    CALL FUN_00465ea0                   ; 00521c7c
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ea0()
    ADD ESP,0x4                         ; 00521c81
    LEA EAX,[ESP + 0x64]                ; 00521c84
    PUSH EAX                            ; 00521c88
    CALL FUN_004673b0                   ; 00521c89
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004673b0()
    ADD ESP,0x4                         ; 00521c8e
    ADD ESP,0x94                        ; 00521c91
    POP EBP                             ; 00521c97
    POP EDI                             ; 00521c98
    POP ESI                             ; 00521c99
    POP EBX                             ; 00521c9a
    RET                                 ; 00521c9b
    XOR EBX,EBX                         ; 00521c9c
        ;   Label: LAB_00521c9c
    JMP 0x00521bac                      ; 00521c9e
        ;   XREF to: 00521bac (UNCONDITIONAL_JUMP)  ; LAB_00521bac
    CMP EDX,0x1                         ; 00521ca3
        ;   Label: LAB_00521ca3
    JNZ 0x00521cb2                      ; 00521ca6
        ;   XREF to: 00521cb2 (CONDITIONAL_JUMP)  ; LAB_00521cb2
    PUSH 0xfb                           ; 00521ca8
    JMP 0x00521c08                      ; 00521cad
        ;   XREF to: 00521c08 (UNCONDITIONAL_JUMP)  ; LAB_00521c08
    PUSH 0xf9                           ; 00521cb2
        ;   Label: LAB_00521cb2
    JMP 0x00521c08                      ; 00521cb7
        ;   XREF to: 00521c08 (UNCONDITIONAL_JUMP)  ; LAB_00521c08
    PUSH 0xff                           ; 00521cbc
        ;   Label: LAB_00521cbc
    JMP 0x00521c08                      ; 00521cc1
        ;   XREF to: 00521c08 (UNCONDITIONAL_JUMP)  ; LAB_00521c08
    PUSH 0xf9                           ; 00521cc6
        ;   Label: LAB_00521cc6
    CALL FUN_00465ea0                   ; 00521ccb
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ea0()
    ADD ESP,0x4                         ; 00521cd0
    PUSH 0x5e2eba                       ; 00521cd3 | = "(No script loaded.)"
    LEA EAX,[ESP + 0x68]                ; 00521cd8
    PUSH EAX                            ; 00521cdc
    CALL FUN_00468a70                   ; 00521cdd
        ;   XREF to: 00468a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00468a70()
    ADD ESP,0x8                         ; 00521ce2
    JMP 0x00521c77                      ; 00521ce5
        ;   XREF to: 00521c77 (UNCONDITIONAL_JUMP)  ; LAB_00521c77

