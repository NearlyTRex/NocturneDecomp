; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl shape_edittool_cpp_freeVectors_FUN_004a6f50(CVector3f *objs)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 004a6f50 | g_CVectorTypeInfo
        ;   Label: shape_edittool.cpp_freeVectors_FUN_004a6f50
    PUSH 0x8                            ; 004a6f55
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6f57
    PUSH EDX                            ; 004a6f5b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004a6f5c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a6f61
    RET                                 ; 004a6f64

