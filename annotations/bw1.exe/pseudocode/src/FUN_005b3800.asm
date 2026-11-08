; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b3800(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00575c00 at 00575c5a
;
; Referenced Globals:
;   void* PTR_SetThreadPriority_005d0650 = 001d11fe
;
; Called Functions:
;   SetThreadPriority
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3800
        ;   Label: FUN_005b3800
    CMP EAX,0x2                         ; 005b3804
    JNC 0x005b3832                      ; 005b3807
        ;   XREF to: 005b3832 (CONDITIONAL_JUMP)  ; LAB_005b3832
    TEST EAX,EAX                        ; 005b3809
    JNZ 0x005b3820                      ; 005b380b
        ;   XREF to: 005b3820 (CONDITIONAL_JUMP)  ; LAB_005b3820
    MOV EAX,0xffffffff                  ; 005b380d
    PUSH EAX                            ; 005b3812
        ;   Label: LAB_005b3812
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b3813
    PUSH EDX                            ; 005b3817
    CALL dword ptr CS:[0x5d0650]        ; 005b3818 | PTR_SetThreadPriority_005d0650
    RET                                 ; 005b381f
    XOR EAX,EAX                         ; 005b3820
        ;   Label: LAB_005b3820
    JMP 0x005b3812                      ; 005b3822
        ;   XREF to: 005b3812 (UNCONDITIONAL_JUMP)  ; LAB_005b3812
    MOV EAX,0x1                         ; 005b3824
        ;   Label: LAB_005b3824
    JMP 0x005b3812                      ; 005b3829
        ;   XREF to: 005b3812 (UNCONDITIONAL_JUMP)  ; LAB_005b3812
    MOV EAX,0x2                         ; 005b382b
        ;   Label: LAB_005b382b
    JMP 0x005b3812                      ; 005b3830
        ;   XREF to: 005b3812 (UNCONDITIONAL_JUMP)  ; LAB_005b3812
    JBE 0x005b3824                      ; 005b3832
        ;   XREF to: 005b3824 (CONDITIONAL_JUMP)  ; LAB_005b3824
        ;   Label: LAB_005b3832
    CMP EAX,0x3                         ; 005b3834
    JZ 0x005b382b                       ; 005b3837
        ;   XREF to: 005b382b (CONDITIONAL_JUMP)  ; LAB_005b382b
    XOR EAX,EAX                         ; 005b3839
    JMP 0x005b3812                      ; 005b383b
        ;   XREF to: 005b3812 (UNCONDITIONAL_JUMP)  ; LAB_005b3812

