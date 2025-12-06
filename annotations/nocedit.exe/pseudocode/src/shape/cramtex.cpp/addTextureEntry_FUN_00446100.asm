; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_cramtex.cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry * texture_entry)
;
; Parameters:
; SCramWorkingEntry * Stack[0xc]:4   texture_entry
;
; Referenced Globals:
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   int g_CramPlacedTextureCount
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 00446100
        ;   Label: shape_cramtex.cpp_addTextureEntry_FUN_00446100
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00446105 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0084a85c]      ; 0044610a | int g_CramPlacedTextureCount
    LEA EAX,[EDX*0x4 + 0x0]             ; 00446110
    ADD EAX,EDX                         ; 00446117
    SHL EAX,0x2                         ; 00446119
    SUB EAX,EDX                         ; 0044611c
    SHL EAX,0x2                         ; 0044611e
    ADD EAX,0x83c1dc                    ; 00446121 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    PUSH EAX                            ; 00446126
    CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 ; 00446127 | int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)
        ;   XREF to: 00446160 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044612c
    MOV EDX,EAX                         ; 0044612f
    TEST EAX,EAX                        ; 00446131
    JLE 0x00446138                      ; 00446133 | LAB_00446138
        ;   XREF to: 00446138 (CONDITIONAL_JUMP)
    LEA EDX,[EAX + -0x1]                ; 00446135
    MOV EAX,EDX                         ; 00446138
        ;   Label: LAB_00446138
    RET                                 ; 0044613a

