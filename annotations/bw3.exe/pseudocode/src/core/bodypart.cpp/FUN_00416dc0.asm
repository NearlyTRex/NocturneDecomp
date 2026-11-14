; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00416dc0(void *param_1)
;
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00414880 at 004148bc
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dc0e0                       ; 00416dc0 | g_SBodyPartFireTypeInfo
        ;   Label: core_bodypart.cpp_FUN_00416dc0
    PUSH 0x2                            ; 00416dc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00416dc7
    PUSH EDX                            ; 00416dcb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 00416dcc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00416dd1
    RET                                 ; 00416dd4

