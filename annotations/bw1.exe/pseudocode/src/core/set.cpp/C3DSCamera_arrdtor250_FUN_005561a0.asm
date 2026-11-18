; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_set_cpp_C3DSCamera_arrdtor250_FUN_005561a0(C3DSCamera *objs,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
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
        ;   Label: core_set.cpp_C3DSCamera_arrdtor250_FUN_005561a0
    PUSH 0xfa                           ; 005561a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005561aa
    PUSH EDX                            ; 005561ae
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005561af
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005561b4
    RET                                 ; 005561b7

