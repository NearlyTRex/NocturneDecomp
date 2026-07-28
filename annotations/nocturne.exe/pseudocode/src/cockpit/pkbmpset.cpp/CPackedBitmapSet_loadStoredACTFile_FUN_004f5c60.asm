; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0 at 004f5be4
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0 at 004f5721
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 at 004f58ff
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f5c60
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60
    LEA EAX,[EDX + 0x8]                 ; 004f5c64
    PUSH EAX                            ; 004f5c67
    PUSH EDX                            ; 004f5c68
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20 ; 004f5c69
        ;   XREF to: 004f5b20 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20(CPackedBitmapSet * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 004f5c6e
    RET                                 ; 004f5c71

