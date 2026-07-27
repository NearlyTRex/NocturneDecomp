; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_emitter_cpp_CEmitter_ctor_FUN_004783c0(undefined4 param_1)
;
;
; XREF[1]:
;   core_emitter.cpp_FUN_00478390 at 004783a3
;
; Referenced Globals:
;   TerminatedCString s_none_0057f195
;   undefined4 s_one_0057f195+1
;   undefined4 s_ne_0057f195+2
;   undefined4 s_e_0057f195+3
;   TerminatedCString s_none_0057f19a
;   undefined4 s_one_0057f19a+1
;   undefined4 s_ne_0057f19a+2
;   undefined4 s_e_0057f19a+3
;   TerminatedCString s_stalrock_kfm_0057f19f
;   undefined1* PTR_core_emitter.cpp_CEmitter_setup_FUN_00478520_0059cc74 = 00478520
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004783c0
        ;   Label: core_emitter.cpp_CEmitter_ctor_FUN_004783c0
    PUSH ESI                            ; 004783c1
    PUSH EDI                            ; 004783c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004783c3
    PUSH EBX                            ; 004783c7
    CALL core_actor.cpp_FUN_00409d30    ; 004783c8
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 004783cd
    ADD EAX,0x240                       ; 004783d0
    PUSH EAX                            ; 004783d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004783d6
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    LEA EBX,[EAX + 0xfffffdc0]          ; 004783db
    MOV dword ptr [EBX + 0x14c],0x59cc74 ; 004783e1 | PTR_core_emitter.cpp_CEmitter_setup_FUN_00478520_0059cc74
    MOV dword ptr [EBX + 0x154],0x3f800000 ; 004783eb
    MOV ESI,0x57f195                    ; 004783f5 | = "none"
    MOV dword ptr [EBX + 0x158],0x3f800000 ; 004783fa
    ADD ESP,0x4                         ; 00478404
    MOV dword ptr [EBX + 0x15c],0x3f800000 ; 00478407
    LEA EDI,[EBX + 0x164]               ; 00478411
    MOV dword ptr [EBX + 0x150],0x0     ; 00478417
    PUSH EDI                            ; 00478421
    MOV AL,byte ptr [ESI]               ; 00478422 | = "none" | s_ne_0057f195+2
        ;   Label: LAB_00478422
    MOV byte ptr [EDI],AL               ; 00478424
    CMP AL,0x0                          ; 00478426
    JZ 0x0047843a                       ; 00478428
        ;   XREF to: 0047843a (CONDITIONAL_JUMP)  ; LAB_0047843a
    MOV AL,byte ptr [ESI + 0x1]         ; 0047842a | s_one_0057f195+1 | s_e_0057f195+3
    ADD ESI,0x2                         ; 0047842d
    MOV byte ptr [EDI + 0x1],AL         ; 00478430
    ADD EDI,0x2                         ; 00478433
    CMP AL,0x0                          ; 00478436
    JNZ 0x00478422                      ; 00478438
        ;   XREF to: 00478422 (CONDITIONAL_JUMP)  ; LAB_00478422
    POP EDI                             ; 0047843a
        ;   Label: LAB_0047843a
    MOV ESI,0x57f19a                    ; 0047843b | = "none"
    LEA EDI,[EBX + 0x1c8]               ; 00478440
    PUSH EDI                            ; 00478446
    MOV AL,byte ptr [ESI]               ; 00478447 | = "none" | s_ne_0057f19a+2
        ;   Label: LAB_00478447
    MOV byte ptr [EDI],AL               ; 00478449
    CMP AL,0x0                          ; 0047844b
    JZ 0x0047845f                       ; 0047844d
        ;   XREF to: 0047845f (CONDITIONAL_JUMP)  ; LAB_0047845f
    MOV AL,byte ptr [ESI + 0x1]         ; 0047844f | s_one_0057f19a+1 | s_e_0057f19a+3
    ADD ESI,0x2                         ; 00478452
    MOV byte ptr [EDI + 0x1],AL         ; 00478455
    ADD EDI,0x2                         ; 00478458
    CMP AL,0x0                          ; 0047845b
    JNZ 0x00478447                      ; 0047845d
        ;   XREF to: 00478447 (CONDITIONAL_JUMP)  ; LAB_00478447
    POP EDI                             ; 0047845f
        ;   Label: LAB_0047845f
    MOV dword ptr [EBX + 0x438],0x0     ; 00478460
    MOV dword ptr [EBX + 0x43c],0x3dcccccd ; 0047846a
    MOV dword ptr [EBX + 0x160],0x1     ; 00478474
    MOV dword ptr [EBX + 0x234],0xff    ; 0047847e
    MOV dword ptr [EBX + 0x238],0x0     ; 00478488
    MOV dword ptr [EBX + 0x23c],0x0     ; 00478492
    PUSH 0x57f19f                       ; 0047849c | = "stalrock.kfm"
    MOV dword ptr [EBX + 0x230],0x1     ; 004784a1
    LEA EAX,[EBX + 0x240]               ; 004784ab
    MOV dword ptr [EBX + 0x22c],0x0     ; 004784b1
    PUSH EAX                            ; 004784bb
    MOV dword ptr [EBX + 0x440],0x0     ; 004784bc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004784c6
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x3bc],0x41a00000 ; 004784cb
    MOV dword ptr [EBX + 0x3c0],0x0     ; 004784d5
    MOV dword ptr [EBX + 0x3c4],0x0     ; 004784df
    MOV dword ptr [EBX + 0x3c8],0x0     ; 004784e9
    MOV byte ptr [EBX + 0x3cc],0x0      ; 004784f3
    ADD ESP,0x8                         ; 004784fa
    MOV dword ptr [EBX + 0x434],0x1     ; 004784fd
    MOV EAX,EBX                         ; 00478507
    MOV dword ptr [EBX + 0x484],0x0     ; 00478509
    POP EDI                             ; 00478513
    POP ESI                             ; 00478514
    POP EBX                             ; 00478515
    RET                                 ; 00478516

