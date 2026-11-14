; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_FUN_00538b30 at 00538d91
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538f6f
;
; Called Functions:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005392d0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0
    LEA EAX,[EDX + 0x8]                 ; 005392d4
    PUSH EAX                            ; 005392d7
    PUSH EDX                            ; 005392d8
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190 ; 005392d9
        ;   XREF to: 00539190 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190(CPackedBitmapSet * this_ptr, char * act_filename)
    ADD ESP,0x8                         ; 005392de
    RET                                 ; 005392e1

