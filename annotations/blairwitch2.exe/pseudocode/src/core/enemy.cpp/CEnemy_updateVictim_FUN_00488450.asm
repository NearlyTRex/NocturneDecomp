; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00488450(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_Capture_005d2dd8+1
;   TerminatedCString s_s_can_see_hero_005d2de1
;   undefined4 DAT_005d2df5
;   undefined4 DAT_005f6068
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01c264e4
;   undefined4 DAT_01c28424
;   undefined4 g_CGameInstance.field448_0x1f0
;   undefined4 g_CGameInstance.field492_0x24c
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_enemy.cpp_FUN_00488320
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488450
        ;   Label: core_enemy.cpp_CEnemy_updateVictim_FUN_00488450
    PUSH ESI                            ; 00488451
    PUSH EDI                            ; 00488452
    PUSH EBP                            ; 00488453
    MOV EBP,ESP                         ; 00488454
    SUB ESP,0x50                        ; 00488456
    AND ESP,0xfffffff8                  ; 00488459
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048845c
    MOV EAX,dword ptr [EAX + 0x10aec]   ; 0048845f
    MOV dword ptr [ESP],EAX             ; 00488465
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488468
    MOV EDX,dword ptr [EAX + 0x10af0]   ; 0048846b
    TEST EDX,EDX                        ; 00488471
    JZ 0x004884b2                       ; 00488473
        ;   XREF to: 004884b2 (CONDITIONAL_JUMP)  ; LAB_004884b2
    CMP EDX,dword ptr [0x005f6068]      ; 00488475 | DAT_005f6068
    JNZ 0x004884a5                      ; 0048847b
        ;   XREF to: 004884a5 (CONDITIONAL_JUMP)  ; LAB_004884a5
    MOV dword ptr [EAX + 0x10a78],0x0   ; 0048847d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488487
        ;   Label: LAB_00488487
    MOV dword ptr [EAX + 0x10a6c],0x0   ; 0048848a
    MOV dword ptr [EAX + 0x10a7c],0x0   ; 00488494
    MOV ESP,EBP                         ; 0048849e
        ;   Label: LAB_0048849e
    POP EBP                             ; 004884a0
    POP EDI                             ; 004884a1
    POP ESI                             ; 004884a2
    POP EBX                             ; 004884a3
    RET                                 ; 004884a4
    MOV EAX,EDX                         ; 004884a5
        ;   Label: LAB_004884a5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004884a7
    MOV dword ptr [EDX + 0x10a78],EAX   ; 004884aa
    JMP 0x00488487                      ; 004884b0
        ;   XREF to: 00488487 (UNCONDITIONAL_JUMP)  ; LAB_00488487
    MOV EAX,[0x00616494]                ; 004884b2 | g_CGamePtr
        ;   Label: LAB_004884b2
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004884b7 | g_CGameInstance.field448_0x1f0
    JNZ 0x004884c9                      ; 004884be
        ;   XREF to: 004884c9 (CONDITIONAL_JUMP)  ; LAB_004884c9
    CMP dword ptr [EAX + 0x24c],0x0     ; 004884c0 | g_CGameInstance.field492_0x24c
    JNZ 0x004884f1                      ; 004884c7
        ;   XREF to: 004884f1 (CONDITIONAL_JUMP)  ; LAB_004884f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004884c9
        ;   Label: LAB_004884c9
    MOV dword ptr [EAX + 0x10a6c],0x0   ; 004884cc
    MOV dword ptr [EAX + 0x10a7c],0x0   ; 004884d6
    MOV dword ptr [EAX + 0x10a78],0x0   ; 004884e0
    MOV ESP,EBP                         ; 004884ea
    POP EBP                             ; 004884ec
    POP EDI                             ; 004884ed
    POP ESI                             ; 004884ee
    POP EBX                             ; 004884ef
    RET                                 ; 004884f0
    PUSH 0x5d2dd9                       ; 004884f1 | s_Capture_005d2dd8+1
        ;   Label: LAB_004884f1
    MOV ESI,dword ptr [0x006141f0]      ; 004884f6 | DAT_006141f0
    PUSH ESI                            ; 004884fc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004884fd
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00488502
    TEST EAX,EAX                        ; 00488505
    JNZ 0x004884c9                      ; 00488507
        ;   XREF to: 004884c9 (CONDITIONAL_JUMP)  ; LAB_004884c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488509
    FLD float ptr [EAX + 0x10a7c]       ; 0048850c
    FSUB float ptr [EBP + 0x18]         ; 00488512
    FST float ptr [EAX + 0x10a7c]       ; 00488515
    FLDZ                                ; 0048851b
    FCOMPP                              ; 0048851d
    FNSTSW AX                           ; 0048851f
    SAHF                                ; 00488521
    JNC 0x0048857e                      ; 00488522
        ;   XREF to: 0048857e (CONDITIONAL_JUMP)  ; LAB_0048857e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488524
    MOV EBX,dword ptr [EAX + 0x10a78]   ; 00488527
    TEST EBX,EBX                        ; 0048852d
    JNZ 0x0048853e                      ; 0048852f
        ;   XREF to: 0048853e (CONDITIONAL_JUMP)  ; LAB_0048853e
    MOV dword ptr [EAX + 0x10a7c],EBX   ; 00488531
    MOV ESP,EBP                         ; 00488537
    POP EBP                             ; 00488539
    POP EDI                             ; 0048853a
    POP ESI                             ; 0048853b
    POP EBX                             ; 0048853c
    RET                                 ; 0048853d
    PUSH EBX                            ; 0048853e
        ;   Label: LAB_0048853e
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0048853f
    CALL dword ptr [EDX + 0x114]        ; 00488545
    ADD ESP,0x4                         ; 0048854b
    TEST EAX,EAX                        ; 0048854e
    JZ 0x0048849e                       ; 00488550
        ;   XREF to: 0048849e (CONDITIONAL_JUMP)  ; LAB_0048849e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488556
    MOV dword ptr [EAX + 0x10a7c],0x0   ; 00488559
    MOV dword ptr [EAX + 0x10a6c],0x0   ; 00488563
    MOV dword ptr [EAX + 0x10a78],0x0   ; 0048856d
    MOV ESP,EBP                         ; 00488577
    POP EBP                             ; 00488579
    POP EDI                             ; 0048857a
    POP ESI                             ; 0048857b
    POP EBX                             ; 0048857c
    RET                                 ; 0048857d
    PUSH 0x3fc00000                     ; 0048857e
        ;   Label: LAB_0048857e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488583
    PUSH 0x3f000000                     ; 00488586
    MOV dword ptr [EAX + 0x10a6c],0x0   ; 0048858b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00488595
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 0048859a
    FLD float ptr [ESP + 0x54]          ; 0048859e
    ADD ESP,0x8                         ; 004885a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004885a5
    XOR EDI,EDI                         ; 004885a8
    FLD float ptr [EAX + 0x10a80]       ; 004885aa
    FMUL ST0                            ; 004885b0
    MOV dword ptr [ESP + 0x40],EDI      ; 004885b2
    MOV dword ptr [ESP + 0x3c],EDI      ; 004885b6
    ADD EAX,0x20                        ; 004885ba
    MOV dword ptr [ESP + 0x30],EDI      ; 004885bd
    MOV dword ptr [ESP + 0x38],EDI      ; 004885c1
    FXCH                                ; 004885c5
    FSTP float ptr [EAX + 0x10a5c]      ; 004885c7
    MOV dword ptr [ESP + 0x2c],EAX      ; 004885cd
    FSTP float ptr [ESP + 0x34]         ; 004885d1
    MOV EAX,[0x0061b5a8]                ; 004885d5 | g_CDemonSetPtr
        ;   Label: LAB_004885d5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004885da
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004885de | g_CDemonSetInstance.character_count
    JL 0x004886d5                       ; 004885e4
        ;   XREF to: 004886d5 (CONDITIONAL_JUMP)  ; LAB_004886d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004885ea
    MOV EDI,dword ptr [EBP + 0x14]      ; 004885ed
    ADD EAX,0x20                        ; 004885f0
    MOV EDI,dword ptr [EDI + 0x10a78]   ; 004885f3
    MOV dword ptr [ESP + 0x48],EAX      ; 004885f9
    MOV dword ptr [EAX + 0x10a58],0x0   ; 004885fd
    MOV EBX,0x60ad78ec                  ; 00488607
        ;   Label: LAB_00488607
    MOV ESI,dword ptr [ESP + 0x40]      ; 0048860c
    XOR EDX,EDX                         ; 00488610
    MOV dword ptr [ESP + 0x44],EBX      ; 00488612
    MOV EBX,0xffffffff                  ; 00488616
    TEST ESI,ESI                        ; 0048861b
    JLE 0x00488648                      ; 0048861d
        ;   XREF to: 00488648 (CONDITIONAL_JUMP)  ; LAB_00488648
    XOR ECX,ECX                         ; 0048861f
    FLD float ptr [ECX + 0x1c28424]     ; 00488621 | DAT_01c28424
        ;   Label: LAB_00488621
    FCOMP float ptr [ESP + 0x44]        ; 00488627
    FNSTSW AX                           ; 0048862b
    SAHF                                ; 0048862d
    JNC 0x0048863c                      ; 0048862e
        ;   XREF to: 0048863c (CONDITIONAL_JUMP)  ; LAB_0048863c
    MOV EAX,dword ptr [ECX + 0x1c28424] ; 00488630 | DAT_01c28424
    MOV EBX,EDX                         ; 00488636
    MOV dword ptr [ESP + 0x44],EAX      ; 00488638
    MOV EAX,dword ptr [ESP + 0x40]      ; 0048863c
        ;   Label: LAB_0048863c
    INC EDX                             ; 00488640
    ADD ECX,0x4                         ; 00488641
    CMP EDX,EAX                         ; 00488644
    JL 0x00488621                       ; 00488646
        ;   XREF to: 00488621 (CONDITIONAL_JUMP)  ; LAB_00488621
    TEST EBX,EBX                        ; 00488648
        ;   Label: LAB_00488648
    JL 0x0048849e                       ; 0048864a
        ;   XREF to: 0048849e (CONDITIONAL_JUMP)  ; LAB_0048849e
    MOV ESI,dword ptr [EBX*0x4 + 0x1c264e4] ; 00488650 | DAT_01c264e4 | g_CEnemyClassInfo.name_hash
    PUSH ESI                            ; 00488657
    MOV EDX,dword ptr [EBP + 0x14]      ; 00488658
    PUSH EDX                            ; 0048865b
    CALL core_enemy.cpp_FUN_00488320    ; 0048865c
        ;   XREF to: 00488320 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488320()
    ADD ESP,0x8                         ; 00488661
    TEST EAX,EAX                        ; 00488664
    JNZ 0x00488805                      ; 00488666
        ;   XREF to: 00488805 (CONDITIONAL_JUMP)  ; LAB_00488805
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048866c
    MOV ECX,dword ptr [EAX + 0x10af4]   ; 0048866f
    TEST ECX,ECX                        ; 00488675
    JZ 0x0048882a                       ; 00488677
        ;   XREF to: 0048882a (CONDITIONAL_JUMP)  ; LAB_0048882a
    PUSH ESI                            ; 0048867d
        ;   Label: LAB_0048867d
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0048867e
    CALL dword ptr [EAX + 0xcc]         ; 00488684
    ADD ESP,0x4                         ; 0048868a
    TEST EAX,EAX                        ; 0048868d
    JZ 0x004886b4                       ; 0048868f
        ;   XREF to: 004886b4 (CONDITIONAL_JUMP)  ; LAB_004886b4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00488691
    MOV ECX,dword ptr [EDX + 0x6c]      ; 00488694
    PUSH ECX                            ; 00488697
    LEA EDX,[ESP + 0x20]                ; 00488698
    PUSH EDX                            ; 0048869c
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048869d
    PUSH EDX                            ; 004886a1
    PUSH EAX                            ; 004886a2
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004886a3
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004886a8
    CMP EAX,0x1                         ; 004886ab
    JZ 0x0048883d                       ; 004886ae
        ;   XREF to: 0048883d (CONDITIONAL_JUMP)  ; LAB_0048883d
    MOV dword ptr [EBX*0x4 + 0x1c28424],0x7149f2ca ; 004886b4 | DAT_01c28424
        ;   Label: LAB_004886b4
    CMP ESI,EDI                         ; 004886bf
    JNZ 0x00488607                      ; 004886c1
        ;   XREF to: 00488607 (CONDITIONAL_JUMP)  ; LAB_00488607
    MOV EAX,dword ptr [EBP + 0x14]      ; 004886c7
    MOV dword ptr [EAX + 0x10a78],EDI   ; 004886ca
    JMP 0x00488607                      ; 004886d0
        ;   XREF to: 00488607 (UNCONDITIONAL_JUMP)  ; LAB_00488607
    MOV EDX,dword ptr [ESP + 0x30]      ; 004886d5
        ;   Label: LAB_004886d5
    MOV ECX,dword ptr [EBP + 0x14]      ; 004886d9
    ADD EAX,EDX                         ; 004886dc
    PUSH ECX                            ; 004886de
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 004886df
    PUSH EBX                            ; 004886e5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004886e6
    CALL dword ptr [EAX + 0xec]         ; 004886ec
    ADD ESP,0x8                         ; 004886f2
    TEST EAX,EAX                        ; 004886f5
    JZ 0x004887dc                       ; 004886f7
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    PUSH EBX                            ; 004886fd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004886fe
    CALL dword ptr [EAX + 0x114]        ; 00488704
    ADD ESP,0x4                         ; 0048870a
    TEST EAX,EAX                        ; 0048870d
    JNZ 0x004887dc                      ; 0048870f
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    PUSH EBX                            ; 00488715
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00488716
    CALL dword ptr [EAX + 0x78]         ; 0048871c
    ADD ESP,0x4                         ; 0048871f
    TEST EAX,EAX                        ; 00488722
    JNZ 0x004887dc                      ; 00488724
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    FLD float ptr [EBX + 0x2820]        ; 0048872a
    FLDZ                                ; 00488730
    FCOMPP                              ; 00488732
    FNSTSW AX                           ; 00488734
    SAHF                                ; 00488736
    JC 0x004887dc                       ; 00488737
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0048873d
    LEA EAX,[EBX + 0x20]                ; 00488741
    LEA EDI,[ESP + 0x10]                ; 00488744
    LEA ESI,[ESP + 0x4]                 ; 00488748
    FLD float ptr [EAX]                 ; 0048874c
    FLD float ptr [EAX + 0x4]           ; 0048874e
    FLD float ptr [EAX + 0x8]           ; 00488751
    FXCH ST2                            ; 00488754
    FSUB float ptr [EDX]                ; 00488756
    FXCH                                ; 00488758
    FSUB float ptr [EDX + 0x4]          ; 0048875a
    FXCH ST2                            ; 0048875d
    FSUB float ptr [EDX + 0x8]          ; 0048875f
    FXCH                                ; 00488762
    FSTP float ptr [ESP + 0x4]          ; 00488764
    FXCH                                ; 00488768
    FSTP float ptr [ESP + 0x8]          ; 0048876a
    FSTP float ptr [ESP + 0xc]          ; 0048876e
    MOVSD ES:EDI,ESI                    ; 00488772
    MOVSD ES:EDI,ESI                    ; 00488773
    MOVSD ES:EDI,ESI                    ; 00488774
    FLD float ptr [ESP + 0x14]          ; 00488775
    FABS                                ; 00488779
    FLD float ptr [ESP]                 ; 0048877b
    FCOMPP                              ; 0048877e
    FNSTSW AX                           ; 00488780
    SAHF                                ; 00488782
    JC 0x004887dc                       ; 00488783
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488785
    CMP dword ptr [EAX + 0x2814],0x0    ; 00488788
    JZ 0x004887f5                       ; 0048878f
        ;   XREF to: 004887f5 (CONDITIONAL_JUMP)  ; LAB_004887f5
    FLD float ptr [ESP + 0x14]          ; 00488791
        ;   Label: LAB_00488791
    FMUL ST0                            ; 00488795
    FLD float ptr [ESP + 0x10]          ; 00488797
    FMUL ST0                            ; 0048879b
    FADDP                               ; 0048879d
    FLD float ptr [ESP + 0x18]          ; 0048879f
    FMUL ST0                            ; 004887a3
    FADDP                               ; 004887a5
    FST float ptr [ESP + 0x28]          ; 004887a7
    FCOMP float ptr [ESP + 0x34]        ; 004887ab
    FNSTSW AX                           ; 004887af
    SAHF                                ; 004887b1
    JA 0x004887dc                       ; 004887b2
        ;   XREF to: 004887dc (CONDITIONAL_JUMP)  ; LAB_004887dc
    MOV EAX,dword ptr [ESP + 0x38]      ; 004887b4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004887b8
    MOV dword ptr [EAX + 0x1c264e4],EBX ; 004887bc | DAT_01c264e4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004887c2
    MOV dword ptr [EDX + 0x1c28424],EAX ; 004887c6 | DAT_01c28424
    MOV EAX,dword ptr [ESP + 0x40]      ; 004887cc
    LEA EDI,[EDX + 0x4]                 ; 004887d0
    INC EAX                             ; 004887d3
    MOV dword ptr [ESP + 0x38],EDI      ; 004887d4
    MOV dword ptr [ESP + 0x40],EAX      ; 004887d8
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004887dc
        ;   Label: LAB_004887dc
    MOV EDX,dword ptr [ESP + 0x30]      ; 004887e0
    INC ECX                             ; 004887e4
    ADD EDX,0x4                         ; 004887e5
    MOV dword ptr [ESP + 0x3c],ECX      ; 004887e8
    MOV dword ptr [ESP + 0x30],EDX      ; 004887ec
    JMP 0x004885d5                      ; 004887f0
        ;   XREF to: 004885d5 (UNCONDITIONAL_JUMP)  ; LAB_004885d5
    FLD float ptr [ESP + 0x14]          ; 004887f5
        ;   Label: LAB_004887f5
    FMUL float ptr [0x005d2df5]         ; 004887f9 | DAT_005d2df5
    FSTP float ptr [ESP + 0x14]         ; 004887ff
    JMP 0x00488791                      ; 00488803
        ;   XREF to: 00488791 (UNCONDITIONAL_JUMP)  ; LAB_00488791
    MOV EAX,dword ptr [EBP + 0x14]      ; 00488805
        ;   Label: LAB_00488805
    PUSH EAX                            ; 00488808
    PUSH 0x5d2de1                       ; 00488809 | = "%s can see hero\n"
    MOV dword ptr [EAX + 0x10a78],ESI   ; 0048880e
    MOV ESI,dword ptr [0x00609ed0]      ; 00488814 | g_CConsolePtr
    PUSH ESI                            ; 0048881a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0048881b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00488820
    MOV ESP,EBP                         ; 00488823
    POP EBP                             ; 00488825
    POP EDI                             ; 00488826
    POP ESI                             ; 00488827
    POP EBX                             ; 00488828
    RET                                 ; 00488829
    JNZ 0x004886b4                      ; 0048882a
        ;   XREF to: 004886b4 (CONDITIONAL_JUMP)  ; LAB_004886b4
        ;   Label: LAB_0048882a
    CMP ESI,EDI                         ; 00488830
    JZ 0x0048867d                       ; 00488832
        ;   XREF to: 0048867d (CONDITIONAL_JUMP)  ; LAB_0048867d
    JMP 0x004886b4                      ; 00488838
        ;   XREF to: 004886b4 (UNCONDITIONAL_JUMP)  ; LAB_004886b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048883d
        ;   Label: LAB_0048883d
    MOV dword ptr [EAX + 0x10a78],ESI   ; 00488840
    MOV ESP,EBP                         ; 00488846
    POP EBP                             ; 00488848
    POP EDI                             ; 00488849
    POP ESI                             ; 0048884a
    POP EBX                             ; 0048884b
    RET                                 ; 0048884c

