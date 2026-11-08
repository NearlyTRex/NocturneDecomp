; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049eaf0(int param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0049eaf0
        ;   Label: FUN_0049eaf0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049eaf3
    CMP dword ptr [EAX + 0x56c],0x6     ; 0049eaf7
    JNZ 0x0049eb0c                      ; 0049eafe
        ;   XREF to: 0049eb0c (CONDITIONAL_JUMP)  ; LAB_0049eb0c
    XOR ECX,ECX                         ; 0049eb00
    MOV dword ptr [ESP],ECX             ; 0049eb02
    MOV EAX,dword ptr [ESP]             ; 0049eb05
    ADD ESP,0x8                         ; 0049eb08
    RET                                 ; 0049eb0b
    PUSH 0x44160000                     ; 0049eb0c
        ;   Label: LAB_0049eb0c
    PUSH 0x43e10000                     ; 0049eb11
    CALL FUN_0040cc00                   ; 0049eb16
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 0049eb1b
    FLD float ptr [ESP + 0xc]           ; 0049eb1f
    ADD ESP,0x8                         ; 0049eb23
    FSTP float ptr [ESP]                ; 0049eb26
    MOV EAX,dword ptr [ESP]             ; 0049eb29
    ADD ESP,0x8                         ; 0049eb2c
    RET                                 ; 0049eb2f

