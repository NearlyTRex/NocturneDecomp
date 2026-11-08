; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00451d90(int param_1)
;
;
; XREF[1]:
;   FUN_00550580 at 00550625
;
; Referenced Globals:
;   undefined4 DAT_00b81498
;   undefined4 DAT_013238cc
;   undefined4 DAT_01480e20
;   undefined4 DAT_01480e24
;   undefined4 DAT_01480e28
;
; Called Functions:
;   FUN_00453dc0
;   FUN_004ab020
;   FUN_004ab0c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451d90
        ;   Label: FUN_00451d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00451d91
    MOV EAX,dword ptr [EBX + 0x11e8]    ; 00451d95
    MOV EDX,EAX                         ; 00451d9b
    SAR EDX,0x1f                        ; 00451d9d
    SHL EDX,0x8                         ; 00451da0
    SBB EAX,EDX                         ; 00451da3
    SAR EAX,0x8                         ; 00451da5
    MOV EDX,EAX                         ; 00451da8
    SAR EDX,0x1f                        ; 00451daa
    SHL EDX,0x2                         ; 00451dad
    SBB EAX,EDX                         ; 00451db0
    SAR EAX,0x2                         ; 00451db2
    PUSH 0x12c00                        ; 00451db5
    MOV [0x00b81498],EAX                ; 00451dba | DAT_00b81498
    XOR EDX,EDX                         ; 00451dbf
    MOV ECX,0xb10718                    ; 00451dc1
    MOV DL,byte ptr [0x00b81498]        ; 00451dc6 | DAT_00b81498
    CALL FUN_004ab020                   ; 00451dcc
        ;   XREF to: 004ab020 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab020()
    CMP dword ptr [0x01480e28],0x1      ; 00451dd1 | DAT_01480e28
    JG 0x00451de5                       ; 00451dd8
        ;   XREF to: 00451de5 (CONDITIONAL_JUMP)  ; LAB_00451de5
    CMP dword ptr [0x013238cc],0x0      ; 00451dda | DAT_013238cc
    JNZ 0x00451e02                      ; 00451de1
        ;   XREF to: 00451e02 (CONDITIONAL_JUMP)  ; LAB_00451e02
    POP EBX                             ; 00451de3
    RET                                 ; 00451de4
    PUSH EDI                            ; 00451de5
        ;   Label: LAB_00451de5
    PUSH ESI                            ; 00451de6
    MOV ESI,dword ptr [0x01480e24]      ; 00451de7 | DAT_01480e24
    PUSH ESI                            ; 00451ded
    MOV EDI,dword ptr [0x01480e20]      ; 00451dee | DAT_01480e20
    PUSH EDI                            ; 00451df4
    PUSH EBX                            ; 00451df5
    CALL FUN_00453dc0                   ; 00451df6
        ;   XREF to: 00453dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00453dc0()
    ADD ESP,0xc                         ; 00451dfb
    POP ESI                             ; 00451dfe
    POP EDI                             ; 00451dff
    POP EBX                             ; 00451e00
    RET                                 ; 00451e01
    PUSH 0x12c00                        ; 00451e02
        ;   Label: LAB_00451e02
    MOV EDX,0x1354e20                   ; 00451e07
    MOV ECX,0x1342220                   ; 00451e0c
    XOR EBX,EBX                         ; 00451e11
    CALL FUN_004ab0c8                   ; 00451e13
        ;   XREF to: 004ab0c8 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab0c8()
    MOV dword ptr [0x013238cc],EBX      ; 00451e18 | DAT_013238cc
    POP EBX                             ; 00451e1e
    RET                                 ; 00451e1f

