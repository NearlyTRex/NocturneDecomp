; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005819e0(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00558d70 at 00558dca
;
; Referenced Globals:
;   void* PTR_SetThreadPriority_005b3650 = 001b4204
;
; Called Functions:
;   SetThreadPriority
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005819e0
        ;   Label: FUN_005819e0
    CMP EAX,0x2                         ; 005819e4
    JNC 0x00581a12                      ; 005819e7
        ;   XREF to: 00581a12 (CONDITIONAL_JUMP)  ; LAB_00581a12
    TEST EAX,EAX                        ; 005819e9
    JNZ 0x00581a00                      ; 005819eb
        ;   XREF to: 00581a00 (CONDITIONAL_JUMP)  ; LAB_00581a00
    MOV EAX,0xffffffff                  ; 005819ed
    PUSH EAX                            ; 005819f2
        ;   Label: LAB_005819f2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005819f3
    PUSH EDX                            ; 005819f7
    CALL dword ptr CS:[0x5b3650]        ; 005819f8 | PTR_SetThreadPriority_005b3650
    RET                                 ; 005819ff
    XOR EAX,EAX                         ; 00581a00
        ;   Label: LAB_00581a00
    JMP 0x005819f2                      ; 00581a02
        ;   XREF to: 005819f2 (UNCONDITIONAL_JUMP)  ; LAB_005819f2
    MOV EAX,0x1                         ; 00581a04
        ;   Label: LAB_00581a04
    JMP 0x005819f2                      ; 00581a09
        ;   XREF to: 005819f2 (UNCONDITIONAL_JUMP)  ; LAB_005819f2
    MOV EAX,0x2                         ; 00581a0b
        ;   Label: LAB_00581a0b
    JMP 0x005819f2                      ; 00581a10
        ;   XREF to: 005819f2 (UNCONDITIONAL_JUMP)  ; LAB_005819f2
    JBE 0x00581a04                      ; 00581a12
        ;   XREF to: 00581a04 (CONDITIONAL_JUMP)  ; LAB_00581a04
        ;   Label: LAB_00581a12
    CMP EAX,0x3                         ; 00581a14
    JZ 0x00581a0b                       ; 00581a17
        ;   XREF to: 00581a0b (CONDITIONAL_JUMP)  ; LAB_00581a0b
    XOR EAX,EAX                         ; 00581a19
    JMP 0x005819f2                      ; 00581a1b
        ;   XREF to: 005819f2 (UNCONDITIONAL_JUMP)  ; LAB_005819f2

