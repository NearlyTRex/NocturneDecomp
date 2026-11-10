; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0(CPackedBitmapSet *this_ptr,char *palette_data)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   palette_data
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70 at 00510e94
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510ec0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0
    PUSH EDI                            ; 00510ec1
    PUSH EBP                            ; 00510ec2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00510ec3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00510ec7
    MOV EDX,dword ptr [EDI]             ; 00510ecb
    XOR EBX,EBX                         ; 00510ecd
    TEST EDX,EDX                        ; 00510ecf
    JLE 0x00510ef0                      ; 00510ed1
        ;   XREF to: 00510ef0 (CONDITIONAL_JUMP)  ; LAB_00510ef0
    PUSH ESI                            ; 00510ed3
    XOR ESI,ESI                         ; 00510ed4
    MOV EAX,dword ptr [EDI + 0x4]       ; 00510ed6
        ;   Label: LAB_00510ed6
    PUSH EBP                            ; 00510ed9
    ADD EAX,ESI                         ; 00510eda
    PUSH EAX                            ; 00510edc
    INC EBX                             ; 00510edd
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30 ; 00510ede
        ;   XREF to: 0050fd30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESI,0x24                        ; 00510ee3
    MOV ECX,dword ptr [EDI]             ; 00510ee6
    ADD ESP,0x8                         ; 00510ee8
    CMP EBX,ECX                         ; 00510eeb
    JL 0x00510ed6                       ; 00510eed
        ;   XREF to: 00510ed6 (CONDITIONAL_JUMP)  ; LAB_00510ed6
    POP ESI                             ; 00510eef
    POP EBP                             ; 00510ef0
        ;   Label: LAB_00510ef0
    POP EDI                             ; 00510ef1
    POP EBX                             ; 00510ef2
    RET                                 ; 00510ef3

