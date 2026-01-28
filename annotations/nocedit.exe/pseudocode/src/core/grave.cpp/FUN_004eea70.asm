; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_grave_cpp_FUN_004eea70(void)
;
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eea70
        ;   Label: core_grave.cpp_FUN_004eea70
    SUB ESP,0x4                         ; 004eea71
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eea74
    PUSH EBX                            ; 004eea78
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004eea79
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004eea7e
    MOV EAX,[0x0067cf44]                ; 004eea81 | g_CKeysPtr
    PUSH 0x1d                           ; 004eea86
    MOV EDX,dword ptr [EAX]             ; 004eea88 | g_CKeysInstance
    PUSH EAX                            ; 004eea8a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004eea8b
    ADD ESP,0x8                         ; 004eea8d
    TEST EAX,EAX                        ; 004eea90
    JNZ 0x004eea9f                      ; 004eea92
        ;   XREF to: 004eea9f (CONDITIONAL_JUMP)  ; LAB_004eea9f
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004eea94
    ADD ESP,0x4                         ; 004eea9a
    POP EBX                             ; 004eea9d
    RET                                 ; 004eea9e
    LEA EAX,[EBX + 0x158]               ; 004eea9f
        ;   Label: LAB_004eea9f
    PUSH EAX                            ; 004eeaa5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004eeaa6
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004eeaab
    ADD ESP,0x4                         ; 004eeab1
    DEC EAX                             ; 004eeab4
    MOV dword ptr [ESP],EAX             ; 004eeab5
    FILD dword ptr [ESP]                ; 004eeab8
    FSTP float ptr [EBX + 0x2d4]        ; 004eeabb
    ADD ESP,0x4                         ; 004eeac1
    POP EBX                             ; 004eeac4
    RET                                 ; 004eeac5

