; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_FUN_005177de at 00517a41
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517c1f
;
; Called Functions:
;   cockpit_pkbmpset.cpp_FUN_00517e40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00517f80
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80
    LEA EAX,[EDX + 0x8]                 ; 00517f84
    PUSH EAX                            ; 00517f87
    PUSH EDX                            ; 00517f88
    CALL cockpit_pkbmpset.cpp_FUN_00517e40 ; 00517f89
        ;   XREF to: 00517e40 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00517e40()
    ADD ESP,0x8                         ; 00517f8e
    RET                                 ; 00517f91

