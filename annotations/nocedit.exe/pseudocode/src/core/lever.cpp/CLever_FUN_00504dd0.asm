; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_lever_cpp_CLever_FUN_00504dd0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005be8cf
;
; Referenced Globals:
;   float FLOAT_006608f8 = 0.00390625
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504dd0
        ;   Label: core_lever.cpp_CLever_FUN_00504dd0
    PUSH ESI                            ; 00504dd1
    PUSH EDI                            ; 00504dd2
    PUSH EBP                            ; 00504dd3
    SUB ESP,0x14                        ; 00504dd4
    MOV ESI,dword ptr [ESP + 0x28]      ; 00504dd7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00504ddb
    LEA EBX,[ESI + 0x158]               ; 00504ddf
    PUSH EBX                            ; 00504de5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00504de6
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00504deb
    PUSH EBX                            ; 00504dee
    MOV EDI,dword ptr [EAX + 0x10c]     ; 00504def
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00504df5
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00504dfa
    ADD ESP,0x4                         ; 00504e00
    DEC EAX                             ; 00504e03
    MOV dword ptr [ESP + 0x10],EAX      ; 00504e04
    FILD dword ptr [ESP + 0x10]         ; 00504e08
    FMUL float ptr [ESI + 0x2dc]        ; 00504e0c
    PUSH EBX                            ; 00504e12
    CALL crt_math.c_round_FUN_005fe6b0  ; 00504e13
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 00504e18
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00504e1c
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00504e21
    MOV EAX,dword ptr [EAX + 0x104]     ; 00504e24
    IMUL EAX,dword ptr [ESP + 0xc]      ; 00504e2a
    MOV EBX,dword ptr [ESI + 0x414]     ; 00504e2f
    ADD EBX,EAX                         ; 00504e35
    LEA EAX,[EBX*0x4 + 0x0]             ; 00504e37
    SUB EAX,EBX                         ; 00504e3e
    SHL EAX,0x2                         ; 00504e40
    MOV EBX,ESP                         ; 00504e43
    ADD EAX,EDI                         ; 00504e45
    FILD dword ptr [EAX]                ; 00504e47
    FMUL float ptr [0x006608f8]         ; 00504e49 | FLOAT_006608f8
    FSTP float ptr [EBX]                ; 00504e4f
    FILD dword ptr [EAX + 0x4]          ; 00504e51
    FMUL float ptr [0x006608f8]         ; 00504e54 | FLOAT_006608f8
    FSTP float ptr [EBX + 0x4]          ; 00504e5a
    FILD dword ptr [EAX + 0x8]          ; 00504e5d
    FMUL float ptr [0x006608f8]         ; 00504e60 | FLOAT_006608f8
    FSTP float ptr [EBX + 0x8]          ; 00504e66
    MOV EAX,ESP                         ; 00504e69
    PUSH EAX                            ; 00504e6b
    PUSH EBP                            ; 00504e6c
    PUSH ESI                            ; 00504e6d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00504e6e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00504e73
    MOV EAX,EBP                         ; 00504e76
    ADD ESP,0x14                        ; 00504e78
    POP EBP                             ; 00504e7b
    POP EDI                             ; 00504e7c
    POP ESI                             ; 00504e7d
    POP EBX                             ; 00504e7e
    RET                                 ; 00504e7f

