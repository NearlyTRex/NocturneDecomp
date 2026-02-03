; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonTriangle * __cdecl core_manpuz_cpp_freeTriangles_FUN_0050ba70(CDemonTriangle *objs)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   objs
;
; XREF[1]:
;   core_manpuz.cpp_SGem_dtor_FUN_0050b960 at 0050b96a
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c990                       ; 0050ba70 | g_CDemonTriangleTypeInfo
        ;   Label: core_manpuz.cpp_freeTriangles_FUN_0050ba70
    PUSH 0x2                            ; 0050ba75
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ba77
    PUSH EDX                            ; 0050ba7b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0050ba7c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050ba81
    RET                                 ; 0050ba84

