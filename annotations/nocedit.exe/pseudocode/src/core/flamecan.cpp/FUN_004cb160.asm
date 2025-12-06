; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlameCan * core_flamecan.cpp_FUN_004cb160(CFlameCan * this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flamecan.cpp_FUN_004cb120 at 004cb13a
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_0062a2c7
;   TerminatedCString s_none_0062a2d4
;   undefined4 s_one_0062a2d5
;   undefined4 s_ne_0062a2d6
;   undefined4 s_e_0062a2d7
;   CDemonActor_vtable PTR_core_flamecan.cpp_FUN_0065e144
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb160
        ;   Label: core_flamecan.cpp_FUN_004cb160
    PUSH ESI                            ; 004cb161
    PUSH EDI                            ; 004cb162
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cb163
    PUSH EBX                            ; 004cb167
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004cb168 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cb16d
    ADD EAX,0x158                       ; 004cb170
    PUSH EAX                            ; 004cb175
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004cb176 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cb17b
    ADD EAX,0x1e8                       ; 004cb17e
    PUSH EAX                            ; 004cb183
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 004cb184 | CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cb189
    LEA EBX,[EAX + 0xfffffcc0]          ; 004cb18c
    PUSH 0x62a2c7                       ; 004cb192 | = "question.kfm" | s_question_kfm_0062a2c7 = question.kfm
    LEA EAX,[EBX + 0x158]               ; 004cb197
    PUSH EAX                            ; 004cb19d
    MOV ESI,0x62a2d4                    ; 004cb19e | = "none" | s_none_0062a2d4 = none
    MOV dword ptr [EBX + 0x154],0x65e144 ; 004cb1a3 | CDemonActor_vtable PTR_core_flamecan.cpp_FUN_0065e144
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004cb1ad | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cb1b2
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cb1b5
    LEA EDI,[EBX + 0x2dc]               ; 004cb1bf
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004cb1c5
    PUSH EDI                            ; 004cb1cf
    MOV AL,byte ptr [ESI]               ; 004cb1d0 | = "none" | s_none_0062a2d4 = none
        ;   Label: LAB_004cb1d0
    MOV byte ptr [EDI],AL               ; 004cb1d2
    CMP AL,0x0                          ; 004cb1d4
    JZ 0x004cb1e8                       ; 004cb1d6 | LAB_004cb1e8
        ;   XREF to: 004cb1e8 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004cb1d8 | s_one_0062a2d5
    ADD ESI,0x2                         ; 004cb1db
    MOV byte ptr [EDI + 0x1],AL         ; 004cb1de
    ADD EDI,0x2                         ; 004cb1e1
    CMP AL,0x0                          ; 004cb1e4
    JNZ 0x004cb1d0                      ; 004cb1e6 | LAB_004cb1d0
        ;   XREF to: 004cb1d0 (CONDITIONAL_JUMP)
    POP EDI                             ; 004cb1e8
        ;   Label: LAB_004cb1e8
    MOV EAX,EBX                         ; 004cb1e9
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004cb1eb
    POP EDI                             ; 004cb1f5
    POP ESI                             ; 004cb1f6
    POP EBX                             ; 004cb1f7
    RET                                 ; 004cb1f8

