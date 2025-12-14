; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeRocks_FUN_004c9910(CRock * * array)
;
; Parameters:
; CRock * *        Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CRockTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65deb0                       ; 004c9910 | g_CRockTypeInfo
        ;   Label: core_fire.cpp_freeRocks_FUN_004c9910
    PUSH 0x40                           ; 004c9915
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9917
    PUSH EDX                            ; 004c991b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c991c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9921
    RET                                 ; 004c9924

