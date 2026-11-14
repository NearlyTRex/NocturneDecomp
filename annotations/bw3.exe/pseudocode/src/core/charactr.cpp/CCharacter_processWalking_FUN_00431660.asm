; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_00431660(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[35]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0e67
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596ad7
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fc6c
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419fc7
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417e6e
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426985
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00443407
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004451da
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598ad3
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 00455c96
;   ... and 25 more
;
; Referenced Globals:
;   undefined4 s_pB_s_can_t_figure_out_ne_005b84bc+2
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_02cfd900
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_004310e0
;   core_charactr.cpp_FUN_004349d0
;   core_door.cpp_CDoor_getOpenStandPos_FUN_004650a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431660
        ;   Label: core_charactr.cpp_CCharacter_processWalking_FUN_00431660
    PUSH ESI                            ; 00431661
    PUSH EDI                            ; 00431662
    PUSH EBP                            ; 00431663
    SUB ESP,0x5c                        ; 00431664
    MOV EBX,dword ptr [ESP + 0x70]      ; 00431667
    CMP dword ptr [EBX + 0x2704],0x0    ; 0043166b
    JNZ 0x00431681                      ; 00431672
        ;   XREF to: 00431681 (CONDITIONAL_JUMP)  ; LAB_00431681
    CMP dword ptr [EBX + 0x2740],0x0    ; 00431674
    JZ 0x0043170a                       ; 0043167b
        ;   XREF to: 0043170a (CONDITIONAL_JUMP)  ; LAB_0043170a
    FLD float ptr [EBX + 0x2710]        ; 00431681
        ;   Label: LAB_00431681
    FLDZ                                ; 00431687
    FCOMPP                              ; 00431689
    FNSTSW AX                           ; 0043168b
    SAHF                                ; 0043168d
    JA 0x00431753                       ; 0043168e
        ;   XREF to: 00431753 (CONDITIONAL_JUMP)  ; LAB_00431753
    FLD float ptr [EBX + 0x2710]        ; 00431694
    FSUB float ptr [ESP + 0x74]         ; 0043169a
    FST float ptr [EBX + 0x2710]        ; 0043169e
    FLDZ                                ; 004316a4
    FCOMPP                              ; 004316a6
    FNSTSW AX                           ; 004316a8
    SAHF                                ; 004316aa
    JC 0x00431753                       ; 004316ab
        ;   XREF to: 00431753 (CONDITIONAL_JUMP)  ; LAB_00431753
    MOV dword ptr [EBX + 0x273c],0x0    ; 004316b1
    MOV EDI,dword ptr [EBX + 0xcdc8]    ; 004316bb
    MOV dword ptr [EBX + 0x2710],0x0    ; 004316c1
    TEST EDI,EDI                        ; 004316cb
    JZ 0x0043170e                       ; 004316cd
        ;   XREF to: 0043170e (CONDITIONAL_JUMP)  ; LAB_0043170e
    MOV EBP,dword ptr [EBX + 0x2740]    ; 004316cf
        ;   Label: LAB_004316cf
    MOV dword ptr [EBX + 0x2704],0x0    ; 004316d5
    TEST EBP,EBP                        ; 004316df
    JZ 0x004316f3                       ; 004316e1
        ;   XREF to: 004316f3 (CONDITIONAL_JUMP)  ; LAB_004316f3
    PUSH EBX                            ; 004316e3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004316e4
    CALL dword ptr [EAX + 0x120]        ; 004316ea
    ADD ESP,0x4                         ; 004316f0
    MOV EAX,0x1                         ; 004316f3
        ;   Label: LAB_004316f3
    MOV dword ptr [EBX + 0xcdc8],0x0    ; 004316f8
    ADD ESP,0x5c                        ; 00431702
        ;   Label: LAB_00431702
    POP EBP                             ; 00431705
    POP EDI                             ; 00431706
    POP ESI                             ; 00431707
    POP EBX                             ; 00431708
    RET                                 ; 00431709
    XOR EAX,EAX                         ; 0043170a
        ;   Label: LAB_0043170a
    JMP 0x00431702                      ; 0043170c
        ;   XREF to: 00431702 (UNCONDITIONAL_JUMP)  ; LAB_00431702
    MOV EDX,dword ptr [EBX + 0x2704]    ; 0043170e
        ;   Label: LAB_0043170e
    LEA EAX,[EBX + 0x20]                ; 00431714
    MOV ECX,dword ptr [EDX + 0x20]      ; 00431717
    MOV dword ptr [EAX],ECX             ; 0043171a
    MOV ECX,dword ptr [EDX + 0x24]      ; 0043171c
    MOV dword ptr [EAX + 0x4],ECX       ; 0043171f
    MOV ECX,dword ptr [EDX + 0x28]      ; 00431722
    MOV dword ptr [EAX + 0x8],ECX       ; 00431725
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00431728
    MOV dword ptr [EAX + 0xc],EDX       ; 0043172b
    MOV EDX,dword ptr [EBX + 0x2704]    ; 0043172e
    LEA EAX,[EBX + 0x30]                ; 00431734
    ADD EDX,0x30                        ; 00431737
    CMP EAX,EDX                         ; 0043173a
    JZ 0x004316cf                       ; 0043173c
        ;   XREF to: 004316cf (CONDITIONAL_JUMP)  ; LAB_004316cf
    MOV ECX,dword ptr [EDX]             ; 0043173e
    MOV dword ptr [EAX],ECX             ; 00431740
    MOV ECX,dword ptr [EDX + 0x4]       ; 00431742
    MOV dword ptr [EAX + 0x4],ECX       ; 00431745
    MOV ECX,dword ptr [EDX + 0x8]       ; 00431748
    MOV dword ptr [EAX + 0x8],ECX       ; 0043174b
    JMP 0x004316cf                      ; 0043174e
        ;   XREF to: 004316cf (UNCONDITIONAL_JUMP)  ; LAB_004316cf
    MOV ESI,dword ptr [EBX + 0x2740]    ; 00431753
        ;   Label: LAB_00431753
    TEST ESI,ESI                        ; 00431759
    JZ 0x004318d7                       ; 0043175b
        ;   XREF to: 004318d7 (CONDITIONAL_JUMP)  ; LAB_004318d7
    LEA EAX,[EBX + 0x20]                ; 00431761
    PUSH EAX                            ; 00431764
    LEA EAX,[EBX + 0x2744]              ; 00431765
    PUSH EAX                            ; 0043176b
    PUSH ESI                            ; 0043176c
    LEA ESI,[ESP + 0x30]                ; 0043176d
    CALL core_door.cpp_CDoor_getOpenStandPos_FUN_004650a0 ; 00431771
        ;   XREF to: 004650a0 (UNCONDITIONAL_CALL)  ; float * core_door.cpp_CDoor_getOpenStandPos_FUN_004650a0(CDoor * this_ptr, float * param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00431776
    LEA EDI,[ESP + 0x3c]                ; 00431779
    PUSH 0x0                            ; 0043177d
    LEA ESI,[ESP + 0x28]                ; 0043177f
    PUSH 0x0                            ; 00431783
    MOVSD ES:EDI,ESI                    ; 00431785
    MOVSD ES:EDI,ESI                    ; 00431786
    MOVSD ES:EDI,ESI                    ; 00431787
    PUSH 0x2cfd900                      ; 00431788 | DAT_02cfd900
    MOV EAX,dword ptr [EBX + 0x2740]    ; 0043178d
    PUSH EAX                            ; 00431793
    MOV EDX,dword ptr [EAX + 0x154]     ; 00431794
    CALL dword ptr [EDX + 0xc4]         ; 0043179a
    ADD ESP,0x4                         ; 004317a0
    PUSH EAX                            ; 004317a3
    LEA EAX,[ESP + 0x4c]                ; 004317a4
    PUSH EAX                            ; 004317a8
    PUSH EBX                            ; 004317a9
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004317aa
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004317af
    TEST EAX,EAX                        ; 004317b2
    JL 0x0043188f                       ; 004317b4
        ;   XREF to: 0043188f (CONDITIONAL_JUMP)  ; LAB_0043188f
    JLE 0x004318c0                      ; 004317ba
        ;   XREF to: 004318c0 (CONDITIONAL_JUMP)  ; LAB_004318c0
    MOV EAX,dword ptr [EBX + 0x2740]    ; 004317c0
    ADD EAX,0x9bc                       ; 004317c6
    PUSH EAX                            ; 004317cb
    PUSH EBX                            ; 004317cc
    LEA ESI,[ESP + 0x20]                ; 004317cd
    LEA EDI,[ESP + 0x8]                 ; 004317d1
    CALL core_actor.cpp_FUN_00408bf0    ; 004317d5
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x20]                ; 004317da
    ADD ESP,0x8                         ; 004317de
    MOV EAX,ESP                         ; 004317e1
    MOVSD ES:EDI,ESI                    ; 004317e3
    MOVSD ES:EDI,ESI                    ; 004317e4
    MOVSD ES:EDI,ESI                    ; 004317e5
    PUSH EAX                            ; 004317e6
    LEA ESI,[ESP + 0x34]                ; 004317e7
    LEA EDI,[ESP + 0x10]                ; 004317eb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004317ef
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x34]                ; 004317f4
    ADD ESP,0x4                         ; 004317f8
    MOVSD ES:EDI,ESI                    ; 004317fb
    MOVSD ES:EDI,ESI                    ; 004317fc
    MOVSD ES:EDI,ESI                    ; 004317fd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004317fe
    MOV dword ptr [EBX + 0x2508],EAX    ; 00431802
    CMP EAX,0x3f20d97c                  ; 00431808
    JGE 0x0043189b                      ; 0043180d
        ;   XREF to: 0043189b (CONDITIONAL_JUMP)  ; LAB_0043189b
    PUSH EBX                            ; 00431813
    MOV EAX,dword ptr [EBX + 0x154]     ; 00431814
    MOV dword ptr [EBX + 0x273c],0x0    ; 0043181a
    CALL dword ptr [EAX + 0x120]        ; 00431824
    ADD ESP,0x4                         ; 0043182a
    MOV EAX,dword ptr [EBX + 0x2508]    ; 0043182d
        ;   Label: LAB_0043182d
    MOV dword ptr [ESP + 0x54],EAX      ; 00431833
    MOV EAX,dword ptr [EBX + 0x2528]    ; 00431837
    PUSH dword ptr [ESP + 0x54]         ; 0043183d
    MOV dword ptr [ESP + 0x54],EAX      ; 00431841
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00431845
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043184a
    FLD float ptr [ESP + 0x5c]          ; 0043184e
    ADD ESP,0x4                         ; 00431852
    FLD float ptr [ESP + 0x50]          ; 00431855
    FXCH                                ; 00431859
    FST float ptr [ESP + 0x54]          ; 0043185b
    FXCH                                ; 0043185f
    FCHS                                ; 00431861
    FSTP float ptr [ESP + 0x48]         ; 00431863
    FCOMP float ptr [ESP + 0x48]        ; 00431867
    FNSTSW AX                           ; 0043186b
    SAHF                                ; 0043186d
    JNC 0x004318a7                      ; 0043186e
        ;   XREF to: 004318a7 (CONDITIONAL_JUMP)  ; LAB_004318a7
    MOV EAX,dword ptr [ESP + 0x48]      ; 00431870
    MOV dword ptr [ESP + 0x4c],EAX      ; 00431874
        ;   Label: LAB_00431874
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00431878
    MOV dword ptr [EBX + 0x2508],EAX    ; 0043187c
    MOV EAX,0x1                         ; 00431882
        ;   Label: LAB_00431882
    ADD ESP,0x5c                        ; 00431887
    POP EBP                             ; 0043188a
    POP EDI                             ; 0043188b
    POP ESI                             ; 0043188c
    POP EBX                             ; 0043188d
    RET                                 ; 0043188e
    MOV dword ptr [EBX + 0x273c],0x3    ; 0043188f
        ;   Label: LAB_0043188f
    JMP 0x00431882                      ; 00431899
        ;   XREF to: 00431882 (UNCONDITIONAL_JUMP)  ; LAB_00431882
    MOV dword ptr [EBX + 0x273c],0x1    ; 0043189b
        ;   Label: LAB_0043189b
    JMP 0x0043182d                      ; 004318a5
        ;   XREF to: 0043182d (UNCONDITIONAL_JUMP)  ; LAB_0043182d
    FLD float ptr [ESP + 0x54]          ; 004318a7
        ;   Label: LAB_004318a7
    FCOMP float ptr [ESP + 0x50]        ; 004318ab
    FNSTSW AX                           ; 004318af
    SAHF                                ; 004318b1
    JBE 0x004318ba                      ; 004318b2
        ;   XREF to: 004318ba (CONDITIONAL_JUMP)  ; LAB_004318ba
    MOV EAX,dword ptr [ESP + 0x50]      ; 004318b4
    JMP 0x00431874                      ; 004318b8
        ;   XREF to: 00431874 (UNCONDITIONAL_JUMP)  ; LAB_00431874
    MOV EAX,dword ptr [ESP + 0x54]      ; 004318ba
        ;   Label: LAB_004318ba
    JMP 0x00431874                      ; 004318be
        ;   XREF to: 00431874 (UNCONDITIONAL_JUMP)  ; LAB_00431874
    MOV dword ptr [EBX + 0x273c],0x1    ; 004318c0
        ;   Label: LAB_004318c0
    MOV EAX,0x1                         ; 004318ca
    ADD ESP,0x5c                        ; 004318cf
    POP EBP                             ; 004318d2
    POP EDI                             ; 004318d3
    POP ESI                             ; 004318d4
    POP EBX                             ; 004318d5
    RET                                 ; 004318d6
    FLD float ptr [EBX + 0x2708]        ; 004318d7
        ;   Label: LAB_004318d7
    FLDZ                                ; 004318dd
    MOV ESI,dword ptr [EBX + 0x2704]    ; 004318df
    FCOMPP                              ; 004318e5
    FNSTSW AX                           ; 004318e7
    SAHF                                ; 004318e9
    JA 0x004318f5                       ; 004318ea
        ;   XREF to: 004318f5 (CONDITIONAL_JUMP)  ; LAB_004318f5
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004318ec
    JZ 0x0043191f                       ; 004318f3
        ;   XREF to: 0043191f (CONDITIONAL_JUMP)  ; LAB_0043191f
    LEA EAX,[EBX + 0x273c]              ; 004318f5
        ;   Label: LAB_004318f5
    PUSH EAX                            ; 004318fb
    PUSH dword ptr [EBX + 0x270c]       ; 004318fc
    PUSH dword ptr [EBX + 0x2708]       ; 00431902
    PUSH ESI                            ; 00431908
    PUSH EBX                            ; 00431909
    CALL core_charactr.cpp_FUN_004310e0 ; 0043190a
        ;   XREF to: 004310e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004310e0()
    ADD ESP,0x14                        ; 0043190f
    MOV EAX,0x1                         ; 00431912
    ADD ESP,0x5c                        ; 00431917
    POP EBP                             ; 0043191a
    POP EDI                             ; 0043191b
    POP ESI                             ; 0043191c
    POP EBX                             ; 0043191d
    RET                                 ; 0043191e
    MOV EBP,dword ptr [0x02d0bcd8]      ; 0043191f | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_0043191f
    PUSH EBP                            ; 00431925
    PUSH ESI                            ; 00431926
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00431927
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0043192c
    TEST EAX,EAX                        ; 0043192f
    JZ 0x004318f5                       ; 00431931
        ;   XREF to: 004318f5 (CONDITIONAL_JUMP)  ; LAB_004318f5
    PUSH EAX                            ; 00431933
    PUSH EBX                            ; 00431934
    CALL core_charactr.cpp_FUN_004349d0 ; 00431935
        ;   XREF to: 004349d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004349d0()
    ADD ESP,0x8                         ; 0043193a
    MOV ESI,EAX                         ; 0043193d
    TEST EAX,EAX                        ; 0043193f
    JNZ 0x004318f5                      ; 00431941
        ;   XREF to: 004318f5 (CONDITIONAL_JUMP)  ; LAB_004318f5
    MOV EAX,dword ptr [EBX + 0x2704]    ; 00431943
    PUSH EAX                            ; 00431949
    PUSH EBX                            ; 0043194a
    PUSH 0x5b84be                       ; 0043194b | s_pB_s_can_t_figure_out_ne_005b84bc+2
    MOV EDX,dword ptr [0x005f1690]      ; 00431950 | g_CConsolePtr
    PUSH EDX                            ; 00431956 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00431957
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 0043195c
    ADD ESP,0x10                        ; 00431961
    ADD ESP,0x5c                        ; 00431964
    POP EBP                             ; 00431967
    POP EDI                             ; 00431968
    POP ESI                             ; 00431969
    POP EBX                             ; 0043196a
    RET                                 ; 0043196b

