; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00599d60(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d9a11
;   undefined4 DAT_005d9a15
;
; Called Functions:
;   FUN_00430d60
;   FUN_00431ce0
;   FUN_00599c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d60
        ;   Label: FUN_00599d60
    PUSH ESI                            ; 00599d61
    PUSH EDI                            ; 00599d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00599d63
    MOV EDI,dword ptr [ESP + 0x14]      ; 00599d67
    PUSH EBX                            ; 00599d6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00599d6c
    CALL dword ptr [EAX + 0xcc]         ; 00599d72
    ADD ESP,0x4                         ; 00599d78
    CMP EAX,0x2d24b98                   ; 00599d7b
    JNZ 0x00599dc3                      ; 00599d80
        ;   XREF to: 00599dc3 (CONDITIONAL_JUMP)  ; LAB_00599dc3
    FLD float ptr [EDI + 0x4]           ; 00599d82
    FSUBR float ptr [EBX + 0x2538]      ; 00599d85
    LEA ESI,[EBX + 0x158]               ; 00599d8b
    FST float ptr [EBX + 0x2538]        ; 00599d91
    FLDZ                                ; 00599d97
    FCOMPP                              ; 00599d99
    FNSTSW AX                           ; 00599d9b
    SAHF                                ; 00599d9d
    JNC 0x00599dd1                      ; 00599d9e
        ;   XREF to: 00599dd1 (CONDITIONAL_JUMP)  ; LAB_00599dd1
    FLD float ptr [EDI + 0x4]           ; 00599da0
    FLDZ                                ; 00599da3
    FCOMPP                              ; 00599da5
    FNSTSW AX                           ; 00599da7
    SAHF                                ; 00599da9
    JNC 0x00599dc3                      ; 00599daa
        ;   XREF to: 00599dc3 (CONDITIONAL_JUMP)  ; LAB_00599dc3
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00599dac
    JNZ 0x00599dc3                      ; 00599db3
        ;   XREF to: 00599dc3 (CONDITIONAL_JUMP)  ; LAB_00599dc3
    PUSH 0x5d9a15                       ; 00599db5 | DAT_005d9a15
    PUSH ESI                            ; 00599dba
        ;   Label: LAB_00599dba
    CALL FUN_00599c80                   ; 00599dbb
        ;   XREF to: 00599c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00599c80()
    ADD ESP,0x8                         ; 00599dc0
    PUSH EDI                            ; 00599dc3
        ;   Label: LAB_00599dc3
    PUSH EBX                            ; 00599dc4
    CALL FUN_00430d60                   ; 00599dc5
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d60()
    ADD ESP,0x8                         ; 00599dca
    POP EDI                             ; 00599dcd
    POP ESI                             ; 00599dce
    POP EBX                             ; 00599dcf
    RET                                 ; 00599dd0
    PUSH 0x41c80000                     ; 00599dd1
        ;   Label: LAB_00599dd1
    PUSH 0x32                           ; 00599dd6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00599dd8
    PUSH EBX                            ; 00599dde
    MOV dword ptr [EBX + 0x2538],0x0    ; 00599ddf
    CALL dword ptr [EAX + 0xa8]         ; 00599de9
    ADD ESP,0xc                         ; 00599def
    PUSH EBX                            ; 00599df2
    CALL FUN_00431ce0                   ; 00599df3
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00431ce0()
    ADD ESP,0x4                         ; 00599df8
    PUSH 0x5d9a11                       ; 00599dfb | DAT_005d9a11
    JMP 0x00599dba                      ; 00599e00
        ;   XREF to: 00599dba (UNCONDITIONAL_JUMP)  ; LAB_00599dba

