; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004869b0(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004869b0
        ;   Label: core_emitter.cpp_CEmitter_setup_FUN_004869b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004869b1
    PUSH EBX                            ; 004869b5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 004869b6
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x390]         ; 004869bb
    ADD ESP,0x4                         ; 004869c1
    MOV EDX,dword ptr [EBX + 0x2b4]     ; 004869c4
    FSTP float ptr [EBX + 0x5c8]        ; 004869ca
    CMP EDX,0x4                         ; 004869d0
    JZ 0x00486a4c                       ; 004869d3
        ;   XREF to: 00486a4c (CONDITIONAL_JUMP)  ; LAB_00486a4c
    CMP dword ptr [EBX + 0x2b4],0xb     ; 004869d9
        ;   Label: LAB_004869d9
    JNZ 0x004869f1                      ; 004869e0
        ;   XREF to: 004869f1 (CONDITIONAL_JUMP)  ; LAB_004869f1
    LEA EAX,[EBX + 0x3a4]               ; 004869e2
    PUSH EAX                            ; 004869e8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004869e9
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004869ee
    CMP dword ptr [EBX + 0x2b4],0xc     ; 004869f1
        ;   Label: LAB_004869f1
    JNZ 0x00486a09                      ; 004869f8
        ;   XREF to: 00486a09 (CONDITIONAL_JUMP)  ; LAB_00486a09
    LEA EAX,[EBX + 0x3a4]               ; 004869fa
    PUSH EAX                            ; 00486a00
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00486a01
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00486a06
    CMP dword ptr [EBX + 0x2b4],0xd     ; 00486a09
        ;   Label: LAB_00486a09
    JNZ 0x00486a21                      ; 00486a10
        ;   XREF to: 00486a21 (CONDITIONAL_JUMP)  ; LAB_00486a21
    LEA EAX,[EBX + 0x3a4]               ; 00486a12
    PUSH EAX                            ; 00486a18
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00486a19
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00486a1e
    CMP dword ptr [EBX + 0x54c],0x0     ; 00486a21
        ;   Label: LAB_00486a21
    JZ 0x00486a60                       ; 00486a28
        ;   XREF to: 00486a60 (CONDITIONAL_JUMP)  ; LAB_00486a60
    MOV dword ptr [EBX + 0x5b8],0x0     ; 00486a2a
        ;   Label: LAB_00486a2a
    MOV EAX,dword ptr [EBX + 0x2c4]     ; 00486a34
    MOV dword ptr [EBX + 0x60c],0x0     ; 00486a3a
    MOV dword ptr [EBX + 0x610],EAX     ; 00486a44
    POP EBX                             ; 00486a4a
    RET                                 ; 00486a4b
    LEA EAX,[EBX + 0x3a4]               ; 00486a4c
        ;   Label: LAB_00486a4c
    PUSH EAX                            ; 00486a52
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00486a53
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00486a58
    JMP 0x004869d9                      ; 00486a5b
        ;   XREF to: 004869d9 (UNCONDITIONAL_JUMP)  ; LAB_004869d9
    MOV EAX,[0x01cedef4]                ; 00486a60 | DAT_01cedef4
        ;   Label: LAB_00486a60
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00486a65
    MOV dword ptr [EBX + 0x54c],EAX     ; 00486a6c
    JMP 0x00486a2a                      ; 00486a72
        ;   XREF to: 00486a2a (UNCONDITIONAL_JUMP)  ; LAB_00486a2a

