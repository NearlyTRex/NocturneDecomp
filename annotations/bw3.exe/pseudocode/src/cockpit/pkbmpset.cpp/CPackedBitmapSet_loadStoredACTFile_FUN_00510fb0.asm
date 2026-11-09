; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_FUN_0051080e at 00510a71
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510c4f
;
; Called Functions:
;   cockpit_pkbmpset.cpp_FUN_00510e70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510fb0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0
    LEA EAX,[EDX + 0x8]                 ; 00510fb4
    PUSH EAX                            ; 00510fb7
    PUSH EDX                            ; 00510fb8
    CALL cockpit_pkbmpset.cpp_FUN_00510e70 ; 00510fb9
        ;   XREF to: 00510e70 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00510e70()
    ADD ESP,0x8                         ; 00510fbe
    RET                                 ; 00510fc1

