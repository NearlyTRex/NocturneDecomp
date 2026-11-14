; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 at 005475c0
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e7272
;   TerminatedCString s_CDeformableModelInstance_005e7287
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_00544e30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   crt_memory.c_operator_new_array_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544db0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0
    PUSH ESI                            ; 00544db1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00544db2
    PUSH EBX                            ; 00544db6
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_00544e30 ; 00544db7
        ;   XREF to: 00544e30 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_00544e30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544dbc
    PUSH EBX                            ; 00544dbf
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00544dc0
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00544dc5
    LEA EAX,[ESI*0x4 + 0x0]             ; 00544dc8
    SUB EAX,ESI                         ; 00544dcf
    ADD ESP,0x4                         ; 00544dd1
    SHL EAX,0x2                         ; 00544dd4
    PUSH EAX                            ; 00544dd7
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 00544dd8
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00544ddd
    MOV dword ptr [EBX + 0x2234],EAX    ; 00544de0
    TEST EAX,EAX                        ; 00544de6
    JZ 0x00544df7                       ; 00544de8
        ;   XREF to: 00544df7 (CONDITIONAL_JUMP)  ; LAB_00544df7
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 00544dea
    POP ESI                             ; 00544df4
    POP EBX                             ; 00544df5
    RET                                 ; 00544df6
    PUSH EDI                            ; 00544df7
        ;   Label: LAB_00544df7
    PUSH ESI                            ; 00544df8
    MOV ECX,0x5e7272                    ; 00544df9 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x909                       ; 00544dfe
    PUSH 0x5e7287                       ; 00544e03 | = "CDeformableModelInstance::allocPointL..."
    MOV dword ptr [0x01d046a0],ECX      ; 00544e08 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00544e0e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00544e14
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00544e19
    POP EDI                             ; 00544e1c
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 00544e1d
    POP ESI                             ; 00544e27
    POP EBX                             ; 00544e28
    RET                                 ; 00544e29

