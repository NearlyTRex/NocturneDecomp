; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freePopcorn_FUN_004c97f0(CPopcorn * * array)
;
; Parameters:
; CPopcorn * *     Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CPopcornTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65dfd0                       ; 004c97f0 | WatcomTypeInfo g_CPopcornTypeInfo
        ;   Label: core_fire.cpp_freePopcorn_FUN_004c97f0
    PUSH 0x100                          ; 004c97f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c97fa
    PUSH EDX                            ; 004c97fe
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c97ff | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c9804
    RET                                 ; 004c9807

