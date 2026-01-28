; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005d8710(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d8710
        ;   Label: shape_superopt.cpp_FUN_005d8710
    PUSH ESI                            ; 005d8711
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d8712
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d8716
    MOV ECX,dword ptr [EDX]             ; 005d871a
    MOV dword ptr [EAX],ECX             ; 005d871c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d871e
    MOV dword ptr [EAX + 0x4],ECX       ; 005d8721
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d8724
    MOV dword ptr [EAX + 0x8],ECX       ; 005d8727
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d872a
    MOV dword ptr [EAX + 0xc],ECX       ; 005d872d
    LEA ECX,[EDX + 0x10]                ; 005d8730
    LEA EBX,[EAX + 0x10]                ; 005d8733
    MOV ESI,dword ptr [ECX]             ; 005d8736
    MOV dword ptr [EBX],ESI             ; 005d8738
    MOV ESI,dword ptr [ECX + 0x4]       ; 005d873a
    MOV dword ptr [EBX + 0x4],ESI       ; 005d873d
    MOV ESI,dword ptr [ECX + 0x8]       ; 005d8740
    MOV dword ptr [EBX + 0x8],ESI       ; 005d8743
    MOV ESI,dword ptr [ECX + 0xc]       ; 005d8746
    MOV dword ptr [EBX + 0xc],ESI       ; 005d8749
    MOV ESI,dword ptr [ECX + 0x10]      ; 005d874c
    MOV dword ptr [EBX + 0x10],ESI      ; 005d874f
    MOV ESI,dword ptr [ECX + 0x14]      ; 005d8752
    MOV dword ptr [EBX + 0x14],ESI      ; 005d8755
    LEA EBX,[EDX + 0x28]                ; 005d8758
    LEA ECX,[EAX + 0x28]                ; 005d875b
    MOV ESI,dword ptr [EBX]             ; 005d875e
    MOV dword ptr [ECX],ESI             ; 005d8760
    MOV ESI,dword ptr [EBX + 0x4]       ; 005d8762
    MOV dword ptr [ECX + 0x4],ESI       ; 005d8765
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d8768
    MOV dword ptr [ECX + 0x8],ESI       ; 005d876b
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d876e
    MOV dword ptr [ECX + 0xc],ESI       ; 005d8771
    FLD double ptr [EBX + 0x10]         ; 005d8774
    LEA EBX,[EDX + 0x40]                ; 005d8777
    FSTP double ptr [ECX + 0x10]        ; 005d877a
    LEA ECX,[EAX + 0x40]                ; 005d877d
    MOV ESI,dword ptr [EBX]             ; 005d8780
    MOV dword ptr [ECX],ESI             ; 005d8782
    MOV ESI,dword ptr [EBX + 0x4]       ; 005d8784
    MOV dword ptr [ECX + 0x4],ESI       ; 005d8787
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d878a
    MOV dword ptr [ECX + 0x8],ESI       ; 005d878d
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d8790
    MOV dword ptr [ECX + 0xc],ESI       ; 005d8793
    LEA ECX,[EAX + 0x50]                ; 005d8796
    MOV EBX,dword ptr [EDX + 0x50]      ; 005d8799
    MOV dword ptr [ECX],EBX             ; 005d879c
    MOV EBX,dword ptr [EDX + 0x54]      ; 005d879e
    MOV dword ptr [ECX + 0x4],EBX       ; 005d87a1
    MOV EBX,dword ptr [EDX + 0x58]      ; 005d87a4
    MOV dword ptr [ECX + 0x8],EBX       ; 005d87a7
    MOV EBX,dword ptr [EDX + 0x5c]      ; 005d87aa
    MOV dword ptr [ECX + 0xc],EBX       ; 005d87ad
    POP ESI                             ; 005d87b0
    POP EBX                             ; 005d87b1
    RET                                 ; 005d87b2

