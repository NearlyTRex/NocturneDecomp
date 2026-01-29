; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array)
;
; Parameters:
; CBulletHole * *  Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CBulletHoleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65ddd0                       ; 004c99f0 | g_CBulletHoleTypeInfo
        ;   Label: core_fire.cpp_freeBulletHoles_FUN_004c99f0
    PUSH 0x100                          ; 004c99f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c99fa
    PUSH EDX                            ; 004c99fe
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c99ff
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9a04
    RET                                 ; 004c9a07

