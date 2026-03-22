; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP2D * __stack2_esi shape_superopt_cpp_CP2D_subtract_FUN_005d8350(CP2D *this_ptr,CP2D *a,CP2D *b)
;
; Parameters:
; CP2D *           Stack[0x4]:4   this_ptr
; CP2D *           Stack[0x8]:4   a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8350
        ;   Label: shape_superopt.cpp_CP2D_subtract_FUN_005d8350
    PUSH EBP                            ; 005d8351
    MOV EBP,ESP                         ; 005d8352
    SUB ESP,0x10                        ; 005d8354
    AND ESP,0xfffffff8                  ; 005d8357
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d835a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d835d
    MOV EAX,ESI                         ; 005d8360
    FLD double ptr [EDX]                ; 005d8362
    FLD double ptr [EDX + 0x8]          ; 005d8364
    MOV EDI,ESI                         ; 005d8367
    MOV ESI,ESP                         ; 005d8369
    FSUB double ptr [ECX + 0x8]         ; 005d836b
    FXCH                                ; 005d836e
    FSUB double ptr [ECX]               ; 005d8370
    FXCH                                ; 005d8372
    FSTP double ptr [ESP + 0x8]         ; 005d8374
    FSTP double ptr [ESP]               ; 005d8378
    JMP 0x00604ec8                      ; 005d837b
        ;   XREF to: 00604ec8 (UNCONDITIONAL_JUMP)  ; LAB_00604ec8
    POP EBP                             ; 005d8381
        ;   Label: LAB_005d8381
    POP EDI                             ; 005d8382
    RET                                 ; 005d8383
    MOV ECX,dword ptr [ESI]             ; 00604ec8
        ;   Label: LAB_00604ec8
    MOV dword ptr [EDI],ECX             ; 00604eca
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604ecc
    MOV dword ptr [EDI + 0x4],ECX       ; 00604ecf
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604ed2
    MOV dword ptr [EDI + 0x8],ECX       ; 00604ed5
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604ed8
    MOV dword ptr [EDI + 0xc],ECX       ; 00604edb
    ADD ESI,0x10                        ; 00604ede
    ADD EDI,0x10                        ; 00604ee1
    MOV ESP,EBP                         ; 00604ee4
    JMP 0x005d8381                      ; 00604ee6
        ;   XREF to: 005d8381 (UNCONDITIONAL_JUMP)  ; LAB_005d8381

