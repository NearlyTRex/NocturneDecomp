; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660 at 0054c694
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c1bf
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c3bd
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054c710
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
    LEA EAX,[EDX + 0x8]                 ; 0054c714
    PUSH EAX                            ; 0054c717
    PUSH EDX                            ; 0054c718
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 ; 0054c719
        ;   XREF to: 0054c5d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0(CPackedBitmapSet * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 0054c71e
    RET                                 ; 0054c721

