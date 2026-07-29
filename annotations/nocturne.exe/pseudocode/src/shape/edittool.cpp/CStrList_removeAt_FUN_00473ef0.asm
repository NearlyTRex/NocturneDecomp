; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_00473ef0(CStrList *this_ptr,int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00473ef0
        ;   Label: shape_edittool.cpp_CStrList_removeAt_FUN_00473ef0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00473ef4
    PUSH ECX                            ; 00473ef8
    PUSH ECX                            ; 00473ef9
    MOV EAX,dword ptr [EDX + 0xc]       ; 00473efa
    PUSH EDX                            ; 00473efd
    CALL dword ptr [EAX + 0x4]          ; 00473efe
    ADD ESP,0xc                         ; 00473f01
    RET                                 ; 00473f04

