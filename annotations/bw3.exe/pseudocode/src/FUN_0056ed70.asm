; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ed70(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004096c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ed70
        ;   Label: FUN_0056ed70
    PUSH ESI                            ; 0056ed71
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056ed72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056ed76
    PUSH EBX                            ; 0056ed7a
    PUSH ESI                            ; 0056ed7b
    CALL FUN_004096c0                   ; 0056ed7c
        ;   XREF to: 004096c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004096c0()
    MOV EDX,dword ptr [ESI + 0x174]     ; 0056ed81
    ADD ESP,0x8                         ; 0056ed87
    CMP EDX,0x5                         ; 0056ed8a
    JNZ 0x0056ed9a                      ; 0056ed8d
        ;   XREF to: 0056ed9a (CONDITIONAL_JUMP)  ; LAB_0056ed9a
    MOV ECX,dword ptr [ESI + 0x2f4]     ; 0056ed8f
    CMP ECX,dword ptr [EBX + 0x8]       ; 0056ed95
    JZ 0x0056edb1                       ; 0056ed98
        ;   XREF to: 0056edb1 (CONDITIONAL_JUMP)  ; LAB_0056edb1
    MOV dword ptr [EBX + 0x50],0x0      ; 0056ed9a
        ;   Label: LAB_0056ed9a
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 0056eda1
    MOV EAX,dword ptr [EBX + 0x44]      ; 0056eda8
    MOV dword ptr [EBX + 0x4c],EAX      ; 0056edab
    POP ESI                             ; 0056edae
    POP EBX                             ; 0056edaf
    RET                                 ; 0056edb0
    MOV dword ptr [ESI + 0x2f0],0x1     ; 0056edb1
        ;   Label: LAB_0056edb1
    JMP 0x0056ed9a                      ; 0056edbb
        ;   XREF to: 0056ed9a (UNCONDITIONAL_JUMP)  ; LAB_0056ed9a

