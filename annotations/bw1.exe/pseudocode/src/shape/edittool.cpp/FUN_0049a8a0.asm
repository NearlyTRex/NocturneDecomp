; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0049a8a0(CPickList *this_ptr,int result_value)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   result_value
;
; XREF[1]:
;   core_menu.cpp_FUN_0050d640 at 0050e67d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049a8a0
        ;   Label: shape_edittool.cpp_FUN_0049a8a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049a8a4
    MOV dword ptr [EDX + 0x54],EAX      ; 0049a8a8
    RET                                 ; 0049a8ab

