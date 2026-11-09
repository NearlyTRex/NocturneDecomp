; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0(CPackedBitmapSet *this_ptr,char *palette_data)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   palette_data
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_00539190 at 005391b4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005391e0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0
    PUSH EDI                            ; 005391e1
    PUSH EBP                            ; 005391e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005391e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005391e7
    MOV EDX,dword ptr [EDI]             ; 005391eb
    XOR EBX,EBX                         ; 005391ed
    TEST EDX,EDX                        ; 005391ef
    JLE 0x00539210                      ; 005391f1
        ;   XREF to: 00539210 (CONDITIONAL_JUMP)  ; LAB_00539210
    PUSH ESI                            ; 005391f3
    XOR ESI,ESI                         ; 005391f4
    MOV EAX,dword ptr [EDI + 0x4]       ; 005391f6
        ;   Label: LAB_005391f6
    PUSH EBP                            ; 005391f9
    ADD EAX,ESI                         ; 005391fa
    PUSH EAX                            ; 005391fc
    INC EBX                             ; 005391fd
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050 ; 005391fe
        ;   XREF to: 00538050 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESI,0x24                        ; 00539203
    MOV ECX,dword ptr [EDI]             ; 00539206
    ADD ESP,0x8                         ; 00539208
    CMP EBX,ECX                         ; 0053920b
    JL 0x005391f6                       ; 0053920d
        ;   XREF to: 005391f6 (CONDITIONAL_JUMP)  ; LAB_005391f6
    POP ESI                             ; 0053920f
    POP EBP                             ; 00539210
        ;   Label: LAB_00539210
    POP EDI                             ; 00539211
    POP EBX                             ; 00539212
    RET                                 ; 00539213

