; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0fa0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[6]:
;   FUN_00469b40 at 00469cd4
;   FUN_004b1040 at 004b109a
;   FUN_004b47d0 at 004b4d25
;   FUN_004bfb50 at 004bfe87
;   FUN_004bfee0 at 004c0238
;   FUN_004c02a0 at 004c0725
;
; Called Functions:
;   FUN_004b0cb0
;   FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0fa0
        ;   Label: FUN_004b0fa0
    PUSH ESI                            ; 004b0fa1
    PUSH EDI                            ; 004b0fa2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b0fa3
    PUSH EAX                            ; 004b0fa7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004b0fa8
    PUSH EDX                            ; 004b0fac
    MOV ECX,dword ptr [ESP + 0x28]      ; 004b0fad
    PUSH ECX                            ; 004b0fb1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b0fb2
    PUSH EBX                            ; 004b0fb6
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b0fb7
    PUSH EAX                            ; 004b0fbb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004b0fbc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b0fc0
    PUSH EDI                            ; 004b0fc4
    ADD EBX,ESI                         ; 004b0fc5
    CALL FUN_004b2a80                   ; 004b0fc7
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    LEA EDX,[EBX + 0x1]                 ; 004b0fcc
    SUB EDX,EAX                         ; 004b0fcf
    MOV EAX,EDX                         ; 004b0fd1
    SAR EDX,0x1f                        ; 004b0fd3
    SUB EAX,EDX                         ; 004b0fd6
    SAR EAX,0x1                         ; 004b0fd8
    ADD ESP,0x8                         ; 004b0fda
    PUSH EAX                            ; 004b0fdd
    PUSH EDI                            ; 004b0fde
    CALL FUN_004b0cb0                   ; 004b0fdf
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004b0fe4
    POP EDI                             ; 004b0fe7
    POP ESI                             ; 004b0fe8
    POP EBX                             ; 004b0fe9
    RET                                 ; 004b0fea

