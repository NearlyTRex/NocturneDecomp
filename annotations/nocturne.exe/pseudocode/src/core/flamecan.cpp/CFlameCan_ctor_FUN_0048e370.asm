; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flamecan.cpp_factoryFunc_FUN_0048e340 at 0048e353
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00581639
;   TerminatedCString s_none_00581646
;   undefined4 s_one_00581646+1
;   undefined4 s_ne_00581646+2
;   undefined4 s_e_00581646+3
;   CDemonActor_vtable g_CFlameCanVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_flame.cpp_CFlame_ctor_FUN_0048cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e370
        ;   Label: core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370
    PUSH ESI                            ; 0048e371
    PUSH EDI                            ; 0048e372
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048e373
    PUSH EBX                            ; 0048e377
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 0048e378
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048e37d
    ADD EAX,0x150                       ; 0048e380
    PUSH EAX                            ; 0048e385
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0048e386
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048e38b
    ADD EAX,0x1e8                       ; 0048e38e
    PUSH EAX                            ; 0048e393
    CALL core_flame.cpp_CFlame_ctor_FUN_0048cf60 ; 0048e394
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0048cf60(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0048e399
    LEA EBX,[EAX + 0xfffffcc8]          ; 0048e39c
    PUSH 0x581639                       ; 0048e3a2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 0048e3a7
    PUSH EAX                            ; 0048e3ad
    MOV ESI,0x581646                    ; 0048e3ae | = "none"
    MOV dword ptr [EBX + 0x14c],0x59d684 ; 0048e3b3 | g_CFlameCanVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0048e3bd
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0048e3c2
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0048e3c5
    LEA EDI,[EBX + 0x2d4]               ; 0048e3cf
    MOV dword ptr [EBX + 0x2d0],0x41200000 ; 0048e3d5
    PUSH EDI                            ; 0048e3df
    MOV AL,byte ptr [ESI]               ; 0048e3e0 | = "none" | s_ne_00581646+2
        ;   Label: LAB_0048e3e0
    MOV byte ptr [EDI],AL               ; 0048e3e2
    CMP AL,0x0                          ; 0048e3e4
    JZ 0x0048e3f8                       ; 0048e3e6
        ;   XREF to: 0048e3f8 (CONDITIONAL_JUMP)  ; LAB_0048e3f8
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e3e8 | s_one_00581646+1 | s_e_00581646+3
    ADD ESI,0x2                         ; 0048e3eb
    MOV byte ptr [EDI + 0x1],AL         ; 0048e3ee
    ADD EDI,0x2                         ; 0048e3f1
    CMP AL,0x0                          ; 0048e3f4
    JNZ 0x0048e3e0                      ; 0048e3f6
        ;   XREF to: 0048e3e0 (CONDITIONAL_JUMP)  ; LAB_0048e3e0
    POP EDI                             ; 0048e3f8
        ;   Label: LAB_0048e3f8
    MOV EAX,EBX                         ; 0048e3f9
    MOV dword ptr [EBX + 0x5d4],0x0     ; 0048e3fb
    POP EDI                             ; 0048e405
    POP ESI                             ; 0048e406
    POP EBX                             ; 0048e407
    RET                                 ; 0048e408

