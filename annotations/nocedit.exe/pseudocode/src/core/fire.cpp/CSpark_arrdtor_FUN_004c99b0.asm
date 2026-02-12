; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpark * __cdecl core_fire_cpp_CSpark_arrdtor_FUN_004c99b0(CSpark *objs,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSparkTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de10                       ; 004c99b0 | g_CSparkTypeInfo
        ;   Label: core_fire.cpp_CSpark_arrdtor_FUN_004c99b0
    PUSH 0x100                          ; 004c99b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c99ba
    PUSH EDX                            ; 004c99be
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c99bf
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c99c4
    RET                                 ; 004c99c7

