; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_anvil.cpp_CAnvil_FUN_00412030(CAnvil * this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00614d6d
;   TerminatedCString s_Drop_cond_00614d7f
;   TerminatedCString s_Drop_height_00614d89
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412030
        ;   Label: core_anvil.cpp_CAnvil_FUN_00412030
    PUSH ESI                            ; 00412031
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412032
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412036
    PUSH ESI                            ; 0041203a
    PUSH EBX                            ; 0041203b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0041203c | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00412041
    PUSH 0x0                            ; 00412044
    LEA EAX,[EBX + 0x158]               ; 00412046
    PUSH EAX                            ; 0041204c
    PUSH 0x614d6d                       ; 0041204d | = "Model file (.kfm)" | s_Model_file_kfm_00614d6d = Model file (.kfm)
    PUSH ESI                            ; 00412052
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00412053 | void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00412058
    LEA EAX,[EBX + 0x2d4]               ; 0041205b
    PUSH EAX                            ; 00412061
    PUSH 0x614d7f                       ; 00412062 | = "Drop cond" | s_Drop_cond_00614d7f = Drop cond
    PUSH ESI                            ; 00412067
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 00412068 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041206d
    PUSH 0x0                            ; 00412070
    ADD EBX,0x338                       ; 00412072
    PUSH EBX                            ; 00412078
    PUSH 0x614d89                       ; 00412079 | = "Drop height" | s_Drop_height_00614d89 = Drop height
    PUSH ESI                            ; 0041207e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0041207f | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00412084
    POP ESI                             ; 00412087
    POP EBX                             ; 00412088
    RET                                 ; 00412089

