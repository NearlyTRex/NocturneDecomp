; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_FUN_004d6540(void)
;
; Local Variables:
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3493
;
; Referenced Globals:
;   double DOUBLE_0062b0b5 = 3.14159265350000
;   double DOUBLE_0062b0bd = 2
;   float FLOAT_0062b0c5 = -1.570796
;   float FLOAT_0062b0c9 = 0.5
;   double DOUBLE_0062b0cd = 0.5
;   double DOUBLE_0062b0d5 = 1.5
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_0065e7c0 = 0.3000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int INT_02d7b860
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_gabriela.cpp_FUN_004d6260
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6540
        ;   Label: core_gabriela.cpp_FUN_004d6540
    PUSH ESI                            ; 004d6541
    PUSH EDI                            ; 004d6542
    PUSH EBP                            ; 004d6543
    MOV EBP,ESP                         ; 004d6544
    SUB ESP,0x124                       ; 004d6546
    AND ESP,0xfffffff8                  ; 004d654c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d654f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004d6552
    TEST ESI,ESI                        ; 004d6555
    JZ 0x004d6655                       ; 004d6557
        ;   XREF to: 004d6655 (CONDITIONAL_JUMP)  ; LAB_004d6655
    CMP dword ptr [EBX + 0x1f734],0x0   ; 004d655d
        ;   Label: LAB_004d655d
    JNZ 0x004d667a                      ; 004d6564
        ;   XREF to: 004d667a (CONDITIONAL_JUMP)  ; LAB_004d667a
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004d656a
        ;   Label: LAB_004d656a
    JNZ 0x004d670c                      ; 004d6571
        ;   XREF to: 004d670c (CONDITIONAL_JUMP)  ; LAB_004d670c
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 004d6577
        ;   Label: LAB_004d6577
    CMP dword ptr [EBX + 0x1fbec],0x2   ; 004d6581
        ;   Label: LAB_004d6581
    JNZ 0x004d67d7                      ; 004d6588
        ;   XREF to: 004d67d7 (CONDITIONAL_JUMP)  ; LAB_004d67d7
    MOV ESI,dword ptr [EBX + 0x1fbf8]   ; 004d658e
    TEST ESI,ESI                        ; 004d6594
    JNZ 0x004d65c2                      ; 004d6596
        ;   XREF to: 004d65c2 (CONDITIONAL_JUMP)  ; LAB_004d65c2
    MOV dword ptr [EBX + 0x1fc08],ESI   ; 004d6598
    MOV EAX,dword ptr [EBX + 0x1fc08]   ; 004d659e
    MOV dword ptr [EBX + 0x1fc04],EAX   ; 004d65a4
    MOV EAX,dword ptr [EBX + 0x1fc04]   ; 004d65aa
    MOV dword ptr [EBX + 0x1fc00],EAX   ; 004d65b0
    MOV EAX,dword ptr [EBX + 0x1fc00]   ; 004d65b6
    MOV dword ptr [EBX + 0x1fbfc],EAX   ; 004d65bc
    FLD float ptr [0x0065e7c0]          ; 004d65c2 | FLOAT_0065e7c0
        ;   Label: LAB_004d65c2
    FMUL double ptr [0x0062b0cd]        ; 004d65c8 | DOUBLE_0062b0cd
    FDIVR float ptr [EBP + 0x18]        ; 004d65ce
    FADD float ptr [EBX + 0x1fc10]      ; 004d65d1
    FSTP float ptr [EBX + 0x1fc10]      ; 004d65d7
        ;   Label: LAB_004d65d7
    FLD float ptr [EBX + 0x1fc10]       ; 004d65dd
        ;   Label: LAB_004d65dd
    FLD1                                ; 004d65e3
    FCOMPP                              ; 004d65e5
    FNSTSW AX                           ; 004d65e7
    SAHF                                ; 004d65e9
    JNC 0x004d65f6                      ; 004d65ea
        ;   XREF to: 004d65f6 (CONDITIONAL_JUMP)  ; LAB_004d65f6
    MOV dword ptr [EBX + 0x1fc10],0x3f800000 ; 004d65ec
    FLD float ptr [EBX + 0x1fc10]       ; 004d65f6
        ;   Label: LAB_004d65f6
    FLDZ                                ; 004d65fc
    FCOMPP                              ; 004d65fe
    FNSTSW AX                           ; 004d6600
    SAHF                                ; 004d6602
    JBE 0x004d6623                      ; 004d6603
        ;   XREF to: 004d6623 (CONDITIONAL_JUMP)  ; LAB_004d6623
    MOV dword ptr [EBX + 0x1fc04],0x0   ; 004d6605
    MOV dword ptr [EBX + 0x1fc08],0x0   ; 004d660f
    MOV dword ptr [EBX + 0x1fc10],0x0   ; 004d6619
    FLD float ptr [EBX + 0x1fc10]       ; 004d6623
        ;   Label: LAB_004d6623
    FLDZ                                ; 004d6629
    FCOMPP                              ; 004d662b
    FNSTSW AX                           ; 004d662d
    SAHF                                ; 004d662f
    JC 0x004d69e7                       ; 004d6630
        ;   XREF to: 004d69e7 (CONDITIONAL_JUMP)  ; LAB_004d69e7
    FLD float ptr [EBX + 0x1fc00]       ; 004d6636
    MOV EAX,dword ptr [EBX + 0x1fbfc]   ; 004d663c
    MOV dword ptr [EBX + 0x1fc04],EAX   ; 004d6642
    FSTP float ptr [EBX + 0x1fc08]      ; 004d6648
    MOV ESP,EBP                         ; 004d664e
    POP EBP                             ; 004d6650
    POP EDI                             ; 004d6651
    POP ESI                             ; 004d6652
    POP EBX                             ; 004d6653
    RET                                 ; 004d6654
    LEA EAX,[EBX + 0x158]               ; 004d6655
        ;   Label: LAB_004d6655
    PUSH EAX                            ; 004d665b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d665c
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d6661
    ADD ESP,0x4                         ; 004d6664
    CMP EAX,0x2                         ; 004d6667
    JNZ 0x004d655d                      ; 004d666a
        ;   XREF to: 004d655d (CONDITIONAL_JUMP)  ; LAB_004d655d
    MOV ESI,0x1                         ; 004d6670
    JMP 0x004d655d                      ; 004d6675
        ;   XREF to: 004d655d (UNCONDITIONAL_JUMP)  ; LAB_004d655d
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004d667a
        ;   Label: LAB_004d667a
    JZ 0x004d656a                       ; 004d6681
        ;   XREF to: 004d656a (CONDITIONAL_JUMP)  ; LAB_004d656a
    FLD float ptr [EBX + 0xbe54]        ; 004d6687
    FMUL double ptr [0x0062b0b5]        ; 004d668d | DOUBLE_0062b0b5
    FMUL double ptr [0x0062b0bd]        ; 004d6693 | DOUBLE_0062b0bd
    FMUL float ptr [EBP + 0x18]         ; 004d6699
    MOV ESI,0x3fc90fdb                  ; 004d669c
    FLD float ptr [EBX + 0x1fbfc]       ; 004d66a1
    FXCH                                ; 004d66a7
    FADD ST0,ST1                        ; 004d66a9
    MOV dword ptr [ESP + 0xfc],ESI      ; 004d66ab
    FSTP ST1                            ; 004d66b2
    FST float ptr [EBX + 0x1fbfc]       ; 004d66b4
    FCOMP float ptr [0x0062b0c5]        ; 004d66ba | FLOAT_0062b0c5
    FNSTSW AX                           ; 004d66c0
    SAHF                                ; 004d66c2
    JNC 0x004d66cf                      ; 004d66c3
        ;   XREF to: 004d66cf (CONDITIONAL_JUMP)  ; LAB_004d66cf
    MOV dword ptr [EBX + 0x1fbfc],0xbfc90fdb ; 004d66c5
    FLD float ptr [EBX + 0x1fbfc]       ; 004d66cf
        ;   Label: LAB_004d66cf
    FCOMP float ptr [ESP + 0xfc]        ; 004d66d5
    FNSTSW AX                           ; 004d66dc
    SAHF                                ; 004d66de
    JBE 0x004d66ee                      ; 004d66df
        ;   XREF to: 004d66ee (CONDITIONAL_JUMP)  ; LAB_004d66ee
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004d66e1
    MOV dword ptr [EBX + 0x1fbfc],EAX   ; 004d66e8
    FLD float ptr [EBP + 0x18]          ; 004d66ee
        ;   Label: LAB_004d66ee
    FDIV float ptr [0x0065e7c0]         ; 004d66f1 | FLOAT_0065e7c0
    FADD float ptr [EBX + 0x1fc10]      ; 004d66f7
    MOV dword ptr [EBX + 0x1fc00],0x0   ; 004d66fd
    JMP 0x004d65d7                      ; 004d6707
        ;   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)  ; LAB_004d65d7
    TEST ESI,ESI                        ; 004d670c
        ;   Label: LAB_004d670c
    JNZ 0x004d6577                      ; 004d670e
        ;   XREF to: 004d6577 (CONDITIONAL_JUMP)  ; LAB_004d6577
    CMP dword ptr [EBX + 0x1fbec],0x0   ; 004d6714
    JNZ 0x004d6581                      ; 004d671b
        ;   XREF to: 004d6581 (CONDITIONAL_JUMP)  ; LAB_004d6581
    MOV EDX,0x7149f2ca                  ; 004d6721
    MOV dword ptr [ESP + 0x110],ESI     ; 004d6726
    MOV dword ptr [ESP + 0x118],ESI     ; 004d672d
    XOR EDI,EDI                         ; 004d6734
    MOV dword ptr [ESP + 0x114],EDX     ; 004d6736
    MOV EAX,[0x006810c8]                ; 004d673d | g_CDemonSetPtr
        ;   Label: LAB_004d673d
    MOV ESI,dword ptr [ESP + 0x118]     ; 004d6742
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004d6749 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x004d67c5                      ; 004d674f
        ;   XREF to: 004d67c5 (CONDITIONAL_JUMP)  ; LAB_004d67c5
    MOV ESI,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 004d6755 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    CMP ESI,dword ptr [EBX + 0x1fbf8]   ; 004d675c
    SETZ AL                             ; 004d6762
    AND EAX,0xff                        ; 004d6765
    PUSH EAX                            ; 004d676a
    PUSH ESI                            ; 004d676b
    PUSH EBX                            ; 004d676c
    CALL core_gabriela.cpp_FUN_004d6260 ; 004d676d
        ;   XREF to: 004d6260 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d6260()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004d6772
    FLD float ptr [ESP + 0x12c]         ; 004d6779
    ADD ESP,0xc                         ; 004d6780
    FST float ptr [ESP]                 ; 004d6783
    FLDZ                                ; 004d6786
    FCOMPP                              ; 004d6788
    FNSTSW AX                           ; 004d678a
    SAHF                                ; 004d678c
    JBE 0x004d67a3                      ; 004d678d
        ;   XREF to: 004d67a3 (CONDITIONAL_JUMP)  ; LAB_004d67a3
    MOV ESI,dword ptr [ESP + 0x118]     ; 004d678f
        ;   Label: LAB_004d678f
    INC ESI                             ; 004d6796
    ADD EDI,0x4                         ; 004d6797
    MOV dword ptr [ESP + 0x118],ESI     ; 004d679a
    JMP 0x004d673d                      ; 004d67a1
        ;   XREF to: 004d673d (UNCONDITIONAL_JUMP)  ; LAB_004d673d
    FLD float ptr [ESP]                 ; 004d67a3
        ;   Label: LAB_004d67a3
    FCOMP float ptr [ESP + 0x114]       ; 004d67a6
    FNSTSW AX                           ; 004d67ad
    SAHF                                ; 004d67af
    JNC 0x004d678f                      ; 004d67b0
        ;   XREF to: 004d678f (CONDITIONAL_JUMP)  ; LAB_004d678f
    MOV EAX,dword ptr [ESP]             ; 004d67b2
    MOV dword ptr [ESP + 0x110],ESI     ; 004d67b5
    MOV dword ptr [ESP + 0x114],EAX     ; 004d67bc
    JMP 0x004d678f                      ; 004d67c3
        ;   XREF to: 004d678f (UNCONDITIONAL_JUMP)  ; LAB_004d678f
    MOV EAX,dword ptr [ESP + 0x110]     ; 004d67c5
        ;   Label: LAB_004d67c5
    MOV dword ptr [EBX + 0x1fbf8],EAX   ; 004d67cc
    JMP 0x004d6581                      ; 004d67d2
        ;   XREF to: 004d6581 (UNCONDITIONAL_JUMP)  ; LAB_004d6581
    CMP dword ptr [EBX + 0x1fbf8],0x0   ; 004d67d7
        ;   Label: LAB_004d67d7
    JZ 0x004d69c0                       ; 004d67de
        ;   XREF to: 004d69c0 (CONDITIONAL_JUMP)  ; LAB_004d69c0
    PUSH 0x6598c0                       ; 004d67e4 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004d67e9
    LEA EAX,[ESP + 0xc]                 ; 004d67eb
    PUSH EAX                            ; 004d67ef
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004d67f0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d67f5
    LEA ESI,[ESP + 0x4]                 ; 004d67f8
    MOV EAX,dword ptr [EBX + 0x1fbf8]   ; 004d67fc
    PUSH ESI                            ; 004d6802
    MOV EDI,dword ptr [EAX + 0x154]     ; 004d6803
    PUSH EAX                            ; 004d6809
    CALL dword ptr [EDI + 0x4c]         ; 004d680a
    ADD ESP,0x8                         ; 004d680d
    TEST EAX,EAX                        ; 004d6810
    JLE 0x004d6913                      ; 004d6812
        ;   XREF to: 004d6913 (CONDITIONAL_JUMP)  ; LAB_004d6913
    LEA EAX,[ESP + 0xe8]                ; 004d6818
    LEA ESI,[ESP + 0x4]                 ; 004d681f
    CMP EAX,ESI                         ; 004d6823
    JZ 0x004d6848                       ; 004d6825
        ;   XREF to: 004d6848 (CONDITIONAL_JUMP)  ; LAB_004d6848
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6827
    MOV dword ptr [ESP + 0xe8],EAX      ; 004d682b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d6832
    MOV dword ptr [ESP + 0xec],EAX      ; 004d6836
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d683d
    MOV dword ptr [ESP + 0xf0],EAX      ; 004d6841
        ;   Label: LAB_004d6841
    LEA EAX,[ESP + 0xe8]                ; 004d6848
        ;   Label: LAB_004d6848
    PUSH EAX                            ; 004d684f
    LEA EAX,[ESP + 0xd4]                ; 004d6850
    PUSH EAX                            ; 004d6857
    MOV EDX,dword ptr [EBX + 0x1fbf8]   ; 004d6858
    PUSH EDX                            ; 004d685e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d685f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d6864
    PUSH EAX                            ; 004d6867
    LEA EAX,[ESP + 0xc8]                ; 004d6868
    PUSH EAX                            ; 004d686f
    PUSH EBX                            ; 004d6870
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d6871
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d6876
    MOV ECX,dword ptr [0x02d7b860]      ; 004d6879 | INT_02d7b860
    PUSH ECX                            ; 004d687f
    LEA EAX,[ESP + 0xbc]                ; 004d6880
    PUSH EAX                            ; 004d6887
    LEA EAX,[EBX + 0x158]               ; 004d6888
    PUSH EAX                            ; 004d688e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d688f
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d6894
    FLD float ptr [ESP + 0xc4]          ; 004d6897
    FSUB float ptr [EAX]                ; 004d689e
    FLD float ptr [ESP + 0xc8]          ; 004d68a0
    FXCH                                ; 004d68a7
    FSTP float ptr [ESP + 0xa0]         ; 004d68a9
    FSUB float ptr [EAX + 0x4]          ; 004d68b0
    FLD float ptr [ESP + 0xcc]          ; 004d68b3
    FXCH                                ; 004d68ba
    FSTP float ptr [ESP + 0xa4]         ; 004d68bc
    FSUB float ptr [EAX + 0x8]          ; 004d68c3
    LEA EAX,[ESP + 0xa0]                ; 004d68c6
    PUSH EAX                            ; 004d68cd
    LEA EAX,[ESP + 0xe0]                ; 004d68ce
    PUSH EAX                            ; 004d68d5
    FSTP float ptr [ESP + 0xb0]         ; 004d68d6
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d68dd
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d68e2
    FLD float ptr [EBP + 0x18]          ; 004d68e5
    FDIV float ptr [0x0065e7c0]         ; 004d68e8 | FLOAT_0065e7c0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004d68ee
    MOV dword ptr [EBX + 0x1fbfc],EAX   ; 004d68f5
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004d68fb
    FADD float ptr [EBX + 0x1fc10]      ; 004d6902
    MOV dword ptr [EBX + 0x1fc00],EAX   ; 004d6908
    JMP 0x004d65d7                      ; 004d690e
        ;   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)  ; LAB_004d65d7
    LEA ESI,[ESP + 0x7c]                ; 004d6913
        ;   Label: LAB_004d6913
    MOV EAX,dword ptr [EBX + 0x1fbf8]   ; 004d6917
    PUSH ESI                            ; 004d691d
    MOV EDI,dword ptr [EAX + 0x154]     ; 004d691e
    PUSH EAX                            ; 004d6924
    CALL dword ptr [EDI + 0x14]         ; 004d6925
    LEA ESI,[EAX + 0xc]                 ; 004d6928
    FLD float ptr [EAX]                 ; 004d692b
    FADD float ptr [ESI]                ; 004d692d
    ADD ESP,0x8                         ; 004d692f
    FST float ptr [ESP + 0x94]          ; 004d6932
    FLD float ptr [EAX + 0x4]           ; 004d6939
    FADD float ptr [ESI + 0x4]          ; 004d693c
    FXCH                                ; 004d693f
    FLD float ptr [0x0062b0c9]          ; 004d6941 | FLOAT_0062b0c9
    FXCH                                ; 004d6947
    FMUL ST1                            ; 004d6949
    FXCH ST2                            ; 004d694b
    FST float ptr [ESP + 0x98]          ; 004d694d
    FLD float ptr [EAX + 0x8]           ; 004d6954
    FADD float ptr [ESI + 0x8]          ; 004d6957
    FXCH                                ; 004d695a
    FMUL ST2                            ; 004d695c
    FXCH                                ; 004d695e
    FST float ptr [ESP + 0x9c]          ; 004d6960
    FMULP ST2                           ; 004d6967
    LEA EAX,[ESP + 0xac]                ; 004d6969
    FXCH ST2                            ; 004d6970
    FSTP float ptr [ESP + 0xac]         ; 004d6972
    FXCH                                ; 004d6979
    FSTP float ptr [ESP + 0xb0]         ; 004d697b
    LEA ESI,[ESP + 0xe8]                ; 004d6982
    FSTP float ptr [ESP + 0xb4]         ; 004d6989
    CMP ESI,EAX                         ; 004d6990
    JZ 0x004d6848                       ; 004d6992
        ;   XREF to: 004d6848 (CONDITIONAL_JUMP)  ; LAB_004d6848
    MOV EAX,dword ptr [ESP + 0xac]      ; 004d6998
    MOV dword ptr [ESP + 0xe8],EAX      ; 004d699f
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004d69a6
    MOV dword ptr [ESP + 0xec],EAX      ; 004d69ad
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004d69b4
    JMP 0x004d6841                      ; 004d69bb
        ;   XREF to: 004d6841 (UNCONDITIONAL_JUMP)  ; LAB_004d6841
    FLD float ptr [EBX + 0x1fc0c]       ; 004d69c0
        ;   Label: LAB_004d69c0
    FLDZ                                ; 004d69c6
    FCOMPP                              ; 004d69c8
    FNSTSW AX                           ; 004d69ca
    SAHF                                ; 004d69cc
    JC 0x004d65dd                       ; 004d69cd
        ;   XREF to: 004d65dd (CONDITIONAL_JUMP)  ; LAB_004d65dd
    FLD float ptr [EBP + 0x18]          ; 004d69d3
    FDIV float ptr [0x0065e7c0]         ; 004d69d6 | FLOAT_0065e7c0
    FSUBR float ptr [EBX + 0x1fc10]     ; 004d69dc
    JMP 0x004d65d7                      ; 004d69e2
        ;   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)  ; LAB_004d65d7
    FLD float ptr [EBX + 0x1fc00]       ; 004d69e7
        ;   Label: LAB_004d69e7
    FSUB float ptr [EBX + 0x1fc08]      ; 004d69ed
    SUB ESP,0x4                         ; 004d69f3
    FSTP float ptr [ESP]                ; 004d69f6
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d69f9
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x124],EAX     ; 004d69fe
    FLD float ptr [EBX + 0x1fbfc]       ; 004d6a05
    FLD float ptr [ESP + 0x124]         ; 004d6a0b
    ADD ESP,0x4                         ; 004d6a12
    FXCH                                ; 004d6a15
    FSUB float ptr [EBX + 0x1fc04]      ; 004d6a17
    FXCH                                ; 004d6a1d
    FSTP float ptr [ESP + 0x11c]        ; 004d6a1f
    SUB ESP,0x4                         ; 004d6a26
    FSTP float ptr [ESP]                ; 004d6a29
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d6a2c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x124],EAX     ; 004d6a31
    FLD float ptr [ESP + 0x124]         ; 004d6a38
    ADD ESP,0x4                         ; 004d6a3f
    FLD float ptr [EBP + 0x18]          ; 004d6a42
    FMUL double ptr [0x0062b0b5]        ; 004d6a45 | DOUBLE_0062b0b5
    FMUL double ptr [0x0062b0d5]        ; 004d6a4b | DOUBLE_0062b0d5
    FLD float ptr [ESP + 0x11c]         ; 004d6a51
    FXCH ST2                            ; 004d6a58
    FSTP float ptr [ESP + 0x108]        ; 004d6a5a
    FST float ptr [ESP + 0x10c]         ; 004d6a61
    FCHS                                ; 004d6a68
    FSTP float ptr [ESP + 0x100]        ; 004d6a6a
    FCOMP float ptr [ESP + 0x100]       ; 004d6a71
    FNSTSW AX                           ; 004d6a78
    SAHF                                ; 004d6a7a
    JNC 0x004d6a8b                      ; 004d6a7b
        ;   XREF to: 004d6a8b (CONDITIONAL_JUMP)  ; LAB_004d6a8b
    MOV EAX,dword ptr [ESP + 0x100]     ; 004d6a7d
    MOV dword ptr [ESP + 0x11c],EAX     ; 004d6a84
    FLD float ptr [ESP + 0x11c]         ; 004d6a8b
        ;   Label: LAB_004d6a8b
    FCOMP float ptr [ESP + 0x10c]       ; 004d6a92
    FNSTSW AX                           ; 004d6a99
    SAHF                                ; 004d6a9b
    JBE 0x004d6aac                      ; 004d6a9c
        ;   XREF to: 004d6aac (CONDITIONAL_JUMP)  ; LAB_004d6aac
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004d6a9e
    MOV dword ptr [ESP + 0x11c],EAX     ; 004d6aa5
    FLD float ptr [ESP + 0x108]         ; 004d6aac
        ;   Label: LAB_004d6aac
    FLD float ptr [ESP + 0x10c]         ; 004d6ab3
    FCHS                                ; 004d6aba
    FSTP float ptr [ESP + 0x104]        ; 004d6abc
    FCOMP float ptr [ESP + 0x104]       ; 004d6ac3
    FNSTSW AX                           ; 004d6aca
    SAHF                                ; 004d6acc
    JNC 0x004d6add                      ; 004d6acd
        ;   XREF to: 004d6add (CONDITIONAL_JUMP)  ; LAB_004d6add
    MOV EAX,dword ptr [ESP + 0x104]     ; 004d6acf
    MOV dword ptr [ESP + 0x108],EAX     ; 004d6ad6
    FLD float ptr [ESP + 0x108]         ; 004d6add
        ;   Label: LAB_004d6add
    FCOMP float ptr [ESP + 0x10c]       ; 004d6ae4
    FNSTSW AX                           ; 004d6aeb
    SAHF                                ; 004d6aed
    JBE 0x004d6afe                      ; 004d6aee
        ;   XREF to: 004d6afe (CONDITIONAL_JUMP)  ; LAB_004d6afe
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004d6af0
    MOV dword ptr [ESP + 0x108],EAX     ; 004d6af7
    FLD float ptr [EBX + 0x1fc08]       ; 004d6afe
        ;   Label: LAB_004d6afe
    FLD float ptr [EBX + 0x1fc04]       ; 004d6b04
    FADD float ptr [ESP + 0x108]        ; 004d6b0a
    FXCH                                ; 004d6b11
    FADD float ptr [ESP + 0x11c]        ; 004d6b13
    FXCH                                ; 004d6b1a
    FSTP float ptr [EBX + 0x1fc04]      ; 004d6b1c
    FSTP float ptr [EBX + 0x1fc08]      ; 004d6b22
    MOV ESP,EBP                         ; 004d6b28
    POP EBP                             ; 004d6b2a
    POP EDI                             ; 004d6b2b
    POP ESI                             ; 004d6b2c
    POP EBX                             ; 004d6b2d
    RET                                 ; 004d6b2e

