; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00481fc0(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00481f90 at 00481faf
;
; Called Functions:
;   FUN_00482070
;   FUN_004821a0
;   FUN_00482440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481fc0
        ;   Label: FUN_00481fc0
    PUSH EDI                            ; 00481fc1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00481fc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00481fc6
    PUSH EDI                            ; 00481fca
    MOV EAX,dword ptr [EDI + 0xc]       ; 00481fcb
    CALL dword ptr [EAX + 0x14]         ; 00481fce
    MOV EAX,dword ptr [ESI]             ; 00481fd1
    ADD ESP,0x4                         ; 00481fd3
    CMP EAX,0x1                         ; 00481fd6
    JGE 0x00481fe0                      ; 00481fd9
        ;   XREF to: 00481fe0 (CONDITIONAL_JUMP)  ; LAB_00481fe0
    MOV EAX,EDI                         ; 00481fdb
    POP EDI                             ; 00481fdd
    POP ESI                             ; 00481fde
    RET                                 ; 00481fdf
    PUSH EBX                            ; 00481fe0
        ;   Label: LAB_00481fe0
    PUSH EAX                            ; 00481fe1
    PUSH EDI                            ; 00481fe2
    XOR EBX,EBX                         ; 00481fe3
    CALL FUN_004821a0                   ; 00481fe5
        ;   XREF to: 004821a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004821a0()
    ADD ESP,0x8                         ; 00481fea
        ;   Label: LAB_00481fea
    MOV EAX,dword ptr [ESI]             ; 00481fed
    CMP EBX,EAX                         ; 00481fef
    JGE 0x00482007                      ; 00481ff1
        ;   XREF to: 00482007 (CONDITIONAL_JUMP)  ; LAB_00482007
    PUSH EBX                            ; 00481ff3
    PUSH ESI                            ; 00481ff4
    CALL FUN_00482440                   ; 00481ff5
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 00481ffa
    PUSH EAX                            ; 00481ffd
    PUSH EDI                            ; 00481ffe
    INC EBX                             ; 00481fff
    CALL FUN_00482070                   ; 00482000
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; undefined FUN_00482070()
    JMP 0x00481fea                      ; 00482005
        ;   XREF to: 00481fea (UNCONDITIONAL_JUMP)  ; LAB_00481fea
    MOV EAX,EDI                         ; 00482007
        ;   Label: LAB_00482007
    POP EBX                             ; 00482009
    POP EDI                             ; 0048200a
    POP ESI                             ; 0048200b
    RET                                 ; 0048200c

