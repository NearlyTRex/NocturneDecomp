; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043f110(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_cloth.cpp_FUN_0043f160
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f110
        ;   Label: core_cloth.cpp_FUN_0043f110
    PUSH ESI                            ; 0043f111
    MOV ESI,dword ptr [ESP + 0xc]       ; 0043f112
    PUSH 0xff                           ; 0043f116
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f11b | DAT_005f2afc
    PUSH EDX                            ; 0043f121
    XOR EBX,EBX                         ; 0043f122
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0 ; 0043f124
        ;   XREF to: 0046d3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer * this_ptr, int color)
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 0043f129
    ADD ESP,0x8                         ; 0043f12f
    TEST ECX,ECX                        ; 0043f132
    JLE 0x0043f14f                      ; 0043f134
        ;   XREF to: 0043f14f (CONDITIONAL_JUMP)  ; LAB_0043f14f
    PUSH EDI                            ; 0043f136
    PUSH 0x0                            ; 0043f137
        ;   Label: LAB_0043f137
    PUSH EBX                            ; 0043f139
    PUSH ESI                            ; 0043f13a
    CALL core_cloth.cpp_FUN_0043f160    ; 0043f13b
        ;   XREF to: 0043f160 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043f160()
    INC EBX                             ; 0043f140
    MOV EDI,dword ptr [ESI + 0x37b4c]   ; 0043f141
    ADD ESP,0xc                         ; 0043f147
    CMP EBX,EDI                         ; 0043f14a
    JL 0x0043f137                       ; 0043f14c
        ;   XREF to: 0043f137 (CONDITIONAL_JUMP)  ; LAB_0043f137
    POP EDI                             ; 0043f14e
    POP ESI                             ; 0043f14f
        ;   Label: LAB_0043f14f
    POP EBX                             ; 0043f150
    RET                                 ; 0043f151

