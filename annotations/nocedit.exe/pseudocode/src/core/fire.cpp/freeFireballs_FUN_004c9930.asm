; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeFireballs_FUN_004c9930(CFireball * * array)
;
; Parameters:
; CFireball * *    Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CFireballTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de90                       ; 004c9930 | g_CFireballTypeInfo
        ;   Label: core_fire.cpp_freeFireballs_FUN_004c9930
    PUSH 0x40                           ; 004c9935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9937
    PUSH EDX                            ; 004c993b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c993c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9941
    RET                                 ; 004c9944

