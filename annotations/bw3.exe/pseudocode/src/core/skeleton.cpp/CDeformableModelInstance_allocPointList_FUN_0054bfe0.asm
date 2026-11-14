; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 at 0054e7f0
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1f6f
;   TerminatedCString s_CDeformableModelInstance_005d1f84
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   crt_memory.c_operator_new_array_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bfe0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0
    PUSH ESI                            ; 0054bfe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054bfe2
    PUSH EBX                            ; 0054bfe6
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060 ; 0054bfe7
        ;   XREF to: 0054c060 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054bfec
    PUSH EBX                            ; 0054bfef
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054bff0
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0054bff5
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054bff8
    SUB EAX,ESI                         ; 0054bfff
    ADD ESP,0x4                         ; 0054c001
    SHL EAX,0x2                         ; 0054c004
    PUSH EAX                            ; 0054c007
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 0054c008
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 0054c00d
    MOV dword ptr [EBX + 0x2324],EAX    ; 0054c010
    TEST EAX,EAX                        ; 0054c016
    JZ 0x0054c027                       ; 0054c018
        ;   XREF to: 0054c027 (CONDITIONAL_JUMP)  ; LAB_0054c027
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 0054c01a
    POP ESI                             ; 0054c024
    POP EBX                             ; 0054c025
    RET                                 ; 0054c026
    PUSH EDI                            ; 0054c027
        ;   Label: LAB_0054c027
    PUSH ESI                            ; 0054c028
    MOV ECX,0x5d1f6f                    ; 0054c029 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x910                       ; 0054c02e
    PUSH 0x5d1f84                       ; 0054c033 | = "CDeformableModelInstance::allocPointL..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054c038 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0054c03e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054c044
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0054c049
    POP EDI                             ; 0054c04c
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 0054c04d
    POP ESI                             ; 0054c057
    POP EBX                             ; 0054c058
    RET                                 ; 0054c059

