; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gasmask_cpp_CGasMask_load_FUN_004e5e20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0062dabb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5e20
        ;   Label: core_gasmask.cpp_CGasMask_load_FUN_004e5e20
    PUSH EDX                            ; 004e5e24
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004e5e25
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e5e2a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e5e2d
    PUSH 0x62dabb                       ; 004e5e31 | = "modelName"
    ADD EAX,0x158                       ; 004e5e36
    PUSH EAX                            ; 004e5e3b
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004e5e3c
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e5e41
    RET                                 ; 004e5e44

