; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtri.cpp_freeTriangles_FUN_0049cd20(CDemonTriangle * * array)
;
; Parameters:
; CDemonTriangle * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c990                       ; 0049cd20 | WatcomTypeInfo g_CDemonTriangleTypeInfo
        ;   Label: core_dtri.cpp_freeTriangles_FUN_0049cd20
    PUSH 0x8                            ; 0049cd25
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049cd27
    PUSH EDX                            ; 0049cd2b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0049cd2c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049cd31
    RET                                 ; 0049cd34

