; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_FUN_005d8410(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d8410
        ;   Label: shape_superopt.cpp_FUN_005d8410
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d8414
    FLD double ptr [EDX]                ; 005d8418
    FCOMP double ptr [ECX]              ; 005d841a
    FNSTSW AX                           ; 005d841c
    SAHF                                ; 005d841e
    JZ 0x005d8424                       ; 005d841f
        ;   XREF to: 005d8424 (CONDITIONAL_JUMP)  ; LAB_005d8424
    XOR EAX,EAX                         ; 005d8421
        ;   Label: LAB_005d8421
    RET                                 ; 005d8423
    FLD double ptr [EDX + 0x8]          ; 005d8424
        ;   Label: LAB_005d8424
    FCOMP double ptr [ECX + 0x8]        ; 005d8427
    FNSTSW AX                           ; 005d842a
    SAHF                                ; 005d842c
    JNZ 0x005d8421                      ; 005d842d
        ;   XREF to: 005d8421 (CONDITIONAL_JUMP)  ; LAB_005d8421
    MOV EAX,0x1                         ; 005d842f
    RET                                 ; 005d8434

