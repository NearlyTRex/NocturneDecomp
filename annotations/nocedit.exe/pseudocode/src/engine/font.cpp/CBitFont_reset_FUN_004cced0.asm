; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_reset_FUN_004cced0(CBitFont * this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_ctor_FUN_004cce90 at 004cce96
;   engine_font.cpp_CBitFont_free_FUN_004cd4e0 at 004cd524
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cced0
        ;   Label: engine_font.cpp_CBitFont_reset_FUN_004cced0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cced1
    MOV EAX,ESI                         ; 004cced5
    MOV EDX,ESI                         ; 004cced7
    MOV dword ptr [ESI],0x0             ; 004cced9
    LEA ECX,[ESI + 0x10]                ; 004ccedf
    ADD EAX,0x4                         ; 004ccee2
        ;   Label: LAB_004ccee2
    MOV byte ptr [EDX + 0x4],0x0        ; 004ccee5
    MOV dword ptr [EAX + 0x140],0x0     ; 004ccee9
    ADD EDX,0x50                        ; 004ccef3
    MOV dword ptr [EAX + 0x150],0x0     ; 004ccef6
    CMP EAX,ECX                         ; 004ccf00
    JNZ 0x004ccee2                      ; 004ccf02
        ;   XREF to: 004ccee2 (CONDITIONAL_JUMP)  ; LAB_004ccee2
    MOV EAX,ESI                         ; 004ccf04
    LEA EDX,[ESI + 0x400]               ; 004ccf06
    XOR ECX,ECX                         ; 004ccf0c
    ADD EAX,0x4                         ; 004ccf0e
        ;   Label: LAB_004ccf0e
    MOV dword ptr [EAX + 0x2164],ECX    ; 004ccf11
    MOV dword ptr [EAX + 0x2564],ECX    ; 004ccf17
    MOV dword ptr [EAX + 0x2964],ECX    ; 004ccf1d
    MOV dword ptr [EAX + 0x2d64],ECX    ; 004ccf23
    MOV dword ptr [EAX + 0x1d64],ECX    ; 004ccf29
    CMP EAX,EDX                         ; 004ccf2f
    JNZ 0x004ccf0e                      ; 004ccf31
        ;   XREF to: 004ccf0e (CONDITIONAL_JUMP)  ; LAB_004ccf0e
    MOV dword ptr [ESI + 0x316c],0x0    ; 004ccf33
    MOV dword ptr [ESI + 0x3170],0x0    ; 004ccf3d
    MOV dword ptr [ESI + 0x3174],0x1    ; 004ccf47
    MOV dword ptr [ESI + 0x3178],0x2    ; 004ccf51
    MOV dword ptr [ESI + 0x25e8],0x8    ; 004ccf5b
    MOV dword ptr [ESI + 0x317c],0x2    ; 004ccf65
    MOV dword ptr [ESI + 0x3180],0x1    ; 004ccf6f
    MOV dword ptr [ESI + 0x3184],0x0    ; 004ccf79
    MOV dword ptr [ESI + 0x1d64],0x0    ; 004ccf83
    MOV dword ptr [ESI + 0x318c],0x0    ; 004ccf8d
    MOV dword ptr [ESI + 0x3190],0x0    ; 004ccf97
    MOV dword ptr [ESI + 0x3194],0x0    ; 004ccfa1
    MOV dword ptr [ESI + 0x3168],0x0    ; 004ccfab
    POP ESI                             ; 004ccfb5
    RET                                 ; 004ccfb6

