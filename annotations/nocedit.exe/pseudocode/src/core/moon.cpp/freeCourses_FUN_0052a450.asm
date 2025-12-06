; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_moon.cpp_freeCourses_FUN_0052a450(CCourse * * array)
;
; Parameters:
; CCourse * *      Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CCourseTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c9d0                       ; 0052a450 | WatcomTypeInfo g_CCourseTypeInfo
        ;   Label: core_moon.cpp_freeCourses_FUN_0052a450
    PUSH 0x3                            ; 0052a455
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052a457
    PUSH EDX                            ; 0052a45b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0052a45c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052a461
    RET                                 ; 0052a464

