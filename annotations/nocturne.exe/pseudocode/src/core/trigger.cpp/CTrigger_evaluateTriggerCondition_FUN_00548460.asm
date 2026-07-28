; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CDemonActor *param_1,undefined4 param_2,CVector3f *param_3)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548460
        ;   Label: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_00548460
    PUSH ESI                            ; 00548461
    SUB ESP,0x28                        ; 00548462
    MOV ESI,dword ptr [ESP + 0x34]      ; 00548465
    CMP dword ptr [ESI + 0x16c],0x3     ; 00548469
    JZ 0x00548484                       ; 00548470
        ;   XREF to: 00548484 (CONDITIONAL_JUMP)  ; LAB_00548484
    MOV dword ptr [ESP + 0x24],0xbf800000 ; 00548472
        ;   Label: LAB_00548472
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054847a
    ADD ESP,0x28                        ; 0054847e
    POP ESI                             ; 00548481
    POP EBX                             ; 00548482
    RET                                 ; 00548483
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00548484
        ;   Label: LAB_00548484
    PUSH ECX                            ; 00548488
    LEA EDX,[ESP + 0x1c]                ; 00548489
    PUSH EDX                            ; 0054848d
    PUSH ESI                            ; 0054848e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054848f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00548494
    MOV EDX,ESP                         ; 00548497
    PUSH EDX                            ; 00548499
    MOV EBX,EAX                         ; 0054849a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054849c
    PUSH ESI                            ; 005484a2
    CALL dword ptr [EAX + 0x14]         ; 005484a3
    MOV EDX,EAX                         ; 005484a6
    ADD ESP,0x8                         ; 005484a8
    FLD float ptr [EDX]                 ; 005484ab
    FCOMP float ptr [EBX]               ; 005484ad
    FNSTSW AX                           ; 005484af
    SAHF                                ; 005484b1
    JA 0x00548472                       ; 005484b2
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    FLD float ptr [EDX + 0x4]           ; 005484b4
    FCOMP float ptr [EBX + 0x4]         ; 005484b7
    FNSTSW AX                           ; 005484ba
    SAHF                                ; 005484bc
    JA 0x00548472                       ; 005484bd
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    FLD float ptr [EDX + 0x8]           ; 005484bf
    FCOMP float ptr [EBX + 0x8]         ; 005484c2
    FNSTSW AX                           ; 005484c5
    SAHF                                ; 005484c7
    JA 0x00548472                       ; 005484c8
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    FLD float ptr [EDX + 0xc]           ; 005484ca
    FCOMP float ptr [EBX]               ; 005484cd
    FNSTSW AX                           ; 005484cf
    SAHF                                ; 005484d1
    JC 0x00548472                       ; 005484d2
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    FLD float ptr [EDX + 0x10]          ; 005484d4
    FCOMP float ptr [EBX + 0x4]         ; 005484d7
    FNSTSW AX                           ; 005484da
    SAHF                                ; 005484dc
    JC 0x00548472                       ; 005484dd
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    FLD float ptr [EDX + 0x14]          ; 005484df
    FCOMP float ptr [EBX + 0x8]         ; 005484e2
    FNSTSW AX                           ; 005484e5
    SAHF                                ; 005484e7
    JC 0x00548472                       ; 005484e8
        ;   XREF to: 00548472 (CONDITIONAL_JUMP)  ; LAB_00548472
    XOR ESI,ESI                         ; 005484ea
    MOV dword ptr [ESP + 0x24],ESI      ; 005484ec
    MOV EAX,dword ptr [ESP + 0x24]      ; 005484f0
    ADD ESP,0x28                        ; 005484f4
    POP ESI                             ; 005484f7
    POP EBX                             ; 005484f8
    RET                                 ; 005484f9

