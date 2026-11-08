; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591de0(int param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00431490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591de0
        ;   Label: FUN_00591de0
    PUSH ESI                            ; 00591de1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00591de2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00591de6
    CMP EDX,dword ptr [EBX + 0x20004]   ; 00591dea
    JZ 0x00591e08                       ; 00591df0
        ;   XREF to: 00591e08 (CONDITIONAL_JUMP)  ; LAB_00591e08
    MOV ECX,dword ptr [ESP + 0x14]      ; 00591df2
        ;   Label: LAB_00591df2
    PUSH ECX                            ; 00591df6
    MOV ESI,dword ptr [ESP + 0x14]      ; 00591df7
    PUSH ESI                            ; 00591dfb
    PUSH EBX                            ; 00591dfc
    CALL FUN_00431490                   ; 00591dfd
        ;   XREF to: 00431490 (UNCONDITIONAL_CALL)  ; undefined FUN_00431490()
    ADD ESP,0xc                         ; 00591e02
    POP ESI                             ; 00591e05
    POP EBX                             ; 00591e06
    RET                                 ; 00591e07
    PUSH 0x0                            ; 00591e08
        ;   Label: LAB_00591e08
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591e0a
    PUSH EBX                            ; 00591e10
    MOV dword ptr [EBX + 0x20004],0x0   ; 00591e11
    CALL dword ptr [EAX + 0x144]        ; 00591e1b
    ADD ESP,0x8                         ; 00591e21
    JMP 0x00591df2                      ; 00591e24
        ;   XREF to: 00591df2 (UNCONDITIONAL_JUMP)  ; LAB_00591df2

