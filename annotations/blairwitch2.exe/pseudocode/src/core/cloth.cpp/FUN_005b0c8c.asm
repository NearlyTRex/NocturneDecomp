; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_005b0c8c(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_cloth.cpp_FUN_005b0ce0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 005b0c8c
        ;   Label: core_cloth.cpp_FUN_005b0c8c
    PUSH EBX                            ; 005b0c90
    PUSH ESI                            ; 005b0c91
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b0c92
    PUSH 0xff                           ; 005b0c96
    MOV EDX,dword ptr [0x0060b280]      ; 005b0c9b | DAT_0060b280
    PUSH EDX                            ; 005b0ca1
    XOR EBX,EBX                         ; 005b0ca2
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0 ; 005b0ca4
        ;   XREF to: 0046b7e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(CDemonRenderer * this_ptr, int color)
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 005b0ca9
    ADD ESP,0x8                         ; 005b0caf
    TEST ECX,ECX                        ; 005b0cb2
    JLE 0x005b0ccf                      ; 005b0cb4
        ;   XREF to: 005b0ccf (CONDITIONAL_JUMP)  ; LAB_005b0ccf
    PUSH EDI                            ; 005b0cb6
    PUSH 0x0                            ; 005b0cb7
        ;   Label: LAB_005b0cb7
    PUSH EBX                            ; 005b0cb9
    PUSH ESI                            ; 005b0cba
    CALL core_cloth.cpp_FUN_005b0ce0    ; 005b0cbb
        ;   XREF to: 005b0ce0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_005b0ce0()
    INC EBX                             ; 005b0cc0
    MOV EDI,dword ptr [ESI + 0x37b4c]   ; 005b0cc1
    ADD ESP,0xc                         ; 005b0cc7
    CMP EBX,EDI                         ; 005b0cca
    JL 0x005b0cb7                       ; 005b0ccc
        ;   XREF to: 005b0cb7 (CONDITIONAL_JUMP)  ; LAB_005b0cb7
    POP EDI                             ; 005b0cce
    POP ESI                             ; 005b0ccf
        ;   Label: LAB_005b0ccf
    POP EBX                             ; 005b0cd0
    RET                                 ; 005b0cd1

