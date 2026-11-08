; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6a50(int param_1,int param_2,float *param_3,float *param_4,float *param_5)
;
;
; XREF[3]:
;   FUN_004e5080 at 004e528f
;   FUN_004e6010 at 004e61d6
;   FUN_004e6c40 at 004e6d39
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6a50
        ;   Label: FUN_004e6a50
    PUSH ESI                            ; 004e6a51
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e6a52
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e6a56
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e6a5a
    MOV dword ptr [EBX],0x0             ; 004e6a5e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e6a64
    MOV ESI,dword ptr [EBX]             ; 004e6a68
    MOV dword ptr [ECX],ESI             ; 004e6a6a
    MOV ESI,dword ptr [ECX]             ; 004e6a6c
    MOV dword ptr [EAX],ESI             ; 004e6a6e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e6a70
    SUB EAX,EDX                         ; 004e6a77
    SHL EAX,0x3                         ; 004e6a79
    ADD EAX,EDX                         ; 004e6a7c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e6a7e
    SHL EAX,0x2                         ; 004e6a82
    ADD EAX,EDX                         ; 004e6a85
    CMP dword ptr [EAX + 0x74c],0x0     ; 004e6a87
    JZ 0x004e6a9c                       ; 004e6a8e
        ;   XREF to: 004e6a9c (CONDITIONAL_JUMP)  ; LAB_004e6a9c
    TEST dword ptr [EAX + 0x754],0x7fffffff ; 004e6a90
    JZ 0x004e6a9f                       ; 004e6a9a
        ;   XREF to: 004e6a9f (CONDITIONAL_JUMP)  ; LAB_004e6a9f
    POP ESI                             ; 004e6a9c
        ;   Label: LAB_004e6a9c
    POP EBX                             ; 004e6a9d
    RET                                 ; 004e6a9e
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e6a9f
        ;   Label: LAB_004e6a9f
    FILD dword ptr [EAX + 0x798]        ; 004e6aa3
    FSTP float ptr [EDX]                ; 004e6aa9
    FILD dword ptr [EAX + 0x79c]        ; 004e6aab
    FSTP float ptr [ECX]                ; 004e6ab1
    FILD dword ptr [EAX + 0x7a0]        ; 004e6ab3
    FSTP float ptr [EBX]                ; 004e6ab9
    POP ESI                             ; 004e6abb
    POP EBX                             ; 004e6abc
    RET                                 ; 004e6abd

