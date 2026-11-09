; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00449d30(CDemonLight *this_ptr,uint flags)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_dtor_FUN_0041d7b0 at 0041d7c5
;
; Referenced Globals:
;   undefined1* PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00449d30_005f5074 = 00449d30
;   WatcomTypeInfo g_CDemonLightTypeInfo
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460
;   core_dlight.cpp_FUN_00449e70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449d30
        ;   Label: core_dlight.cpp_CDemonLight_dtor_FUN_00449d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449d31
    TEST byte ptr [ESP + 0xc],0x4       ; 00449d35
    JNZ 0x00449d66                      ; 00449d3a
        ;   XREF to: 00449d66 (CONDITIONAL_JUMP)  ; LAB_00449d66
    PUSH EBX                            ; 00449d3c
    MOV dword ptr [EBX + 0x3c],0x5f5074 ; 00449d3d | PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00449d30_005f5074
    CALL core_dlight.cpp_FUN_00449e70   ; 00449d44
        ;   XREF to: 00449e70 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_00449e70()
    ADD ESP,0x4                         ; 00449d49
    PUSH 0x1                            ; 00449d4c
    PUSH EBX                            ; 00449d4e
    CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460 ; 00449d4f
        ;   XREF to: 0043b460 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460(CDemonCamera * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00449d54
    MOV DL,byte ptr [ESP + 0xc]         ; 00449d57
    MOV EBX,EAX                         ; 00449d5b
    TEST DL,0x2                         ; 00449d5d
    JNZ 0x00449d81                      ; 00449d60
        ;   XREF to: 00449d81 (CONDITIONAL_JUMP)  ; LAB_00449d81
    MOV EAX,EBX                         ; 00449d62
    POP EBX                             ; 00449d64
    RET                                 ; 00449d65
    PUSH 0x5f5090                       ; 00449d66 | g_CDemonLightTypeInfo
        ;   Label: LAB_00449d66
    PUSH EBX                            ; 00449d6b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00449d6c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00449d71
    PUSH EAX                            ; 00449d74
    CALL crt_unknown.c_FUN_005b7fce     ; 00449d75
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00449d7a
    MOV EAX,EBX                         ; 00449d7d
    POP EBX                             ; 00449d7f
    RET                                 ; 00449d80
    PUSH EAX                            ; 00449d81
        ;   Label: LAB_00449d81
    CALL crt_unknown.c_FUN_005b7fdc     ; 00449d82
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00449d87
    MOV EAX,EBX                         ; 00449d8a
    POP EBX                             ; 00449d8c
    RET                                 ; 00449d8d

