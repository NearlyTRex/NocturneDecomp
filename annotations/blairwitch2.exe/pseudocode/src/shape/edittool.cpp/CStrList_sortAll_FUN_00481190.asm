; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00481190(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0047c970 at 0047c9b6
;   shape_edittool.cpp_FUN_0047cb1e at 0047cc48
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00481190
        ;   Label: shape_edittool.cpp_CStrList_sortAll_FUN_00481190
    MOV EAX,dword ptr [ECX]             ; 00481194
    DEC EAX                             ; 00481196
    PUSH EAX                            ; 00481197
    PUSH 0x0                            ; 00481198
    MOV EDX,dword ptr [ECX + 0xc]       ; 0048119a
    PUSH ECX                            ; 0048119d
    CALL dword ptr [EDX + 0x8]          ; 0048119e
    ADD ESP,0xc                         ; 004811a1
    RET                                 ; 004811a4

