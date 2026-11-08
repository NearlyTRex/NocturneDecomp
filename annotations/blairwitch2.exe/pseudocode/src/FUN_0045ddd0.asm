; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045ddd0(int param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00428d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ddd0
        ;   Label: FUN_0045ddd0
    PUSH ESI                            ; 0045ddd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045ddd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045ddd6
    SHL EAX,0x3                         ; 0045ddda
    MOV EDX,EAX                         ; 0045dddd
    SHL EAX,0x4                         ; 0045dddf
    SUB EAX,EDX                         ; 0045dde2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2620] ; 0045dde4
    CMP EAX,dword ptr [EBX + 0x25698]   ; 0045ddeb
    JZ 0x0045de09                       ; 0045ddf1
        ;   XREF to: 0045de09 (CONDITIONAL_JUMP)  ; LAB_0045de09
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045ddf3
        ;   Label: LAB_0045ddf3
    PUSH ECX                            ; 0045ddf7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045ddf8
    PUSH ESI                            ; 0045ddfc
    PUSH EBX                            ; 0045ddfd
    CALL FUN_00428d60                   ; 0045ddfe
        ;   XREF to: 00428d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00428d60()
    ADD ESP,0xc                         ; 0045de03
    POP ESI                             ; 0045de06
    POP EBX                             ; 0045de07
    RET                                 ; 0045de08
    PUSH 0x0                            ; 0045de09
        ;   Label: LAB_0045de09
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045de0b
    PUSH EBX                            ; 0045de11
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045de12
    CALL dword ptr [EAX + 0x150]        ; 0045de1c
    ADD ESP,0x8                         ; 0045de22
    JMP 0x0045ddf3                      ; 0045de25
        ;   XREF to: 0045ddf3 (UNCONDITIONAL_JUMP)  ; LAB_0045ddf3

