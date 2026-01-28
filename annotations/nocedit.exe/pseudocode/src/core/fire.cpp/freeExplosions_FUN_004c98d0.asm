; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion **array)
;
; Parameters:
; CExplosion * *   Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CExplosionTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65def0                       ; 004c98d0 | g_CExplosionTypeInfo
        ;   Label: core_fire.cpp_freeExplosions_FUN_004c98d0
    PUSH 0xa                            ; 004c98d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c98d7
    PUSH EDX                            ; 004c98db
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c98dc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c98e1
    RET                                 ; 004c98e4

