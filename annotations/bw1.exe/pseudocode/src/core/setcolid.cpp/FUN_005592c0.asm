; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_005592c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_FUN_00408a00 at 00408a35
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005592c0
        ;   Label: core_setcolid.cpp_FUN_005592c0
    MOV dword ptr [EAX + 0x15f6b0],0x1  ; 005592c4
    RET                                 ; 005592ce

