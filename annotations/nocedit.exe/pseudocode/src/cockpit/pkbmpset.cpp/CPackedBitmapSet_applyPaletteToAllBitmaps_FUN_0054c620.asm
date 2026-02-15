; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620(CPackedBitmapSet *this_ptr,char *palette_data)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   palette_data
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 at 0054c5f4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c620
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
    PUSH EDI                            ; 0054c621
    PUSH EBP                            ; 0054c622
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054c623
    MOV EBP,dword ptr [ESP + 0x14]      ; 0054c627
    MOV EDX,dword ptr [EDI]             ; 0054c62b
    XOR EBX,EBX                         ; 0054c62d
    TEST EDX,EDX                        ; 0054c62f
    JLE 0x0054c650                      ; 0054c631
        ;   XREF to: 0054c650 (CONDITIONAL_JUMP)  ; LAB_0054c650
    PUSH ESI                            ; 0054c633
    XOR ESI,ESI                         ; 0054c634
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c636
        ;   Label: LAB_0054c636
    PUSH EBP                            ; 0054c639
    ADD EAX,ESI                         ; 0054c63a
    PUSH EAX                            ; 0054c63c
    INC EBX                             ; 0054c63d
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440 ; 0054c63e
        ;   XREF to: 0054b440 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESI,0x24                        ; 0054c643
    MOV ECX,dword ptr [EDI]             ; 0054c646
    ADD ESP,0x8                         ; 0054c648
    CMP EBX,ECX                         ; 0054c64b
    JL 0x0054c636                       ; 0054c64d
        ;   XREF to: 0054c636 (CONDITIONAL_JUMP)  ; LAB_0054c636
    POP ESI                             ; 0054c64f
    POP EBP                             ; 0054c650
        ;   Label: LAB_0054c650
    POP EDI                             ; 0054c651
    POP EBX                             ; 0054c652
    RET                                 ; 0054c653

