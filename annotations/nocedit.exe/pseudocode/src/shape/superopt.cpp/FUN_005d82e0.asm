; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown double shape_superopt_cpp_FUN_005d82e0(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d82e0
        ;   Label: shape_superopt.cpp_FUN_005d82e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d82e3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d82e7
    FLD double ptr [EDX + 0x8]          ; 005d82eb
    FMUL double ptr [EAX + 0x8]         ; 005d82ee
    FLD double ptr [EDX]                ; 005d82f1
    FMUL double ptr [EAX]               ; 005d82f3
    FADDP                               ; 005d82f5
    FLD double ptr [EDX + 0x10]         ; 005d82f7
    FMUL double ptr [EAX + 0x10]        ; 005d82fa
    FADDP                               ; 005d82fd
    FSTP double ptr [ESP]               ; 005d82ff
    MOV EAX,dword ptr [ESP]             ; 005d8302
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d8305
    ADD ESP,0x8                         ; 005d8309
    RET                                 ; 005d830c

