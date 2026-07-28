; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_FUN_004fe9d0 at 004feabb
;   core_script.cpp_FUN_004febd0 at 004fedc0
;   core_script.cpp_FUN_004fee30 at 004fee50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00477660
        ;   Label: shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
    MOV EAX,dword ptr [EAX]             ; 00477664
    RET                                 ; 00477666

