; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStake * __cdecl core_fire_cpp_CStake_arrdtor_FUN_004c99d0(CStake *objs,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStakeTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65ddf0                       ; 004c99d0 | g_CStakeTypeInfo
        ;   Label: core_fire.cpp_CStake_arrdtor_FUN_004c99d0
    PUSH 0x100                          ; 004c99d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c99da
    PUSH EDX                            ; 004c99de
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c99df
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c99e4
    RET                                 ; 004c99e7

