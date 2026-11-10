; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_process_FUN_0045f5a0(CDoor *this_ptr,float delta_time)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0045f588 = 0045f5e9
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;   core_door.cpp_FUN_0045f030
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020
;   core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005380c0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f5a0
        ;   Label: core_door.cpp_CDoor_process_FUN_0045f5a0
    PUSH ESI                            ; 0045f5a1
    PUSH EDI                            ; 0045f5a2
    PUSH EBP                            ; 0045f5a3
    SUB ESP,0xf8                        ; 0045f5a4
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0045f5aa
    LEA EDI,[ESP + 0x7c]                ; 0045f5b1
    LEA ESI,[EBP + 0x20]                ; 0045f5b5
    MOVSD ES:EDI,ESI                    ; 0045f5b8
    MOVSD ES:EDI,ESI                    ; 0045f5b9
    MOVSD ES:EDI,ESI                    ; 0045f5ba
    MOV EAX,dword ptr [EBP + 0xb08]     ; 0045f5bb
    MOV EDX,dword ptr [EBP + 0xb24]     ; 0045f5c1
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045f5c7
    CMP EDX,0x2                         ; 0045f5ce
    JGE 0x0045f710                      ; 0045f5d1
        ;   XREF to: 0045f710 (CONDITIONAL_JUMP)  ; LAB_0045f710
    MOV EAX,dword ptr [EBP + 0x43c]     ; 0045f5d7
    CMP EAX,0x3                         ; 0045f5dd
    JA 0x0045f645                       ; 0045f5e0
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x45f588]  ; 0045f5e2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBP + 0x444]               ; 0045f5e9
        ;   Label: caseD_0
    PUSH EAX                            ; 0045f5ef
    MOV EBX,dword ptr [0x006141f0]      ; 0045f5f0 | DAT_006141f0
    PUSH EBX                            ; 0045f5f6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0045f5f7
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0045f5fc
    TEST EAX,EAX                        ; 0045f5ff
    JZ 0x0045f63b                       ; 0045f601
        ;   XREF to: 0045f63b (CONDITIONAL_JUMP)  ; LAB_0045f63b
    MOV DL,byte ptr [EBP + 0x9c0]       ; 0045f603
    MOV dword ptr [EBP + 0x43c],0x1     ; 0045f609
    TEST DL,DL                          ; 0045f613
    JZ 0x0045f62b                       ; 0045f615
        ;   XREF to: 0045f62b (CONDITIONAL_JUMP)  ; LAB_0045f62b
    LEA EAX,[EBP + 0x9c0]               ; 0045f617
    PUSH EAX                            ; 0045f61d
    MOV EBX,dword ptr [EBP + 0x2b0]     ; 0045f61e
    PUSH EBP                            ; 0045f624
    CALL dword ptr [EBX + 0x34]         ; 0045f625
    ADD ESP,0x8                         ; 0045f628
    PUSH EBP                            ; 0045f62b
        ;   Label: LAB_0045f62b
    MOV ESI,dword ptr [0x0061b5a8]      ; 0045f62c | g_CDemonSetPtr
    PUSH ESI                            ; 0045f632 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005380c0 ; 0045f633
        ;   XREF to: 005380c0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005380c0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045f638
    MOV dword ptr [EBP + 0xb08],0x0     ; 0045f63b
        ;   Label: LAB_0045f63b
    MOV EAX,dword ptr [EBP + 0x43c]     ; 0045f645
        ;   Label: default
    TEST EAX,EAX                        ; 0045f64b
    JBE 0x0045f903                      ; 0045f64d
        ;   XREF to: 0045f903 (CONDITIONAL_JUMP)  ; LAB_0045f903
    CMP EAX,0x2                         ; 0045f653
    JNZ 0x0045f677                      ; 0045f656
        ;   XREF to: 0045f677 (CONDITIONAL_JUMP)  ; LAB_0045f677
    CMP byte ptr [EBP + 0x50c],0x0      ; 0045f658
    JZ 0x0045f677                       ; 0045f65f
        ;   XREF to: 0045f677 (CONDITIONAL_JUMP)  ; LAB_0045f677
    LEA EAX,[EBP + 0x50c]               ; 0045f661
    PUSH EAX                            ; 0045f667
    MOV EDI,dword ptr [0x006141f0]      ; 0045f668 | DAT_006141f0
    PUSH EDI                            ; 0045f66e
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0045f66f
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
        ;   Label: LAB_0045f66f
    ADD ESP,0x8                         ; 0045f674
    PUSH EBP                            ; 0045f677
        ;   Label: LAB_0045f677
    CALL core_door.cpp_FUN_0045f030     ; 0045f678
        ;   XREF to: 0045f030 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_0045f030()
    ADD ESP,0x4                         ; 0045f67d
    FLD float ptr [EBP + 0xb08]         ; 0045f680
    FCOMP float ptr [ESP + 0xb0]        ; 0045f686
    FNSTSW AX                           ; 0045f68d
    SAHF                                ; 0045f68f
    JZ 0x0045f710                       ; 0045f690
        ;   XREF to: 0045f710 (CONDITIONAL_JUMP)  ; LAB_0045f710
    CMP dword ptr [EBP + 0x434],0x3     ; 0045f696
    JZ 0x0045f710                       ; 0045f69d
        ;   XREF to: 0045f710 (CONDITIONAL_JUMP)  ; LAB_0045f710
    PUSH EBP                            ; 0045f69f
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0045f6a0
    LEA ESI,[ESP + 0x2c]                ; 0045f6a6
    LEA EDI,[ESP + 0x44]                ; 0045f6aa
    CALL dword ptr [EAX + 0x24]         ; 0045f6ae
    MOV ECX,0x6                         ; 0045f6b1
    LEA ESI,[ESP + 0x2c]                ; 0045f6b6
    ADD ESP,0x4                         ; 0045f6ba
    LEA EAX,[EBP + 0x20]                ; 0045f6bd
    MOVSD.REP ES:EDI,ESI                ; 0045f6c0
    MOV dword ptr [ESP + 0xec],EAX      ; 0045f6c2
    XOR ECX,ECX                         ; 0045f6c9
    LEA EAX,[EBP + 0x3c]                ; 0045f6cb
    MOV dword ptr [ESP + 0xac],ECX      ; 0045f6ce
    MOV dword ptr [ESP + 0xe4],ECX      ; 0045f6d5
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045f6dc
    MOV dword ptr [ESP + 0xe8],ECX      ; 0045f6e3
    MOV EAX,[0x0061b5a8]                ; 0045f6ea | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0045f6ea
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0045f6ef
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 0045f6f6 | g_CDemonSetInstance.character_count
    JL 0x0045f947                       ; 0045f6fc
        ;   XREF to: 0045f947 (CONDITIONAL_JUMP)  ; LAB_0045f947
    CMP dword ptr [ESP + 0xac],0x0      ; 0045f702
    JNZ 0x0045fae0                      ; 0045f70a
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    ADD ESP,0xf8                        ; 0045f710
        ;   Label: LAB_0045f710
    POP EBP                             ; 0045f716
    POP EDI                             ; 0045f717
    POP ESI                             ; 0045f718
    POP EBX                             ; 0045f719
    RET                                 ; 0045f71a
    LEA EAX,[EBP + 0x4a8]               ; 0045f71b
        ;   Label: caseD_2
    PUSH EAX                            ; 0045f721
    MOV EAX,[0x006141f0]                ; 0045f722 | DAT_006141f0
    PUSH EAX                            ; 0045f727
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0045f728
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0045f72d
    TEST EAX,EAX                        ; 0045f730
    JZ 0x0045f75c                       ; 0045f732
        ;   XREF to: 0045f75c (CONDITIONAL_JUMP)  ; LAB_0045f75c
    MOV AH,byte ptr [EBP + 0xa24]       ; 0045f734
    MOV dword ptr [EBP + 0x43c],0x3     ; 0045f73a
    TEST AH,AH                          ; 0045f744
    JZ 0x0045f75c                       ; 0045f746
        ;   XREF to: 0045f75c (CONDITIONAL_JUMP)  ; LAB_0045f75c
    LEA EAX,[EBP + 0xa24]               ; 0045f748
    PUSH EAX                            ; 0045f74e
    MOV EBX,dword ptr [EBP + 0x2b0]     ; 0045f74f
    PUSH EBP                            ; 0045f755
    CALL dword ptr [EBX + 0x34]         ; 0045f756
    ADD ESP,0x8                         ; 0045f759
    MOV EAX,dword ptr [EBP + 0xb0c]     ; 0045f75c
        ;   Label: LAB_0045f75c
    MOV dword ptr [EBP + 0xb08],EAX     ; 0045f762
    JMP 0x0045f645                      ; 0045f768
        ;   XREF to: 0045f645 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 0045f76d
        ;   Label: caseD_1
    FMUL float ptr [EBP + 0xb0c]        ; 0045f774
    FDIV float ptr [EBP + 0xb10]        ; 0045f77a
    FLD float ptr [EBP + 0xb0c]         ; 0045f780
    FXCH                                ; 0045f786
    FADD float ptr [ESP + 0xb0]         ; 0045f788
    FLDZ                                ; 0045f78f
    FXCH                                ; 0045f791
    FSTP float ptr [EBP + 0xb08]        ; 0045f793
    FCOMPP                              ; 0045f799
    FNSTSW AX                           ; 0045f79b
    SAHF                                ; 0045f79d
    JNC 0x0045f7e8                      ; 0045f79e
        ;   XREF to: 0045f7e8 (CONDITIONAL_JUMP)  ; LAB_0045f7e8
    FLD float ptr [EBP + 0xb08]         ; 0045f7a0
    FCOMP float ptr [EBP + 0xb0c]       ; 0045f7a6
    FNSTSW AX                           ; 0045f7ac
    SAHF                                ; 0045f7ae
    JBE 0x0045f645                      ; 0045f7af
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x43c],0x2     ; 0045f7b5
    FLD float ptr [EBP + 0xb0c]         ; 0045f7bf
    MOV ECX,dword ptr [EBP + 0xb24]     ; 0045f7c5
    FSTP float ptr [EBP + 0xb08]        ; 0045f7cb
    TEST ECX,ECX                        ; 0045f7d1
    JZ 0x0045f645                       ; 0045f7d3
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xb24],0x2     ; 0045f7d9
    JMP 0x0045f645                      ; 0045f7e3
        ;   XREF to: 0045f645 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0xb08]         ; 0045f7e8
        ;   Label: LAB_0045f7e8
    FCOMP float ptr [EBP + 0xb0c]       ; 0045f7ee
    FNSTSW AX                           ; 0045f7f4
    SAHF                                ; 0045f7f6
    JNC 0x0045f645                      ; 0045f7f7
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x43c],0x2     ; 0045f7fd
    FLD float ptr [EBP + 0xb0c]         ; 0045f807
    MOV EDX,dword ptr [EBP + 0xb24]     ; 0045f80d
    FSTP float ptr [EBP + 0xb08]        ; 0045f813
    TEST EDX,EDX                        ; 0045f819
    JZ 0x0045f645                       ; 0045f81b
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xb24],0x2     ; 0045f821
    JMP 0x0045f645                      ; 0045f82b
        ;   XREF to: 0045f645 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 0045f830
        ;   Label: caseD_3
    FMUL float ptr [EBP + 0xb0c]        ; 0045f837
    FDIV float ptr [EBP + 0xb14]        ; 0045f83d
    FLD float ptr [EBP + 0xb0c]         ; 0045f843
    FXCH                                ; 0045f849
    FSUBR float ptr [ESP + 0xb0]        ; 0045f84b
    FLDZ                                ; 0045f852
    FXCH                                ; 0045f854
    FSTP float ptr [EBP + 0xb08]        ; 0045f856
    FCOMPP                              ; 0045f85c
    FNSTSW AX                           ; 0045f85e
    SAHF                                ; 0045f860
    JNC 0x0045f8b3                      ; 0045f861
        ;   XREF to: 0045f8b3 (CONDITIONAL_JUMP)  ; LAB_0045f8b3
    FLD float ptr [EBP + 0xb08]         ; 0045f863
    FLDZ                                ; 0045f869
    FCOMPP                              ; 0045f86b
    FNSTSW AX                           ; 0045f86d
    SAHF                                ; 0045f86f
    JBE 0x0045f645                      ; 0045f870
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x43c],0x0     ; 0045f876
    MOV ESI,dword ptr [EBP + 0xb24]     ; 0045f880
    MOV dword ptr [EBP + 0xb08],0x0     ; 0045f886
    TEST ESI,ESI                        ; 0045f890
    JZ 0x0045f89e                       ; 0045f892
        ;   XREF to: 0045f89e (CONDITIONAL_JUMP)  ; LAB_0045f89e
    MOV dword ptr [EBP + 0xb24],0x2     ; 0045f894
    PUSH EBP                            ; 0045f89e
        ;   Label: LAB_0045f89e
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045f89f | g_CDemonSetPtr
    PUSH EDI                            ; 0045f8a5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020 ; 0045f8a6
        ;   XREF to: 00538020 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045f8ab
    JMP 0x0045f645                      ; 0045f8ae
        ;   XREF to: 0045f645 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0xb08]         ; 0045f8b3
        ;   Label: LAB_0045f8b3
    FLDZ                                ; 0045f8b9
    FCOMPP                              ; 0045f8bb
    FNSTSW AX                           ; 0045f8bd
    SAHF                                ; 0045f8bf
    JNC 0x0045f645                      ; 0045f8c0
        ;   XREF to: 0045f645 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x43c],0x0     ; 0045f8c6
    MOV ECX,dword ptr [EBP + 0xb24]     ; 0045f8d0
    MOV dword ptr [EBP + 0xb08],0x0     ; 0045f8d6
    TEST ECX,ECX                        ; 0045f8e0
    JZ 0x0045f8ee                       ; 0045f8e2
        ;   XREF to: 0045f8ee (CONDITIONAL_JUMP)  ; LAB_0045f8ee
    MOV dword ptr [EBP + 0xb24],0x2     ; 0045f8e4
    PUSH EBP                            ; 0045f8ee
        ;   Label: LAB_0045f8ee
    MOV EBX,dword ptr [0x0061b5a8]      ; 0045f8ef | g_CDemonSetPtr
    PUSH EBX                            ; 0045f8f5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020 ; 0045f8f6
        ;   XREF to: 00538020 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045f8fb
    JMP 0x0045f645                      ; 0045f8fe
        ;   XREF to: 0045f645 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [EBP + 0x570],0x0      ; 0045f903
        ;   Label: LAB_0045f903
    JZ 0x0045f677                       ; 0045f90a
        ;   XREF to: 0045f677 (CONDITIONAL_JUMP)  ; LAB_0045f677
    LEA EAX,[EBP + 0x570]               ; 0045f910
    PUSH EAX                            ; 0045f916
    MOV EAX,[0x006141f0]                ; 0045f917 | DAT_006141f0
    PUSH EAX                            ; 0045f91c
    JMP 0x0045f66f                      ; 0045f91d
        ;   XREF to: 0045f66f (UNCONDITIONAL_JUMP)  ; LAB_0045f66f
    MOV ESI,dword ptr [ESP + 0xe4]      ; 0045f922
        ;   Label: LAB_0045f922
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0045f929
    INC ESI                             ; 0045f930
    ADD EBX,0x4                         ; 0045f931
    MOV dword ptr [ESP + 0xe4],ESI      ; 0045f934
    MOV dword ptr [ESP + 0xe8],EBX      ; 0045f93b
    JMP 0x0045f6ea                      ; 0045f942
        ;   XREF to: 0045f6ea (UNCONDITIONAL_JUMP)  ; LAB_0045f6ea
    ADD EAX,dword ptr [ESP + 0xe8]      ; 0045f947
        ;   Label: LAB_0045f947
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0045f94e
    MOV EAX,ESP                         ; 0045f954
    PUSH EAX                            ; 0045f956
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0045f957
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0045f95c
    MOV ESI,ESP                         ; 0045f95f
    PUSH ESI                            ; 0045f961
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045f962
    PUSH EBX                            ; 0045f968
    CALL dword ptr [EAX + 0x44]         ; 0045f969
    ADD ESP,0x8                         ; 0045f96c
    CMP EAX,0x2                         ; 0045f96f
    JNZ 0x0045f922                      ; 0045f972
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0x14]          ; 0045f974
    FADD float ptr [EBX + 0x24]         ; 0045f978
    FLD float ptr [EBP + 0x24]          ; 0045f97b
    FADD float ptr [ESP + 0x50]         ; 0045f97e
    FCOMPP                              ; 0045f982
    FNSTSW AX                           ; 0045f984
    SAHF                                ; 0045f986
    JC 0x0045f922                       ; 0045f987
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0x18]          ; 0045f989
    FADD float ptr [EBX + 0x24]         ; 0045f98d
    FLD float ptr [EBP + 0x24]          ; 0045f990
    FADD float ptr [ESP + 0x44]         ; 0045f993
    FCOMPP                              ; 0045f997
    FNSTSW AX                           ; 0045f999
    SAHF                                ; 0045f99b
    JA 0x0045f922                       ; 0045f99c
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [EBX + 0x24]          ; 0045f99e
    FLD float ptr [EBX + 0x28]          ; 0045f9a1
    FLD float ptr [EBX + 0x20]          ; 0045f9a4
    MOV EAX,dword ptr [ESP + 0xec]      ; 0045f9a7
    LEA EDI,[ESP + 0x94]                ; 0045f9ae
    LEA ESI,[ESP + 0x64]                ; 0045f9b5
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0045f9b9
    LEA EBX,[ESP + 0x88]                ; 0045f9c0
    FSUB float ptr [EAX]                ; 0045f9c7
    FXCH ST2                            ; 0045f9c9
    FSUB float ptr [EAX + 0x4]          ; 0045f9cb
    FXCH                                ; 0045f9ce
    FSUB float ptr [EAX + 0x8]          ; 0045f9d0
    FXCH ST2                            ; 0045f9d3
    FSTP float ptr [ESP + 0x64]         ; 0045f9d5
    FSTP float ptr [ESP + 0x68]         ; 0045f9d9
    LEA EAX,[ESP + 0x94]                ; 0045f9dd
    FSTP float ptr [ESP + 0x6c]         ; 0045f9e4
    PUSH EAX                            ; 0045f9e8
    MOVSD ES:EDI,ESI                    ; 0045f9e9
    MOVSD ES:EDI,ESI                    ; 0045f9ea
    MOVSD ES:EDI,ESI                    ; 0045f9eb
    PUSH ECX                            ; 0045f9ec
    LEA ESI,[ESP + 0x78]                ; 0045f9ed
    LEA EDI,[ESP + 0x90]                ; 0045f9f1
    CALL core_dirmat.cpp_FUN_004495a0   ; 0045f9f8
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x78]                ; 0045f9fd
    ADD ESP,0x8                         ; 0045fa01
    LEA EAX,[ESP + 0x58]                ; 0045fa04
    MOVSD ES:EDI,ESI                    ; 0045fa08
    MOVSD ES:EDI,ESI                    ; 0045fa09
    MOVSD ES:EDI,ESI                    ; 0045fa0a
    CMP EAX,EBX                         ; 0045fa0b
    JZ 0x0045fa30                       ; 0045fa0d
        ;   XREF to: 0045fa30 (CONDITIONAL_JUMP)  ; LAB_0045fa30
    MOV EAX,dword ptr [ESP + 0x88]      ; 0045fa0f
    MOV dword ptr [ESP + 0x58],EAX      ; 0045fa16
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0045fa1a
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045fa21
    MOV EAX,dword ptr [ESP + 0x90]      ; 0045fa25
    MOV dword ptr [ESP + 0x60],EAX      ; 0045fa2c
    FLD float ptr [ESP + 0x58]          ; 0045fa30
        ;   Label: LAB_0045fa30
    FADD float ptr [ESP + 0x1c]         ; 0045fa34
    FST float ptr [ESP + 0xc0]          ; 0045fa38
    FCOMP float ptr [ESP + 0x40]        ; 0045fa3f
    FNSTSW AX                           ; 0045fa43
    SAHF                                ; 0045fa45
    JC 0x0045f922                       ; 0045fa46
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0x58]          ; 0045fa4c
    FSUB float ptr [ESP + 0x1c]         ; 0045fa50
    FST float ptr [ESP + 0xb8]          ; 0045fa54
    FCOMP float ptr [ESP + 0x4c]        ; 0045fa5b
    FNSTSW AX                           ; 0045fa5f
    SAHF                                ; 0045fa61
    JA 0x0045f922                       ; 0045fa62
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0x60]          ; 0045fa68
    FADD float ptr [ESP + 0x1c]         ; 0045fa6c
    FST float ptr [ESP + 0xf4]          ; 0045fa70
    FCOMP float ptr [ESP + 0x48]        ; 0045fa77
    FNSTSW AX                           ; 0045fa7b
    SAHF                                ; 0045fa7d
    JC 0x0045f922                       ; 0045fa7e
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0x60]          ; 0045fa84
    FSUB float ptr [ESP + 0x1c]         ; 0045fa88
    FST float ptr [ESP + 0xbc]          ; 0045fa8c
    FCOMP float ptr [ESP + 0x54]        ; 0045fa93
    FNSTSW AX                           ; 0045fa97
    SAHF                                ; 0045fa99
    JA 0x0045f922                       ; 0045fa9a
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0xb8]          ; 0045faa0
    FCOMP float ptr [ESP + 0x40]        ; 0045faa7
    FNSTSW AX                           ; 0045faab
    SAHF                                ; 0045faad
    JC 0x0045fb1e                       ; 0045faae
        ;   XREF to: 0045fb1e (CONDITIONAL_JUMP)  ; LAB_0045fb1e
    FLD float ptr [ESP + 0xc0]          ; 0045fab0
    FCOMP float ptr [ESP + 0x4c]        ; 0045fab7
    FNSTSW AX                           ; 0045fabb
    SAHF                                ; 0045fabd
    JA 0x0045fb1e                       ; 0045fabe
        ;   XREF to: 0045fb1e (CONDITIONAL_JUMP)  ; LAB_0045fb1e
    FLD float ptr [ESP + 0xbc]          ; 0045fac0
    FCOMP float ptr [ESP + 0x48]        ; 0045fac7
    FNSTSW AX                           ; 0045facb
    SAHF                                ; 0045facd
    JC 0x0045fb1e                       ; 0045face
        ;   XREF to: 0045fb1e (CONDITIONAL_JUMP)  ; LAB_0045fb1e
    FLD float ptr [ESP + 0xf4]          ; 0045fad0
    FCOMP float ptr [ESP + 0x54]        ; 0045fad7
    FNSTSW AX                           ; 0045fadb
    SAHF                                ; 0045fadd
    JA 0x0045fb1e                       ; 0045fade
        ;   XREF to: 0045fb1e (CONDITIONAL_JUMP)  ; LAB_0045fb1e
    LEA EBX,[EBP + 0x20]                ; 0045fae0
        ;   Label: LAB_0045fae0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045fae3
    MOV dword ptr [EBX],EAX             ; 0045fae7
    MOV EAX,dword ptr [ESP + 0x80]      ; 0045fae9
    MOV dword ptr [EBX + 0x4],EAX       ; 0045faf0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0045faf3
    MOV dword ptr [EBX + 0x8],EAX       ; 0045fafa
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0045fafd
    PUSH EBP                            ; 0045fb04
    MOV dword ptr [EBP + 0xb08],EAX     ; 0045fb05
    CALL core_door.cpp_FUN_0045f030     ; 0045fb0b
        ;   XREF to: 0045f030 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_0045f030()
    ADD ESP,0x4                         ; 0045fb10
    ADD ESP,0xf8                        ; 0045fb13
    POP EBP                             ; 0045fb19
    POP EDI                             ; 0045fb1a
    POP ESI                             ; 0045fb1b
    POP EBX                             ; 0045fb1c
    RET                                 ; 0045fb1d
    FLD float ptr [ESP + 0x1c]          ; 0045fb1e
        ;   Label: LAB_0045fb1e
    FMUL ST0                            ; 0045fb22
    FLD float ptr [ESP + 0x4c]          ; 0045fb24
    FSUB float ptr [ESP + 0x58]         ; 0045fb28
    FMUL ST0                            ; 0045fb2c
    FXCH                                ; 0045fb2e
    FSTP float ptr [ESP + 0xf0]         ; 0045fb30
    FSUBR float ptr [ESP + 0xf0]        ; 0045fb37
    FSQRT                               ; 0045fb3e
    FLD float ptr [ESP + 0x60]          ; 0045fb40
    FLD ST0                             ; 0045fb44
    FADD ST0,ST2                        ; 0045fb46
    FXCH                                ; 0045fb48
    FSUBRP ST2,ST0                      ; 0045fb4a
    FSTP float ptr [ESP + 0xc8]         ; 0045fb4c
    FSTP float ptr [ESP + 0xd8]         ; 0045fb53
    FLD float ptr [ESP + 0xc8]          ; 0045fb5a
    FCOMP float ptr [ESP + 0x48]        ; 0045fb61
    FNSTSW AX                           ; 0045fb65
    SAHF                                ; 0045fb67
    JC 0x0045fb7e                       ; 0045fb68
        ;   XREF to: 0045fb7e (CONDITIONAL_JUMP)  ; LAB_0045fb7e
    FLD float ptr [ESP + 0xc8]          ; 0045fb6a
    FCOMP float ptr [ESP + 0x54]        ; 0045fb71
    FNSTSW AX                           ; 0045fb75
    SAHF                                ; 0045fb77
    JBE 0x0045fae0                      ; 0045fb78
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0xd8]          ; 0045fb7e
        ;   Label: LAB_0045fb7e
    FCOMP float ptr [ESP + 0x48]        ; 0045fb85
    FNSTSW AX                           ; 0045fb89
    SAHF                                ; 0045fb8b
    JC 0x0045fba2                       ; 0045fb8c
        ;   XREF to: 0045fba2 (CONDITIONAL_JUMP)  ; LAB_0045fba2
    FLD float ptr [ESP + 0xd8]          ; 0045fb8e
    FCOMP float ptr [ESP + 0x54]        ; 0045fb95
    FNSTSW AX                           ; 0045fb99
    SAHF                                ; 0045fb9b
    JBE 0x0045fae0                      ; 0045fb9c
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0x40]          ; 0045fba2
        ;   Label: LAB_0045fba2
    FSUB float ptr [ESP + 0x58]         ; 0045fba6
    FMUL ST0                            ; 0045fbaa
    FSUBR float ptr [ESP + 0xf0]        ; 0045fbac
    FSQRT                               ; 0045fbb3
    FLD float ptr [ESP + 0x60]          ; 0045fbb5
    FLD ST0                             ; 0045fbb9
    FADD ST0,ST2                        ; 0045fbbb
    FXCH                                ; 0045fbbd
    FSUBRP ST2,ST0                      ; 0045fbbf
    FSTP float ptr [ESP + 0xe0]         ; 0045fbc1
    FSTP float ptr [ESP + 0xcc]         ; 0045fbc8
    FLD float ptr [ESP + 0xe0]          ; 0045fbcf
    FCOMP float ptr [ESP + 0x48]        ; 0045fbd6
    FNSTSW AX                           ; 0045fbda
    SAHF                                ; 0045fbdc
    JC 0x0045fbf3                       ; 0045fbdd
        ;   XREF to: 0045fbf3 (CONDITIONAL_JUMP)  ; LAB_0045fbf3
    FLD float ptr [ESP + 0xe0]          ; 0045fbdf
    FCOMP float ptr [ESP + 0x54]        ; 0045fbe6
    FNSTSW AX                           ; 0045fbea
    SAHF                                ; 0045fbec
    JBE 0x0045fae0                      ; 0045fbed
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0xcc]          ; 0045fbf3
        ;   Label: LAB_0045fbf3
    FCOMP float ptr [ESP + 0x48]        ; 0045fbfa
    FNSTSW AX                           ; 0045fbfe
    SAHF                                ; 0045fc00
    JC 0x0045fc17                       ; 0045fc01
        ;   XREF to: 0045fc17 (CONDITIONAL_JUMP)  ; LAB_0045fc17
    FLD float ptr [ESP + 0xcc]          ; 0045fc03
    FCOMP float ptr [ESP + 0x54]        ; 0045fc0a
    FNSTSW AX                           ; 0045fc0e
    SAHF                                ; 0045fc10
    JBE 0x0045fae0                      ; 0045fc11
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0x54]          ; 0045fc17
        ;   Label: LAB_0045fc17
    FSUB float ptr [ESP + 0x60]         ; 0045fc1b
    FMUL ST0                            ; 0045fc1f
    FSUBR float ptr [ESP + 0xf0]        ; 0045fc21
    FSQRT                               ; 0045fc28
    FLD float ptr [ESP + 0x58]          ; 0045fc2a
    FLD ST0                             ; 0045fc2e
    FADD ST0,ST2                        ; 0045fc30
    FXCH                                ; 0045fc32
    FSUBRP ST2,ST0                      ; 0045fc34
    FSTP float ptr [ESP + 0xd4]         ; 0045fc36
    FSTP float ptr [ESP + 0xd0]         ; 0045fc3d
    FLD float ptr [ESP + 0xd4]          ; 0045fc44
    FCOMP float ptr [ESP + 0x40]        ; 0045fc4b
    FNSTSW AX                           ; 0045fc4f
    SAHF                                ; 0045fc51
    JC 0x0045fc68                       ; 0045fc52
        ;   XREF to: 0045fc68 (CONDITIONAL_JUMP)  ; LAB_0045fc68
    FLD float ptr [ESP + 0xd4]          ; 0045fc54
    FCOMP float ptr [ESP + 0x4c]        ; 0045fc5b
    FNSTSW AX                           ; 0045fc5f
    SAHF                                ; 0045fc61
    JBE 0x0045fae0                      ; 0045fc62
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0xd0]          ; 0045fc68
        ;   Label: LAB_0045fc68
    FCOMP float ptr [ESP + 0x40]        ; 0045fc6f
    FNSTSW AX                           ; 0045fc73
    SAHF                                ; 0045fc75
    JC 0x0045fc8c                       ; 0045fc76
        ;   XREF to: 0045fc8c (CONDITIONAL_JUMP)  ; LAB_0045fc8c
    FLD float ptr [ESP + 0xd0]          ; 0045fc78
    FCOMP float ptr [ESP + 0x4c]        ; 0045fc7f
    FNSTSW AX                           ; 0045fc83
    SAHF                                ; 0045fc85
    JBE 0x0045fae0                      ; 0045fc86
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0x48]          ; 0045fc8c
        ;   Label: LAB_0045fc8c
    FSUB float ptr [ESP + 0x60]         ; 0045fc90
    FMUL ST0                            ; 0045fc94
    FSUBR float ptr [ESP + 0xf0]        ; 0045fc96
    FSQRT                               ; 0045fc9d
    FLD float ptr [ESP + 0x58]          ; 0045fc9f
    FLD ST0                             ; 0045fca3
    FADD ST0,ST2                        ; 0045fca5
    FXCH                                ; 0045fca7
    FSUBRP ST2,ST0                      ; 0045fca9
    FSTP float ptr [ESP + 0xdc]         ; 0045fcab
    FSTP float ptr [ESP + 0xc4]         ; 0045fcb2
    FLD float ptr [ESP + 0xdc]          ; 0045fcb9
    FCOMP float ptr [ESP + 0x40]        ; 0045fcc0
    FNSTSW AX                           ; 0045fcc4
    SAHF                                ; 0045fcc6
    JC 0x0045fcdd                       ; 0045fcc7
        ;   XREF to: 0045fcdd (CONDITIONAL_JUMP)  ; LAB_0045fcdd
    FLD float ptr [ESP + 0xdc]          ; 0045fcc9
    FCOMP float ptr [ESP + 0x4c]        ; 0045fcd0
    FNSTSW AX                           ; 0045fcd4
    SAHF                                ; 0045fcd6
    JBE 0x0045fae0                      ; 0045fcd7
        ;   XREF to: 0045fae0 (CONDITIONAL_JUMP)  ; LAB_0045fae0
    FLD float ptr [ESP + 0xc4]          ; 0045fcdd
        ;   Label: LAB_0045fcdd
    FCOMP float ptr [ESP + 0x40]        ; 0045fce4
    FNSTSW AX                           ; 0045fce8
    SAHF                                ; 0045fcea
    JC 0x0045f922                       ; 0045fceb
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    FLD float ptr [ESP + 0xc4]          ; 0045fcf1
    FCOMP float ptr [ESP + 0x4c]        ; 0045fcf8
    FNSTSW AX                           ; 0045fcfc
    SAHF                                ; 0045fcfe
    JA 0x0045f922                       ; 0045fcff
        ;   XREF to: 0045f922 (CONDITIONAL_JUMP)  ; LAB_0045f922
    JMP 0x0045fae0                      ; 0045fd05
        ;   XREF to: 0045fae0 (UNCONDITIONAL_JUMP)  ; LAB_0045fae0

