; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_setup_FUN_00487bb0(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487bb0
        ;   Label: core_emitter.cpp_CEmitter_setup_FUN_00487bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00487bb1
    PUSH EBX                            ; 00487bb5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 00487bb6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x234]         ; 00487bbb
    ADD ESP,0x4                         ; 00487bc1
    MOV EDX,dword ptr [EBX + 0x158]     ; 00487bc4
    FSTP float ptr [EBX + 0x46c]        ; 00487bca
    CMP EDX,0x4                         ; 00487bd0
    JZ 0x00487c4c                       ; 00487bd3
        ;   XREF to: 00487c4c (CONDITIONAL_JUMP)  ; LAB_00487c4c
    CMP dword ptr [EBX + 0x158],0xb     ; 00487bd9
        ;   Label: LAB_00487bd9
    JNZ 0x00487bf1                      ; 00487be0
        ;   XREF to: 00487bf1 (CONDITIONAL_JUMP)  ; LAB_00487bf1
    LEA EAX,[EBX + 0x248]               ; 00487be2
    PUSH EAX                            ; 00487be8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00487be9
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00487bee
    CMP dword ptr [EBX + 0x158],0xc     ; 00487bf1
        ;   Label: LAB_00487bf1
    JNZ 0x00487c09                      ; 00487bf8
        ;   XREF to: 00487c09 (CONDITIONAL_JUMP)  ; LAB_00487c09
    LEA EAX,[EBX + 0x248]               ; 00487bfa
    PUSH EAX                            ; 00487c00
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00487c01
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00487c06
    CMP dword ptr [EBX + 0x158],0xd     ; 00487c09
        ;   Label: LAB_00487c09
    JNZ 0x00487c21                      ; 00487c10
        ;   XREF to: 00487c21 (CONDITIONAL_JUMP)  ; LAB_00487c21
    LEA EAX,[EBX + 0x248]               ; 00487c12
    PUSH EAX                            ; 00487c18
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00487c19
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00487c1e
    CMP dword ptr [EBX + 0x3f0],0x0     ; 00487c21
        ;   Label: LAB_00487c21
    JZ 0x00487c60                       ; 00487c28
        ;   XREF to: 00487c60 (CONDITIONAL_JUMP)  ; LAB_00487c60
    MOV dword ptr [EBX + 0x45c],0x0     ; 00487c2a
        ;   Label: LAB_00487c2a
    MOV EAX,dword ptr [EBX + 0x168]     ; 00487c34
    MOV dword ptr [EBX + 0x4b0],0x0     ; 00487c3a
    MOV dword ptr [EBX + 0x4b4],EAX     ; 00487c44
    POP EBX                             ; 00487c4a
    RET                                 ; 00487c4b
    LEA EAX,[EBX + 0x248]               ; 00487c4c
        ;   Label: LAB_00487c4c
    PUSH EAX                            ; 00487c52
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00487c53
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00487c58
    JMP 0x00487bd9                      ; 00487c5b
        ;   XREF to: 00487bd9 (UNCONDITIONAL_JUMP)  ; LAB_00487bd9
    MOV EAX,[0x01d5ba14]                ; 00487c60 | DAT_01d5ba14
        ;   Label: LAB_00487c60
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00487c65
    MOV dword ptr [EBX + 0x3f0],EAX     ; 00487c6c
    JMP 0x00487c2a                      ; 00487c72
        ;   XREF to: 00487c2a (UNCONDITIONAL_JUMP)  ; LAB_00487c2a

