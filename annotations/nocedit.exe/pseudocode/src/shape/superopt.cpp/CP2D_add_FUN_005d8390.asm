; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP2D * __stack2_esi shape_superopt_cpp_CP2D_add_FUN_005d8390(CP2D *this_ptr,CP2D *a,CP2D *b)
;
; Parameters:
; CP2D *           Stack[0x4]:4   this_ptr
; CP2D *           Stack[0x8]:4   a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8390
        ;   Label: shape_superopt.cpp_CP2D_add_FUN_005d8390
    PUSH EBP                            ; 005d8391
    MOV EBP,ESP                         ; 005d8392
    SUB ESP,0x10                        ; 005d8394
    AND ESP,0xfffffff8                  ; 005d8397
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d839a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d839d
    MOV EAX,ESI                         ; 005d83a0
    FLD double ptr [EDX]                ; 005d83a2
    FLD double ptr [EDX + 0x8]          ; 005d83a4
    MOV EDI,ESI                         ; 005d83a7
    MOV ESI,ESP                         ; 005d83a9
    FADD double ptr [ECX + 0x8]         ; 005d83ab
    FXCH                                ; 005d83ae
    FADD double ptr [ECX]               ; 005d83b0
    FXCH                                ; 005d83b2
    FSTP double ptr [ESP + 0x8]         ; 005d83b4
    FSTP double ptr [ESP]               ; 005d83b8
    JMP 0x00604e82                      ; 005d83bb
        ;   XREF to: 00604e82 (UNCONDITIONAL_JUMP)  ; LAB_00604e82
    POP EBP                             ; 005d83c1
        ;   Label: LAB_005d83c1
    POP EDI                             ; 005d83c2
    RET                                 ; 005d83c3
    MOV ECX,dword ptr [ESI]             ; 00604e82
        ;   Label: LAB_00604e82
    MOV dword ptr [EDI],ECX             ; 00604e84
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604e86
    MOV dword ptr [EDI + 0x4],ECX       ; 00604e89
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604e8c
    MOV dword ptr [EDI + 0x8],ECX       ; 00604e8f
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604e92
    MOV dword ptr [EDI + 0xc],ECX       ; 00604e95
    ADD ESI,0x10                        ; 00604e98
    ADD EDI,0x10                        ; 00604e9b
    MOV ESP,EBP                         ; 00604e9e
    JMP 0x005d83c1                      ; 00604ea0
        ;   XREF to: 005d83c1 (UNCONDITIONAL_JUMP)  ; LAB_005d83c1

