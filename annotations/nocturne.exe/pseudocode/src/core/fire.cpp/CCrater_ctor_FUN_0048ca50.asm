; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_CCrater_ctor_FUN_0048ca50(int param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ca50
        ;   Label: core_fire.cpp_CCrater_ctor_FUN_0048ca50
    PUSH 0x5993b0                       ; 0048ca54 | g_CVectorTypeInfo_005993b0
    PUSH 0x3                            ; 0048ca59
    ADD EAX,0x1c                        ; 0048ca5b
    PUSH EAX                            ; 0048ca5e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048ca5f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ca64
    SUB EAX,0x1c                        ; 0048ca67
    RET                                 ; 0048ca6a

