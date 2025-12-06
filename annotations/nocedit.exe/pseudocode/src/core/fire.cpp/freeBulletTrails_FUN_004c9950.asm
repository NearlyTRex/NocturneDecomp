; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeBulletTrails_FUN_004c9950(CBulletTrail * * array)
;
; Parameters:
; CBulletTrail * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CBulletTrailTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de70                       ; 004c9950 | WatcomTypeInfo g_CBulletTrailTypeInfo
        ;   Label: core_fire.cpp_freeBulletTrails_FUN_004c9950
    PUSH 0xa                            ; 004c9955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9957
    PUSH EDX                            ; 004c995b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c995c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c9961
    RET                                 ; 004c9964

