; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0f60(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004a0f60
        ;   Label: FUN_004a0f60
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a0f63
    CMP dword ptr [EAX + 0x6c8],0x6     ; 004a0f67
    JNZ 0x004a0f81                      ; 004a0f6e
        ;   XREF to: 004a0f81 (CONDITIONAL_JUMP)  ; LAB_004a0f81
    XOR ECX,ECX                         ; 004a0f70
    MOV dword ptr [ESP],ECX             ; 004a0f72
    MOV EAX,dword ptr [ESP]             ; 004a0f75
    ADD ESP,0x8                         ; 004a0f78
    LEA EAX,[EAX]                       ; 004a0f7b
    MOV ECX,ECX                         ; 004a0f7e
    RET                                 ; 004a0f80
        ;   Label: LAB_004a0f80
    PUSH 0x43480000                     ; 004a0f81
        ;   Label: LAB_004a0f81
    PUSH 0x43160000                     ; 004a0f86
    CALL FUN_0040cf60                   ; 004a0f8b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 004a0f90
    FLD float ptr [ESP + 0xc]           ; 004a0f94
    ADD ESP,0x8                         ; 004a0f98
    FSTP float ptr [ESP]                ; 004a0f9b
    MOV EAX,dword ptr [ESP]             ; 004a0f9e
    ADD ESP,0x8                         ; 004a0fa1
    RET                                 ; 004a0fa4

