; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMuzzleFlash * __cdecl core_fire_cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash *objs)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CMuzzleFlashTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65de30                       ; 004c9990 | g_CMuzzleFlashTypeInfo
        ;   Label: core_fire.cpp_freeMuzzleFlashes_FUN_004c9990
    PUSH 0x14                           ; 004c9995
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9997
    PUSH EDX                            ; 004c999b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c999c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c99a1
    RET                                 ; 004c99a4

