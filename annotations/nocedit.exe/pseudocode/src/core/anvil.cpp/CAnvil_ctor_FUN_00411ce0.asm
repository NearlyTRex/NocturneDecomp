; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_anvil.cpp_factoryFuncAnvil_FUN_00411ca0 at 00411cba
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00614d0c
;   TerminatedCString s_acmeanvilinc_00614d19
;   undefined4 s_cmeanvilinc_00614d1a
;   undefined4 s_meanvilinc_00614d1b
;   undefined4 s_eanvilinc_00614d1c
;   CDemonActor_vtable g_CAnvilVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411ce0
        ;   Label: core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
    PUSH ESI                            ; 00411ce1
    PUSH EDI                            ; 00411ce2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00411ce3
    PUSH EBX                            ; 00411ce7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00411ce8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411ced
    ADD EAX,0x158                       ; 00411cf0
    PUSH EAX                            ; 00411cf5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00411cf6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411cfb
    LEA EBX,[EAX + 0xfffffea8]          ; 00411cfe
    PUSH 0x614d0c                       ; 00411d04 | = "question.kfm"
    LEA EAX,[EBX + 0x158]               ; 00411d09
    PUSH EAX                            ; 00411d0f
    MOV ESI,0x614d19                    ; 00411d10 | = "acmeanvilinc"
    MOV dword ptr [EBX + 0x154],0x659c04 ; 00411d15 | g_CAnvilVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00411d1f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x338],0x41c80000 ; 00411d24
    ADD ESP,0x8                         ; 00411d2e
    MOV dword ptr [EBX + 0x33c],0x0     ; 00411d31
    LEA EDI,[EBX + 0x2d4]               ; 00411d3b
    MOV dword ptr [EBX + 0x340],0x0     ; 00411d41
    PUSH EDI                            ; 00411d4b
    MOV AL,byte ptr [ESI]               ; 00411d4c | = "acmeanvilinc" | s_meanvilinc_00614d1b
        ;   Label: LAB_00411d4c
    MOV byte ptr [EDI],AL               ; 00411d4e
    CMP AL,0x0                          ; 00411d50
    JZ 0x00411d64                       ; 00411d52
        ;   XREF to: 00411d64 (CONDITIONAL_JUMP)  ; LAB_00411d64
    MOV AL,byte ptr [ESI + 0x1]         ; 00411d54 | s_cmeanvilinc_00614d1a | s_eanvilinc_00614d1c
    ADD ESI,0x2                         ; 00411d57
    MOV byte ptr [EDI + 0x1],AL         ; 00411d5a
    ADD EDI,0x2                         ; 00411d5d
    CMP AL,0x0                          ; 00411d60
    JNZ 0x00411d4c                      ; 00411d62
        ;   XREF to: 00411d4c (CONDITIONAL_JUMP)  ; LAB_00411d4c
    POP EDI                             ; 00411d64
        ;   Label: LAB_00411d64
    MOV EAX,EBX                         ; 00411d65
    POP EDI                             ; 00411d67
    POP ESI                             ; 00411d68
    POP EBX                             ; 00411d69
    RET                                 ; 00411d6a

