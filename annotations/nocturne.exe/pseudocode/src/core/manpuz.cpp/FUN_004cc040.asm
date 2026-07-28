; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004cc040(void *param_1)
;
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20 at 004cbe45
;
; Referenced Globals:
;   WatcomTypeInfo g_SGemTypeInfo_005a0230
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0230                       ; 004cc040 | g_SGemTypeInfo_005a0230
        ;   Label: core_manpuz.cpp_FUN_004cc040
    PUSH 0xc                            ; 004cc045
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc047
    PUSH EDX                            ; 004cc04b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004cc04c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc051
    RET                                 ; 004cc054

