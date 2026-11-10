; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004eb3e0(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c7899
;   core_haystack.cpp_CHaystack_process_FUN_004e9250 at 004e96dd
;   core_hero.cpp_FUN_004eca10 at 004ecac1
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f1402
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 00591191
;   core_svetlana.cpp_CSvetlana_process_FUN_00593150 at 005936c7
;
; Referenced Globals:
;   undefined4 DAT_005e4845
;   undefined4 DAT_005e484d
;   undefined4 DAT_005e4855
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDoorClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408bb0
;   core_door.cpp_CDoor_getMoveType_FUN_00478b40
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb3e0
        ;   Label: core_hero.cpp_FUN_004eb3e0
    PUSH ESI                            ; 004eb3e1
    PUSH EDI                            ; 004eb3e2
    PUSH EBP                            ; 004eb3e3
    MOV EBP,ESP                         ; 004eb3e4
    SUB ESP,0x40                        ; 004eb3e6
    AND ESP,0xfffffff8                  ; 004eb3e9
    MOV EDX,0x40800000                  ; 004eb3ec
    XOR ECX,ECX                         ; 004eb3f1
    MOV dword ptr [ESP + 0x30],EDX      ; 004eb3f3
    MOV dword ptr [ESP + 0x3c],ECX      ; 004eb3f7
    MOV dword ptr [ESP + 0x38],ECX      ; 004eb3fb
    MOV EAX,[0x00622c18]                ; 004eb3ff | g_CDemonSetPtr
        ;   Label: LAB_004eb3ff
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004eb404
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004eb408 | g_CDemonSetInstance.actor_count
    JL 0x004eb429                       ; 004eb40e
        ;   XREF to: 004eb429 (CONDITIONAL_JUMP)  ; LAB_004eb429
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb410
    CMP dword ptr [EAX + 0x1ff60],0x3   ; 004eb413
    SETZ AL                             ; 004eb41a
    AND EAX,0xff                        ; 004eb41d
    MOV ESP,EBP                         ; 004eb422
    POP EBP                             ; 004eb424
    POP EDI                             ; 004eb425
    POP ESI                             ; 004eb426
    POP EBX                             ; 004eb427
    RET                                 ; 004eb428
    MOV EDX,dword ptr [ESP + 0x38]      ; 004eb429
        ;   Label: LAB_004eb429
    MOV EDI,dword ptr [0x01b68928]      ; 004eb42d | g_CDoorClassInfo.name_hash
    ADD EAX,EDX                         ; 004eb433
    PUSH EDI                            ; 004eb435
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 004eb436 | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004eb43c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004eb43d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 004eb442
    ADD ESP,0x8                         ; 004eb444
    TEST EAX,EAX                        ; 004eb447
    JZ 0x004eb595                       ; 004eb449
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb44f
    FLD float ptr [EBX + 0x20]          ; 004eb452
    FSUB float ptr [EAX + 0x20]         ; 004eb455
    FABS                                ; 004eb458
    FCOMP double ptr [0x005e4845]       ; 004eb45a | DAT_005e4845
    FNSTSW AX                           ; 004eb460
    SAHF                                ; 004eb462
    JA 0x004eb595                       ; 004eb463
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb469
    FLD float ptr [EBX + 0x24]          ; 004eb46c
    FSUB float ptr [EAX + 0x24]         ; 004eb46f
    FABS                                ; 004eb472
    FCOMP double ptr [0x005e4845]       ; 004eb474 | DAT_005e4845
    FNSTSW AX                           ; 004eb47a
    SAHF                                ; 004eb47c
    JA 0x004eb595                       ; 004eb47d
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb483
    FLD float ptr [EBX + 0x28]          ; 004eb486
    FSUB float ptr [EAX + 0x28]         ; 004eb489
    FABS                                ; 004eb48c
    FCOMP double ptr [0x005e4845]       ; 004eb48e | DAT_005e4845
    FNSTSW AX                           ; 004eb494
    SAHF                                ; 004eb496
    JA 0x004eb595                       ; 004eb497
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004eb49d
    JNZ 0x004eb595                      ; 004eb4a4
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    LEA EAX,[EBX + 0x9bc]               ; 004eb4aa
    PUSH EAX                            ; 004eb4b0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004eb4b1
    PUSH EDI                            ; 004eb4b4
    LEA ESI,[ESP + 0x8]                 ; 004eb4b5
    CALL core_actor.cpp_FUN_00408bb0    ; 004eb4b9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0x14]                ; 004eb4be
    LEA ESI,[ESP + 0x8]                 ; 004eb4c2
    ADD ESP,0x8                         ; 004eb4c6
    MOVSD ES:EDI,ESI                    ; 004eb4c9
    MOVSD ES:EDI,ESI                    ; 004eb4ca
    MOVSD ES:EDI,ESI                    ; 004eb4cb
    FLD float ptr [ESP + 0x14]          ; 004eb4cc
    FLDZ                                ; 004eb4d0
    FCOMPP                              ; 004eb4d2
    FNSTSW AX                           ; 004eb4d4
    SAHF                                ; 004eb4d6
    JNC 0x004eb595                      ; 004eb4d7
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    LEA EAX,[ESP + 0xc]                 ; 004eb4dd
    PUSH EAX                            ; 004eb4e1
    LEA ESI,[ESP + 0x28]                ; 004eb4e2
    LEA EDI,[ESP + 0x1c]                ; 004eb4e6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004eb4ea
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x28]                ; 004eb4ef
    ADD ESP,0x4                         ; 004eb4f3
    MOVSD ES:EDI,ESI                    ; 004eb4f6
    MOVSD ES:EDI,ESI                    ; 004eb4f7
    MOVSD ES:EDI,ESI                    ; 004eb4f8
    FLD float ptr [ESP + 0x1c]          ; 004eb4f9
    FABS                                ; 004eb4fd
    FCOMP float ptr [0x005e484d]        ; 004eb4ff | DAT_005e484d
    FNSTSW AX                           ; 004eb505
    SAHF                                ; 004eb507
    JA 0x004eb595                       ; 004eb508
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    FLD float ptr [ESP + 0x10]          ; 004eb50e
    FABS                                ; 004eb512
    FCOMP double ptr [0x005e4855]       ; 004eb514 | DAT_005e4855
    FNSTSW AX                           ; 004eb51a
    SAHF                                ; 004eb51c
    JA 0x004eb595                       ; 004eb51d
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    FLD float ptr [ESP + 0xc]           ; 004eb523
    FMUL ST0                            ; 004eb527
    FLD float ptr [ESP + 0x14]          ; 004eb529
    FMUL ST0                            ; 004eb52d
    XOR EAX,EAX                         ; 004eb52f
    FADDP                               ; 004eb531
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb533
    FSQRT                               ; 004eb537
    FST float ptr [ESP + 0x34]          ; 004eb539
    FCOMP float ptr [ESP + 0x30]        ; 004eb53d
    FNSTSW AX                           ; 004eb541
    SAHF                                ; 004eb543
    JNC 0x004eb595                      ; 004eb544
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    MOV EDX,dword ptr [EBP + 0x18]      ; 004eb546
    PUSH EDX                            ; 004eb549
    MOV ECX,dword ptr [EBP + 0x14]      ; 004eb54a
    PUSH ECX                            ; 004eb54d
    PUSH EBX                            ; 004eb54e
    CALL core_door.cpp_CDoor_getMoveType_FUN_00478b40 ; 004eb54f
        ;   XREF to: 00478b40 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00478b40(CDoor * this_ptr, CDemonActor * opener)
    ADD ESP,0xc                         ; 004eb554
    TEST EAX,EAX                        ; 004eb557
    JZ 0x004eb595                       ; 004eb559
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004eb55b
    JZ 0x004eb595                       ; 004eb562
        ;   XREF to: 004eb595 (CONDITIONAL_JUMP)  ; LAB_004eb595
    MOV ESI,dword ptr [ESP + 0x34]      ; 004eb564
    MOV dword ptr [ESP + 0x30],ESI      ; 004eb568
    MOV ESI,dword ptr [EBP + 0x14]      ; 004eb56c
    MOV dword ptr [ESI + 0x1ff60],0x3   ; 004eb56f
    MOV dword ptr [ESI + 0x1ff70],0x0   ; 004eb579
    MOV dword ptr [ESI + 0x1ff64],EBX   ; 004eb583
    MOV dword ptr [ESI + 0x1ff68],EBX   ; 004eb589
    MOV dword ptr [ESI + 0x1ff6c],EAX   ; 004eb58f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004eb595
        ;   Label: LAB_004eb595
    MOV EDI,dword ptr [ESP + 0x38]      ; 004eb599
    INC EAX                             ; 004eb59d
    ADD EDI,0x4                         ; 004eb59e
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eb5a1
    MOV dword ptr [ESP + 0x38],EDI      ; 004eb5a5
    JMP 0x004eb3ff                      ; 004eb5a9
        ;   XREF to: 004eb3ff (UNCONDITIONAL_JUMP)  ; LAB_004eb3ff

