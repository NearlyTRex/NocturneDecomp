; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(void)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5bb0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0
    PUSH EDI                            ; 004f5bb1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004f5bb2
    CMP byte ptr [EDI + 0x8],0x0        ; 004f5bb6
    JNZ 0x004f5be3                      ; 004f5bba
        ;   XREF to: 004f5be3 (CONDITIONAL_JUMP)  ; LAB_004f5be3
    MOV EDX,dword ptr [EDI]             ; 004f5bbc
    XOR EBX,EBX                         ; 004f5bbe
    TEST EDX,EDX                        ; 004f5bc0
    JLE 0x004f5be0                      ; 004f5bc2
        ;   XREF to: 004f5be0 (CONDITIONAL_JUMP)  ; LAB_004f5be0
    PUSH ESI                            ; 004f5bc4
    XOR ESI,ESI                         ; 004f5bc5
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5bc7
        ;   Label: LAB_004f5bc7
    ADD EAX,ESI                         ; 004f5bca
    PUSH EAX                            ; 004f5bcc
    INC EBX                             ; 004f5bcd
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0 ; 004f5bce
        ;   XREF to: 004f4ab0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(CPackedBitmap * this_ptr)
    ADD ESI,0x24                        ; 004f5bd3
    MOV ECX,dword ptr [EDI]             ; 004f5bd6
    ADD ESP,0x4                         ; 004f5bd8
    CMP EBX,ECX                         ; 004f5bdb
    JL 0x004f5bc7                       ; 004f5bdd
        ;   XREF to: 004f5bc7 (CONDITIONAL_JUMP)  ; LAB_004f5bc7
    POP ESI                             ; 004f5bdf
    POP EDI                             ; 004f5be0
        ;   Label: LAB_004f5be0
    POP EBX                             ; 004f5be1
    RET                                 ; 004f5be2
    PUSH EDI                            ; 004f5be3
        ;   Label: LAB_004f5be3
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60 ; 004f5be4
        ;   XREF to: 004f5c60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 004f5be9
    POP EDI                             ; 004f5bec
    POP EBX                             ; 004f5bed
    RET                                 ; 004f5bee

