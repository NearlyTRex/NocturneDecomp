; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040ecc0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005cb323+1
;   TerminatedCString s_dropCondition_005cb32e
;   TerminatedCString s_dropHeight_005cb33c
;   TerminatedCString s_triggered_005cb347
;   undefined4 DAT_005cb351
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ecc0
        ;   Label: core_anvil.cpp_CAnvil_archive_FUN_0040ecc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ecc1
    PUSH EBX                            ; 0040ecc5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 0040ecc6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040eccb
    PUSH 0x5cb324                       ; 0040ecce | s_modelName_005cb323+1
    LEA EAX,[EBX + 0x2b4]               ; 0040ecd3
    PUSH EAX                            ; 0040ecd9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0040ecda
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0040ecdf
    PUSH 0x5cb32e                       ; 0040ece2 | = "dropCondition"
    LEA EAX,[EBX + 0x430]               ; 0040ece7
    PUSH EAX                            ; 0040eced
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040ecee
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040ecf3
    PUSH 0x5cb33c                       ; 0040ecf6 | = "dropHeight"
    LEA EAX,[EBX + 0x494]               ; 0040ecfb
    PUSH EAX                            ; 0040ed01
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0040ed02
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040ed07
    PUSH 0x5cb347                       ; 0040ed0a | = "triggered"
    LEA EAX,[EBX + 0x498]               ; 0040ed0f
    PUSH EAX                            ; 0040ed15
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0040ed16
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ed1b
    PUSH 0x5cb351                       ; 0040ed1e | DAT_005cb351
    ADD EBX,0x49c                       ; 0040ed23
    PUSH EBX                            ; 0040ed29
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0040ed2a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040ed2f
    POP EBX                             ; 0040ed32
    RET                                 ; 0040ed33

