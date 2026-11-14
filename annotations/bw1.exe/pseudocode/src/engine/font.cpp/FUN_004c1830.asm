; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c1830(CBitFont *param_1)
;
;
; XREF[2]:
;   engine_font.cpp_CBitFont_dtor_FUN_004c0b60 at 004c0b66
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540 at 004c1548
;
; Called Functions:
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c09f0
;   engine_font.cpp_CBitFont_reset_FUN_004c0b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1830
        ;   Label: engine_font.cpp_FUN_004c1830
    PUSH ESI                            ; 004c1831
    PUSH EDI                            ; 004c1832
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c1833
    MOV EBX,EDI                         ; 004c1837
    LEA ESI,[EDI + 0x10]                ; 004c1839
    MOV EDX,dword ptr [EBX + 0x194]     ; 004c183c
        ;   Label: LAB_004c183c
    PUSH EDX                            ; 004c1842
    ADD EBX,0x4                         ; 004c1843
    CALL crt_unknown.c_FUN_005c0336     ; 004c1846
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004c184b
    MOV dword ptr [EBX + 0x190],0x0     ; 004c184e
    CMP EBX,ESI                         ; 004c1858
    JNZ 0x004c183c                      ; 004c185a
        ;   XREF to: 004c183c (CONDITIONAL_JUMP)  ; LAB_004c183c
    MOV ECX,dword ptr [EDI + 0x1dcc]    ; 004c185c
    TEST ECX,ECX                        ; 004c1862
    JNZ 0x004c187d                      ; 004c1864
        ;   XREF to: 004c187d (CONDITIONAL_JUMP)  ; LAB_004c187d
    MOV ESI,dword ptr [EDI + 0x1dd4]    ; 004c1866
        ;   Label: LAB_004c1866
    TEST ESI,ESI                        ; 004c186c
    JNZ 0x004c1892                      ; 004c186e
        ;   XREF to: 004c1892 (CONDITIONAL_JUMP)  ; LAB_004c1892
    PUSH EDI                            ; 004c1870
    CALL engine_font.cpp_CBitFont_reset_FUN_004c0b80 ; 004c1871
        ;   XREF to: 004c0b80 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004c0b80(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004c1876
    POP EDI                             ; 004c1879
    POP ESI                             ; 004c187a
    POP EBX                             ; 004c187b
    RET                                 ; 004c187c
    PUSH ECX                            ; 004c187d
        ;   Label: LAB_004c187d
    CALL crt_unknown.c_FUN_005c09f0     ; 004c187e
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004c1883
    MOV dword ptr [EDI + 0x1dcc],0x0    ; 004c1886
    JMP 0x004c1866                      ; 004c1890
        ;   XREF to: 004c1866 (UNCONDITIONAL_JUMP)  ; LAB_004c1866
    PUSH ESI                            ; 004c1892
        ;   Label: LAB_004c1892
    CALL crt_unknown.c_FUN_005c09f0     ; 004c1893
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004c1898
    PUSH EDI                            ; 004c189b
    CALL engine_font.cpp_CBitFont_reset_FUN_004c0b80 ; 004c189c
        ;   XREF to: 004c0b80 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004c0b80(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004c18a1
    POP EDI                             ; 004c18a4
    POP ESI                             ; 004c18a5
    POP EBX                             ; 004c18a6
    RET                                 ; 004c18a7

