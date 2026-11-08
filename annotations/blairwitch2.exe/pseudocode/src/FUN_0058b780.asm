; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058b780(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe0d0
;   undefined4 DAT_005fe0d4
;   undefined4 DAT_005fe0d8
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b780
        ;   Label: FUN_0058b780
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058b781
    PUSH EDX                            ; 0058b785
    CALL FUN_00487db0                   ; 0058b786
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 0058b78b
    PUSH 0x5ee5fc                       ; 0058b78e
    MOV EBX,EAX                         ; 0058b793
    ADD EAX,0x2b4                       ; 0058b795
    PUSH EAX                            ; 0058b79a
    MOV dword ptr [EAX + -0x4],0x5fe0f4 ; 0058b79b
    CALL FUN_005478b0                   ; 0058b7a2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3430],0x3f800000 ; 0058b7a7
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 0058b7b1
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0058b7bb
    MOV dword ptr [EBX + 0x10b10],0x1   ; 0058b7c5
    MOV dword ptr [EBX + 0x10b24],0x0   ; 0058b7cf
    FLD float ptr [0x005fe0d0]          ; 0058b7d9 | DAT_005fe0d0
    MOV dword ptr [EBX + 0x10b28],0x40a00000 ; 0058b7df
    FLD float ptr [0x005fe0d4]          ; 0058b7e9 | DAT_005fe0d4
    MOV dword ptr [EBX + 0x10b2c],0x0   ; 0058b7ef
    FLD float ptr [0x005fe0d8]          ; 0058b7f9 | DAT_005fe0d8
    MOV dword ptr [EBX + 0x10b30],0x0   ; 0058b7ff
    ADD ESP,0x8                         ; 0058b809
    MOV dword ptr [EBX + 0x10b34],0x0   ; 0058b80c
    MOV EAX,EBX                         ; 0058b816
    FXCH ST2                            ; 0058b818
    FSTP float ptr [EBX + 0x3438]       ; 0058b81a
    FSTP float ptr [EBX + 0x343c]       ; 0058b820
    FSTP float ptr [EBX + 0x10b38]      ; 0058b826
    POP EBX                             ; 0058b82c
    RET                                 ; 0058b82d

