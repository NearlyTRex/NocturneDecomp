; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00482390(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70 at 0047dbb6
;   shape_edittool.cpp_FUN_0047dd1e at 0047de48
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00482390
        ;   Label: shape_edittool.cpp_CStrList_sortAll_FUN_00482390
    MOV EAX,dword ptr [ECX]             ; 00482394
    DEC EAX                             ; 00482396
    PUSH EAX                            ; 00482397
    PUSH 0x0                            ; 00482398
    MOV EDX,dword ptr [ECX + 0xc]       ; 0048239a
    PUSH ECX                            ; 0048239d
    CALL dword ptr [EDX + 0x8]          ; 0048239e
    ADD ESP,0xc                         ; 004823a1
    RET                                 ; 004823a4

