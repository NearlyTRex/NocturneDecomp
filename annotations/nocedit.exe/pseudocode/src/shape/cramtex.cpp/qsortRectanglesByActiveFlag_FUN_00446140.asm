; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140(SCramRectangle **rect_a,SCramRectangle **rect_b)
;
; Parameters:
; SCramRectangle * * Stack[0x4]:4   rect_a
; SCramRectangle * * Stack[0x8]:4   rect_b
;
; XREF[1]:
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 at 00446249
;
; *****************************************************************************

section .text

    NOP                                 ; 00446140
        ;   Label: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
    NOP                                 ; 00446141
    NOP                                 ; 00446142
    NOP                                 ; 00446143
    NOP                                 ; 00446144
    NOP                                 ; 00446145
    NOP                                 ; 00446146
    NOP                                 ; 00446147
    NOP                                 ; 00446148
    NOP                                 ; 00446149
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044614a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044614e
    MOV EAX,dword ptr [EAX]             ; 00446152
    MOV EDX,dword ptr [EDX]             ; 00446154
    MOV EAX,dword ptr [EAX + 0x24]      ; 00446156
    SUB EAX,dword ptr [EDX + 0x24]      ; 00446159
    RET                                 ; 0044615c

