; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_FUN_005184c0(CPlatform *this_ptr,float delta_time)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x3b4]:4  local_3b4
; undefined        Stack[-0x3a4]:1  local_3a4
; undefined1       Stack[-0x3a3]:1  local_3a3
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   core_minecar.cpp_FUN_004f2090 at 004f209a
;
; Referenced Globals:
;   undefined1* switchdataD_005184ac = 00518511
;   undefined4 DAT_005e21c8
;   undefined4 DAT_005e21d0
;   undefined4 DAT_005e21d8
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;   undefined4 g_CDemonSetInstance.field1372332_0x14f0ac
;   undefined4 g_CDemonSetInstance.field1420984_0x15aeb8
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040d0c0
;   core_box.cpp_FUN_0041bb80
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005197b0
;   core_platfrm.cpp_FUN_00518310
;   core_platfrm.cpp_FUN_00518ff0
;   core_platfrm.cpp_FUN_00519ba0
;   core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;   core_setdir.cpp_FUN_00539820
;   core_setdir.cpp_FUN_00539840
;   core_sound.cpp_FUN_0055af70
;   core_sound.cpp_FUN_0055af80
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005184c0
        ;   Label: core_platfrm.cpp_FUN_005184c0
    PUSH ESI                            ; 005184c1
    PUSH EDI                            ; 005184c2
    PUSH EBP                            ; 005184c3
    MOV EBP,ESP                         ; 005184c4
    SUB ESP,0x39c                       ; 005184c6
    AND ESP,0xfffffff8                  ; 005184cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005184cf
    CMP dword ptr [EAX + 0x61c],0x2     ; 005184d2
    JGE 0x00518fde                      ; 005184d9
        ;   XREF to: 00518fde (CONDITIONAL_JUMP)  ; LAB_00518fde
    MOV EAX,dword ptr [EAX + 0x438]     ; 005184df
    XOR EBX,EBX                         ; 005184e5
    MOV dword ptr [ESP + 0x378],EAX     ; 005184e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005184ee
    MOV dword ptr [ESP + 0x380],EBX     ; 005184f1
    MOV EAX,dword ptr [EAX + 0x430]     ; 005184f8
    MOV dword ptr [ESP + 0x37c],EBX     ; 005184fe
    CMP EAX,0x4                         ; 00518505
    JA 0x0051855f                       ; 00518508
        ;   XREF to: 0051855f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5184ac]  ; 0051850a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518511
        ;   Label: caseD_0
    ADD EAX,0x514                       ; 00518514
    PUSH EAX                            ; 00518519
    MOV EAX,[0x006141f0]                ; 0051851a | DAT_006141f0
    PUSH EAX                            ; 0051851f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00518520
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00518525
    TEST EAX,EAX                        ; 00518528
    JZ 0x00518552                       ; 0051852a
        ;   XREF to: 00518552 (CONDITIONAL_JUMP)  ; LAB_00518552
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051852c
    FLD float ptr [EAX + 0x444]         ; 0051852f
    FLD1                                ; 00518535
    FDIVRP                              ; 00518537
    SUB ESP,0x4                         ; 00518539
    FSTP float ptr [ESP]                ; 0051853c
    PUSH 0x3f800000                     ; 0051853f
    PUSH EAX                            ; 00518544
    MOV EBX,0x1                         ; 00518545
    CALL core_platfrm.cpp_FUN_00518ff0  ; 0051854a
        ;   XREF to: 00518ff0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518ff0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0051854f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518552
        ;   Label: LAB_00518552
    MOV dword ptr [EAX + 0x438],0x0     ; 00518555
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051855f
        ;   Label: default
    CMP dword ptr [EAX + 0x624],0x0     ; 00518562
    JZ 0x00518659                       ; 00518569
        ;   XREF to: 00518659 (CONDITIONAL_JUMP)  ; LAB_00518659
    TEST EBX,EBX                        ; 0051856f
    JZ 0x00518640                       ; 00518571
        ;   XREF to: 00518640 (CONDITIONAL_JUMP)  ; LAB_00518640
    LEA EDI,[ESP + 0xc]                 ; 00518577
    LEA ESI,[EAX + 0x628]               ; 0051857b
    LEA EBX,[ESP + 0xc]                 ; 00518581
    PUSH EDI                            ; 00518585
    MOV AL,byte ptr [ESI]               ; 00518586
        ;   Label: LAB_00518586
    MOV byte ptr [EDI],AL               ; 00518588
    CMP AL,0x0                          ; 0051858a
    JZ 0x0051859e                       ; 0051858c
        ;   XREF to: 0051859e (CONDITIONAL_JUMP)  ; LAB_0051859e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051858e
    ADD ESI,0x2                         ; 00518591
    MOV byte ptr [EDI + 0x1],AL         ; 00518594
    ADD EDI,0x2                         ; 00518597
    CMP AL,0x0                          ; 0051859a
    JNZ 0x00518586                      ; 0051859c
        ;   XREF to: 00518586 (CONDITIONAL_JUMP)  ; LAB_00518586
    POP EDI                             ; 0051859e
        ;   Label: LAB_0051859e
    MOV CL,byte ptr [ESP + 0xc]         ; 0051859f
    LEA ESI,[ESP + 0xc]                 ; 005185a3
    TEST CL,CL                          ; 005185a7
    JZ 0x00518600                       ; 005185a9
        ;   XREF to: 00518600 (CONDITIONAL_JUMP)  ; LAB_00518600
    CMP byte ptr [EBX],0x3b             ; 005185ab
        ;   Label: LAB_005185ab
    JNZ 0x00518a3b                      ; 005185ae
        ;   XREF to: 00518a3b (CONDITIONAL_JUMP)  ; LAB_00518a3b
    PUSH ESI                            ; 005185b4
    MOV EDI,dword ptr [0x0061b5a8]      ; 005185b5 | g_CDemonSetPtr
    PUSH EDI                            ; 005185bb | g_CDemonSetInstance
    MOV byte ptr [EBX],0x0              ; 005185bc
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0 ; 005185bf
        ;   XREF to: 0052e8c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 005185c4
    CMP EAX,-0x1                        ; 005185c7
    JZ 0x00518a2a                       ; 005185ca
        ;   XREF to: 00518a2a (CONDITIONAL_JUMP)  ; LAB_00518a2a
    MOV EDX,dword ptr [0x0061b5a8]      ; 005185d0 | g_CDemonSetPtr
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 005185d6 | g_CDemonSetInstance.field1420984_0x15aeb8
    CMP EAX,ECX                         ; 005185dc
    JZ 0x00518a2a                       ; 005185de
        ;   XREF to: 00518a2a (CONDITIONAL_JUMP)  ; LAB_00518a2a
    PUSH 0x4479c000                     ; 005185e4
    PUSH EAX                            ; 005185e9
    PUSH EDX                            ; 005185ea | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00539820   ; 005185eb
        ;   XREF to: 00539820 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00539820(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 005185f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005185f3
    MOV dword ptr [EAX + 0x880],0x0     ; 005185f6
    PUSH ESI                            ; 00518600
        ;   Label: LAB_00518600
    MOV EAX,[0x0061b5a8]                ; 00518601 | g_CDemonSetPtr
    PUSH EAX                            ; 00518606 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0 ; 00518607
        ;   XREF to: 0052e8c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0051860c
    CMP EAX,-0x1                        ; 0051860f
    JZ 0x00518640                       ; 00518612
        ;   XREF to: 00518640 (CONDITIONAL_JUMP)  ; LAB_00518640
    MOV EDX,dword ptr [0x0061b5a8]      ; 00518614 | g_CDemonSetPtr
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 0051861a | g_CDemonSetInstance.field1420984_0x15aeb8
    CMP EAX,ECX                         ; 00518620
    JZ 0x00518640                       ; 00518622
        ;   XREF to: 00518640 (CONDITIONAL_JUMP)  ; LAB_00518640
    PUSH 0x4479c000                     ; 00518624
    PUSH EAX                            ; 00518629
    PUSH EDX                            ; 0051862a | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00539820   ; 0051862b
        ;   XREF to: 00539820 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00539820(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 00518630
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518633
    MOV dword ptr [EAX + 0x880],0x0     ; 00518636
    CMP dword ptr [ESP + 0x380],0x0     ; 00518640
        ;   Label: LAB_00518640
    JZ 0x00518659                       ; 00518648
        ;   XREF to: 00518659 (CONDITIONAL_JUMP)  ; LAB_00518659
    MOV ECX,dword ptr [0x0061b5a8]      ; 0051864a | g_CDemonSetPtr
    PUSH ECX                            ; 00518650 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00539840   ; 00518651
        ;   XREF to: 00539840 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_00539840(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00518656
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518659
        ;   Label: LAB_00518659
    FLD float ptr [EAX + 0x438]         ; 0051865c
    FCOMP float ptr [ESP + 0x378]       ; 00518662
    FNSTSW AX                           ; 00518669
    SAHF                                ; 0051866b
    JZ 0x00518fde                       ; 0051866c
        ;   XREF to: 00518fde (CONDITIONAL_JUMP)  ; LAB_00518fde
    CMP dword ptr [ESP + 0x37c],0x0     ; 00518672
    JZ 0x00518a71                       ; 0051867a
        ;   XREF to: 00518a71 (CONDITIONAL_JUMP)  ; LAB_00518a71
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518680
    CMP byte ptr [EAX + 0x604],0x0      ; 00518683
    JZ 0x00518a71                       ; 0051868a
        ;   XREF to: 00518a71 (CONDITIONAL_JUMP)  ; LAB_00518a71
    MOV EDX,dword ptr [EAX + 0x618]     ; 00518690
    PUSH EDX                            ; 00518696
    MOV ECX,dword ptr [0x0061c068]      ; 00518697 | DAT_0061c068
    PUSH ECX                            ; 0051869d
    CALL core_sound.cpp_FUN_0055af70    ; 0051869e
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005186a3
    TEST EAX,EAX                        ; 005186a6
    JZ 0x00518a4a                       ; 005186a8
        ;   XREF to: 00518a4a (CONDITIONAL_JUMP)  ; LAB_00518a4a
    MOV EBX,dword ptr [EBP + 0x14]      ; 005186ae
        ;   Label: LAB_005186ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 005186b1
    ADD EBX,0x30                        ; 005186b4
    MOV ESI,dword ptr [EBP + 0x14]      ; 005186b7
    PUSH EBX                            ; 005186ba
    ADD ESI,0x20                        ; 005186bb
    MOV EAX,dword ptr [EAX + 0x24]      ; 005186be
    PUSH ESI                            ; 005186c1
    MOV dword ptr [ESP + 0x37c],EAX     ; 005186c2
    LEA EAX,[ESP + 0x144]               ; 005186c9
    PUSH EAX                            ; 005186d0
    CALL core_xform.cpp_FUN_00591ad0    ; 005186d1
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005186d6
    MOV EDI,dword ptr [EBP + 0x14]      ; 005186d9
    PUSH EDI                            ; 005186dc
    CALL core_platfrm.cpp_FUN_00518310  ; 005186dd
        ;   XREF to: 00518310 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518310(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005186e2
    PUSH EBX                            ; 005186e5
    PUSH ESI                            ; 005186e6
    LEA EAX,[ESP + 0x114]               ; 005186e7
    PUSH EAX                            ; 005186ee
    CALL core_xform.cpp_FUN_00591c10    ; 005186ef
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 005186f4
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 005186f7
    PUSH EDI                            ; 005186fd
    LEA ESI,[ESP + 0x288]               ; 005186fe
    CALL dword ptr [EAX + 0x24]         ; 00518705
    MOV ECX,0x6                         ; 00518708
    LEA EDI,[ESP + 0x2a0]               ; 0051870d
    LEA ESI,[ESP + 0x288]               ; 00518714
    ADD ESP,0x4                         ; 0051871b
    MOVSD.REP ES:EDI,ESI                ; 0051871e
    XOR ECX,ECX                         ; 00518720
    MOV dword ptr [ESP + 0x390],ECX     ; 00518722
    MOV dword ptr [ESP + 0x388],ECX     ; 00518729
    MOV EAX,[0x0061b5a8]                ; 00518730 | g_CDemonSetPtr
        ;   Label: LAB_00518730
    MOV EDX,dword ptr [ESP + 0x390]     ; 00518735
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0051873c | g_CDemonSetInstance.field1372328_0x14f0a8
    JL 0x00518a8f                       ; 00518742
        ;   XREF to: 00518a8f (CONDITIONAL_JUMP)  ; LAB_00518a8f
    XOR EDI,EDI                         ; 00518748
    MOV dword ptr [ESP + 0x38c],EDI     ; 0051874a
    MOV dword ptr [ESP + 0x384],EDI     ; 00518751
        ;   Label: LAB_00518751
    MOV EAX,[0x0061b5a8]                ; 00518758 | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x38c]     ; 0051875d
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 00518764 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x00518fd2                      ; 0051876a
        ;   XREF to: 00518fd2 (CONDITIONAL_JUMP)  ; LAB_00518fd2
    ADD EAX,dword ptr [ESP + 0x384]     ; 00518770
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00518777 | g_CDemonSetInstance.field1364328_0x14d168
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051877d
    CMP ECX,dword ptr [EBX + 0xdc]      ; 00518780
    JZ 0x00518e21                       ; 00518786
        ;   XREF to: 00518e21 (CONDITIONAL_JUMP)  ; LAB_00518e21
    MOV EAX,dword ptr [ESP + 0x38c]     ; 0051878c
        ;   Label: LAB_0051878c
    MOV EDI,dword ptr [ESP + 0x384]     ; 00518793
    INC EAX                             ; 0051879a
    ADD EDI,0x4                         ; 0051879b
    MOV dword ptr [ESP + 0x38c],EAX     ; 0051879e
    JMP 0x00518751                      ; 005187a5
        ;   XREF to: 00518751 (UNCONDITIONAL_JUMP)  ; LAB_00518751
    MOV EAX,dword ptr [EBP + 0x14]      ; 005187a7
        ;   Label: caseD_1
    ADD EAX,0x4b0                       ; 005187aa
    PUSH EAX                            ; 005187af
    MOV ESI,dword ptr [0x006141f0]      ; 005187b0 | DAT_006141f0
    PUSH ESI                            ; 005187b6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005187b7
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005187bc
    TEST EAX,EAX                        ; 005187bf
    JZ 0x005187e6                       ; 005187c1
        ;   XREF to: 005187e6 (CONDITIONAL_JUMP)  ; LAB_005187e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005187c3
    FLD float ptr [EAX + 0x448]         ; 005187c6
    FLD1                                ; 005187cc
    FDIVRP                              ; 005187ce
    SUB ESP,0x4                         ; 005187d0
    FSTP float ptr [ESP]                ; 005187d3
    PUSH 0x0                            ; 005187d6
    PUSH EAX                            ; 005187d8
    MOV EBX,0x1                         ; 005187d9
    CALL core_platfrm.cpp_FUN_00518ff0  ; 005187de
        ;   XREF to: 00518ff0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518ff0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 005187e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005187e6
        ;   Label: LAB_005187e6
    MOV dword ptr [EAX + 0x438],0x3f800000 ; 005187e9
    JMP 0x0051855f                      ; 005187f3
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005187f8
        ;   Label: caseD_2
    ADD EAX,0x514                       ; 005187fb
    PUSH EAX                            ; 00518800
    MOV EDI,dword ptr [0x006141f0]      ; 00518801 | DAT_006141f0
    PUSH EDI                            ; 00518807
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00518808
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0051880d
    TEST EAX,EAX                        ; 00518810
    JZ 0x0051883a                       ; 00518812
        ;   XREF to: 0051883a (CONDITIONAL_JUMP)  ; LAB_0051883a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518814
    FLD float ptr [EAX + 0x444]         ; 00518817
    FLD1                                ; 0051881d
    FDIVRP                              ; 0051881f
    SUB ESP,0x4                         ; 00518821
    FSTP float ptr [ESP]                ; 00518824
    PUSH 0x3f800000                     ; 00518827
    PUSH EAX                            ; 0051882c
    CALL core_platfrm.cpp_FUN_00518ff0  ; 0051882d
        ;   XREF to: 00518ff0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518ff0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00518832
    JMP 0x0051855f                      ; 00518835
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051883a
        ;   Label: LAB_0051883a
    ADD EAX,0x4b0                       ; 0051883d
    PUSH EAX                            ; 00518842
    MOV EAX,[0x006141f0]                ; 00518843 | DAT_006141f0
    PUSH EAX                            ; 00518848
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00518849
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0051884e
    TEST EAX,EAX                        ; 00518851
    JZ 0x0051855f                       ; 00518853
        ;   XREF to: 0051855f (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518859
    FLD float ptr [EAX + 0x448]         ; 0051885c
    FLD1                                ; 00518862
    FDIVRP                              ; 00518864
    SUB ESP,0x4                         ; 00518866
    FSTP float ptr [ESP]                ; 00518869
    PUSH 0x0                            ; 0051886c
    PUSH EAX                            ; 0051886e
    CALL core_platfrm.cpp_FUN_00518ff0  ; 0051886f
        ;   XREF to: 00518ff0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518ff0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00518874
    JMP 0x0051855f                      ; 00518877
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051887c
        ;   Label: caseD_3
    ADD EAX,0x578                       ; 0051887f
    PUSH EAX                            ; 00518884
    MOV EDI,dword ptr [0x006141f0]      ; 00518885 | DAT_006141f0
    PUSH EDI                            ; 0051888b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0051888c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00518891
    TEST EAX,EAX                        ; 00518894
    JZ 0x005188ce                       ; 00518896
        ;   XREF to: 005188ce (CONDITIONAL_JUMP)  ; LAB_005188ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518898
    MOV DH,byte ptr [EAX + 0x5f0]       ; 0051889b
    MOV dword ptr [EAX + 0x430],0x2     ; 005188a1
    TEST DH,DH                          ; 005188ab
    JZ 0x0051855f                       ; 005188ad
        ;   XREF to: 0051855f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x5f0                       ; 005188b3
    PUSH EAX                            ; 005188b8
    MOV ESI,dword ptr [EBP + 0x14]      ; 005188b9
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 005188bc
    PUSH ESI                            ; 005188c2
    CALL dword ptr [EDX + 0x34]         ; 005188c3
    ADD ESP,0x8                         ; 005188c6
    JMP 0x0051855f                      ; 005188c9
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005188ce
        ;   Label: LAB_005188ce
    FLD float ptr [EBP + 0x18]          ; 005188d1
    FMUL float ptr [EAX + 0x440]        ; 005188d4
    FADD float ptr [EAX + 0x438]        ; 005188da
    FST float ptr [EAX + 0x438]         ; 005188e0
    FCOMP float ptr [EAX + 0x43c]       ; 005188e6
    FNSTSW AX                           ; 005188ec
    SAHF                                ; 005188ee
    JBE 0x00518952                      ; 005188ef
        ;   XREF to: 00518952 (CONDITIONAL_JUMP)  ; LAB_00518952
    MOV EAX,dword ptr [EBP + 0x14]      ; 005188f1
    MOV EDX,dword ptr [EAX + 0x43c]     ; 005188f4
    MOV dword ptr [EAX + 0x438],EDX     ; 005188fa
    FLD float ptr [EAX + 0x438]         ; 00518900
    FLD1                                ; 00518906
    FCOMPP                              ; 00518908
    FNSTSW AX                           ; 0051890a
    SAHF                                ; 0051890c
    JA 0x00518940                       ; 0051890d
        ;   XREF to: 00518940 (CONDITIONAL_JUMP)  ; LAB_00518940
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051890f
    MOV EDX,dword ptr [EAX + 0x61c]     ; 00518912
    MOV dword ptr [EAX + 0x430],0x1     ; 00518918
    TEST EDX,EDX                        ; 00518922
    JZ 0x00518930                       ; 00518924
        ;   XREF to: 00518930 (CONDITIONAL_JUMP)  ; LAB_00518930
    MOV dword ptr [EAX + 0x61c],0x2     ; 00518926
    MOV dword ptr [ESP + 0x380],0x1     ; 00518930
        ;   Label: LAB_00518930
    JMP 0x0051855f                      ; 0051893b
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518940
        ;   Label: LAB_00518940
    MOV dword ptr [EAX + 0x430],0x2     ; 00518943
    JMP 0x0051855f                      ; 0051894d
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x37c],0x1     ; 00518952
        ;   Label: LAB_00518952
    JMP 0x0051855f                      ; 0051895d
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518962
        ;   Label: caseD_4
    ADD EAX,0x578                       ; 00518965
    PUSH EAX                            ; 0051896a
    MOV EDI,dword ptr [0x006141f0]      ; 0051896b | DAT_006141f0
    PUSH EDI                            ; 00518971
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00518972
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00518977
    TEST EAX,EAX                        ; 0051897a
    JZ 0x005189b4                       ; 0051897c
        ;   XREF to: 005189b4 (CONDITIONAL_JUMP)  ; LAB_005189b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051897e
    MOV DL,byte ptr [EAX + 0x5f0]       ; 00518981
    MOV dword ptr [EAX + 0x430],0x2     ; 00518987
    TEST DL,DL                          ; 00518991
    JZ 0x0051855f                       ; 00518993
        ;   XREF to: 0051855f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x5f0                       ; 00518999
    PUSH EAX                            ; 0051899e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051899f
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 005189a2
    PUSH ESI                            ; 005189a8
    CALL dword ptr [EDX + 0x34]         ; 005189a9
    ADD ESP,0x8                         ; 005189ac
    JMP 0x0051855f                      ; 005189af
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 005189b4
        ;   Label: LAB_005189b4
    FLD float ptr [EBP + 0x18]          ; 005189b7
    FMUL float ptr [EAX + 0x440]        ; 005189ba
    FSUBR float ptr [EAX + 0x438]       ; 005189c0
    FST float ptr [EAX + 0x438]         ; 005189c6
    FCOMP float ptr [EAX + 0x43c]       ; 005189cc
    FNSTSW AX                           ; 005189d2
    SAHF                                ; 005189d4
    JNC 0x00518952                      ; 005189d5
        ;   XREF to: 00518952 (CONDITIONAL_JUMP)  ; LAB_00518952
    MOV EAX,dword ptr [EBP + 0x14]      ; 005189db
    MOV EDX,dword ptr [EAX + 0x43c]     ; 005189de
    MOV dword ptr [EAX + 0x438],EDX     ; 005189e4
    FLD float ptr [EAX + 0x438]         ; 005189ea
    FLDZ                                ; 005189f0
    FCOMPP                              ; 005189f2
    FNSTSW AX                           ; 005189f4
    SAHF                                ; 005189f6
    JC 0x00518940                       ; 005189f7
        ;   XREF to: 00518940 (CONDITIONAL_JUMP)  ; LAB_00518940
    MOV EAX,dword ptr [EBP + 0x14]      ; 005189fd
    MOV EDX,dword ptr [EAX + 0x61c]     ; 00518a00
    MOV dword ptr [EAX + 0x430],EBX     ; 00518a06
    TEST EDX,EDX                        ; 00518a0c
    JZ 0x00518a1a                       ; 00518a0e
        ;   XREF to: 00518a1a (CONDITIONAL_JUMP)  ; LAB_00518a1a
    MOV dword ptr [EAX + 0x61c],0x2     ; 00518a10
    MOV dword ptr [ESP + 0x380],0x1     ; 00518a1a
        ;   Label: LAB_00518a1a
    JMP 0x0051855f                      ; 00518a25
        ;   XREF to: 0051855f (UNCONDITIONAL_JUMP)  ; default
    INC EBX                             ; 00518a2a
        ;   Label: LAB_00518a2a
    MOV ESI,EBX                         ; 00518a2b
    CMP byte ptr [EBX],0x0              ; 00518a2d
    JNZ 0x005185ab                      ; 00518a30
        ;   XREF to: 005185ab (CONDITIONAL_JUMP)  ; LAB_005185ab
    JMP 0x00518600                      ; 00518a36
        ;   XREF to: 00518600 (UNCONDITIONAL_JUMP)  ; LAB_00518600
    INC EBX                             ; 00518a3b
        ;   Label: LAB_00518a3b
    CMP byte ptr [EBX],0x0              ; 00518a3c
    JNZ 0x005185ab                      ; 00518a3f
        ;   XREF to: 005185ab (CONDITIONAL_JUMP)  ; LAB_005185ab
    JMP 0x00518600                      ; 00518a45
        ;   XREF to: 00518600 (UNCONDITIONAL_JUMP)  ; LAB_00518600
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518a4a
        ;   Label: LAB_00518a4a
    ADD EAX,0x604                       ; 00518a4d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518a52
    PUSH EAX                            ; 00518a55
    MOV EBX,dword ptr [EBP + 0x14]      ; 00518a56
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00518a59
    PUSH EBX                            ; 00518a5f
    CALL dword ptr [EDX + 0x38]         ; 00518a60
    ADD ESP,0x8                         ; 00518a63
    MOV dword ptr [EBX + 0x618],EAX     ; 00518a66
    JMP 0x005186ae                      ; 00518a6c
        ;   XREF to: 005186ae (UNCONDITIONAL_JUMP)  ; LAB_005186ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518a71
        ;   Label: LAB_00518a71
    MOV ESI,dword ptr [EAX + 0x618]     ; 00518a74
    PUSH ESI                            ; 00518a7a
    MOV EDI,dword ptr [0x0061c068]      ; 00518a7b | DAT_0061c068
    PUSH EDI                            ; 00518a81
    CALL core_sound.cpp_FUN_0055af80    ; 00518a82
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055af80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00518a87
    JMP 0x005186ae                      ; 00518a8a
        ;   XREF to: 005186ae (UNCONDITIONAL_JUMP)  ; LAB_005186ae
    ADD EAX,dword ptr [ESP + 0x388]     ; 00518a8f
        ;   Label: LAB_00518a8f
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00518a96 | g_CDemonSetInstance.field1372332_0x14f0ac
    PUSH EBX                            ; 00518a9c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00518a9d
    CALL dword ptr [EAX + 0x114]        ; 00518aa3
    ADD ESP,0x4                         ; 00518aa9
    TEST EAX,EAX                        ; 00518aac
    JG 0x00518dfc                       ; 00518aae
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    PUSH EBX                            ; 00518ab4
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00518ab5
    CALL dword ptr [EAX + 0x78]         ; 00518abb
    ADD ESP,0x4                         ; 00518abe
    TEST EAX,EAX                        ; 00518ac1
    JNZ 0x00518dfc                      ; 00518ac3
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518ac9
    CMP dword ptr [EAX + 0x66c],0x0     ; 00518acc
    JZ 0x00518dc3                       ; 00518ad3
        ;   XREF to: 00518dc3 (CONDITIONAL_JUMP)  ; LAB_00518dc3
    LEA EAX,[EBX + 0x20]                ; 00518ad9
    PUSH EAX                            ; 00518adc
    MOV EDI,dword ptr [EBP + 0x14]      ; 00518add
    PUSH EDI                            ; 00518ae0
    LEA ESI,[ESP + 0x31c]               ; 00518ae1
    CALL core_actor.cpp_FUN_00408de0    ; 00518ae8
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA EDI,[ESP + 0x2ec]               ; 00518aed
    LEA ESI,[ESP + 0x31c]               ; 00518af4
    ADD ESP,0x8                         ; 00518afb
    MOVSD ES:EDI,ESI                    ; 00518afe
    MOVSD ES:EDI,ESI                    ; 00518aff
    MOVSD ES:EDI,ESI                    ; 00518b00
    FLD float ptr [ESP + 0x2e8]         ; 00518b01
    FCOMP float ptr [ESP + 0x2ac]       ; 00518b08
    FNSTSW AX                           ; 00518b0f
    SAHF                                ; 00518b11
    JA 0x00518dfc                       ; 00518b12
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x2a0]         ; 00518b18
    FADD double ptr [0x005e21c8]        ; 00518b1f | DAT_005e21c8
    FLD float ptr [ESP + 0x2e8]         ; 00518b25
    FCOMPP                              ; 00518b2c
    FNSTSW AX                           ; 00518b2e
    SAHF                                ; 00518b30
    JC 0x00518dfc                       ; 00518b31
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    LEA EAX,[ESP + 0x2e4]               ; 00518b37
    PUSH EAX                            ; 00518b3e
    LEA EAX,[ESP + 0x2a0]               ; 00518b3f
    PUSH EAX                            ; 00518b46
    LEA ESI,[ESP + 0x2f8]               ; 00518b47
    LEA EDI,[ESP + 0x304]               ; 00518b4e
    CALL core_box.cpp_FUN_0041bb80      ; 00518b55
        ;   XREF to: 0041bb80 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041bb80()
    ADD ESP,0x8                         ; 00518b5a
    LEA ESI,[ESP + 0x2f0]               ; 00518b5d
    FLD float ptr [ESP + 0x2e4]         ; 00518b64
    FLD float ptr [ESP + 0x2e8]         ; 00518b6b
    MOVSD ES:EDI,ESI                    ; 00518b72
    MOVSD ES:EDI,ESI                    ; 00518b73
    MOVSD ES:EDI,ESI                    ; 00518b74
    FLD float ptr [ESP + 0x2ec]         ; 00518b75
    LEA EDI,[ESP + 0x35c]               ; 00518b7c
    LEA ESI,[ESP + 0x2c0]               ; 00518b83
    FXCH ST2                            ; 00518b8a
    FSUB float ptr [ESP + 0x2fc]        ; 00518b8c
    FXCH                                ; 00518b93
    FSUB float ptr [ESP + 0x300]        ; 00518b95
    FXCH ST2                            ; 00518b9c
    FSUB float ptr [ESP + 0x304]        ; 00518b9e
    FXCH                                ; 00518ba5
    FSTP float ptr [ESP + 0x2c0]        ; 00518ba7
    FXCH                                ; 00518bae
    FSTP float ptr [ESP + 0x2c4]        ; 00518bb0
    FSTP float ptr [ESP + 0x2c8]        ; 00518bb7
    MOVSD ES:EDI,ESI                    ; 00518bbe
    MOVSD ES:EDI,ESI                    ; 00518bbf
    MOVSD ES:EDI,ESI                    ; 00518bc0
    FLD float ptr [ESP + 0x35c]         ; 00518bc1
    FABS                                ; 00518bc8
    FCOMP double ptr [0x005e21d0]       ; 00518bca | DAT_005e21d0
    FNSTSW AX                           ; 00518bd0
    SAHF                                ; 00518bd2
    JA 0x00518dfc                       ; 00518bd3
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x364]         ; 00518bd9
    FABS                                ; 00518be0
    FCOMP double ptr [0x005e21d0]       ; 00518be2 | DAT_005e21d0
    FNSTSW AX                           ; 00518be8
    SAHF                                ; 00518bea
    JA 0x00518dfc                       ; 00518beb
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    XOR EAX,EAX                         ; 00518bf1
    MOV dword ptr [ESP + 0x360],EAX     ; 00518bf3
    LEA EAX,[ESP + 0x25c]               ; 00518bfa
    PUSH EAX                            ; 00518c01
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 00518c02
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00518c07
    LEA EAX,[ESP + 0x25c]               ; 00518c0a
    XOR EDX,EDX                         ; 00518c11
    PUSH EAX                            ; 00518c13
    MOV dword ptr [ESP + 0x260],EDX     ; 00518c14
    PUSH EBX                            ; 00518c1b
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00518c1c
    CALL dword ptr [EDX + 0x44]         ; 00518c22
    ADD ESP,0x8                         ; 00518c25
    CMP EAX,0x2                         ; 00518c28
    JNZ 0x00518dfc                      ; 00518c2b
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x2e8]         ; 00518c31
    FADD float ptr [ESP + 0x270]        ; 00518c38
    FCOMP float ptr [ESP + 0x2ac]       ; 00518c3f
    FNSTSW AX                           ; 00518c46
    SAHF                                ; 00518c48
    JA 0x00518dfc                       ; 00518c49
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x2e8]         ; 00518c4f
    FADD float ptr [ESP + 0x274]        ; 00518c56
    FCOMP float ptr [ESP + 0x2a0]       ; 00518c5d
    FNSTSW AX                           ; 00518c64
    SAHF                                ; 00518c66
    JC 0x00518dfc                       ; 00518c67
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x364]         ; 00518c6d
    FMUL ST0                            ; 00518c74
    FLD float ptr [ESP + 0x35c]         ; 00518c76
    FMUL ST0                            ; 00518c7d
    FLD float ptr [ESP + 0x278]         ; 00518c7f
    FXCH                                ; 00518c86
    FADDP ST2,ST0                       ; 00518c88
    FMUL float ptr [ESP + 0x278]        ; 00518c8a
    FXCH                                ; 00518c91
    FSTP float ptr [ESP + 0x8]          ; 00518c93
    FCOMP float ptr [ESP + 0x8]         ; 00518c97
    FNSTSW AX                           ; 00518c9b
    SAHF                                ; 00518c9d
    JC 0x00518dfc                       ; 00518c9e
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x8]           ; 00518ca4
    FSQRT                               ; 00518ca8
    FLDZ                                ; 00518caa
    FXCH                                ; 00518cac
    FST float ptr [ESP + 0x8]           ; 00518cae
    FSTP double ptr [ESP]               ; 00518cb2
    FCOMP double ptr [ESP]              ; 00518cb5
    FNSTSW AX                           ; 00518cb8
    SAHF                                ; 00518cba
    JNC 0x00518dfc                      ; 00518cbb
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [ESP + 0x278]         ; 00518cc1
    FADD double ptr [0x005e21d8]        ; 00518cc8 | DAT_005e21d8
    FDIV double ptr [ESP]               ; 00518cce
    FLD float ptr [ESP + 0x35c]         ; 00518cd1
    FXCH                                ; 00518cd8
    FSTP float ptr [ESP + 0x394]        ; 00518cda
    FMUL float ptr [ESP + 0x394]        ; 00518ce1
    FLDZ                                ; 00518ce8
    FMUL float ptr [ESP + 0x394]        ; 00518cea
    FLD float ptr [ESP + 0x364]         ; 00518cf1
    FMUL float ptr [ESP + 0x394]        ; 00518cf8
    FLD float ptr [ESP + 0x2fc]         ; 00518cff
    FLD float ptr [ESP + 0x300]         ; 00518d06
    FLD float ptr [ESP + 0x304]         ; 00518d0d
    LEA EDI,[ESP + 0x308]               ; 00518d14
    LEA ESI,[ESP + 0x338]               ; 00518d1b
    LEA EAX,[ESP + 0x308]               ; 00518d22
    MOV ECX,dword ptr [EBP + 0x14]      ; 00518d29
    PUSH EAX                            ; 00518d2c
    FXCH ST5                            ; 00518d2d
    FSTP float ptr [ESP + 0x360]        ; 00518d2f
    FXCH ST3                            ; 00518d36
    FSTP float ptr [ESP + 0x364]        ; 00518d38
    FXCH                                ; 00518d3f
    FSTP float ptr [ESP + 0x368]        ; 00518d41
    FADD float ptr [ESP + 0x360]        ; 00518d48
    FXCH                                ; 00518d4f
    FADD float ptr [ESP + 0x364]        ; 00518d51
    FXCH ST2                            ; 00518d58
    FADD float ptr [ESP + 0x368]        ; 00518d5a
    FXCH                                ; 00518d61
    FSTP float ptr [ESP + 0x33c]        ; 00518d63
    FXCH                                ; 00518d6a
    FSTP float ptr [ESP + 0x340]        ; 00518d6c
    FSTP float ptr [ESP + 0x344]        ; 00518d73
    MOVSD ES:EDI,ESI                    ; 00518d7a
    MOVSD ES:EDI,ESI                    ; 00518d7b
    MOVSD ES:EDI,ESI                    ; 00518d7c
    PUSH ECX                            ; 00518d7d
    LEA ESI,[ESP + 0x370]               ; 00518d7e
    LEA EDI,[ESP + 0x328]               ; 00518d85
    CALL core_actor.cpp_FUN_00408d70    ; 00518d8c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x370]               ; 00518d91
    ADD ESP,0x8                         ; 00518d98
    MOVSD ES:EDI,ESI                    ; 00518d9b
    MOVSD ES:EDI,ESI                    ; 00518d9c
    MOVSD ES:EDI,ESI                    ; 00518d9d
    MOV EAX,dword ptr [EBX + 0x24]      ; 00518d9e
    MOV dword ptr [ESP + 0x324],EAX     ; 00518da1
    LEA EAX,[EBX + 0x30]                ; 00518da8
    PUSH EAX                            ; 00518dab
    LEA EAX,[ESP + 0x324]               ; 00518dac
    PUSH EAX                            ; 00518db3
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00518db4
    PUSH EBX                            ; 00518dba
    CALL dword ptr [EDX + 0x70]         ; 00518dbb
    ADD ESP,0xc                         ; 00518dbe
    JMP 0x00518dfc                      ; 00518dc1
        ;   XREF to: 00518dfc (UNCONDITIONAL_JUMP)  ; LAB_00518dfc
    FLD float ptr [EAX + 0x24]          ; 00518dc3
        ;   Label: LAB_00518dc3
    FCOMP float ptr [ESP + 0x374]       ; 00518dc6
    FNSTSW AX                           ; 00518dcd
    SAHF                                ; 00518dcf
    JNC 0x00518dfc                      ; 00518dd0
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    PUSH EBX                            ; 00518dd2
    MOV ESI,dword ptr [EBP + 0x14]      ; 00518dd3
    PUSH ESI                            ; 00518dd6
    CALL core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005197b0 ; 00518dd7
        ;   XREF to: 005197b0 (UNCONDITIONAL_CALL)  ; int core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005197b0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00518ddc
    TEST EAX,EAX                        ; 00518ddf
    JZ 0x00518dfc                       ; 00518de1
        ;   XREF to: 00518dfc (CONDITIONAL_JUMP)  ; LAB_00518dfc
    PUSH 0xbf800000                     ; 00518de3
    PUSH 0x0                            ; 00518de8
    PUSH 0x8                            ; 00518dea
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00518dec
    PUSH EBX                            ; 00518df2
    CALL dword ptr [EAX + 0xe4]         ; 00518df3
    ADD ESP,0x10                        ; 00518df9
    MOV ESI,dword ptr [ESP + 0x390]     ; 00518dfc
        ;   Label: LAB_00518dfc
    MOV EBX,dword ptr [ESP + 0x388]     ; 00518e03
    INC ESI                             ; 00518e0a
    ADD EBX,0x4                         ; 00518e0b
    MOV dword ptr [ESP + 0x390],ESI     ; 00518e0e
    MOV dword ptr [ESP + 0x388],EBX     ; 00518e15
    JMP 0x00518730                      ; 00518e1c
        ;   XREF to: 00518730 (UNCONDITIONAL_JUMP)  ; LAB_00518730
    LEA EAX,[EBX + 0x30]                ; 00518e21
        ;   Label: LAB_00518e21
    PUSH EAX                            ; 00518e24
    LEA EAX,[EBX + 0x20]                ; 00518e25
    PUSH EAX                            ; 00518e28
    MOV dword ptr [ESP + 0x3a0],EAX     ; 00518e29
    LEA EAX,[ESP + 0x1a4]               ; 00518e30
    PUSH EAX                            ; 00518e37
    CALL core_xform.cpp_FUN_00591c10    ; 00518e38
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00518e3d
    LEA EAX,[ESP + 0x13c]               ; 00518e40
    PUSH EAX                            ; 00518e47
    LEA EAX,[ESP + 0x1a0]               ; 00518e48
    PUSH EAX                            ; 00518e4f
    LEA ESI,[ESP + 0x204]               ; 00518e50
    LEA EDI,[ESP + 0x1d4]               ; 00518e57
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00518e5e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00518e63
    ADD ESP,0x8                         ; 00518e68
    LEA EAX,[ESP + 0x10c]               ; 00518e6b
    LEA ESI,[ESP + 0x1fc]               ; 00518e72
    PUSH EAX                            ; 00518e79
    LEA EAX,[ESP + 0x1d0]               ; 00518e7a
    MOVSD.REP ES:EDI,ESI                ; 00518e81
    PUSH EAX                            ; 00518e83
    LEA ESI,[ESP + 0x234]               ; 00518e84
    LEA EDI,[ESP + 0x174]               ; 00518e8b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00518e92
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00518e97
    LEA ESI,[ESP + 0x234]               ; 00518e9c
    ADD ESP,0x8                         ; 00518ea3
    MOVSD.REP ES:EDI,ESI                ; 00518ea6
    MOV EAX,dword ptr [ESP + 0x178]     ; 00518ea8
    MOV dword ptr [ESP + 0x32c],EAX     ; 00518eaf
    MOV EAX,dword ptr [ESP + 0x188]     ; 00518eb6
    LEA EDI,[ESP + 0x344]               ; 00518ebd
    MOV dword ptr [ESP + 0x330],EAX     ; 00518ec4
    MOV EAX,dword ptr [ESP + 0x198]     ; 00518ecb
    LEA ESI,[ESP + 0x32c]               ; 00518ed2
    MOV dword ptr [ESP + 0x334],EAX     ; 00518ed9
    LEA EAX,[ESP + 0x16c]               ; 00518ee0
    MOVSD ES:EDI,ESI                    ; 00518ee7
    MOVSD ES:EDI,ESI                    ; 00518ee8
    MOVSD ES:EDI,ESI                    ; 00518ee9
    PUSH EAX                            ; 00518eea
    LEA ESI,[ESP + 0x2dc]               ; 00518eeb
    LEA EDI,[ESP + 0x354]               ; 00518ef2
    CALL core_xform.cpp_FUN_00591de0    ; 00518ef9
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[ESP + 0x2dc]               ; 00518efe
    ADD ESP,0x4                         ; 00518f05
    LEA EDX,[EBX + 0xe0]                ; 00518f08
    FLD float ptr [ESP + 0x344]         ; 00518f0e
    FLD float ptr [ESP + 0x348]         ; 00518f15
    FLD float ptr [ESP + 0x34c]         ; 00518f1c
    MOVSD ES:EDI,ESI                    ; 00518f23
    MOVSD ES:EDI,ESI                    ; 00518f24
    MOVSD ES:EDI,ESI                    ; 00518f25
    MOV EAX,dword ptr [ESP + 0x398]     ; 00518f26
    LEA EDI,[ESP + 0x2b4]               ; 00518f2d
    LEA ESI,[ESP + 0x2cc]               ; 00518f34
    FXCH ST2                            ; 00518f3b
    FSUB float ptr [EAX]                ; 00518f3d
    FXCH                                ; 00518f3f
    FSUB float ptr [EAX + 0x4]          ; 00518f41
    FXCH ST2                            ; 00518f44
    FSUB float ptr [EAX + 0x8]          ; 00518f46
    FXCH                                ; 00518f49
    FSTP float ptr [ESP + 0x2cc]        ; 00518f4b
    FXCH                                ; 00518f52
    FSTP float ptr [ESP + 0x2d0]        ; 00518f54
    FSTP float ptr [ESP + 0x2d4]        ; 00518f5b
    LEA EAX,[ESP + 0x2b4]               ; 00518f62
    MOVSD ES:EDI,ESI                    ; 00518f69
    MOVSD ES:EDI,ESI                    ; 00518f6a
    MOVSD ES:EDI,ESI                    ; 00518f6b
    CMP EDX,EAX                         ; 00518f6c
    JZ 0x00518f8d                       ; 00518f6e
        ;   XREF to: 00518f8d (CONDITIONAL_JUMP)  ; LAB_00518f8d
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 00518f70
    MOV dword ptr [EDX],EAX             ; 00518f77
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 00518f79
    MOV dword ptr [EDX + 0x4],EAX       ; 00518f80
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 00518f83
    MOV dword ptr [EDX + 0x8],EAX       ; 00518f8a
    MOV dword ptr [EBX + 0xec],0x0      ; 00518f8d
        ;   Label: LAB_00518f8d
    MOV dword ptr [EBX + 0xf4],0x0      ; 00518f97
    FLD float ptr [ESP + 0x354]         ; 00518fa1
    FSUB float ptr [EBX + 0x34]         ; 00518fa8
    SUB ESP,0x4                         ; 00518fab
    FSTP float ptr [ESP]                ; 00518fae
    CALL core_actor.cpp_FUN_0040d0c0    ; 00518fb1
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x39c],EAX     ; 00518fb6
    MOV EAX,dword ptr [ESP + 0x39c]     ; 00518fbd
    MOV dword ptr [EBX + 0xf0],EAX      ; 00518fc4
    ADD ESP,0x4                         ; 00518fca
    JMP 0x0051878c                      ; 00518fcd
        ;   XREF to: 0051878c (UNCONDITIONAL_JUMP)  ; LAB_0051878c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518fd2
        ;   Label: LAB_00518fd2
    PUSH EAX                            ; 00518fd5
    CALL core_platfrm.cpp_FUN_00519ba0  ; 00518fd6
        ;   XREF to: 00519ba0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00519ba0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00518fdb
    MOV ESP,EBP                         ; 00518fde
        ;   Label: LAB_00518fde
    POP EBP                             ; 00518fe0
    POP EDI                             ; 00518fe1
    POP ESI                             ; 00518fe2
    POP EBX                             ; 00518fe3
    RET                                 ; 00518fe4

