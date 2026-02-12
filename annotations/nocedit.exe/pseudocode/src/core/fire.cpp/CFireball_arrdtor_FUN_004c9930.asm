; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFireball * __cdecl core_fire_cpp_CFireball_arrdtor_FUN_004c9930(CFireball *objs,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFireballTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de90                       ; 004c9930 | g_CFireballTypeInfo
        ;   Label: core_fire.cpp_CFireball_arrdtor_FUN_004c9930
    PUSH 0x40                           ; 004c9935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9937
    PUSH EDX                            ; 004c993b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c993c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9941
    RET                                 ; 004c9944

