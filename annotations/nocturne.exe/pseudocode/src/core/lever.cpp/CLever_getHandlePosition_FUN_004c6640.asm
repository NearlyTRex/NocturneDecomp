; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(CLever *this_ptr,CVector3f *out_position)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_position
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_FUN_005384d0 at 0053887f
;
; Referenced Globals:
;   undefined4 DAT_0059fc28
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6640
        ;   Label: core_lever.cpp_CLever_getHandlePosition_FUN_004c6640
    PUSH ESI                            ; 004c6641
    PUSH EDI                            ; 004c6642
    PUSH EBP                            ; 004c6643
    SUB ESP,0x14                        ; 004c6644
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c6647
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004c664b
    LEA EBX,[ESI + 0x150]               ; 004c664f
    PUSH EBX                            ; 004c6655
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c6656
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c665b
    PUSH EBX                            ; 004c665e
    MOV EDI,dword ptr [EAX + 0x10c]     ; 004c665f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c6665
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004c666a
    ADD ESP,0x4                         ; 004c6670
    DEC EAX                             ; 004c6673
    MOV dword ptr [ESP + 0x10],EAX      ; 004c6674
    FILD dword ptr [ESP + 0x10]         ; 004c6678
    FMUL float ptr [ESI + 0x2d4]        ; 004c667c
    PUSH EBX                            ; 004c6682
    CALL crt_math.c_round_FUN_00563a30  ; 004c6683
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x10]        ; 004c6688
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c668c
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6691
    MOV EAX,dword ptr [EAX + 0x104]     ; 004c6694
    IMUL EAX,dword ptr [ESP + 0xc]      ; 004c669a
    MOV EBX,dword ptr [ESI + 0x40c]     ; 004c669f
    ADD EBX,EAX                         ; 004c66a5
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c66a7
    SUB EAX,EBX                         ; 004c66ae
    SHL EAX,0x2                         ; 004c66b0
    MOV EBX,ESP                         ; 004c66b3
    ADD EAX,EDI                         ; 004c66b5
    FILD dword ptr [EAX]                ; 004c66b7
    FMUL float ptr [0x0059fc28]         ; 004c66b9 | DAT_0059fc28
    FSTP float ptr [EBX]                ; 004c66bf
    FILD dword ptr [EAX + 0x4]          ; 004c66c1
    FMUL float ptr [0x0059fc28]         ; 004c66c4 | DAT_0059fc28
    FSTP float ptr [EBX + 0x4]          ; 004c66ca
    FILD dword ptr [EAX + 0x8]          ; 004c66cd
    FMUL float ptr [0x0059fc28]         ; 004c66d0 | DAT_0059fc28
    FSTP float ptr [EBX + 0x8]          ; 004c66d6
    MOV EAX,ESP                         ; 004c66d9
    PUSH EAX                            ; 004c66db
    PUSH EBP                            ; 004c66dc
    PUSH ESI                            ; 004c66dd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c66de
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004c66e3
    MOV EAX,EBP                         ; 004c66e6
    ADD ESP,0x14                        ; 004c66e8
    POP EBP                             ; 004c66eb
    POP EDI                             ; 004c66ec
    POP ESI                             ; 004c66ed
    POP EBX                             ; 004c66ee
    RET                                 ; 004c66ef

