; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(int *param_1)
;
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 004705a7
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00473fd0
        ;   Label: shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0
    MOV EAX,dword ptr [ECX]             ; 00473fd4
    DEC EAX                             ; 00473fd6
    PUSH EAX                            ; 00473fd7
    PUSH 0x0                            ; 00473fd8
    MOV EDX,dword ptr [ECX + 0xc]       ; 00473fda
    PUSH ECX                            ; 00473fdd
    CALL dword ptr [EDX + 0x8]          ; 00473fde
    ADD ESP,0xc                         ; 00473fe1
    RET                                 ; 00473fe4

