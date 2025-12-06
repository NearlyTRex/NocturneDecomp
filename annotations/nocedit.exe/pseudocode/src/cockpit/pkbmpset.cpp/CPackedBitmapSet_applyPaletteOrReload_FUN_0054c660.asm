; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660(CPackedBitmapSet * this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c660
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660
    PUSH EDI                            ; 0054c661
    MOV EDI,dword ptr [ESP + 0xc]       ; 0054c662
    CMP byte ptr [EDI + 0x8],0x0        ; 0054c666
    JNZ 0x0054c693                      ; 0054c66a | LAB_0054c693
        ;   XREF to: 0054c693 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI]             ; 0054c66c
    XOR EBX,EBX                         ; 0054c66e
    TEST EDX,EDX                        ; 0054c670
    JLE 0x0054c690                      ; 0054c672 | LAB_0054c690
        ;   XREF to: 0054c690 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0054c674
    XOR ESI,ESI                         ; 0054c675
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c677
        ;   Label: LAB_0054c677
    ADD EAX,ESI                         ; 0054c67a
    PUSH EAX                            ; 0054c67c
    INC EBX                             ; 0054c67d
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 ; 0054c67e | void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap * this_ptr)
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)
    ADD ESI,0x24                        ; 0054c683
    MOV ECX,dword ptr [EDI]             ; 0054c686
    ADD ESP,0x4                         ; 0054c688
    CMP EBX,ECX                         ; 0054c68b
    JL 0x0054c677                       ; 0054c68d | LAB_0054c677
        ;   XREF to: 0054c677 (CONDITIONAL_JUMP)
    POP ESI                             ; 0054c68f
    POP EDI                             ; 0054c690
        ;   Label: LAB_0054c690
    POP EBX                             ; 0054c691
    RET                                 ; 0054c692
    PUSH EDI                            ; 0054c693
        ;   Label: LAB_0054c693
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710 ; 0054c694 | void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet * this_ptr)
        ;   XREF to: 0054c710 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054c699
    POP EDI                             ; 0054c69c
    POP EBX                             ; 0054c69d
    RET                                 ; 0054c69e

