; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_setup_FUN_0049f010(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f010
        ;   Label: core_emitter.cpp_CEmitter_setup_FUN_0049f010
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049f011
    PUSH EBX                            ; 0049f015
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 0049f016
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x234]         ; 0049f01b
    ADD ESP,0x4                         ; 0049f021
    MOV EDX,dword ptr [EBX + 0x158]     ; 0049f024
    FSTP float ptr [EBX + 0x46c]        ; 0049f02a
    CMP EDX,0x4                         ; 0049f030
    JZ 0x0049f0ac                       ; 0049f033
        ;   XREF to: 0049f0ac (CONDITIONAL_JUMP)  ; LAB_0049f0ac
    CMP dword ptr [EBX + 0x158],0xb     ; 0049f039
        ;   Label: LAB_0049f039
    JNZ 0x0049f051                      ; 0049f040
        ;   XREF to: 0049f051 (CONDITIONAL_JUMP)  ; LAB_0049f051
    LEA EAX,[EBX + 0x248]               ; 0049f042
    PUSH EAX                            ; 0049f048
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0049f049
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f04e
    CMP dword ptr [EBX + 0x158],0xc     ; 0049f051
        ;   Label: LAB_0049f051
    JNZ 0x0049f069                      ; 0049f058
        ;   XREF to: 0049f069 (CONDITIONAL_JUMP)  ; LAB_0049f069
    LEA EAX,[EBX + 0x248]               ; 0049f05a
    PUSH EAX                            ; 0049f060
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0049f061
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f066
    CMP dword ptr [EBX + 0x158],0xd     ; 0049f069
        ;   Label: LAB_0049f069
    JNZ 0x0049f081                      ; 0049f070
        ;   XREF to: 0049f081 (CONDITIONAL_JUMP)  ; LAB_0049f081
    LEA EAX,[EBX + 0x248]               ; 0049f072
    PUSH EAX                            ; 0049f078
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0049f079
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f07e
    CMP dword ptr [EBX + 0x3f0],0x0     ; 0049f081
        ;   Label: LAB_0049f081
    JZ 0x0049f0c0                       ; 0049f088
        ;   XREF to: 0049f0c0 (CONDITIONAL_JUMP)  ; LAB_0049f0c0
    MOV dword ptr [EBX + 0x45c],0x0     ; 0049f08a
        ;   Label: LAB_0049f08a
    MOV EAX,dword ptr [EBX + 0x168]     ; 0049f094
    MOV dword ptr [EBX + 0x4b0],0x0     ; 0049f09a
    MOV dword ptr [EBX + 0x4b4],EAX     ; 0049f0a4
    POP EBX                             ; 0049f0aa
    RET                                 ; 0049f0ab
    LEA EAX,[EBX + 0x248]               ; 0049f0ac
        ;   Label: LAB_0049f0ac
    PUSH EAX                            ; 0049f0b2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0049f0b3
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049f0b8
    JMP 0x0049f039                      ; 0049f0bb
        ;   XREF to: 0049f039 (UNCONDITIONAL_JUMP)  ; LAB_0049f039
    MOV EAX,[0x01d06ab4]                ; 0049f0c0 | DAT_01d06ab4
        ;   Label: LAB_0049f0c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0049f0c5
    MOV dword ptr [EBX + 0x3f0],EAX     ; 0049f0cc
    JMP 0x0049f08a                      ; 0049f0d2
        ;   XREF to: 0049f08a (UNCONDITIONAL_JUMP)  ; LAB_0049f08a

