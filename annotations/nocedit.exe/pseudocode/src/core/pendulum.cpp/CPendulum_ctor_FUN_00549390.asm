; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_00549390(CPendulum * this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_pendulum.cpp_FUN_00549350 at 0054936a
;
; Referenced Globals:
;   TerminatedCString s_pend_kfm_0063ec70
;   TerminatedCString s_true_0063ec79
;   undefined4 s_rue_0063ec7a
;   undefined4 s_ue_0063ec7b
;   undefined4 s_e_0063ec7c
;   TerminatedCString s_none_0063ec7e
;   undefined4 s_one_0063ec7f
;   undefined4 s_ne_0063ec80
;   undefined4 s_e_0063ec81
;   CDemonActor_vtable PTR_core_pendulum.cpp_FUN_00662154
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549390
        ;   Label: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
    PUSH ESI                            ; 00549391
    PUSH EDI                            ; 00549392
    MOV EBX,dword ptr [ESP + 0x10]      ; 00549393
    PUSH EBX                            ; 00549397
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00549398 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054939d
    ADD EAX,0x158                       ; 005493a0
    PUSH EAX                            ; 005493a5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005493a6 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005493ab
    LEA EBX,[EAX + 0xfffffea8]          ; 005493ae
    PUSH 0x63ec70                       ; 005493b4 | = "pend.kfm" | s_pend_kfm_0063ec70 = pend.kfm
    LEA EAX,[EBX + 0x158]               ; 005493b9
    PUSH EAX                            ; 005493bf
    MOV dword ptr [EBX + 0x154],0x662154 ; 005493c0 | CDemonActor_vtable PTR_core_pendulum.cpp_FUN_00662154
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005493ca | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005493cf
    MOV ESI,0x63ec79                    ; 005493d2 | = "true" | s_true_0063ec79 = true
    LEA EDI,[EBX + 0x2d4]               ; 005493d7
    PUSH EDI                            ; 005493dd
    MOV AL,byte ptr [ESI]               ; 005493de | = "true" | s_true_0063ec79 = true
        ;   Label: LAB_005493de
    MOV byte ptr [EDI],AL               ; 005493e0
    CMP AL,0x0                          ; 005493e2
    JZ 0x005493f6                       ; 005493e4 | LAB_005493f6
        ;   XREF to: 005493f6 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005493e6 | s_rue_0063ec7a
    ADD ESI,0x2                         ; 005493e9
    MOV byte ptr [EDI + 0x1],AL         ; 005493ec
    ADD EDI,0x2                         ; 005493ef
    CMP AL,0x0                          ; 005493f2
    JNZ 0x005493de                      ; 005493f4 | LAB_005493de
        ;   XREF to: 005493de (CONDITIONAL_JUMP)
    POP EDI                             ; 005493f6
        ;   Label: LAB_005493f6
    MOV ESI,0x63ec7e                    ; 005493f7 | = "none" | s_none_0063ec7e = none
    LEA EDI,[EBX + 0x338]               ; 005493fc
    PUSH EDI                            ; 00549402
    MOV AL,byte ptr [ESI]               ; 00549403 | = "none" | s_none_0063ec7e = none
        ;   Label: LAB_00549403
    MOV byte ptr [EDI],AL               ; 00549405
    CMP AL,0x0                          ; 00549407
    JZ 0x0054941b                       ; 00549409 | LAB_0054941b
        ;   XREF to: 0054941b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054940b | s_one_0063ec7f
    ADD ESI,0x2                         ; 0054940e
    MOV byte ptr [EDI + 0x1],AL         ; 00549411
    ADD EDI,0x2                         ; 00549414
    CMP AL,0x0                          ; 00549417
    JNZ 0x00549403                      ; 00549419 | LAB_00549403
        ;   XREF to: 00549403 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054941b
        ;   Label: LAB_0054941b
    MOV dword ptr [EBX + 0x39c],0x1     ; 0054941c
    MOV dword ptr [EBX + 0x3a0],0x0     ; 00549426
    MOV dword ptr [EBX + 0x3a8],0x3f060a92 ; 00549430
    MOV byte ptr [EBX + 0x3ac],0x0      ; 0054943a
    MOV byte ptr [EBX + 0x3d0],0x0      ; 00549441
    MOV byte ptr [EBX + 0x3f0],0x0      ; 00549448
    MOV dword ptr [EBX + 0x3cc],0x0     ; 0054944f
    MOV dword ptr [EBX + 0x428],0x0     ; 00549459
    MOV dword ptr [EBX + 0x42c],0x0     ; 00549463
    MOV dword ptr [EBX + 0x430],0x0     ; 0054946d
    MOV dword ptr [EBX + 0x434],0x0     ; 00549477
    MOV dword ptr [EBX + 0x440],0x0     ; 00549481
    MOV EAX,EBX                         ; 0054948b
    MOV dword ptr [EBX + 0x43c],0x0     ; 0054948d
    POP EDI                             ; 00549497
    POP ESI                             ; 00549498
    POP EBX                             ; 00549499
    RET                                 ; 0054949a

