; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00482240(CPickList *this_ptr,int result_value)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   result_value
;
; XREF[1]:
;   core_menu.cpp_FUN_004eed60 at 004efa8b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00482240
        ;   Label: shape_edittool.cpp_FUN_00482240
    MOV EAX,dword ptr [ESP + 0x8]       ; 00482244
    MOV dword ptr [EDX + 0x54],EAX      ; 00482248
    RET                                 ; 0048224b

