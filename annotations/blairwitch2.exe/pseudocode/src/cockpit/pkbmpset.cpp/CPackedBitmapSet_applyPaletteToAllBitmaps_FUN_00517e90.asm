; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90(CPackedBitmapSet *this_ptr,char *palette_data)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   palette_data
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40 at 00517e64
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517e90
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90
    PUSH EDI                            ; 00517e91
    PUSH EBP                            ; 00517e92
    MOV EDI,dword ptr [ESP + 0x10]      ; 00517e93
    MOV EBP,dword ptr [ESP + 0x14]      ; 00517e97
    MOV EDX,dword ptr [EDI]             ; 00517e9b
    XOR EBX,EBX                         ; 00517e9d
    TEST EDX,EDX                        ; 00517e9f
    JLE 0x00517ec0                      ; 00517ea1
        ;   XREF to: 00517ec0 (CONDITIONAL_JUMP)  ; LAB_00517ec0
    PUSH ESI                            ; 00517ea3
    XOR ESI,ESI                         ; 00517ea4
    MOV EAX,dword ptr [EDI + 0x4]       ; 00517ea6
        ;   Label: LAB_00517ea6
    PUSH EBP                            ; 00517ea9
    ADD EAX,ESI                         ; 00517eaa
    PUSH EAX                            ; 00517eac
    INC EBX                             ; 00517ead
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00 ; 00517eae
        ;   XREF to: 00516d00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESI,0x24                        ; 00517eb3
    MOV ECX,dword ptr [EDI]             ; 00517eb6
    ADD ESP,0x8                         ; 00517eb8
    CMP EBX,ECX                         ; 00517ebb
    JL 0x00517ea6                       ; 00517ebd
        ;   XREF to: 00517ea6 (CONDITIONAL_JUMP)  ; LAB_00517ea6
    POP ESI                             ; 00517ebf
    POP EBP                             ; 00517ec0
        ;   Label: LAB_00517ec0
    POP EDI                             ; 00517ec1
    POP EBX                             ; 00517ec2
    RET                                 ; 00517ec3

