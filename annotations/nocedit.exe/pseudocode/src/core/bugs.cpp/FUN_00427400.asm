; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_00427400(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_FUN_00425cc0 at 00425d6f
;
; Referenced Globals:
;   TerminatedCString s_s_swarming_on_s_at_LOD_d_00616e63
;   CConsole* g_CConsolePtr = 0083b1a4
;   undefined4 DAT_00822f48
;   undefined4 DAT_00822f4c
;   undefined4 DAT_00822f50
;   CConsole g_ConsolePtr
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_bugs.cpp_FUN_00425660
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427400
        ;   Label: core_bugs.cpp_FUN_00427400
    PUSH ESI                            ; 00427401
    PUSH EDI                            ; 00427402
    PUSH EBP                            ; 00427403
    SUB ESP,0x8                         ; 00427404
    MOV EBX,dword ptr [ESP + 0x20]      ; 00427407
    MOV EDX,dword ptr [0x02db880c]      ; 0042740b | g_CHeroClassInfo.name_hash
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427411
    PUSH EDX                            ; 00427415
    MOV dword ptr [EAX + 0x12afc],0x0   ; 00427416
    PUSH EBX                            ; 00427420
    MOV dword ptr [EAX + 0x12af8],0x0   ; 00427421
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042742b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00427430
    TEST EAX,EAX                        ; 00427433
    JZ 0x00427446                       ; 00427435
        ;   XREF to: 00427446 (CONDITIONAL_JUMP)  ; LAB_00427446
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427437
    ADD EAX,0x158                       ; 0042743b
    MOV dword ptr [EDX + 0x12afc],EAX   ; 00427440
    MOV ECX,dword ptr [0x02cf2bf0]      ; 00427446 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00427446
    PUSH ECX                            ; 0042744c
    PUSH EBX                            ; 0042744d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042744e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00427453
    TEST EAX,EAX                        ; 00427456
    JZ 0x00427474                       ; 00427458
        ;   XREF to: 00427474 (CONDITIONAL_JUMP)  ; LAB_00427474
    MOV CL,byte ptr [EAX + 0x23b8]      ; 0042745a
    LEA EDX,[EAX + 0x158]               ; 00427460
    TEST CL,CL                          ; 00427466
    JZ 0x00427474                       ; 00427468
        ;   XREF to: 00427474 (CONDITIONAL_JUMP)  ; LAB_00427474
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042746a
    MOV dword ptr [EAX + 0x12afc],EDX   ; 0042746e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427474
        ;   Label: LAB_00427474
    CMP dword ptr [EAX + 0x12afc],0x0   ; 00427478
    JZ 0x0042766a                       ; 0042747f
        ;   XREF to: 0042766a (CONDITIONAL_JUMP)  ; LAB_0042766a
    MOV dword ptr [EAX + 0xbebc],0x1    ; 00427485
    MOV dword ptr [EAX + 0x12af8],EBX   ; 0042748f
    MOV EAX,dword ptr [EAX + 0x12af8]   ; 00427495
    MOV EAX,dword ptr [EAX + 0x64]      ; 0042749b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042749e
    INC EAX                             ; 004274a2
    MOV dword ptr [EDX + 0x12b30],0x0   ; 004274a3
    MOV dword ptr [EDX + 0x64],EAX      ; 004274ad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004274b0
        ;   Label: LAB_004274b0
    MOV EDI,dword ptr [EAX + 0x12afc]   ; 004274b4
    PUSH EDI                            ; 004274ba
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004274bb
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004274c0
    MOV EDX,EAX                         ; 004274c3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004274c5
    MOV EAX,dword ptr [EAX + 0x12b30]   ; 004274c9
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c] ; 004274cf
    CMP EDX,0x2bc                       ; 004274d3
    JG 0x00427672                       ; 004274d9
        ;   XREF to: 00427672 (CONDITIONAL_JUMP)  ; LAB_00427672
    PUSH EAX                            ; 004274df
    PUSH EBX                            ; 004274e0
    MOV EBP,dword ptr [ESP + 0x24]      ; 004274e1
    PUSH EBP                            ; 004274e5
    PUSH 0x616e63                       ; 004274e6 | = "%s swarming on %s at LOD %d\n"
    MOV EAX,[0x0066e8e0]                ; 004274eb | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 004274f0 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004274f1
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004274f6
    MOV EDX,dword ptr [EBP + 0x12afc]   ; 004274f9
    PUSH EDX                            ; 004274ff
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00427500
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBP + 0x12b30]   ; 00427505
    ADD ESP,0x4                         ; 0042750b
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c] ; 0042750e
    PUSH ECX                            ; 00427512
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x54] ; 00427513
    PUSH EBX                            ; 00427517
    PUSH EBP                            ; 00427518
    CALL core_bugs.cpp_FUN_00425660     ; 00427519
        ;   XREF to: 00425660 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00425660()
    ADD ESP,0xc                         ; 0042751e
    MOV EDI,dword ptr [EBP + 0x12b30]   ; 00427521
    PUSH EDI                            ; 00427527
    MOV ESI,EBP                         ; 00427528
    MOV EBP,dword ptr [EBP + 0x12afc]   ; 0042752a
    PUSH EBP                            ; 00427530
    MOV EBX,ESI                         ; 00427531
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 00427533
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00427538
    MOV EDX,ESI                         ; 0042753b
    MOV EBX,dword ptr [EBX + 0x12afc]   ; 0042753d
    XOR EAX,EAX                         ; 00427543
    MOV ECX,dword ptr [EDX + 0x12b34]   ; 00427545
    MOV EBX,dword ptr [EBX + 0x2234]    ; 0042754b
    TEST ECX,ECX                        ; 00427551
    JLE 0x00427570                      ; 00427553
        ;   XREF to: 00427570 (CONDITIONAL_JUMP)  ; LAB_00427570
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00427555
    XOR EDX,EDX                         ; 00427559
    MOV dword ptr [EDX + 0x822f48],EAX  ; 0042755b | DAT_00822f48 | DAT_00822f4c
        ;   Label: LAB_0042755b
    INC EAX                             ; 00427561
    MOV EBP,dword ptr [ECX + 0x12b34]   ; 00427562
    ADD EDX,0x4                         ; 00427568
    CMP EAX,EBP                         ; 0042756b
    JL 0x0042755b                       ; 0042756d
        ;   XREF to: 0042755b (CONDITIONAL_JUMP)  ; LAB_0042755b
    NOP                                 ; 0042756f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427570
        ;   Label: LAB_00427570
    MOV EAX,dword ptr [EAX + 0x12b34]   ; 00427574
    SUB EAX,0x2                         ; 0042757a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042757d
    TEST EAX,EAX                        ; 00427581
    JL 0x004275d6                       ; 00427583
        ;   XREF to: 004275d6 (CONDITIONAL_JUMP)  ; LAB_004275d6
    MOV EBP,dword ptr [ESP + 0x4]       ; 00427585
        ;   Label: LAB_00427585
    TEST EBP,EBP                        ; 00427589
    JL 0x004275c9                       ; 0042758b
        ;   XREF to: 004275c9 (CONDITIONAL_JUMP)  ; LAB_004275c9
    SHL EBP,0x2                         ; 0042758d
    XOR EAX,EAX                         ; 00427590
    IMUL EDX,dword ptr [EAX + 0x822f48],0xc ; 00427592 | DAT_00822f48 | DAT_00822f4c
        ;   Label: LAB_00427592
    IMUL ECX,dword ptr [EAX + 0x822f4c],0xc ; 00427599 | DAT_00822f4c | DAT_00822f50
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 004275a0
    CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4] ; 004275a4
    JLE 0x004275c2                      ; 004275a8
        ;   XREF to: 004275c2 (CONDITIONAL_JUMP)  ; LAB_004275c2
    LEA ECX,[EAX + 0x4]                 ; 004275aa
    ADD ECX,0x822f48                    ; 004275ad | DAT_00822f48
    MOV EDX,0x822f48                    ; 004275b3 | DAT_00822f48
    MOV ESI,dword ptr [ECX]             ; 004275b8 | DAT_00822f4c
    MOV EDI,dword ptr [EDX + EAX*0x1]   ; 004275ba | DAT_00822f48
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 004275bd | DAT_00822f48
    MOV dword ptr [ECX],EDI             ; 004275c0 | DAT_00822f4c
    ADD EAX,0x4                         ; 004275c2
        ;   Label: LAB_004275c2
    CMP EAX,EBP                         ; 004275c5
    JLE 0x00427592                      ; 004275c7
        ;   XREF to: 00427592 (CONDITIONAL_JUMP)  ; LAB_00427592
    MOV EDX,dword ptr [ESP + 0x4]       ; 004275c9
        ;   Label: LAB_004275c9
    DEC EDX                             ; 004275cd
    MOV dword ptr [ESP + 0x4],EDX       ; 004275ce
    TEST EDX,EDX                        ; 004275d2
    JGE 0x00427585                      ; 004275d4
        ;   XREF to: 00427585 (CONDITIONAL_JUMP)  ; LAB_00427585
    MOV EDX,dword ptr [0x00822f48]      ; 004275d6 | DAT_00822f48
        ;   Label: LAB_004275d6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004275dc
    SUB EAX,EDX                         ; 004275e3
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004275e5
    ADD EAX,0x2a                        ; 004275e9
    MOV dword ptr [ESP],EAX             ; 004275ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004275ef
    XOR ESI,ESI                         ; 004275f3
    MOV EDI,dword ptr [EAX + 0xbec0]    ; 004275f5
    XOR EBP,EBP                         ; 004275fb
    TEST EDI,EDI                        ; 004275fd
    JLE 0x0042766a                      ; 004275ff
        ;   XREF to: 0042766a (CONDITIONAL_JUMP)  ; LAB_0042766a
    MOV EDI,EAX                         ; 00427601
    MOV dword ptr [EDI + 0xbef0],0xffffffff ; 00427603
        ;   Label: LAB_00427603
    MOV EAX,dword ptr [ESI*0x4 + 0x822f48] ; 0042760d | DAT_00822f48
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427614
    MOV dword ptr [EDI + 0xbef4],EAX    ; 00427618
    MOV ECX,0xf                         ; 0042761e
    MOV EDX,dword ptr [EDX + 0x12b34]   ; 00427623
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427629
    SAR EDX,0x1f                        ; 0042762d
    MOV EAX,dword ptr [EAX + 0x12b34]   ; 00427630
    IDIV ECX                            ; 00427636
    PUSH EAX                            ; 00427638
    PUSH 0x0                            ; 00427639
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0042763b
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00427640
    MOV dword ptr [EDI + 0xbf00],EAX    ; 00427643
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427649
    INC ESI                             ; 0042764d
    CMP ESI,dword ptr [EAX + 0x12b34]   ; 0042764e
    JL 0x004276aa                       ; 00427654
        ;   XREF to: 004276aa (CONDITIONAL_JUMP)  ; LAB_004276aa
    XOR ESI,ESI                         ; 00427656
        ;   Label: LAB_00427656
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427658
        ;   Label: LAB_00427658
    INC EBP                             ; 0042765c
    MOV EDX,dword ptr [EAX + 0xbec0]    ; 0042765d
    ADD EDI,0x40                        ; 00427663
    CMP EBP,EDX                         ; 00427666
    JL 0x00427603                       ; 00427668
        ;   XREF to: 00427603 (CONDITIONAL_JUMP)  ; LAB_00427603
    ADD ESP,0x8                         ; 0042766a
        ;   Label: LAB_0042766a
    POP EBP                             ; 0042766d
    POP EDI                             ; 0042766e
    POP ESI                             ; 0042766f
    POP EBX                             ; 00427670
    RET                                 ; 00427671
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427672
        ;   Label: LAB_00427672
    MOV ESI,dword ptr [EDX + 0x12afc]   ; 00427676
    INC EAX                             ; 0042767c
    PUSH ESI                            ; 0042767d
    MOV dword ptr [EDX + 0x12b30],EAX   ; 0042767e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00427684
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00427689
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042768c
    MOV EAX,dword ptr [EAX]             ; 00427690
    CMP EAX,dword ptr [EDX + 0x12b30]   ; 00427692
    JG 0x004274b0                       ; 00427698
        ;   XREF to: 004274b0 (CONDITIONAL_JUMP)  ; LAB_004274b0
    MOV dword ptr [EDX + 0x12afc],0x0   ; 0042769e
    JMP 0x0042766a                      ; 004276a8
        ;   XREF to: 0042766a (UNCONDITIONAL_JUMP)  ; LAB_0042766a
    IMUL EAX,dword ptr [ESI*0x4 + 0x822f48],0xc ; 004276aa | DAT_00822f4c
        ;   Label: LAB_004276aa
    MOV ECX,dword ptr [ESP]             ; 004276b2
    CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 004276b5
    JL 0x00427656                       ; 004276b9
        ;   XREF to: 00427656 (CONDITIONAL_JUMP)  ; LAB_00427656
    JMP 0x00427658                      ; 004276bb
        ;   XREF to: 00427658 (UNCONDITIONAL_JUMP)  ; LAB_00427658

