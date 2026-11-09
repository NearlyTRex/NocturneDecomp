; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040e660(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e660
        ;   Label: core_anvil.cpp_CAnvil_setup_FUN_0040e660
    PUSH EDX                            ; 0040e664
    CALL core_actor.cpp_FUN_00408850    ; 0040e665
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e66a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e66d
    ADD EAX,0x158                       ; 0040e671
    PUSH EAX                            ; 0040e676
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040e677
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e67c
    RET                                 ; 0040e67f

