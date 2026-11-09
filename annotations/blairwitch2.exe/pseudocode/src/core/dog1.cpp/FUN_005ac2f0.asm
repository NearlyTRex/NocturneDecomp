; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog1_cpp_FUN_005ac2f0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 s_ChaseFood_005f0dfd+1
;   TerminatedCString s_Death_005f0e08
;   TerminatedCString s_Animation_005f0e0e
;   TerminatedCString s_Death_005f0e18
;   TerminatedCString s_meat1_kfm_005f0e1e
;   TerminatedCString s_ChaseFoodComplete_005f0e28
;   TerminatedCString s_ChaseFood_005f0e3a
;   undefined4 DAT_00600c54
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CBoxActorClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_motion.cpp_FUN_005035c0
;   crt_string.c__strcmp_FUN_005b8c30
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_0059d350.cpp_FUN_0059db70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac2f0
        ;   Label: core_dog1.cpp_FUN_005ac2f0
    PUSH ESI                            ; 005ac2f1
    PUSH EDI                            ; 005ac2f2
    PUSH EBP                            ; 005ac2f3
    MOV EBP,ESP                         ; 005ac2f4
    SUB ESP,0xc                         ; 005ac2f6
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ac2f9
    LEA EAX,[EDI + 0x2b4]               ; 005ac2fc
    PUSH EAX                            ; 005ac302
    CALL core_motion.cpp_FUN_005035c0   ; 005ac303
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ac308
    ADD ESP,0x4                         ; 005ac30b
    CMP EAX,0x1                         ; 005ac30e
    JZ 0x005ac460                       ; 005ac311
        ;   XREF to: 005ac460 (CONDITIONAL_JUMP)  ; LAB_005ac460
    MOV dword ptr [EDI + 0x1134c],0x40000000 ; 005ac317
    PUSH 0x5f0dfe                       ; 005ac321 | s_ChaseFood_005f0dfd+1
        ;   Label: LAB_005ac321
    LEA EAX,[EDI + 0x10af8]             ; 005ac326
    PUSH EAX                            ; 005ac32c
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ac32d
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac332
    TEST EAX,EAX                        ; 005ac335
    JNZ 0x005ac459                      ; 005ac337
        ;   XREF to: 005ac459 (CONDITIONAL_JUMP)  ; LAB_005ac459
    LEA EBX,[EDI + 0x2b4]               ; 005ac33d
    PUSH EBX                            ; 005ac343
    CALL core_motion.cpp_FUN_005035c0   ; 005ac344
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ac349
    ADD ESP,0x4                         ; 005ac34c
    TEST EAX,EAX                        ; 005ac34f
    JNZ 0x005ac46f                      ; 005ac351
        ;   XREF to: 005ac46f (CONDITIONAL_JUMP)  ; LAB_005ac46f
    CMP byte ptr [EDI + 0x11741],0x0    ; 005ac357
        ;   Label: LAB_005ac357
    JZ 0x005ac489                       ; 005ac35e
        ;   XREF to: 005ac489 (CONDITIONAL_JUMP)  ; LAB_005ac489
    FLD float ptr [EDI + 0x11840]       ; 005ac364
    FSUB float ptr [EBP + 0x18]         ; 005ac36a
    FST float ptr [EDI + 0x11840]       ; 005ac36d
    FLDZ                                ; 005ac373
    FCOMPP                              ; 005ac375
    FNSTSW AX                           ; 005ac377
    SAHF                                ; 005ac379
    JC 0x005ac3a2                       ; 005ac37a
        ;   XREF to: 005ac3a2 (CONDITIONAL_JUMP)  ; LAB_005ac3a2
    LEA EAX,[EDI + 0x11741]             ; 005ac37c
    PUSH EAX                            ; 005ac382
    FLD float ptr [EDI + 0x11844]       ; 005ac383
    MOV EBX,dword ptr [EDI + 0x2b0]     ; 005ac389
    PUSH EDI                            ; 005ac38f
    FSTP float ptr [EDI + 0x11840]      ; 005ac390
    CALL dword ptr [EBX + 0x34]         ; 005ac396
    ADD ESP,0x8                         ; 005ac399
    MOV dword ptr [EDI + 0x11848],EAX   ; 005ac39c
    PUSH 0x5f0e08                       ; 005ac3a2 | = "Death"
        ;   Label: LAB_005ac3a2
    LEA EBX,[EDI + 0x10af8]             ; 005ac3a7
    PUSH EBX                            ; 005ac3ad
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ac3ae
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac3b3
    TEST EAX,EAX                        ; 005ac3b6
    JNZ 0x005ac3dc                      ; 005ac3b8
        ;   XREF to: 005ac3dc (CONDITIONAL_JUMP)  ; LAB_005ac3dc
    PUSH 0x5f0e0e                       ; 005ac3ba | = "Animation"
    PUSH EBX                            ; 005ac3bf
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ac3c0
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac3c5
    TEST EAX,EAX                        ; 005ac3c8
    JNZ 0x005ac3dc                      ; 005ac3ca
        ;   XREF to: 005ac3dc (CONDITIONAL_JUMP)  ; LAB_005ac3dc
    PUSH EDI                            ; 005ac3cc
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 005ac3cd
    CALL dword ptr [EAX + 0x17c]        ; 005ac3d3
    ADD ESP,0x4                         ; 005ac3d9
    PUSH 0x5f0e18                       ; 005ac3dc | = "Death"
        ;   Label: LAB_005ac3dc
    LEA EAX,[EDI + 0x10af8]             ; 005ac3e1
    PUSH EAX                            ; 005ac3e7
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ac3e8
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ac3ed
    TEST EAX,EAX                        ; 005ac3f0
    JNZ 0x005ac459                      ; 005ac3f2
        ;   XREF to: 005ac459 (CONDITIONAL_JUMP)  ; LAB_005ac459
    FLD float ptr [EDI + 0x11860]       ; 005ac3f4
    FSUB float ptr [EBP + 0x18]         ; 005ac3fa
    FST float ptr [EDI + 0x11860]       ; 005ac3fd
    FLDZ                                ; 005ac403
    FCOMPP                              ; 005ac405
    FNSTSW AX                           ; 005ac407
    SAHF                                ; 005ac409
    JC 0x005ac459                       ; 005ac40a
        ;   XREF to: 005ac459 (CONDITIONAL_JUMP)  ; LAB_005ac459
    MOV dword ptr [EDI + 0x11860],0x3f800000 ; 005ac40c
    XOR EBX,EBX                         ; 005ac416
    XOR ESI,ESI                         ; 005ac418
    MOV EAX,[0x0061b5a8]                ; 005ac41a | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005ac41a
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 005ac41f | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x005ac49d                       ; 005ac425
        ;   XREF to: 005ac49d (CONDITIONAL_JUMP)  ; LAB_005ac49d
    CMP dword ptr [EBP + -0x4],0x0      ; 005ac42b
    JZ 0x005ac459                       ; 005ac42f
        ;   XREF to: 005ac459 (CONDITIONAL_JUMP)  ; LAB_005ac459
    LEA EBX,[EDI + 0x20]                ; 005ac431
    MOV EAX,dword ptr [EBP + -0x4]      ; 005ac434
    FLD float ptr [EBX]                 ; 005ac437
    FSUB float ptr [EAX + 0x20]         ; 005ac439
    FMUL ST0                            ; 005ac43c
    FLD float ptr [EBX + 0x8]           ; 005ac43e
    FSUB float ptr [EAX + 0x28]         ; 005ac441
    FMUL ST0                            ; 005ac444
    FADDP                               ; 005ac446
    FSQRT                               ; 005ac448
    FCOMP float ptr [0x00600c54]        ; 005ac44a | DAT_00600c54
    FNSTSW AX                           ; 005ac450
    SAHF                                ; 005ac452
    JBE 0x005ac4d7                      ; 005ac453
        ;   XREF to: 005ac4d7 (CONDITIONAL_JUMP)  ; LAB_005ac4d7
    MOV ESP,EBP                         ; 005ac459
        ;   Label: LAB_005ac459
    POP EBP                             ; 005ac45b
    POP EDI                             ; 005ac45c
    POP ESI                             ; 005ac45d
    POP EBX                             ; 005ac45e
    RET                                 ; 005ac45f
    MOV dword ptr [EDI + 0x1134c],0x3f99999a ; 005ac460
        ;   Label: LAB_005ac460
    JMP 0x005ac321                      ; 005ac46a
        ;   XREF to: 005ac321 (UNCONDITIONAL_JUMP)  ; LAB_005ac321
    PUSH EBX                            ; 005ac46f
        ;   Label: LAB_005ac46f
    CALL core_motion.cpp_FUN_005035c0   ; 005ac470
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ac475
    ADD ESP,0x4                         ; 005ac478
    CMP EAX,0x8                         ; 005ac47b
    JZ 0x005ac357                       ; 005ac47e
        ;   XREF to: 005ac357 (CONDITIONAL_JUMP)  ; LAB_005ac357
    JMP 0x005ac3a2                      ; 005ac484
        ;   XREF to: 005ac3a2 (UNCONDITIONAL_JUMP)  ; LAB_005ac3a2
    MOV EDX,dword ptr [EDI + 0x11848]   ; 005ac489
        ;   Label: LAB_005ac489
    PUSH EDX                            ; 005ac48f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005ac490
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005ac495
    JMP 0x005ac3a2                      ; 005ac498
        ;   XREF to: 005ac3a2 (UNCONDITIONAL_JUMP)  ; LAB_005ac3a2
    MOV EDX,dword ptr [0x007bc9e8]      ; 005ac49d | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_005ac49d
    PUSH EDX                            ; 005ac4a3
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 005ac4a4 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ECX                            ; 005ac4ab
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005ac4ac
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005ac4b1
    MOV dword ptr [EBP + -0x4],EAX      ; 005ac4b4
    TEST EAX,EAX                        ; 005ac4b7
    JZ 0x005ac4ce                       ; 005ac4b9
        ;   XREF to: 005ac4ce (CONDITIONAL_JUMP)  ; LAB_005ac4ce
    PUSH 0x5f0e1e                       ; 005ac4bb | = "meat1.kfm"
    ADD EAX,0x32c                       ; 005ac4c0
    PUSH EAX                            ; 005ac4c5
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005ac4c6
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005ac4cb
    INC EBX                             ; 005ac4ce
        ;   Label: LAB_005ac4ce
    ADD ESI,0x4                         ; 005ac4cf
    JMP 0x005ac41a                      ; 005ac4d2
        ;   XREF to: 005ac41a (UNCONDITIONAL_JUMP)  ; LAB_005ac41a
    FLD float ptr [EDI + 0x11864]       ; 005ac4d7
        ;   Label: LAB_005ac4d7
    ADD EDI,0x10af8                     ; 005ac4dd
    MOV EAX,dword ptr [EBP + -0x4]      ; 005ac4e3
    PUSH EDI                            ; 005ac4e6
    FSTP float ptr [EDI + 0xd70]        ; 005ac4e7
    MOV dword ptr [EDI + 0xd64],EAX     ; 005ac4ed
    CALL unkaddr_0059d350.cpp_FUN_0059db70 ; 005ac4f3
        ;   XREF to: 0059db70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db70()
    ADD ESP,0x4                         ; 005ac4f8
    PUSH EAX                            ; 005ac4fb
    PUSH 0x5f0e28                       ; 005ac4fc | = "ChaseFoodComplete"
    PUSH EDI                            ; 005ac501
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005ac502
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005ac507
    PUSH 0x5f0e3a                       ; 005ac50a | = "ChaseFood"
    PUSH EDI                            ; 005ac50f
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005ac510
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ac515
    MOV ESP,EBP                         ; 005ac518
    POP EBP                             ; 005ac51a
    POP EDI                             ; 005ac51b
    POP ESI                             ; 005ac51c
    POP EBX                             ; 005ac51d
    RET                                 ; 005ac51e

