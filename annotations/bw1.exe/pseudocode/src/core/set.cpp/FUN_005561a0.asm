; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005561a0(void *param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_0054d340 at 0054d354
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605060                       ; 005561a0
        ;   Label: core_set.cpp_FUN_005561a0
    PUSH 0xfa                           ; 005561a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005561aa
    PUSH EDX                            ; 005561ae
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005561af
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005561b4
    RET                                 ; 005561b7

