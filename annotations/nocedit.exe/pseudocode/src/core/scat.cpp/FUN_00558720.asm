; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00558720()
;
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x40]:4  local_40
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
;   core_scat.cpp_FUN_005571f0 at 00557516
;
; Referenced Globals:
;   double DOUBLE_0064144c = 3.14159265350000
;   double DOUBLE_00641454 = 2
;   float FLOAT_0064145c = -1.570796
;   float FLOAT_00641460 = 0.5
;   double DOUBLE_00641464 = 1.5
;   double DOUBLE_0064146c = 0.0200000000000000
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_03106174
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_scat.cpp_FUN_00558cf0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558720
        ;   Label: core_scat.cpp_FUN_00558720
    PUSH ESI                            ; 00558721
    PUSH EDI                            ; 00558722
    PUSH EBP                            ; 00558723
    MOV EBP,ESP                         ; 00558724
    SUB ESP,0x12c                       ; 00558726
    AND ESP,0xfffffff8                  ; 0055872c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055872f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00558732
    MOV dword ptr [ESI + 0x1fbfc],0x0   ; 00558735
    TEST EDX,EDX                        ; 0055873f
    JZ 0x00558916                       ; 00558741 | LAB_00558916
        ;   XREF to: 00558916 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x1fbec]   ; 00558747
        ;   Label: LAB_00558747
    MOV dword ptr [ESP + 0x4],EAX       ; 0055874d
    MOV EAX,dword ptr [ESI + 0x1fbf0]   ; 00558751
    MOV EBX,dword ptr [ESI + 0x1f734]   ; 00558757
    MOV dword ptr [ESP + 0x114],EAX     ; 0055875d
    TEST EBX,EBX                        ; 00558764
    JNZ 0x0055893d                      ; 00558766 | LAB_0055893d
        ;   XREF to: 0055893d (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x1fbd4],0x0   ; 0055876c
        ;   Label: LAB_0055876c
    JNZ 0x005589b5                      ; 00558773 | LAB_005589b5
        ;   XREF to: 005589b5 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1fbf8],0x0   ; 00558779
        ;   Label: LAB_00558779
    CMP dword ptr [ESI + 0xbe38],0x0    ; 00558783
        ;   Label: LAB_00558783
    JZ 0x00558a81                       ; 0055878a | LAB_00558a81
        ;   XREF to: 00558a81 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + 0x1fbf8]   ; 00558790
    TEST EBX,EBX                        ; 00558796
    JNZ 0x005587bd                      ; 00558798 | LAB_005587bd
        ;   XREF to: 005587bd (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1fbf0],EBX   ; 0055879a
    MOV EAX,dword ptr [ESI + 0x1fbf0]   ; 005587a0
    MOV dword ptr [ESI + 0x1fbec],EAX   ; 005587a6
    MOV EAX,dword ptr [ESI + 0x1fbec]   ; 005587ac
    MOV dword ptr [ESP + 0x114],EAX     ; 005587b2
    MOV dword ptr [ESP + 0x4],EAX       ; 005587b9
    FLD float ptr [ESP + 0x114]         ; 005587bd
        ;   Label: LAB_005587bd
    FSUB float ptr [ESI + 0x1fbf0]      ; 005587c4
    SUB ESP,0x4                         ; 005587ca
    FSTP float ptr [ESP]                ; 005587cd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005587d0 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x12c],EAX     ; 005587d5
    FLD float ptr [ESP + 0x12c]         ; 005587dc
    ADD ESP,0x4                         ; 005587e3
    FLD float ptr [ESP + 0x4]           ; 005587e6
    FXCH                                ; 005587ea
    FSTP float ptr [ESP + 0x108]        ; 005587ec
    FSUB float ptr [ESI + 0x1fbec]      ; 005587f3
    SUB ESP,0x4                         ; 005587f9
    FSTP float ptr [ESP]                ; 005587fc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005587ff | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00558804
    FLD float ptr [ESP + 0x12c]         ; 0055880b
    ADD ESP,0x4                         ; 00558812
    FLD float ptr [EBP + 0x18]          ; 00558815
    FMUL double ptr [0x0064144c]        ; 00558818 | double DOUBLE_0064144c
    FMUL double ptr [0x00641464]        ; 0055881e | double DOUBLE_00641464
    FLD float ptr [ESP + 0x108]         ; 00558824
    FXCH ST2                            ; 0055882b
    FSTP float ptr [ESP + 0x10c]        ; 0055882d
    FST float ptr [ESP + 0x110]         ; 00558834
    FCHS                                ; 0055883b
    FSTP float ptr [ESP + 0x104]        ; 0055883d
    FCOMP float ptr [ESP + 0x104]       ; 00558844
    FNSTSW AX                           ; 0055884b
    SAHF                                ; 0055884d
    JNC 0x0055885e                      ; 0055884e | LAB_0055885e
        ;   XREF to: 0055885e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x104]     ; 00558850
    MOV dword ptr [ESP + 0x108],EAX     ; 00558857
    FLD float ptr [ESP + 0x108]         ; 0055885e
        ;   Label: LAB_0055885e
    FCOMP float ptr [ESP + 0x110]       ; 00558865
    FNSTSW AX                           ; 0055886c
    SAHF                                ; 0055886e
    JBE 0x0055887f                      ; 0055886f | LAB_0055887f
        ;   XREF to: 0055887f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x110]     ; 00558871
    MOV dword ptr [ESP + 0x108],EAX     ; 00558878
    FLD float ptr [ESP + 0x10c]         ; 0055887f
        ;   Label: LAB_0055887f
    FLD float ptr [ESP + 0x110]         ; 00558886
    FCHS                                ; 0055888d
    FSTP float ptr [ESP + 0x100]        ; 0055888f
    FCOMP float ptr [ESP + 0x100]       ; 00558896
    FNSTSW AX                           ; 0055889d
    SAHF                                ; 0055889f
    JNC 0x005588b0                      ; 005588a0 | LAB_005588b0
        ;   XREF to: 005588b0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x100]     ; 005588a2
    MOV dword ptr [ESP + 0x10c],EAX     ; 005588a9
    FLD float ptr [ESP + 0x10c]         ; 005588b0
        ;   Label: LAB_005588b0
    FCOMP float ptr [ESP + 0x110]       ; 005588b7
    FNSTSW AX                           ; 005588be
    SAHF                                ; 005588c0
    JBE 0x005588d1                      ; 005588c1 | LAB_005588d1
        ;   XREF to: 005588d1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x110]     ; 005588c3
    MOV dword ptr [ESP + 0x10c],EAX     ; 005588ca
    FLD float ptr [ESI + 0x1fbf0]       ; 005588d1
        ;   Label: LAB_005588d1
    FLD float ptr [ESI + 0x1fbec]       ; 005588d7
    MOV EDI,dword ptr [ESI + 0x1fbf8]   ; 005588dd
    FADD float ptr [ESP + 0x10c]        ; 005588e3
    FXCH                                ; 005588ea
    FADD float ptr [ESP + 0x108]        ; 005588ec
    FXCH                                ; 005588f3
    FSTP float ptr [ESI + 0x1fbec]      ; 005588f5
    FSTP float ptr [ESI + 0x1fbf0]      ; 005588fb
    TEST EDI,EDI                        ; 00558901
    JZ 0x0055890f                       ; 00558903 | LAB_0055890f
        ;   XREF to: 0055890f (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x0      ; 00558905
    JZ 0x00558c5d                       ; 00558909 | LAB_00558c5d
        ;   XREF to: 00558c5d (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0055890f
        ;   Label: LAB_0055890f
    POP EBP                             ; 00558911
    POP EDI                             ; 00558912
    POP ESI                             ; 00558913
    POP EBX                             ; 00558914
    RET                                 ; 00558915
    LEA EAX,[ESI + 0x158]               ; 00558916
        ;   Label: LAB_00558916
    PUSH EAX                            ; 0055891c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0055891d | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00558922
    ADD ESP,0x4                         ; 00558925
    CMP EAX,0x2                         ; 00558928
    JNZ 0x00558747                      ; 0055892b | LAB_00558747
        ;   XREF to: 00558747 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0x1c],0x1      ; 00558931
    JMP 0x00558747                      ; 00558938 | LAB_00558747
        ;   XREF to: 00558747 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0xbe28],0x2    ; 0055893d
        ;   Label: LAB_0055893d
    JZ 0x0055876c                       ; 00558944 | LAB_0055876c
        ;   XREF to: 0055876c (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0xbe54]        ; 0055894a
    FMUL double ptr [0x0064144c]        ; 00558950 | double DOUBLE_0064144c
    FMUL double ptr [0x00641454]        ; 00558956 | double DOUBLE_00641454
    FMUL float ptr [EBP + 0x18]         ; 0055895c
    MOV EAX,0x3fc90fdb                  ; 0055895f
    FLD float ptr [ESP + 0x4]           ; 00558964
    FXCH                                ; 00558968
    FADD ST0,ST1                        ; 0055896a
    MOV dword ptr [ESP + 0x124],EAX     ; 0055896c
    FSTP ST1                            ; 00558973
    FST float ptr [ESP + 0x4]           ; 00558975
    FCOMP float ptr [0x0064145c]        ; 00558979 | float FLOAT_0064145c
    FNSTSW AX                           ; 0055897f
    SAHF                                ; 00558981
    JNC 0x0055898c                      ; 00558982 | LAB_0055898c
        ;   XREF to: 0055898c (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 00558984
    FLD float ptr [ESP + 0x4]           ; 0055898c
        ;   Label: LAB_0055898c
    FCOMP float ptr [ESP + 0x124]       ; 00558990
    FNSTSW AX                           ; 00558997
    SAHF                                ; 00558999
    JBE 0x005589a7                      ; 0055899a | LAB_005589a7
        ;   XREF to: 005589a7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x124]     ; 0055899c
    MOV dword ptr [ESP + 0x4],EAX       ; 005589a3
    XOR ECX,ECX                         ; 005589a7
        ;   Label: LAB_005589a7
    MOV dword ptr [ESP + 0x114],ECX     ; 005589a9
    JMP 0x005587bd                      ; 005589b0 | LAB_005587bd
        ;   XREF to: 005587bd (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005589b5
        ;   Label: LAB_005589b5
    TEST EDI,EDI                        ; 005589b8
    JNZ 0x00558779                      ; 005589ba | LAB_00558779
        ;   XREF to: 00558779 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0xbe38],0x0    ; 005589c0
    JNZ 0x00558783                      ; 005589c7 | LAB_00558783
        ;   XREF to: 00558783 (CONDITIONAL_JUMP)
    MOV EDX,0x7149f2ca                  ; 005589cd
    MOV dword ptr [ESP + 0x118],EDI     ; 005589d2
    MOV dword ptr [ESP + 0x120],EDI     ; 005589d9
    MOV dword ptr [ESP + 0x11c],EDX     ; 005589e0
    MOV EAX,[0x006810c8]                ; 005589e7 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_005589e7
    MOV EBX,dword ptr [ESP + 0x120]     ; 005589ec
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 005589f3 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x00558a6f                      ; 005589f9 | LAB_00558a6f
        ;   XREF to: 00558a6f (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 005589ff | g_CDemonSetInstance.actor_list_data[0]
    CMP EBX,dword ptr [ESI + 0x1fbf8]   ; 00558a06
    SETZ AL                             ; 00558a0c
    AND EAX,0xff                        ; 00558a0f
    PUSH EAX                            ; 00558a14
    PUSH EBX                            ; 00558a15
    PUSH ESI                            ; 00558a16
    CALL core_scat.cpp_FUN_00558cf0     ; 00558a17 | undefined core_scat.cpp_FUN_00558cf0()
        ;   XREF to: 00558cf0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x134],EAX     ; 00558a1c
    FLD float ptr [ESP + 0x134]         ; 00558a23
    ADD ESP,0xc                         ; 00558a2a
    FST float ptr [ESP]                 ; 00558a2d
    FLDZ                                ; 00558a30
    FCOMPP                              ; 00558a32
    FNSTSW AX                           ; 00558a34
    SAHF                                ; 00558a36
    JBE 0x00558a4d                      ; 00558a37 | LAB_00558a4d
        ;   XREF to: 00558a4d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x120]     ; 00558a39
        ;   Label: LAB_00558a39
    INC EBX                             ; 00558a40
    ADD EDI,0x4                         ; 00558a41
    MOV dword ptr [ESP + 0x120],EBX     ; 00558a44
    JMP 0x005589e7                      ; 00558a4b | LAB_005589e7
        ;   XREF to: 005589e7 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00558a4d
        ;   Label: LAB_00558a4d
    FCOMP float ptr [ESP + 0x11c]       ; 00558a50
    FNSTSW AX                           ; 00558a57
    SAHF                                ; 00558a59
    JNC 0x00558a39                      ; 00558a5a | LAB_00558a39
        ;   XREF to: 00558a39 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00558a5c
    MOV dword ptr [ESP + 0x118],EBX     ; 00558a5f
    MOV dword ptr [ESP + 0x11c],EAX     ; 00558a66
    JMP 0x00558a39                      ; 00558a6d | LAB_00558a39
        ;   XREF to: 00558a39 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x118]     ; 00558a6f
        ;   Label: LAB_00558a6f
    MOV dword ptr [ESI + 0x1fbf8],EAX   ; 00558a76
    JMP 0x00558783                      ; 00558a7c | LAB_00558783
        ;   XREF to: 00558783 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x1fbf8],0x0   ; 00558a81
        ;   Label: LAB_00558a81
    JZ 0x005587bd                       ; 00558a88 | LAB_005587bd
        ;   XREF to: 005587bd (CONDITIONAL_JUMP)
    PUSH 0x6598c0                       ; 00558a8e | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0xa                            ; 00558a93
    LEA EAX,[ESP + 0x10]                ; 00558a95
    PUSH EAX                            ; 00558a99
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00558a9a | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00558a9f
    LEA EDI,[ESP + 0x8]                 ; 00558aa2
    MOV EAX,dword ptr [ESI + 0x1fbf8]   ; 00558aa6
    PUSH EDI                            ; 00558aac
    MOV EBX,dword ptr [EAX + 0x154]     ; 00558aad
    PUSH EAX                            ; 00558ab3
    CALL dword ptr [EBX + 0x4c]         ; 00558ab4
    ADD ESP,0x8                         ; 00558ab7
    TEST EAX,EAX                        ; 00558aba
    JLE 0x00558bad                      ; 00558abc | LAB_00558bad
        ;   XREF to: 00558bad (CONDITIONAL_JUMP)
    LEA EBX,[ESP + 0xe0]                ; 00558ac2
    LEA EAX,[ESP + 0x8]                 ; 00558ac9
    CMP EBX,EAX                         ; 00558acd
    JZ 0x00558af2                       ; 00558acf | LAB_00558af2
        ;   XREF to: 00558af2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558ad1
    MOV dword ptr [ESP + 0xe0],EAX      ; 00558ad5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00558adc
    MOV dword ptr [ESP + 0xe4],EAX      ; 00558ae0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00558ae7
    MOV dword ptr [ESP + 0xe8],EAX      ; 00558aeb
        ;   Label: LAB_00558aeb
    LEA EAX,[ESP + 0xe0]                ; 00558af2
        ;   Label: LAB_00558af2
    PUSH EAX                            ; 00558af9
    LEA EAX,[ESP + 0xd8]                ; 00558afa
    PUSH EAX                            ; 00558b01
    MOV EDX,dword ptr [ESI + 0x1fbf8]   ; 00558b02
    PUSH EDX                            ; 00558b08
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00558b09 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00558b0e
    PUSH EAX                            ; 00558b11
    LEA EAX,[ESP + 0xa8]                ; 00558b12
    PUSH EAX                            ; 00558b19
    PUSH ESI                            ; 00558b1a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00558b1b | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00558b20
    MOV ECX,dword ptr [0x03106174]      ; 00558b23 | undefined4 DAT_03106174
    PUSH ECX                            ; 00558b29
    LEA EAX,[ESP + 0x9c]                ; 00558b2a
    PUSH EAX                            ; 00558b31
    LEA EAX,[ESI + 0x158]               ; 00558b32
    PUSH EAX                            ; 00558b38
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00558b39 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00558b3e
    FLD float ptr [ESP + 0xa4]          ; 00558b41
    FSUB float ptr [EAX]                ; 00558b48
    FLD float ptr [ESP + 0xa8]          ; 00558b4a
    FXCH                                ; 00558b51
    FSTP float ptr [ESP + 0xbc]         ; 00558b53
    FSUB float ptr [EAX + 0x4]          ; 00558b5a
    FLD float ptr [ESP + 0xac]          ; 00558b5d
    FXCH                                ; 00558b64
    FSTP float ptr [ESP + 0xc0]         ; 00558b66
    FSUB float ptr [EAX + 0x8]          ; 00558b6d
    LEA EAX,[ESP + 0xbc]                ; 00558b70
    PUSH EAX                            ; 00558b77
    LEA EAX,[ESP + 0xf0]                ; 00558b78
    PUSH EAX                            ; 00558b7f
    FSTP float ptr [ESP + 0xcc]         ; 00558b80
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00558b87 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00558b8c
    MOV EAX,dword ptr [ESP + 0xec]      ; 00558b8f
    MOV dword ptr [ESP + 0x4],EAX       ; 00558b96
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00558b9a
    MOV dword ptr [ESP + 0x114],EAX     ; 00558ba1
    JMP 0x005587bd                      ; 00558ba8 | LAB_005587bd
        ;   XREF to: 005587bd (UNCONDITIONAL_JUMP)
    LEA EDI,[ESP + 0x80]                ; 00558bad
        ;   Label: LAB_00558bad
    MOV EAX,dword ptr [ESI + 0x1fbf8]   ; 00558bb4
    PUSH EDI                            ; 00558bba
    MOV EBX,dword ptr [EAX + 0x154]     ; 00558bbb
    PUSH EAX                            ; 00558bc1
    CALL dword ptr [EBX + 0x14]         ; 00558bc2
    LEA EBX,[EAX + 0xc]                 ; 00558bc5
    FLD float ptr [EAX]                 ; 00558bc8
    FADD float ptr [EBX]                ; 00558bca
    ADD ESP,0x8                         ; 00558bcc
    FST float ptr [ESP + 0xb0]          ; 00558bcf
    FLD float ptr [EAX + 0x4]           ; 00558bd6
    FADD float ptr [EBX + 0x4]          ; 00558bd9
    FXCH                                ; 00558bdc
    FLD float ptr [0x00641460]          ; 00558bde | float FLOAT_00641460
    FXCH                                ; 00558be4
    FMUL ST1                            ; 00558be6
    FXCH ST2                            ; 00558be8
    FST float ptr [ESP + 0xb4]          ; 00558bea
    FLD float ptr [EAX + 0x8]           ; 00558bf1
    FADD float ptr [EBX + 0x8]          ; 00558bf4
    FXCH                                ; 00558bf7
    FMUL ST2                            ; 00558bf9
    FXCH                                ; 00558bfb
    FST float ptr [ESP + 0xb8]          ; 00558bfd
    FMULP ST2                           ; 00558c04
    LEA EAX,[ESP + 0xc8]                ; 00558c06
    FXCH ST2                            ; 00558c0d
    FSTP float ptr [ESP + 0xc8]         ; 00558c0f
    FXCH                                ; 00558c16
    FSTP float ptr [ESP + 0xcc]         ; 00558c18
    LEA EBX,[ESP + 0xe0]                ; 00558c1f
    FSTP float ptr [ESP + 0xd0]         ; 00558c26
    CMP EBX,EAX                         ; 00558c2d
    JZ 0x00558af2                       ; 00558c2f | LAB_00558af2
        ;   XREF to: 00558af2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00558c35
    MOV dword ptr [ESP + 0xe0],EAX      ; 00558c3c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00558c43
    MOV dword ptr [ESP + 0xe4],EAX      ; 00558c4a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00558c51
    JMP 0x00558aeb                      ; 00558c58 | LAB_00558aeb
        ;   XREF to: 00558aeb (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x1fbf0]       ; 00558c5d
        ;   Label: LAB_00558c5d
    FSUB float ptr [ESP + 0x114]        ; 00558c63
    SUB ESP,0x4                         ; 00558c6a
    FSTP float ptr [ESP]                ; 00558c6d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00558c70 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00558c75
    FLD float ptr [ESP + 0x12c]         ; 00558c7c
    FABS                                ; 00558c83
    ADD ESP,0x4                         ; 00558c85
    FCOMP double ptr [0x0064146c]       ; 00558c88 | double DOUBLE_0064146c
    FNSTSW AX                           ; 00558c8e
    SAHF                                ; 00558c90
    JNC 0x00558ca4                      ; 00558c91 | LAB_00558ca4
        ;   XREF to: 00558ca4 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1fbfc],0x1   ; 00558c93
        ;   Label: LAB_00558c93
    MOV ESP,EBP                         ; 00558c9d
    POP EBP                             ; 00558c9f
    POP EDI                             ; 00558ca0
    POP ESI                             ; 00558ca1
    POP EBX                             ; 00558ca2
    RET                                 ; 00558ca3
    FLD float ptr [ESI + 0x1fbf0]       ; 00558ca4
        ;   Label: LAB_00558ca4
    FSUB float ptr [ESP + 0x114]        ; 00558caa
    SUB ESP,0x4                         ; 00558cb1
    FSTP float ptr [ESP]                ; 00558cb4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00558cb7 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00558cbc
    FLD float ptr [ESP + 0x12c]         ; 00558cc3
    FABS                                ; 00558cca
    ADD ESP,0x4                         ; 00558ccc
    FCOMP double ptr [0x0064146c]       ; 00558ccf | double DOUBLE_0064146c
    FNSTSW AX                           ; 00558cd5
    SAHF                                ; 00558cd7
    JC 0x00558c93                       ; 00558cd8 | LAB_00558c93
        ;   XREF to: 00558c93 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00558cda
    POP EBP                             ; 00558cdc
    POP EDI                             ; 00558cdd
    POP ESI                             ; 00558cde
    POP EBX                             ; 00558cdf
    RET                                 ; 00558ce0

