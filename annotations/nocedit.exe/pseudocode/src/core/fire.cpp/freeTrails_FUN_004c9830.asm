; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeTrails_FUN_004c9830(CTrail * * array)
;
; Parameters:
; CTrail * *       Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrailTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df90                       ; 004c9830 | g_CTrailTypeInfo
        ;   Label: core_fire.cpp_freeTrails_FUN_004c9830
    PUSH 0x64                           ; 004c9835
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9837
    PUSH EDX                            ; 004c983b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c983c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9841
    RET                                 ; 004c9844

