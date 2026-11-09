; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_0053ec80(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_FUN_00408a40 at 00408a75
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ec80
        ;   Label: core_setcolid.cpp_FUN_0053ec80
    MOV dword ptr [EAX + 0x15f6b0],0x1  ; 0053ec84
    RET                                 ; 0053ec8e

