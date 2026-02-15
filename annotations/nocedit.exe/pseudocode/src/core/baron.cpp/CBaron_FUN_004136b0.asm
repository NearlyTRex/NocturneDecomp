; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x150]:8  local_150
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaron_FUN_00413a00 at 00413a36
;
; Referenced Globals:
;   TerminatedCString s_baron_attack_wav_00615041
;   double DOUBLE_00615059 = -0.785398163375000
;   double DOUBLE_00615061 = 0.785398163375000
;   WatcomTypeInfo g_CVectorTypeInfo
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   int INT_008224cc
;   int INT_008224d0
;   CFireEffect g_CFireEffectInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_fire.cpp_CFireEffect_FUN_004c8ea0
;   core_fire.cpp_CFireEffect_FUN_004c8f50
;   core_fire.cpp_CFireEffect_FUN_004c8fd0
;   core_hero.cpp_CHero_FUN_004f3960
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004136b0
        ;   Label: core_baron.cpp_CBaron_FUN_004136b0
    PUSH ESI                            ; 004136b1
    PUSH EDI                            ; 004136b2
    PUSH EBP                            ; 004136b3
    MOV EBP,ESP                         ; 004136b4
    SUB ESP,0x140                       ; 004136b6
    AND ESP,0xfffffff8                  ; 004136bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004136bf
    LEA EAX,[ESP + 0x134]               ; 004136c2
    PUSH EAX                            ; 004136c9
    PUSH EBX                            ; 004136ca
    CALL core_hero.cpp_CHero_FUN_004f3960 ; 004136cb
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; float core_hero.cpp_CHero_FUN_004f3960(CHero * this_ptr)
    ADD ESP,0x8                         ; 004136d0
    MOV ESI,EAX                         ; 004136d3
    TEST EAX,EAX                        ; 004136d5
    JNZ 0x004136e0                      ; 004136d7
        ;   XREF to: 004136e0 (CONDITIONAL_JUMP)  ; LAB_004136e0
    MOV ESP,EBP                         ; 004136d9
    POP EBP                             ; 004136db
    POP EDI                             ; 004136dc
    POP ESI                             ; 004136dd
    POP EBX                             ; 004136de
    RET                                 ; 004136df
    ADD EAX,0x20                        ; 004136e0
        ;   Label: LAB_004136e0
    PUSH EAX                            ; 004136e3
    LEA EAX,[ESP + 0x114]               ; 004136e4
    PUSH EAX                            ; 004136eb
    PUSH EBX                            ; 004136ec
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004136ed
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004136f2
    LEA EAX,[ESP + 0x110]               ; 004136f5
    PUSH EAX                            ; 004136fc
    LEA EAX,[ESP + 0xd8]                ; 004136fd
    PUSH EAX                            ; 00413704
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00413705
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 0041370a
    LEA EAX,[ESP + 0x118]               ; 0041370c
    ADD ESP,0x8                         ; 00413713
    CMP EAX,EDX                         ; 00413716
    JZ 0x00413737                       ; 00413718
        ;   XREF to: 00413737 (CONDITIONAL_JUMP)  ; LAB_00413737
    MOV EAX,dword ptr [EDX]             ; 0041371a
    MOV dword ptr [ESP + 0x110],EAX     ; 0041371c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00413723
    MOV dword ptr [ESP + 0x114],EAX     ; 00413726
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041372d
    MOV dword ptr [ESP + 0x118],EAX     ; 00413730
    PUSH dword ptr [ESP + 0x114]        ; 00413737
        ;   Label: LAB_00413737
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0041373e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x140],EAX     ; 00413743
    FLD float ptr [ESP + 0x140]         ; 0041374a
    ADD ESP,0x4                         ; 00413751
    FST float ptr [ESP + 0x114]         ; 00413754
    FST double ptr [ESP]                ; 0041375b
    FCOMP double ptr [0x00615059]       ; 0041375e | DOUBLE_00615059
    FNSTSW AX                           ; 00413764
    SAHF                                ; 00413766
    JNC 0x0041380e                      ; 00413767
        ;   XREF to: 0041380e (CONDITIONAL_JUMP)  ; LAB_0041380e
    PUSH 0x0                            ; 0041376d
        ;   Label: LAB_0041376d
    PUSH 0x1                            ; 0041376f
    LEA EDI,[ESI + 0x20]                ; 00413771
    PUSH 0x41800000                     ; 00413774
    PUSH EDI                            ; 00413779
    MOV EDX,dword ptr [0x0067a3d0]      ; 0041377a | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 00413780 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8f50 ; 00413781
        ;   XREF to: 004c8f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8f50(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 00413786
    PUSH 0x40800000                     ; 00413789
    PUSH EDI                            ; 0041378e
    MOV ECX,dword ptr [0x0067a3d0]      ; 0041378f | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 00413795 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8ea0 ; 00413796
        ;   XREF to: 004c8ea0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8ea0(CFireEffect * this_ptr)
    ADD ESP,0xc                         ; 0041379b
    LEA EAX,[ESP + 0x80]                ; 0041379e
        ;   Label: LAB_0041379e
    PUSH EAX                            ; 004137a5
    MOV EDI,0x6                         ; 004137a6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004137ab
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004137b0
    MOV EAX,0x42c80000                  ; 004137b3
    MOV dword ptr [ESP + 0xb0],EDI      ; 004137b8
    MOV dword ptr [ESP + 0x84],EAX      ; 004137bf
    MOV dword ptr [ESP + 0xb4],EBX      ; 004137c6
    MOV EAX,dword ptr [EBX + 0x1fcac]   ; 004137cd
    MOV dword ptr [ESP + 0xb8],EAX      ; 004137d3
    TEST EAX,EAX                        ; 004137da
    JNZ 0x004137e5                      ; 004137dc
        ;   XREF to: 004137e5 (CONDITIONAL_JUMP)  ; LAB_004137e5
    MOV dword ptr [ESP + 0xb8],EBX      ; 004137de
    LEA EAX,[ESP + 0x80]                ; 004137e5
        ;   Label: LAB_004137e5
    PUSH EAX                            ; 004137ec
    MOV EDX,dword ptr [ESI + 0x154]     ; 004137ed
    PUSH ESI                            ; 004137f3
    CALL dword ptr [EDX + 0x11c]        ; 004137f4
    ADD ESP,0x8                         ; 004137fa
    MOV dword ptr [ESI + 0xb7e0],0x40400000 ; 004137fd
    MOV ESP,EBP                         ; 00413807
    POP EBP                             ; 00413809
    POP EDI                             ; 0041380a
    POP ESI                             ; 0041380b
    POP EBX                             ; 0041380c
    RET                                 ; 0041380d
    FLD double ptr [ESP]                ; 0041380e
        ;   Label: LAB_0041380e
    FCOMP double ptr [0x00615061]       ; 00413811 | DOUBLE_00615061
    FNSTSW AX                           ; 00413817
    SAHF                                ; 00413819
    JA 0x0041376d                       ; 0041381a
        ;   XREF to: 0041376d (CONDITIONAL_JUMP)  ; LAB_0041376d
    PUSH 0x6598c0                       ; 00413820 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00413825
    LEA EAX,[ESP + 0x10]                ; 00413827
    PUSH EAX                            ; 0041382b
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0041382c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00413831
    LEA EAX,[ESP + 0x8]                 ; 00413834
    PUSH EAX                            ; 00413838
    MOV EDX,dword ptr [ESI + 0x154]     ; 00413839
    PUSH ESI                            ; 0041383f
    CALL dword ptr [EDX + 0x4c]         ; 00413840
    ADD ESP,0x8                         ; 00413843
    MOV EDI,EAX                         ; 00413846
    MOV dword ptr [ESP + 0x138],EAX     ; 00413848
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0041384f
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00413854
    SAR EDX,0x1f                        ; 00413856
    IDIV EDI                            ; 00413859
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041385b
    SUB EAX,EDX                         ; 00413862
    LEA EDX,[ESP + 0x8]                 ; 00413864
    SHL EAX,0x2                         ; 00413868
    ADD EAX,EDX                         ; 0041386b
    PUSH EAX                            ; 0041386d
    LEA EAX,[ESP + 0xc0]                ; 0041386e
    PUSH EAX                            ; 00413875
    PUSH ESI                            ; 00413876
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00413877
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 0041387c
    LEA EAX,[ESP + 0x134]               ; 0041387e
    ADD ESP,0xc                         ; 00413885
    CMP EAX,EDX                         ; 00413888
    JZ 0x004138a9                       ; 0041388a
        ;   XREF to: 004138a9 (CONDITIONAL_JUMP)  ; LAB_004138a9
    MOV EAX,dword ptr [EDX]             ; 0041388c
    MOV dword ptr [ESP + 0x128],EAX     ; 0041388e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00413895
    MOV dword ptr [ESP + 0x12c],EAX     ; 00413898
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041389f
    MOV dword ptr [ESP + 0x130],EAX     ; 004138a2
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004138a9
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_004138a9
    MOV EDX,EAX                         ; 004138ae
    MOV ECX,dword ptr [ESP + 0x138]     ; 004138b0
    SAR EDX,0x1f                        ; 004138b7
    IDIV ECX                            ; 004138ba
    LEA EAX,[EDX*0x4 + 0x0]             ; 004138bc
    SUB EAX,EDX                         ; 004138c3
    LEA EDX,[EAX*0x4 + 0x0]             ; 004138c5
    LEA EAX,[ESP + 0x8]                 ; 004138cc
    ADD EAX,EDX                         ; 004138d0
    PUSH EAX                            ; 004138d2
    LEA EAX,[ESP + 0xfc]                ; 004138d3
    PUSH EAX                            ; 004138da
    PUSH ESI                            ; 004138db
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004138dc
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004138e1
    LEA EAX,[ESP + 0x110]               ; 004138e3
    ADD ESP,0xc                         ; 004138ea
    CMP EAX,EDX                         ; 004138ed
    JZ 0x0041390e                       ; 004138ef
        ;   XREF to: 0041390e (CONDITIONAL_JUMP)  ; LAB_0041390e
    MOV EAX,dword ptr [EDX]             ; 004138f1
    MOV dword ptr [ESP + 0x104],EAX     ; 004138f3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004138fa
    MOV dword ptr [ESP + 0x108],EAX     ; 004138fd
    MOV EAX,dword ptr [EDX + 0x8]       ; 00413904
    MOV dword ptr [ESP + 0x10c],EAX     ; 00413907
    MOV EDX,dword ptr [0x008224cc]      ; 0041390e | INT_008224cc
        ;   Label: LAB_0041390e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413914
    SUB EAX,EDX                         ; 0041391b
    LEA EDI,[EBX + 0xfd8]               ; 0041391d
    SHL EAX,0x4                         ; 00413923
    ADD EAX,EDI                         ; 00413926
    PUSH EAX                            ; 00413928
    PUSH 0x3f87558                      ; 00413929 | g_ZeroVector
    LEA EAX,[ESP + 0xf4]                ; 0041392e
    PUSH EAX                            ; 00413935
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00413936
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0041393b
    PUSH EAX                            ; 0041393e
    LEA EAX,[ESP + 0xe4]                ; 0041393f
    PUSH EAX                            ; 00413946
    PUSH EBX                            ; 00413947
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00413948
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [0x008224d0]      ; 0041394d | INT_008224d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413953
    SUB EAX,EDX                         ; 0041395a
    SHL EAX,0x4                         ; 0041395c
    ADD ESP,0xc                         ; 0041395f
    ADD EDI,EAX                         ; 00413962
    PUSH EDI                            ; 00413964
    PUSH 0x3f87558                      ; 00413965 | g_ZeroVector
    LEA EAX,[ESP + 0xd0]                ; 0041396a
    PUSH EAX                            ; 00413971
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00413972
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00413977
    PUSH EAX                            ; 0041397a
    LEA EAX,[ESP + 0x120]               ; 0041397b
    PUSH EAX                            ; 00413982
    PUSH EBX                            ; 00413983
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00413984
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413989
    PUSH 0x40800000                     ; 0041398c
    PUSH 0x3f000000                     ; 00413991
    PUSH 0x1                            ; 00413996
    LEA EAX,[ESP + 0x134]               ; 00413998
    PUSH EAX                            ; 0041399f
    LEA EAX,[ESP + 0xf0]                ; 004139a0
    PUSH EAX                            ; 004139a7
    MOV EDI,dword ptr [0x0067a3d0]      ; 004139a8 | g_CFireEffectPtr
    PUSH EDI                            ; 004139ae | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8fd0 ; 004139af
        ;   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8fd0(CFireEffect * this_ptr)
    ADD ESP,0x18                        ; 004139b4
    PUSH 0x40800000                     ; 004139b7
    PUSH 0x3f000000                     ; 004139bc
    PUSH 0x1                            ; 004139c1
    LEA EAX,[ESP + 0x134]               ; 004139c3
    PUSH EAX                            ; 004139ca
    LEA EAX,[ESP + 0x12c]               ; 004139cb
    PUSH EAX                            ; 004139d2
    MOV EAX,[0x0067a3d0]                ; 004139d3 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 004139d8 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8fd0 ; 004139d9
        ;   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8fd0(CFireEffect * this_ptr)
    ADD ESP,0x18                        ; 004139de
    PUSH 0x615041                       ; 004139e1 | = "baron-attack.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004139e6
    PUSH EBX                            ; 004139ec
    CALL dword ptr [EAX + 0x24]         ; 004139ed
    ADD ESP,0x8                         ; 004139f0
    JMP 0x0041379e                      ; 004139f3
        ;   XREF to: 0041379e (UNCONDITIONAL_JUMP)  ; LAB_0041379e

