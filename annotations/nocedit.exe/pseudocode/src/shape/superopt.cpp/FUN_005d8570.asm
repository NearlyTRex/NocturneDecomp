; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005d8570()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8570
        ;   Label: shape_superopt.cpp_FUN_005d8570
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8574
    FLD double ptr [EDX]                ; 005d8578
    FADD double ptr [EAX]               ; 005d857a
    FSTP double ptr [EAX]               ; 005d857c
    FLD double ptr [EDX + 0x8]          ; 005d857e
    FADD double ptr [EAX + 0x8]         ; 005d8581
    FSTP double ptr [EAX + 0x8]         ; 005d8584
    FLD double ptr [EDX + 0x10]         ; 005d8587
    FADD double ptr [EAX + 0x10]        ; 005d858a
    FSTP double ptr [EAX + 0x10]        ; 005d858d
    RET                                 ; 005d8590

