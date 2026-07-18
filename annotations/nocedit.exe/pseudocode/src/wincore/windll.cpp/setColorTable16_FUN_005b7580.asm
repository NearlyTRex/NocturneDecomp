; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_setColorTable16_FUN_005b7580(void)
;
;
; Referenced Globals:
;   ushort[256] g_ColorTable16
;   uchar[768] g_SourcePaletteData
;   int g_UseExternalRenderer
;   APIDLL_setColorTable16* g_APIDLL_setColorTable16
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7580 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_setColorTable16_FUN_005b7580
    JNZ 0x005b758c                      ; 005b7587
        ;   XREF to: 005b758c (CONDITIONAL_JUMP)  ; LAB_005b758c
    XOR EAX,EAX                         ; 005b7589
    RET                                 ; 005b758b
    PUSH EBX                            ; 005b758c
        ;   Label: LAB_005b758c
    PUSH 0x2d01020                      ; 005b758d | g_ColorTable16
    PUSH 0x2d01f48                      ; 005b7592 | g_SourcePaletteData
    CALL dword ptr [0x03f6b900]         ; 005b7597 | g_APIDLL_setColorTable16
    ADD ESP,0x8                         ; 005b759d
    MOV EBX,EAX                         ; 005b75a0
    TEST EAX,EAX                        ; 005b75a2
    JZ 0x005b75ab                       ; 005b75a4
        ;   XREF to: 005b75ab (CONDITIONAL_JUMP)  ; LAB_005b75ab
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0 ; 005b75a6
        ;   XREF to: 004f41c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0()
    MOV EAX,EBX                         ; 005b75ab
        ;   Label: LAB_005b75ab
    POP EBX                             ; 005b75ad
    RET                                 ; 005b75ae

