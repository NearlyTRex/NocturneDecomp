; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_flies_cpp_FUN_004ccd60(void)
;
;
; XREF[1]:
;   core_flies.cpp_FUN_004cccb0 at 004cccc5
;
; Referenced Globals:
;   WatcomTypeInfo g_SFlyTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65e610                       ; 004ccd60 | g_SFlyTypeInfo
        ;   Label: core_flies.cpp_FUN_004ccd60
    PUSH 0xc8                           ; 004ccd65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ccd6a
    PUSH EDX                            ; 004ccd6e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004ccd6f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ccd74
    RET                                 ; 004ccd77

