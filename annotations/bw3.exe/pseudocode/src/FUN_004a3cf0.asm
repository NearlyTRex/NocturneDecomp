; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00442a20 at 00442bee
;
; Referenced Globals:
;   undefined4 DAT_01d01ab0
;
; Called Functions:
;   FUN_004a05e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3cf0
        ;   Label: FUN_004a3cf0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a3cf1
    PUSH EDX                            ; 004a3cf5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a3cf6
    MOV EDX,dword ptr [0x01d01ab0]      ; 004a3cfa | DAT_01d01ab0
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d00
    LEA EAX,[EDX*0x8 + 0x0]             ; 004a3d04
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d0b
    ADD EAX,EDX                         ; 004a3d0f
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d11
    SHL EAX,0x2                         ; 004a3d15
    PUSH ECX                            ; 004a3d18
    ADD EAX,0x1d01ab4                   ; 004a3d19
    PUSH EAX                            ; 004a3d1e
    CALL FUN_004a05e0                   ; 004a3d1f
        ;   XREF to: 004a05e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a05e0()
    MOV EBX,dword ptr [0x01d01ab0]      ; 004a3d24 | DAT_01d01ab0
    INC EBX                             ; 004a3d2a
    ADD ESP,0x18                        ; 004a3d2b
    MOV dword ptr [0x01d01ab0],EBX      ; 004a3d2e | DAT_01d01ab0
    CMP EBX,0x64                        ; 004a3d34
    JGE 0x004a3d3b                      ; 004a3d37
        ;   XREF to: 004a3d3b (CONDITIONAL_JUMP)  ; LAB_004a3d3b
    POP EBX                             ; 004a3d39
    RET                                 ; 004a3d3a
    PUSH EDI                            ; 004a3d3b
        ;   Label: LAB_004a3d3b
    XOR EDI,EDI                         ; 004a3d3c
    MOV dword ptr [0x01d01ab0],EDI      ; 004a3d3e | DAT_01d01ab0
    POP EDI                             ; 004a3d44
    POP EBX                             ; 004a3d45
    RET                                 ; 004a3d46

