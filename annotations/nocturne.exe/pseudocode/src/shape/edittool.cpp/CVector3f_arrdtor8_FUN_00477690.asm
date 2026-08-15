; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl shape_edittool_cpp_CVector3f_arrdtor8_FUN_00477690(CVector3f *this_ptr,uint flags)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 00477690 | g_CVectorTypeInfo_005993b0
        ;   Label: shape_edittool.cpp_CVector3f_arrdtor8_FUN_00477690
    PUSH 0x8                            ; 00477695
    MOV EDX,dword ptr [ESP + 0xc]       ; 00477697
    PUSH EDX                            ; 0047769b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0047769c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004776a1
    RET                                 ; 004776a4

