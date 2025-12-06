; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vessel.cpp_FUN_005e8e20 at 005e8e3a
;
; Referenced Globals:
;   TerminatedCString s_vsslbase_kfm_00657001
;   TerminatedCString s_none_0065700e
;   undefined4 s_one_0065700f
;   undefined4 s_ne_00657010
;   undefined4 s_e_00657011
;   TerminatedCString s_none_00657013
;   undefined4 s_one_00657014
;   undefined4 s_ne_00657015
;   undefined4 s_e_00657016
;   TerminatedCString s_vsslorb_kfm_00657018
;   CDemonActor_vtable g_CCryptVesselVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8e60
        ;   Label: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
    PUSH ESI                            ; 005e8e61
    PUSH EDI                            ; 005e8e62
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e8e63
    PUSH EBX                            ; 005e8e67
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005e8e68 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8e6d
    ADD EAX,0x158                       ; 005e8e70
    PUSH EAX                            ; 005e8e75
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e8e76 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8e7b
    ADD EAX,0x26c                       ; 005e8e7e
    PUSH EAX                            ; 005e8e83
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 005e8e84 | CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8e89
    ADD EAX,0x2a8                       ; 005e8e8c
    PUSH EAX                            ; 005e8e91
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e8e92 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e8e97
    LEA EBX,[EAX + 0xfffff994]          ; 005e8e9a
    PUSH 0x657001                       ; 005e8ea0 | = "vsslbase.kfm" | s_vsslbase_kfm_00657001 = vsslbase.kfm
    LEA EAX,[EBX + 0x158]               ; 005e8ea5
    PUSH EAX                            ; 005e8eab
    MOV ESI,0x65700e                    ; 005e8eac | = "none" | s_none_0065700e = none
    MOV dword ptr [EBX + 0x154],0x6651b4 ; 005e8eb1 | CDemonActor_vtable g_CCryptVesselVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e8ebb | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005e8ec0
    ADD ESP,0x8                         ; 005e8eca
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005e8ecd
    LEA EDI,[EBX + 0x2e0]               ; 005e8ed7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005e8edd
    PUSH EDI                            ; 005e8ee7
    MOV AL,byte ptr [ESI]               ; 005e8ee8 | = "none" | s_none_0065700e = none
        ;   Label: LAB_005e8ee8
    MOV byte ptr [EDI],AL               ; 005e8eea
    CMP AL,0x0                          ; 005e8eec
    JZ 0x005e8f00                       ; 005e8eee | LAB_005e8f00
        ;   XREF to: 005e8f00 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005e8ef0 | s_one_0065700f
    ADD ESI,0x2                         ; 005e8ef3
    MOV byte ptr [EDI + 0x1],AL         ; 005e8ef6
    ADD EDI,0x2                         ; 005e8ef9
    CMP AL,0x0                          ; 005e8efc
    JNZ 0x005e8ee8                      ; 005e8efe | LAB_005e8ee8
        ;   XREF to: 005e8ee8 (CONDITIONAL_JUMP)
    POP EDI                             ; 005e8f00
        ;   Label: LAB_005e8f00
    MOV dword ptr [EBX + 0x3a8],0x0     ; 005e8f01
    MOV dword ptr [EBX + 0x3ac],0x0     ; 005e8f0b
    MOV ESI,0x657013                    ; 005e8f15 | = "none" | s_none_00657013 = none
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005e8f1a
    LEA EDI,[EBX + 0x344]               ; 005e8f24
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005e8f2a
    PUSH EDI                            ; 005e8f34
    MOV AL,byte ptr [ESI]               ; 005e8f35 | = "none" | s_none_00657013 = none
        ;   Label: LAB_005e8f35
    MOV byte ptr [EDI],AL               ; 005e8f37
    CMP AL,0x0                          ; 005e8f39
    JZ 0x005e8f4d                       ; 005e8f3b | LAB_005e8f4d
        ;   XREF to: 005e8f4d (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005e8f3d | s_one_00657014
    ADD ESI,0x2                         ; 005e8f40
    MOV byte ptr [EDI + 0x1],AL         ; 005e8f43
    ADD EDI,0x2                         ; 005e8f46
    CMP AL,0x0                          ; 005e8f49
    JNZ 0x005e8f35                      ; 005e8f4b | LAB_005e8f35
        ;   XREF to: 005e8f35 (CONDITIONAL_JUMP)
    POP EDI                             ; 005e8f4d
        ;   Label: LAB_005e8f4d
    MOV dword ptr [EBX + 0x3b0],0x41200000 ; 005e8f4e
    PUSH 0x657018                       ; 005e8f58 | = "vsslorb.kfm" | s_vsslorb_kfm_00657018 = vsslorb.kfm
    MOV dword ptr [EBX + 0x3c0],0x1     ; 005e8f5d
    LEA EAX,[EBX + 0x66c]               ; 005e8f67
    MOV dword ptr [EBX + 0x3b4],0x0     ; 005e8f6d
    PUSH EAX                            ; 005e8f77
    MOV dword ptr [EBX + 0x668],0x0     ; 005e8f78
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e8f82 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x7e8],0x1     ; 005e8f87
    MOV dword ptr [EBX + 0xfc],0x1      ; 005e8f91
    ADD ESP,0x8                         ; 005e8f9b
    MOV dword ptr [EBX + 0x7ec],0x0     ; 005e8f9e
    MOV EAX,EBX                         ; 005e8fa8
    MOV dword ptr [EBX + 0x7f0],0x0     ; 005e8faa
    POP EDI                             ; 005e8fb4
    POP ESI                             ; 005e8fb5
    POP EBX                             ; 005e8fb6
    RET                                 ; 005e8fb7

