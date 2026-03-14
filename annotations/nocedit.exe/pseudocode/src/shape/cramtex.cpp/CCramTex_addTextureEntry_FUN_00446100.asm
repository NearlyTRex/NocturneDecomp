; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_cramtex_cpp_CCramTex_addTextureEntry_FUN_00446100(CCramTex *this_ptr)
;
; Parameters:
; CCramTex *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CCramTex[250] g_CramSortedTextureEntries
;   int g_CramPlacedTextureCount
;
; Called Functions:
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
;
; *****************************************************************************

section .text

    NOP                                 ; 00446100
        ;   Label: shape_cramtex.cpp_CCramTex_addTextureEntry_FUN_00446100
    NOP                                 ; 00446101
    NOP                                 ; 00446102
    NOP                                 ; 00446103
    NOP                                 ; 00446104
    NOP                                 ; 00446105
    NOP                                 ; 00446106
    NOP                                 ; 00446107
    NOP                                 ; 00446108
    NOP                                 ; 00446109
    MOV EDX,dword ptr [0x0084a85c]      ; 0044610a | g_CramPlacedTextureCount
    LEA EAX,[EDX*0x4 + 0x0]             ; 00446110
    ADD EAX,EDX                         ; 00446117
    SHL EAX,0x2                         ; 00446119
    SUB EAX,EDX                         ; 0044611c
    SHL EAX,0x2                         ; 0044611e
    ADD EAX,0x83c1dc                    ; 00446121 | g_CramSortedTextureEntries
    PUSH EAX                            ; 00446126
    CALL shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 ; 00446127
        ;   XREF to: 00446160 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160(CCramTex * this_ptr)
    ADD ESP,0x4                         ; 0044612c
    MOV EDX,EAX                         ; 0044612f
    TEST EAX,EAX                        ; 00446131
    JLE 0x00446138                      ; 00446133
        ;   XREF to: 00446138 (CONDITIONAL_JUMP)  ; LAB_00446138
    LEA EDX,[EAX + -0x1]                ; 00446135
    MOV EAX,EDX                         ; 00446138
        ;   Label: LAB_00446138
    RET                                 ; 0044613a

