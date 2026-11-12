; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_FUN_004188b0(void *param_1)
;
;
; XREF[1]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00415df0 at 00415e08
;
; Referenced Globals:
;   WatcomTypeInfo g_buttonStructTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca50                       ; 004188b0 | g_buttonStructTypeInfo
        ;   Label: core_bmppuzzl.cpp_FUN_004188b0
    PUSH 0x32                           ; 004188b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188b7
    PUSH EDX                            ; 004188bb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004188bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004188c1
    RET                                 ; 004188c4

