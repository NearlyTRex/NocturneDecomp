; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stairs_cpp_FUN_005bac80(void)
;
;
; XREF[1]:
;   core_stairs.cpp_CStairs_dtor_FUN_005bac10 at 005bac25
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c990                       ; 005bac80 | g_CDemonTriangleTypeInfo
        ;   Label: core_stairs.cpp_FUN_005bac80
    PUSH 0x28                           ; 005bac85
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bac87
    PUSH EDX                            ; 005bac8b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 005bac8c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005bac91
    RET                                 ; 005bac94

