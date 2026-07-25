; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045d6d0(undefined4 param_1,int param_2,undefined4 *param_3)
;
;
; Called Functions:
;   FUN_0045bfb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d6d0
        ;   Label: FUN_0045d6d0
    PUSH EDI                            ; 0045d6d1
    PUSH EBP                            ; 0045d6d2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045d6d3
    MOV EBP,dword ptr [ESP + 0x18]      ; 0045d6d7
    LEA EAX,[EDI + -0x1]                ; 0045d6db
    XOR EBX,EBX                         ; 0045d6de
    TEST EDI,EDI                        ; 0045d6e0
    JLE 0x0045d710                      ; 0045d6e2
        ;   XREF to: 0045d710 (CONDITIONAL_JUMP)  ; LAB_0045d710
    PUSH ESI                            ; 0045d6e4
    MOV ESI,EBP                         ; 0045d6e5
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045d6e7
        ;   Label: LAB_0045d6e7
    PUSH EDX                            ; 0045d6ea
    MOV ECX,dword ptr [ESI]             ; 0045d6eb
    PUSH ECX                            ; 0045d6ed
    MOV EDX,dword ptr [EBP + EAX*0x8 + 0x4] ; 0045d6ee
    PUSH EDX                            ; 0045d6f2
    MOV ECX,dword ptr [EBP + EAX*0x8]   ; 0045d6f3
    PUSH ECX                            ; 0045d6f7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045d6f8
    PUSH EAX                            ; 0045d6fc
    ADD ESI,0x8                         ; 0045d6fd
    CALL FUN_0045bfb0                   ; 0045d700
        ;   XREF to: 0045bfb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045bfb0()
    MOV EAX,EBX                         ; 0045d705
    INC EBX                             ; 0045d707
    ADD ESP,0x14                        ; 0045d708
    CMP EBX,EDI                         ; 0045d70b
    JL 0x0045d6e7                       ; 0045d70d
        ;   XREF to: 0045d6e7 (CONDITIONAL_JUMP)  ; LAB_0045d6e7
    POP ESI                             ; 0045d70f
    POP EBP                             ; 0045d710
        ;   Label: LAB_0045d710
    POP EDI                             ; 0045d711
    POP EBX                             ; 0045d712
    RET                                 ; 0045d713

