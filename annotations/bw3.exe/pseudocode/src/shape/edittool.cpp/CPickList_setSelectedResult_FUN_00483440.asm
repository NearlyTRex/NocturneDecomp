; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setSelectedResult_FUN_00483440(CPickList *this_ptr,int result_value)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   result_value
;
; XREF[1]:
;   core_menu.cpp_FUN_004eae80 at 004ebdbb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00483440
        ;   Label: shape_edittool.cpp_CPickList_setSelectedResult_FUN_00483440
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483444
    MOV dword ptr [EDX + 0x54],EAX      ; 00483448
    RET                                 ; 0048344b

