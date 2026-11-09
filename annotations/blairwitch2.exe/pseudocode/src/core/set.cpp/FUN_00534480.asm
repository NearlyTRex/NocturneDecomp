; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00534480(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_FUN_004c6d40 at 004c7112
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00534480
        ;   Label: core_set.cpp_FUN_00534480
    MOV dword ptr [EAX + 0x161668],0x1  ; 00534484
    RET                                 ; 0053448e

