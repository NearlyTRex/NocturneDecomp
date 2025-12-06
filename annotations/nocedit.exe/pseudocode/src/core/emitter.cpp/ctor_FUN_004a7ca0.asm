; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEmitter * core_emitter.cpp_ctor_FUN_004a7ca0(CEmitter * this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_emitter.cpp_FUN_004a7c60 at 004a7c7a
;
; Referenced Globals:
;   TerminatedCString s_none_00624067
;   undefined4 s_one_00624068
;   undefined4 s_ne_00624069
;   undefined4 s_e_0062406a
;   TerminatedCString s_none_0062406c
;   undefined4 s_one_0062406d
;   undefined4 s_ne_0062406e
;   undefined4 s_e_0062406f
;   TerminatedCString s_stalrock_kfm_00624071
;   CDemonActor_vtable PTR_core_emitter.cpp_FUN_0065d684
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7ca0
        ;   Label: core_emitter.cpp_ctor_FUN_004a7ca0
    PUSH ESI                            ; 004a7ca1
    PUSH EDI                            ; 004a7ca2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a7ca3
    PUSH EBX                            ; 004a7ca7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004a7ca8 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a7cad
    ADD EAX,0x248                       ; 004a7cb0
    PUSH EAX                            ; 004a7cb5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004a7cb6 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    LEA EBX,[EAX + 0xfffffdb8]          ; 004a7cbb
    MOV dword ptr [EBX + 0x154],0x65d684 ; 004a7cc1 | CDemonActor_vtable PTR_core_emitter.cpp_FUN_0065d684
    MOV dword ptr [EBX + 0x15c],0x3f800000 ; 004a7ccb
    MOV ESI,0x624067                    ; 004a7cd5 | = "none" | s_none_00624067 = none
    MOV dword ptr [EBX + 0x160],0x3f800000 ; 004a7cda
    ADD ESP,0x4                         ; 004a7ce4
    MOV dword ptr [EBX + 0x164],0x3f800000 ; 004a7ce7
    LEA EDI,[EBX + 0x16c]               ; 004a7cf1
    MOV dword ptr [EBX + 0x158],0x0     ; 004a7cf7
    PUSH EDI                            ; 004a7d01
    MOV AL,byte ptr [ESI]               ; 004a7d02 | = "none" | s_none_00624067 = none
        ;   Label: LAB_004a7d02
    MOV byte ptr [EDI],AL               ; 004a7d04
    CMP AL,0x0                          ; 004a7d06
    JZ 0x004a7d1a                       ; 004a7d08 | LAB_004a7d1a
        ;   XREF to: 004a7d1a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7d0a | s_one_00624068
    ADD ESI,0x2                         ; 004a7d0d
    MOV byte ptr [EDI + 0x1],AL         ; 004a7d10
    ADD EDI,0x2                         ; 004a7d13
    CMP AL,0x0                          ; 004a7d16
    JNZ 0x004a7d02                      ; 004a7d18 | LAB_004a7d02
        ;   XREF to: 004a7d02 (CONDITIONAL_JUMP)
    POP EDI                             ; 004a7d1a
        ;   Label: LAB_004a7d1a
    MOV ESI,0x62406c                    ; 004a7d1b | = "none" | s_none_0062406c = none
    LEA EDI,[EBX + 0x1d0]               ; 004a7d20
    PUSH EDI                            ; 004a7d26
    MOV AL,byte ptr [ESI]               ; 004a7d27 | = "none" | s_none_0062406c = none
        ;   Label: LAB_004a7d27
    MOV byte ptr [EDI],AL               ; 004a7d29
    CMP AL,0x0                          ; 004a7d2b
    JZ 0x004a7d3f                       ; 004a7d2d | LAB_004a7d3f
        ;   XREF to: 004a7d3f (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7d2f | s_one_0062406d
    ADD ESI,0x2                         ; 004a7d32
    MOV byte ptr [EDI + 0x1],AL         ; 004a7d35
    ADD EDI,0x2                         ; 004a7d38
    CMP AL,0x0                          ; 004a7d3b
    JNZ 0x004a7d27                      ; 004a7d3d | LAB_004a7d27
        ;   XREF to: 004a7d27 (CONDITIONAL_JUMP)
    POP EDI                             ; 004a7d3f
        ;   Label: LAB_004a7d3f
    MOV dword ptr [EBX + 0x440],0x0     ; 004a7d40
    MOV dword ptr [EBX + 0x444],0x3dcccccd ; 004a7d4a
    MOV dword ptr [EBX + 0x168],0x1     ; 004a7d54
    MOV dword ptr [EBX + 0x23c],0xff    ; 004a7d5e
    MOV dword ptr [EBX + 0x240],0x0     ; 004a7d68
    MOV dword ptr [EBX + 0x244],0x0     ; 004a7d72
    PUSH 0x624071                       ; 004a7d7c | = "stalrock.kfm" | s_stalrock_kfm_00624071 = stalrock.kfm
    MOV dword ptr [EBX + 0x238],0x1     ; 004a7d81
    LEA EAX,[EBX + 0x248]               ; 004a7d8b
    MOV dword ptr [EBX + 0x234],0x0     ; 004a7d91
    PUSH EAX                            ; 004a7d9b
    MOV dword ptr [EBX + 0x448],0x0     ; 004a7d9c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004a7da6 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x3c4],0x41a00000 ; 004a7dab
    MOV dword ptr [EBX + 0x3c8],0x0     ; 004a7db5
    MOV dword ptr [EBX + 0x3cc],0x0     ; 004a7dbf
    MOV dword ptr [EBX + 0x3d0],0x0     ; 004a7dc9
    MOV byte ptr [EBX + 0x3d4],0x0      ; 004a7dd3
    ADD ESP,0x8                         ; 004a7dda
    MOV dword ptr [EBX + 0x43c],0x1     ; 004a7ddd
    MOV EAX,EBX                         ; 004a7de7
    MOV dword ptr [EBX + 0x48c],0x0     ; 004a7de9
    POP EDI                             ; 004a7df3
    POP ESI                             ; 004a7df4
    POP EBX                             ; 004a7df5
    RET                                 ; 004a7df6

