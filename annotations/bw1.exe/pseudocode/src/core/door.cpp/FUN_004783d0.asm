; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_004783d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_doc.cpp_FUN_0046caa0 at 0046cbd7
;
; Referenced Globals:
;   undefined4 DAT_005ff018
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004783d0
        ;   Label: core_door.cpp_FUN_004783d0
    PUSH EDI                            ; 004783d1
    PUSH EBP                            ; 004783d2
    SUB ESP,0x20                        ; 004783d3
    MOV EBP,ESI                         ; 004783d6
    MOV ESI,dword ptr [ESP + 0x30]      ; 004783d8
    LEA EBX,[ESI + 0x158]               ; 004783dc
    PUSH EBX                            ; 004783e2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004783e3
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004783e8
    PUSH EBX                            ; 004783eb
    MOV EDI,dword ptr [EAX + 0x10c]     ; 004783ec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004783f2
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004783f7
    ADD ESP,0x4                         ; 004783fd
    DEC EAX                             ; 00478400
    MOV dword ptr [ESP + 0x1c],EAX      ; 00478401
    FILD dword ptr [ESP + 0x1c]         ; 00478405
    FMUL float ptr [ESI + 0x9ac]        ; 00478409
    PUSH EBX                            ; 0047840f
    CALL crt_math.c_round_FUN_005c03a0  ; 00478410
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 00478415
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00478419
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047841e
    MOV EAX,dword ptr [EAX + 0x104]     ; 00478421
    IMUL EAX,dword ptr [ESP + 0x18]     ; 00478427
    MOV EBX,dword ptr [ESI + 0xa48]     ; 0047842c
    ADD EBX,EAX                         ; 00478432
    LEA EAX,[EBX*0x4 + 0x0]             ; 00478434
    SUB EAX,EBX                         ; 0047843b
    SHL EAX,0x2                         ; 0047843d
    MOV EBX,ESP                         ; 00478440
    ADD EAX,EDI                         ; 00478442
    FILD dword ptr [EAX]                ; 00478444
    FMUL float ptr [0x005ff018]         ; 00478446 | DAT_005ff018
    FSTP float ptr [EBX]                ; 0047844c
    FILD dword ptr [EAX + 0x4]          ; 0047844e
    FMUL float ptr [0x005ff018]         ; 00478451 | DAT_005ff018
    FSTP float ptr [EBX + 0x4]          ; 00478457
    FILD dword ptr [EAX + 0x8]          ; 0047845a
    FMUL float ptr [0x005ff018]         ; 0047845d | DAT_005ff018
    FSTP float ptr [EBX + 0x8]          ; 00478463
    MOV EAX,ESP                         ; 00478466
    PUSH EAX                            ; 00478468
    PUSH ESI                            ; 00478469
    LEA ESI,[ESP + 0x14]                ; 0047846a
    MOV EDI,EBP                         ; 0047846e
    CALL core_actor.cpp_FUN_00408b40    ; 00478470
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 00478475
    ADD ESP,0x8                         ; 00478479
    MOVSD ES:EDI,ESI                    ; 0047847c
    MOVSD ES:EDI,ESI                    ; 0047847d
    MOVSD ES:EDI,ESI                    ; 0047847e
    MOV EAX,EBP                         ; 0047847f
    ADD ESP,0x20                        ; 00478481
    POP EBP                             ; 00478484
    POP EDI                             ; 00478485
    POP EBX                             ; 00478486
    RET                                 ; 00478487

