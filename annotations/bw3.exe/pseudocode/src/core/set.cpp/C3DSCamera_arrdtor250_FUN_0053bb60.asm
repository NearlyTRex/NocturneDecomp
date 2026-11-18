; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_set_cpp_C3DSCamera_arrdtor250_FUN_0053bb60(C3DSCamera *objs,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00532b00 at 00532b14
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e3c20                       ; 0053bb60
        ;   Label: core_set.cpp_C3DSCamera_arrdtor250_FUN_0053bb60
    PUSH 0xfa                           ; 0053bb65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053bb6a
    PUSH EDX                            ; 0053bb6e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0053bb6f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053bb74
    RET                                 ; 0053bb77

