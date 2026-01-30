; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_FUN_005d86a0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d86a0
        ;   Label: shape_superopt.cpp_FUN_005d86a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d86a4
    FLD double ptr [EDX]                ; 005d86a8
    FCOMP double ptr [ECX]              ; 005d86aa
    FNSTSW AX                           ; 005d86ac
    SAHF                                ; 005d86ae
    JZ 0x005d86b7                       ; 005d86af
        ;   XREF to: 005d86b7 (CONDITIONAL_JUMP)  ; LAB_005d86b7
    MOV EAX,0x1                         ; 005d86b1
        ;   Label: LAB_005d86b1
    RET                                 ; 005d86b6
    FLD double ptr [EDX + 0x8]          ; 005d86b7
        ;   Label: LAB_005d86b7
    FCOMP double ptr [ECX + 0x8]        ; 005d86ba
    FNSTSW AX                           ; 005d86bd
    SAHF                                ; 005d86bf
    JNZ 0x005d86b1                      ; 005d86c0
        ;   XREF to: 005d86b1 (CONDITIONAL_JUMP)  ; LAB_005d86b1
    FLD double ptr [EDX + 0x10]         ; 005d86c2
    FCOMP double ptr [ECX + 0x10]       ; 005d86c5
    FNSTSW AX                           ; 005d86c8
    SAHF                                ; 005d86ca
    JNZ 0x005d86b1                      ; 005d86cb
        ;   XREF to: 005d86b1 (CONDITIONAL_JUMP)  ; LAB_005d86b1
    XOR EAX,EAX                         ; 005d86cd
    RET                                 ; 005d86cf

