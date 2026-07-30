; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_FUN_0040f560(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_anvil.cpp_factoryFunc_FUN_0040f530 at 0040f543
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_005783ef
;   TerminatedCString s_acmeanvilinc_005783fc
;   undefined4 s_cmeanvilinc_005783fc+1
;   undefined4 s_meanvilinc_005783fc+2
;   undefined4 s_eanvilinc_005783fc+3
;   CDemonActor_vtable g_CAnvilVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f560
        ;   Label: core_anvil.cpp_FUN_0040f560
    PUSH ESI                            ; 0040f561
    PUSH EDI                            ; 0040f562
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040f563
    PUSH EBX                            ; 0040f567
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 0040f568
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f56d
    ADD EAX,0x150                       ; 0040f570
    PUSH EAX                            ; 0040f575
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0040f576
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f57b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040f57e
    PUSH 0x5783ef                       ; 0040f584 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040f589
    PUSH EAX                            ; 0040f58f
    MOV ESI,0x5783fc                    ; 0040f590 | = "acmeanvilinc"
    MOV dword ptr [EBX + 0x14c],0x599694 ; 0040f595 | g_CAnvilVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040f59f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x330],0x41c80000 ; 0040f5a4
    ADD ESP,0x8                         ; 0040f5ae
    MOV dword ptr [EBX + 0x334],0x0     ; 0040f5b1
    LEA EDI,[EBX + 0x2cc]               ; 0040f5bb
    MOV dword ptr [EBX + 0x338],0x0     ; 0040f5c1
    PUSH EDI                            ; 0040f5cb
    MOV AL,byte ptr [ESI]               ; 0040f5cc | = "acmeanvilinc" | s_meanvilinc_005783fc+2
        ;   Label: LAB_0040f5cc
    MOV byte ptr [EDI],AL               ; 0040f5ce
    CMP AL,0x0                          ; 0040f5d0
    JZ 0x0040f5e4                       ; 0040f5d2
        ;   XREF to: 0040f5e4 (CONDITIONAL_JUMP)  ; LAB_0040f5e4
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f5d4 | s_cmeanvilinc_005783fc+1 | s_eanvilinc_005783fc+3
    ADD ESI,0x2                         ; 0040f5d7
    MOV byte ptr [EDI + 0x1],AL         ; 0040f5da
    ADD EDI,0x2                         ; 0040f5dd
    CMP AL,0x0                          ; 0040f5e0
    JNZ 0x0040f5cc                      ; 0040f5e2
        ;   XREF to: 0040f5cc (CONDITIONAL_JUMP)  ; LAB_0040f5cc
    POP EDI                             ; 0040f5e4
        ;   Label: LAB_0040f5e4
    MOV EAX,EBX                         ; 0040f5e5
    POP EDI                             ; 0040f5e7
    POP ESI                             ; 0040f5e8
    POP EBX                             ; 0040f5e9
    RET                                 ; 0040f5ea

