; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 at 00547d3e
;
; Referenced Globals:
;   void* switchdataD_005472f4 = 0054738c
;   TerminatedCString s_core_path_cpp_0063e9a0
;   TerminatedCString s_Out_of_bounds1_0063e9b1
;   TerminatedCString s_core_path_cpp_0063e9c1
;   TerminatedCString s_Out_of_bounds2_0063e9d2
;   TerminatedCString s_core_path_cpp_0063e9e2
;   TerminatedCString s_Out_of_bounds3_0063e9f3
;   TerminatedCString s_core_path_cpp_0063ea03
;   TerminatedCString s_Out_of_bounds4_0063ea14
;   int[9] g_PathfindingDeltaX
;   int[9] g_PathfindingDeltaZ
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathfindingCurrentX
;   int g_PathfindingCurrentZ
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
;   core_path.cpp_CPathMap_getDirection_FUN_005465b0
;   core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
;   core_path.cpp_CPathMap_searchGrid_FUN_005487a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547320
        ;   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
    PUSH ESI                            ; 00547321
    PUSH EDI                            ; 00547322
    PUSH EBP                            ; 00547323
    SUB ESP,0x108                       ; 00547324
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0054732a
    MOV EBX,dword ptr [ESP + 0x128]     ; 00547331
    MOV EDX,dword ptr [ESP + 0x120]     ; 00547338
    PUSH EDX                            ; 0054733f
    PUSH 0x3277d14                      ; 00547340 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xc8]                ; 00547345
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 0054734c
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0xc8]                ; 00547351
    ADD ESP,0x8                         ; 00547358
    LEA EDI,[EBP + 0x18]                ; 0054735b
    MOV EAX,EBX                         ; 0054735e
    MOV EDX,EBX                         ; 00547360
    MOVSD ES:EDI,ESI                    ; 00547362
    MOVSD ES:EDI,ESI                    ; 00547363
    MOVSD ES:EDI,ESI                    ; 00547364
    SAR EDX,0x1f                        ; 00547365
    MOV ESI,0x9                         ; 00547368
    IDIV ESI                            ; 0054736d
    XOR ECX,ECX                         ; 0054736f
    MOV dword ptr [ESP + 0x78],ECX      ; 00547371
    MOV dword ptr [ESP + 0x7c],ECX      ; 00547375
    MOV dword ptr [ESP + 0x80],ECX      ; 00547379
    CMP EDX,0x8                         ; 00547380
    JA 0x0054738c                       ; 00547383
        ;   XREF to: 0054738c (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EDX*0x4 + 0x5472f4]  ; 00547385 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0xc]       ; 0054738c
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054738f
    SUB EAX,EDX                         ; 00547392
    MOV dword ptr [ESP + 0x6c],EAX      ; 00547394
    CDQ                                 ; 00547398
    XOR EAX,EDX                         ; 00547399
    SUB EAX,EDX                         ; 0054739b
    CMP EAX,0x32                        ; 0054739d
    JL 0x005474ab                       ; 005473a0
        ;   XREF to: 005474ab (CONDITIONAL_JUMP)  ; LAB_005474ab
    MOV EAX,dword ptr [ESP + 0x120]     ; 005473a6
    FLD float ptr [EBP]                 ; 005473ad
    FSUB float ptr [EAX]                ; 005473b0
    FSTP float ptr [ESP + 0xcc]         ; 005473b2
    FLD float ptr [EBP + 0x4]           ; 005473b9
    FSUB float ptr [EAX + 0x4]          ; 005473bc
    FSTP float ptr [ESP + 0xd0]         ; 005473bf
    FLD float ptr [EBP + 0x8]           ; 005473c6
    FSUB float ptr [EAX + 0x8]          ; 005473c9
    LEA EAX,[ESP + 0xcc]                ; 005473cc
    PUSH EAX                            ; 005473d3
    LEA EAX,[ESP + 0x4c]                ; 005473d4
    PUSH EAX                            ; 005473d8
    FSTP float ptr [ESP + 0xdc]         ; 005473d9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005473e0
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   Label: LAB_005473e0
    ADD ESP,0x8                         ; 005473e5
    MOV ECX,dword ptr [ESP + 0x124]     ; 005473e8
    CMP EAX,ECX                         ; 005473ef
    JZ 0x00547403                       ; 005473f1
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    MOV EDX,dword ptr [EAX]             ; 005473f3
    MOV dword ptr [ECX],EDX             ; 005473f5
    MOV EDX,dword ptr [EAX + 0x4]       ; 005473f7
    MOV dword ptr [ECX + 0x4],EDX       ; 005473fa
    MOV EDX,dword ptr [EAX + 0x8]       ; 005473fd
    MOV dword ptr [ECX + 0x8],EDX       ; 00547400
    MOV EAX,0x2                         ; 00547403
        ;   Label: LAB_00547403
    ADD ESP,0x108                       ; 00547408
    POP EBP                             ; 0054740e
    POP EDI                             ; 0054740f
    POP ESI                             ; 00547410
    POP EBX                             ; 00547411
    RET                                 ; 00547412
    MOV dword ptr [ESP + 0x78],0x4      ; 00547413
        ;   Label: caseD_1
    JMP 0x0054738c                      ; 0054741b
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x78],0xfffffffc ; 00547420
        ;   Label: caseD_2
    JMP 0x0054738c                      ; 00547428
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x80],0x4      ; 0054742d
        ;   Label: caseD_3
    JMP 0x0054738c                      ; 00547438
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x80],0xfffffffc ; 0054743d
        ;   Label: caseD_4
    JMP 0x0054738c                      ; 00547448
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,0x4                         ; 0054744d
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x80],EAX      ; 00547452
    MOV dword ptr [ESP + 0x78],EAX      ; 00547459
    JMP 0x0054738c                      ; 0054745d
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,0x4                         ; 00547462
        ;   Label: caseD_6
    MOV ESI,0xfffffffc                  ; 00547467
    MOV dword ptr [ESP + 0x80],EDI      ; 0054746c
    MOV dword ptr [ESP + 0x78],ESI      ; 00547473
    JMP 0x0054738c                      ; 00547477
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0xfffffffc                  ; 0054747c
        ;   Label: caseD_7
    MOV dword ptr [ESP + 0x80],ECX      ; 00547481
    MOV dword ptr [ESP + 0x78],ECX      ; 00547488
    JMP 0x0054738c                      ; 0054748c
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,0xfffffffc                  ; 00547491
        ;   Label: caseD_8
    MOV EAX,0x4                         ; 00547496
    MOV dword ptr [ESP + 0x80],EDX      ; 0054749b
    MOV dword ptr [ESP + 0x78],EAX      ; 005474a2
    JMP 0x0054738c                      ; 005474a6
        ;   XREF to: 0054738c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005474ab
        ;   Label: LAB_005474ab
    MOV ECX,dword ptr [EBP + 0x20]      ; 005474ae
    SUB EAX,ECX                         ; 005474b1
    MOV dword ptr [ESP + 0x74],EAX      ; 005474b3
    CDQ                                 ; 005474b7
    XOR EAX,EDX                         ; 005474b8
    SUB EAX,EDX                         ; 005474ba
    CMP EAX,0x32                        ; 005474bc
    JL 0x00547535                       ; 005474bf
        ;   XREF to: 00547535 (CONDITIONAL_JUMP)  ; LAB_00547535
    MOV EAX,dword ptr [ESP + 0x120]     ; 005474c1
    FLD float ptr [EBP]                 ; 005474c8
    FSUB float ptr [EAX]                ; 005474cb
    FSTP float ptr [ESP + 0xb4]         ; 005474cd
    FLD float ptr [EBP + 0x4]           ; 005474d4
    FSUB float ptr [EAX + 0x4]          ; 005474d7
    FSTP float ptr [ESP + 0xb8]         ; 005474da
    FLD float ptr [EBP + 0x8]           ; 005474e1
    FSUB float ptr [EAX + 0x8]          ; 005474e4
    LEA EAX,[ESP + 0xb4]                ; 005474e7
    PUSH EAX                            ; 005474ee
    LEA EAX,[ESP + 0x94]                ; 005474ef
    PUSH EAX                            ; 005474f6
    FSTP float ptr [ESP + 0xc4]         ; 005474f7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005474fe
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00547503
    MOV EDX,dword ptr [ESP + 0x124]     ; 00547506
    CMP EAX,EDX                         ; 0054750d
    JZ 0x00547403                       ; 0054750f
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    MOV ECX,dword ptr [EAX]             ; 00547515
    MOV dword ptr [EDX],ECX             ; 00547517
    MOV ECX,dword ptr [EAX + 0x4]       ; 00547519
    MOV dword ptr [EDX + 0x4],ECX       ; 0054751c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054751f
    MOV dword ptr [EDX + 0x8],ECX       ; 00547522
    MOV EAX,0x2                         ; 00547525
    ADD ESP,0x108                       ; 0054752a
    POP EBP                             ; 00547530
    POP EDI                             ; 00547531
    POP ESI                             ; 00547532
    POP EBX                             ; 00547533
    RET                                 ; 00547534
    MOV EBX,0x32                        ; 00547535
        ;   Label: LAB_00547535
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054753a
    MOV EDI,dword ptr [EBP + 0x24]      ; 0054753d
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00547540
    SUB EAX,EDI                         ; 00547543
    MOV dword ptr [0x030c3de8],EBX      ; 00547545 | g_PathfindingDestZ
    MOV [0x030c3ddc],EAX                ; 0054754b | g_PathfindingCurrentX
    MOV EAX,dword ptr [EBP + 0x20]      ; 00547550
    MOV dword ptr [0x030c3de4],EBX      ; 00547553 | g_PathfindingDestX
    SUB EAX,EDX                         ; 00547559
    MOV ECX,dword ptr [0x030c3ddc]      ; 0054755b | g_PathfindingCurrentX
    MOV [0x030c3de0],EAX                ; 00547561 | g_PathfindingCurrentZ
    TEST ECX,ECX                        ; 00547566
    JL 0x0054756f                       ; 00547568
        ;   XREF to: 0054756f (CONDITIONAL_JUMP)  ; LAB_0054756f
    CMP ECX,0x64                        ; 0054756a
    JL 0x005475d5                       ; 0054756d
        ;   XREF to: 005475d5 (CONDITIONAL_JUMP)  ; LAB_005475d5
    MOV EAX,dword ptr [ESP + 0x120]     ; 0054756f
        ;   Label: LAB_0054756f
    FLD float ptr [EBP]                 ; 00547576
    FSUB float ptr [EAX]                ; 00547579
    FSTP float ptr [ESP + 0x3c]         ; 0054757b
    FLD float ptr [EBP + 0x4]           ; 0054757f
    FSUB float ptr [EAX + 0x4]          ; 00547582
    FSTP float ptr [ESP + 0x40]         ; 00547585
    FLD float ptr [EBP + 0x8]           ; 00547589
    FSUB float ptr [EAX + 0x8]          ; 0054758c
    LEA EAX,[ESP + 0x3c]                ; 0054758f
    PUSH EAX                            ; 00547593
    LEA EAX,[ESP + 0x58]                ; 00547594
    PUSH EAX                            ; 00547598
    FSTP float ptr [ESP + 0x4c]         ; 00547599
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0054759d
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005475a2
    MOV EBP,dword ptr [ESP + 0x124]     ; 005475a5
    CMP EAX,EBP                         ; 005475ac
    JZ 0x00547403                       ; 005475ae
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    MOV EDX,dword ptr [EAX]             ; 005475b4
    MOV dword ptr [EBP],EDX             ; 005475b6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005475b9
    MOV dword ptr [EBP + 0x4],EDX       ; 005475bc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005475bf
    MOV dword ptr [EBP + 0x8],EDX       ; 005475c2
    MOV EAX,0x2                         ; 005475c5
    ADD ESP,0x108                       ; 005475ca
    POP EBP                             ; 005475d0
    POP EDI                             ; 005475d1
    POP ESI                             ; 005475d2
    POP EBX                             ; 005475d3
    RET                                 ; 005475d4
    TEST EAX,EAX                        ; 005475d5
        ;   Label: LAB_005475d5
    JL 0x0054756f                       ; 005475d7
        ;   XREF to: 0054756f (CONDITIONAL_JUMP)  ; LAB_0054756f
    CMP EAX,0x64                        ; 005475d9
    JGE 0x0054756f                      ; 005475dc
        ;   XREF to: 0054756f (CONDITIONAL_JUMP)  ; LAB_0054756f
    CMP ECX,EBX                         ; 005475de
    JNZ 0x005475ea                      ; 005475e0
        ;   XREF to: 005475ea (CONDITIONAL_JUMP)  ; LAB_005475ea
    CMP EAX,EBX                         ; 005475e2
    JZ 0x005477cc                       ; 005475e4
        ;   XREF to: 005477cc (CONDITIONAL_JUMP)  ; LAB_005477cc
    FLD float ptr [EBP]                 ; 005475ea
        ;   Label: LAB_005475ea
    MOV EAX,dword ptr [ESP + 0x120]     ; 005475ed
    CALL crt_math.c_round_FUN_005fe6b0  ; 005475f4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x104]       ; 005475f9
    FLD float ptr [EAX]                 ; 00547600
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547602
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESP + 0x104]     ; 00547607
    FISTP dword ptr [ESP + 0x104]       ; 0054760e
    SUB EAX,dword ptr [ESP + 0x104]     ; 00547615
    CDQ                                 ; 0054761c
    XOR EAX,EDX                         ; 0054761d
    SUB EAX,EDX                         ; 0054761f
    FLD float ptr [EBP + 0x8]           ; 00547621
    MOV EAX,dword ptr [ESP + 0x120]     ; 00547624
    CALL crt_math.c_round_FUN_005fe6b0  ; 0054762b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x104]       ; 00547630
    FLD float ptr [EAX + 0x8]           ; 00547637
    CALL crt_math.c_round_FUN_005fe6b0  ; 0054763a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054763f
    FISTP dword ptr [ESP + 0x104]       ; 00547646
    SUB EAX,dword ptr [ESP + 0x104]     ; 0054764d
    CDQ                                 ; 00547654
    XOR EAX,EDX                         ; 00547655
    SUB EAX,EDX                         ; 00547657
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00547659
    PUSH ESI                            ; 0054765c
    MOV EDI,dword ptr [0x030c3ddc]      ; 0054765d | g_PathfindingCurrentX
    PUSH EDI                            ; 00547663
    MOV EAX,[0x030c3de0]                ; 00547664 | g_PathfindingCurrentZ
    PUSH EAX                            ; 00547669
    PUSH EBP                            ; 0054766a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 0054766b
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547670
    MOV EDX,dword ptr [EBP + 0x10]      ; 00547673
    PUSH EDX                            ; 00547676
    MOV ECX,dword ptr [0x030c3de4]      ; 00547677 | g_PathfindingDestX
    PUSH ECX                            ; 0054767d
    MOV ESI,dword ptr [0x030c3de8]      ; 0054767e | g_PathfindingDestZ
    PUSH ESI                            ; 00547684
    PUSH EBP                            ; 00547685
    MOV EBX,EAX                         ; 00547686
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547688
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0054768d
    PUSH EAX                            ; 00547690
    MOV EDI,dword ptr [0x030c3de8]      ; 00547691 | g_PathfindingDestZ
    PUSH EDI                            ; 00547697
    MOV EAX,[0x030c3de4]                ; 00547698 | g_PathfindingDestX
    PUSH EAX                            ; 0054769d
    PUSH EBX                            ; 0054769e
    MOV EDX,dword ptr [0x030c3de0]      ; 0054769f | g_PathfindingCurrentZ
    PUSH EDX                            ; 005476a5
    MOV ECX,dword ptr [0x030c3ddc]      ; 005476a6 | g_PathfindingCurrentX
    PUSH ECX                            ; 005476ac
    PUSH EBP                            ; 005476ad
    CALL core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40 ; 005476ae
        ;   XREF to: 00546c40 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40(CPathMap * this_ptr, int start_x, int start_z, int start_height, ...)
    ADD ESP,0x1c                        ; 005476b3
    TEST EAX,EAX                        ; 005476b6
    JZ 0x0054783c                       ; 005476b8
        ;   XREF to: 0054783c (CONDITIONAL_JUMP)  ; LAB_0054783c
    MOV EAX,[0x03277d48]                ; 005476be | g_CDemonRaytraceInstance.adjusted_size.x
    MOV dword ptr [ESP + 0xe4],EAX      ; 005476c3
    MOV EAX,0x3277d48                   ; 005476ca | g_CDemonRaytraceInstance.adjusted_size.x
    MOV EAX,dword ptr [EAX + 0x4]       ; 005476cf | g_CDemonRaytraceInstance.adjusted_size.y
    MOV dword ptr [ESP + 0xe8],EAX      ; 005476d2
    MOV EAX,0x3277d48                   ; 005476d9 | g_CDemonRaytraceInstance.adjusted_size.x
    MOV EAX,dword ptr [EAX + 0x8]       ; 005476de | g_CDemonRaytraceInstance.adjusted_size.z
    MOV dword ptr [ESP + 0xec],EAX      ; 005476e1
    LEA EAX,[ESP + 0x9c]                ; 005476e8
    CMP EAX,EBP                         ; 005476ef
    JZ 0x00547711                       ; 005476f1
        ;   XREF to: 00547711 (CONDITIONAL_JUMP)  ; LAB_00547711
    MOV EAX,dword ptr [EBP]             ; 005476f3
    MOV dword ptr [ESP + 0x9c],EAX      ; 005476f6
    MOV EAX,dword ptr [EBP + 0x4]       ; 005476fd
    MOV dword ptr [ESP + 0xa0],EAX      ; 00547700
    MOV EAX,dword ptr [EBP + 0x8]       ; 00547707
    MOV dword ptr [ESP + 0xa4],EAX      ; 0054770a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00547711
        ;   Label: LAB_00547711
    MOV dword ptr [ESP + 0x104],EAX     ; 00547715
    FILD dword ptr [ESP + 0x104]        ; 0054771c
    MOV EAX,dword ptr [ESP + 0x80]      ; 00547723
    FMUL float ptr [ESP + 0xe4]         ; 0054772a
    MOV dword ptr [ESP + 0x104],EAX     ; 00547731
    FILD dword ptr [ESP + 0x104]        ; 00547738
    FMUL float ptr [ESP + 0xec]         ; 0054773f
    MOV EAX,dword ptr [ESP + 0x120]     ; 00547746
    FXCH                                ; 0054774d
    FADD float ptr [ESP + 0x9c]         ; 0054774f
    FXCH                                ; 00547756
    FADD float ptr [ESP + 0xa4]         ; 00547758
    FXCH                                ; 0054775f
    FSTP float ptr [ESP + 0x9c]         ; 00547761
    FSTP float ptr [ESP + 0xa4]         ; 00547768
    FLD float ptr [EBP]                 ; 0054776f
    FSUB float ptr [EAX]                ; 00547772
    FSTP float ptr [ESP + 0x60]         ; 00547774
    FLD float ptr [EBP + 0x4]           ; 00547778
    FSUB float ptr [EAX + 0x4]          ; 0054777b
    FSTP float ptr [ESP + 0x64]         ; 0054777e
    FLD float ptr [EBP + 0x8]           ; 00547782
    FSUB float ptr [EAX + 0x8]          ; 00547785
    LEA EAX,[ESP + 0x60]                ; 00547788
    PUSH EAX                            ; 0054778c
    LEA EAX,[ESP + 0xf4]                ; 0054778d
    PUSH EAX                            ; 00547794
    FSTP float ptr [ESP + 0x70]         ; 00547795
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00547799
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0054779e
    MOV ESI,dword ptr [ESP + 0x124]     ; 005477a1
    CMP EAX,ESI                         ; 005477a8
    JZ 0x005477bc                       ; 005477aa
        ;   XREF to: 005477bc (CONDITIONAL_JUMP)  ; LAB_005477bc
    MOV EDX,dword ptr [EAX]             ; 005477ac
    MOV dword ptr [ESI],EDX             ; 005477ae
    MOV EDX,dword ptr [EAX + 0x4]       ; 005477b0
    MOV dword ptr [ESI + 0x4],EDX       ; 005477b3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005477b6
    MOV dword ptr [ESI + 0x8],EDX       ; 005477b9
    MOV EAX,0x1                         ; 005477bc
        ;   Label: LAB_005477bc
    ADD ESP,0x108                       ; 005477c1
    POP EBP                             ; 005477c7
    POP EDI                             ; 005477c8
    POP ESI                             ; 005477c9
    POP EBX                             ; 005477ca
    RET                                 ; 005477cb
    MOV EAX,dword ptr [ESP + 0x120]     ; 005477cc
        ;   Label: LAB_005477cc
    FLD float ptr [EBP]                 ; 005477d3
    FSUB float ptr [EAX]                ; 005477d6
    FSTP float ptr [ESP + 0xd8]         ; 005477d8
    FLD float ptr [EBP + 0x4]           ; 005477df
    FSUB float ptr [EAX + 0x4]          ; 005477e2
    FSTP float ptr [ESP + 0xdc]         ; 005477e5
    FLD float ptr [EBP + 0x8]           ; 005477ec
    FSUB float ptr [EAX + 0x8]          ; 005477ef
    LEA EAX,[ESP + 0xd8]                ; 005477f2
    PUSH EAX                            ; 005477f9
    LEA EAX,[ESP + 0xac]                ; 005477fa
    PUSH EAX                            ; 00547801
    FSTP float ptr [ESP + 0xe8]         ; 00547802
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00547809
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0054780e
    MOV EDI,dword ptr [ESP + 0x124]     ; 00547811
    CMP EAX,EDI                         ; 00547818
    JZ 0x0054782c                       ; 0054781a
        ;   XREF to: 0054782c (CONDITIONAL_JUMP)  ; LAB_0054782c
    MOV EDX,dword ptr [EAX]             ; 0054781c
    MOV dword ptr [EDI],EDX             ; 0054781e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547820
    MOV dword ptr [EDI + 0x4],EDX       ; 00547823
    MOV EDX,dword ptr [EAX + 0x8]       ; 00547826
    MOV dword ptr [EDI + 0x8],EDX       ; 00547829
    MOV EAX,0x1                         ; 0054782c
        ;   Label: LAB_0054782c
    ADD ESP,0x108                       ; 00547831
    POP EBP                             ; 00547837
    POP EDI                             ; 00547838
    POP ESI                             ; 00547839
    POP EBX                             ; 0054783a
    RET                                 ; 0054783b
    MOV EBX,dword ptr [0x030c3de0]      ; 0054783c | g_PathfindingCurrentZ
        ;   Label: LAB_0054783c
    PUSH EBX                            ; 00547842
    MOV ESI,dword ptr [0x030c3ddc]      ; 00547843 | g_PathfindingCurrentX
    PUSH ESI                            ; 00547849
    MOV EDI,dword ptr [0x030c3de8]      ; 0054784a | g_PathfindingDestZ
    PUSH EDI                            ; 00547850
    MOV EAX,[0x030c3de4]                ; 00547851 | g_PathfindingDestX
    PUSH EAX                            ; 00547856
    PUSH EBP                            ; 00547857
    CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90 ; 00547858
        ;   XREF to: 00546e90 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap * this_ptr, int start_x, int start_z, int end_x, ...)
    ADD ESP,0x14                        ; 0054785d
    TEST EAX,EAX                        ; 00547860
    JZ 0x0054793d                       ; 00547862
        ;   XREF to: 0054793d (CONDITIONAL_JUMP)  ; LAB_0054793d
    CMP EAX,0x1                         ; 00547868
    JNZ 0x005478fc                      ; 0054786b
        ;   XREF to: 005478fc (CONDITIONAL_JUMP)  ; LAB_005478fc
    MOV EDI,dword ptr [0x030c3ddc]      ; 00547871 | g_PathfindingCurrentX
    MOV EAX,[0x030c3de4]                ; 00547877 | g_PathfindingDestX
    CMP EAX,EDI                         ; 0054787c
    JLE 0x005478d7                      ; 0054787e
        ;   XREF to: 005478d7 (CONDITIONAL_JUMP)  ; LAB_005478d7
    MOV EAX,0x3                         ; 00547880
        ;   Label: LAB_00547880
    MOV EBX,dword ptr [ESP + 0x120]     ; 00547885
        ;   Label: LAB_00547885
    PUSH EBX                            ; 0054788c
    PUSH -0x1                           ; 0054788d
    PUSH -0x1                           ; 0054788f
    MOV EDX,dword ptr [ESP + 0x130]     ; 00547891
    PUSH EAX                            ; 00547898
    MOV dword ptr [EDX],0x0             ; 00547899
    PUSH EBP                            ; 0054789f
    MOV dword ptr [EDX + 0x8],0x0       ; 005478a0
    CALL core_path.cpp_CPathMap_getDirection_FUN_005465b0 ; 005478a7
        ;   XREF to: 005465b0 (UNCONDITIONAL_CALL)  ; float core_path.cpp_CPathMap_getDirection_FUN_005465b0(CPathMap * this_ptr, int current_direction, int next_direction, int prev_direction, ...)
    MOV dword ptr [ESP + 0x118],EAX     ; 005478ac
    FLD float ptr [ESP + 0x118]         ; 005478b3
    ADD ESP,0x14                        ; 005478ba
    MOV EAX,dword ptr [ESP + 0x124]     ; 005478bd
    FSTP float ptr [EAX + 0x4]          ; 005478c4
    MOV EAX,0x1                         ; 005478c7
    ADD ESP,0x108                       ; 005478cc
    POP EBP                             ; 005478d2
    POP EDI                             ; 005478d3
    POP ESI                             ; 005478d4
    POP EBX                             ; 005478d5
    RET                                 ; 005478d6
    JGE 0x005478e0                      ; 005478d7
        ;   XREF to: 005478e0 (CONDITIONAL_JUMP)  ; LAB_005478e0
        ;   Label: LAB_005478d7
    MOV EAX,0x4                         ; 005478d9
    JMP 0x00547885                      ; 005478de
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    MOV ECX,dword ptr [0x030c3de0]      ; 005478e0 | g_PathfindingCurrentZ
        ;   Label: LAB_005478e0
    CMP ECX,dword ptr [0x030c3de8]      ; 005478e6 | g_PathfindingDestZ
    JGE 0x005478f5                      ; 005478ec
        ;   XREF to: 005478f5 (CONDITIONAL_JUMP)  ; LAB_005478f5
    MOV EAX,0x1                         ; 005478ee
    JMP 0x00547885                      ; 005478f3
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    MOV EAX,0x2                         ; 005478f5
        ;   Label: LAB_005478f5
    JMP 0x00547885                      ; 005478fa
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    MOV ECX,dword ptr [0x030c3de0]      ; 005478fc | g_PathfindingCurrentZ
        ;   Label: LAB_005478fc
    MOV EAX,[0x030c3de8]                ; 00547902 | g_PathfindingDestZ
    CMP EAX,ECX                         ; 00547907
    JLE 0x00547915                      ; 00547909
        ;   XREF to: 00547915 (CONDITIONAL_JUMP)  ; LAB_00547915
    MOV EAX,0x1                         ; 0054790b
    JMP 0x00547885                      ; 00547910
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    JGE 0x00547921                      ; 00547915
        ;   XREF to: 00547921 (CONDITIONAL_JUMP)  ; LAB_00547921
        ;   Label: LAB_00547915
    MOV EAX,0x2                         ; 00547917
    JMP 0x00547885                      ; 0054791c
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    MOV ESI,dword ptr [0x030c3ddc]      ; 00547921 | g_PathfindingCurrentX
        ;   Label: LAB_00547921
    CMP ESI,dword ptr [0x030c3de4]      ; 00547927 | g_PathfindingDestX
    JL 0x00547880                       ; 0054792d
        ;   XREF to: 00547880 (CONDITIONAL_JUMP)  ; LAB_00547880
    MOV EAX,0x4                         ; 00547933
    JMP 0x00547885                      ; 00547938
        ;   XREF to: 00547885 (UNCONDITIONAL_JUMP)  ; LAB_00547885
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0054793d
        ;   Label: LAB_0054793d
    PUSH EDX                            ; 00547940
    PUSH EBP                            ; 00547941
    CALL core_path.cpp_CPathMap_searchGrid_FUN_005487a0 ; 00547942
        ;   XREF to: 005487a0 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 00547947
    TEST EAX,EAX                        ; 0054794a
    JNZ 0x00547981                      ; 0054794c
        ;   XREF to: 00547981 (CONDITIONAL_JUMP)  ; LAB_00547981
    MOV EAX,dword ptr [ESP + 0x120]     ; 0054794e
    FLD float ptr [EBP]                 ; 00547955
    FSUB float ptr [EAX]                ; 00547958
    FSTP float ptr [ESP + 0x18]         ; 0054795a
    FLD float ptr [EBP + 0x4]           ; 0054795e
    FSUB float ptr [EAX + 0x4]          ; 00547961
    FSTP float ptr [ESP + 0x1c]         ; 00547964
    FLD float ptr [EBP + 0x8]           ; 00547968
    FSUB float ptr [EAX + 0x8]          ; 0054796b
    LEA EAX,[ESP + 0x18]                ; 0054796e
    PUSH EAX                            ; 00547972
    LEA EAX,[ESP + 0x28]                ; 00547973
    PUSH EAX                            ; 00547977
    FSTP float ptr [ESP + 0x28]         ; 00547978
    JMP 0x005473e0                      ; 0054797c
        ;   XREF to: 005473e0 (UNCONDITIONAL_JUMP)  ; LAB_005473e0
    MOV EBX,dword ptr [0x030c3de8]      ; 00547981 | g_PathfindingDestZ
        ;   Label: LAB_00547981
    LEA EAX,[EBX*0x4 + 0x0]             ; 00547987
    SUB EAX,EBX                         ; 0054798e
    SHL EAX,0x3                         ; 00547990
    ADD EAX,EBX                         ; 00547993
    SHL EAX,0x4                         ; 00547995
    LEA EDX,[EAX + EBP*0x1]             ; 00547998
    MOV EAX,[0x030c3de4]                ; 0054799b | g_PathfindingDestX
    MOV EBX,dword ptr [EBP + 0x10]      ; 005479a0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30] ; 005479a3
    SUB EAX,EBX                         ; 005479a7
    CDQ                                 ; 005479a9
    XOR EAX,EDX                         ; 005479aa
    SUB EAX,EDX                         ; 005479ac
    CMP EAX,0x3                         ; 005479ae
    JG 0x00547add                       ; 005479b1
        ;   XREF to: 00547add (CONDITIONAL_JUMP)  ; LAB_00547add
    MOV EDI,0xffffffff                  ; 005479b7
    MOV ESI,dword ptr [0x030c3de8]      ; 005479bc | g_PathfindingDestZ
    MOV EBX,dword ptr [0x030c3de4]      ; 005479c2 | g_PathfindingDestX
    MOV dword ptr [ESP + 0x100],EDI     ; 005479c8
    MOV EAX,dword ptr [ESP + 0x100]     ; 005479cf
        ;   Label: LAB_005479cf
    MOV dword ptr [ESP + 0x100],EDI     ; 005479d6
    IMUL EDI,ESI,0x64                   ; 005479dd
    MOVZX EDI,byte ptr [EDI + EBX*0x1 + 0x30d2858] ; 005479e0 | g_PathfindingVisited[50][50]
    MOV dword ptr [ESP + 0xfc],EAX      ; 005479e8
    TEST EDI,EDI                        ; 005479ef
    JZ 0x00547b4e                       ; 005479f1
        ;   XREF to: 00547b4e (CONDITIONAL_JUMP)  ; LAB_00547b4e
    MOV EAX,dword ptr [EDI*0x4 + 0x680c08] ; 005479f7 | g_PathfindingDeltaX
    MOV EDX,dword ptr [EDI*0x4 + 0x680c2c] ; 005479fe | g_PathfindingDeltaZ
    SUB EBX,EAX                         ; 00547a05
    SUB ESI,EDX                         ; 00547a07
    TEST EBX,EBX                        ; 00547a09
    JL 0x00547bb0                       ; 00547a0b
        ;   XREF to: 00547bb0 (CONDITIONAL_JUMP)  ; LAB_00547bb0
    TEST ESI,ESI                        ; 00547a11
        ;   Label: LAB_00547a11
    JL 0x00547bd7                       ; 00547a13
        ;   XREF to: 00547bd7 (CONDITIONAL_JUMP)  ; LAB_00547bd7
    CMP EBX,0x64                        ; 00547a19
        ;   Label: LAB_00547a19
    JL 0x00547a40                       ; 00547a1c
        ;   XREF to: 00547a40 (CONDITIONAL_JUMP)  ; LAB_00547a40
    MOV EAX,0x63e9e2                    ; 00547a1e | = "..\\core\\path.cpp"
    MOV EDX,0x549                       ; 00547a23
    PUSH 0x63e9f3                       ; 00547a28 | = "Out of bounds3!"
    MOV [0x02f0ca48],EAX                ; 00547a2d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00547a32 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00547a38
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00547a3d
    CMP ESI,0x64                        ; 00547a40
        ;   Label: LAB_00547a40
    JL 0x00547a67                       ; 00547a43
        ;   XREF to: 00547a67 (CONDITIONAL_JUMP)  ; LAB_00547a67
    MOV ECX,0x63ea03                    ; 00547a45 | = "..\\core\\path.cpp"
    MOV EAX,0x54a                       ; 00547a4a
    PUSH 0x63ea14                       ; 00547a4f | = "Out of bounds4!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00547a54 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00547a5a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00547a5f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00547a64
    CMP EBX,dword ptr [0x030c3ddc]      ; 00547a67 | g_PathfindingCurrentX
        ;   Label: LAB_00547a67
    JNZ 0x005479cf                      ; 00547a6d
        ;   XREF to: 005479cf (CONDITIONAL_JUMP)  ; LAB_005479cf
    CMP ESI,dword ptr [0x030c3de0]      ; 00547a73 | g_PathfindingCurrentZ
    JNZ 0x005479cf                      ; 00547a79
        ;   XREF to: 005479cf (CONDITIONAL_JUMP)  ; LAB_005479cf
    MOV EBX,dword ptr [ESP + 0x120]     ; 00547a7f
    MOV EAX,dword ptr [ESP + 0x124]     ; 00547a86
    PUSH EBX                            ; 00547a8d
    MOV ESI,dword ptr [ESP + 0x100]     ; 00547a8e
    MOV dword ptr [EAX],0x0             ; 00547a95
    PUSH ESI                            ; 00547a9b
    MOV dword ptr [EAX + 0x8],0x0       ; 00547a9c
    MOV EAX,dword ptr [ESP + 0x108]     ; 00547aa3
    PUSH EAX                            ; 00547aaa
    PUSH EDI                            ; 00547aab
    PUSH EBP                            ; 00547aac
    CALL core_path.cpp_CPathMap_getDirection_FUN_005465b0 ; 00547aad
        ;   XREF to: 005465b0 (UNCONDITIONAL_CALL)  ; float core_path.cpp_CPathMap_getDirection_FUN_005465b0(CPathMap * this_ptr, int current_direction, int next_direction, int prev_direction, ...)
    MOV dword ptr [ESP + 0x118],EAX     ; 00547ab2
    FLD float ptr [ESP + 0x118]         ; 00547ab9
    ADD ESP,0x14                        ; 00547ac0
    MOV EAX,dword ptr [ESP + 0x124]     ; 00547ac3
    FSTP float ptr [EAX + 0x4]          ; 00547aca
    MOV EAX,0x1                         ; 00547acd
    ADD ESP,0x108                       ; 00547ad2
    POP EBP                             ; 00547ad8
    POP EDI                             ; 00547ad9
    POP ESI                             ; 00547ada
    POP EBX                             ; 00547adb
    RET                                 ; 00547adc
    MOV EAX,dword ptr [ESP + 0x120]     ; 00547add
        ;   Label: LAB_00547add
    FLD float ptr [EBP]                 ; 00547ae4
    FSUB float ptr [EAX]                ; 00547ae7
    FSTP float ptr [ESP + 0x84]         ; 00547ae9
    FLD float ptr [EBP + 0x4]           ; 00547af0
    FSUB float ptr [EAX + 0x4]          ; 00547af3
    FSTP float ptr [ESP + 0x88]         ; 00547af6
    FLD float ptr [EBP + 0x8]           ; 00547afd
    FSUB float ptr [EAX + 0x8]          ; 00547b00
    LEA EAX,[ESP + 0x84]                ; 00547b03
    PUSH EAX                            ; 00547b0a
    LEA EAX,[ESP + 0x34]                ; 00547b0b
    PUSH EAX                            ; 00547b0f
    FSTP float ptr [ESP + 0x94]         ; 00547b10
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00547b17
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00547b1c
    MOV EDX,dword ptr [ESP + 0x124]     ; 00547b1f
    CMP EAX,EDX                         ; 00547b26
    JZ 0x00547403                       ; 00547b28
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    MOV ECX,dword ptr [EAX]             ; 00547b2e
    MOV dword ptr [EDX],ECX             ; 00547b30
    MOV ECX,dword ptr [EAX + 0x4]       ; 00547b32
    MOV dword ptr [EDX + 0x4],ECX       ; 00547b35
    MOV ECX,dword ptr [EAX + 0x8]       ; 00547b38
    MOV dword ptr [EDX + 0x8],ECX       ; 00547b3b
    MOV EAX,0x2                         ; 00547b3e
    ADD ESP,0x108                       ; 00547b43
    POP EBP                             ; 00547b49
    POP EDI                             ; 00547b4a
    POP ESI                             ; 00547b4b
    POP EBX                             ; 00547b4c
    RET                                 ; 00547b4d
    MOV EAX,dword ptr [ESP + 0x120]     ; 00547b4e
        ;   Label: LAB_00547b4e
    FLD float ptr [EBP]                 ; 00547b55
    FSUB float ptr [EAX]                ; 00547b58
    FSTP float ptr [ESP]                ; 00547b5a
    FLD float ptr [EBP + 0x4]           ; 00547b5d
    FSUB float ptr [EAX + 0x4]          ; 00547b60
    FSTP float ptr [ESP + 0x4]          ; 00547b63
    FLD float ptr [EBP + 0x8]           ; 00547b67
    FSUB float ptr [EAX + 0x8]          ; 00547b6a
    MOV EAX,ESP                         ; 00547b6d
    PUSH EAX                            ; 00547b6f
    LEA EAX,[ESP + 0x10]                ; 00547b70
    PUSH EAX                            ; 00547b74
    FSTP float ptr [ESP + 0x10]         ; 00547b75
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00547b79
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00547b7e
    MOV EDX,dword ptr [ESP + 0x124]     ; 00547b81
    CMP EAX,EDX                         ; 00547b88
    JZ 0x00547403                       ; 00547b8a
        ;   XREF to: 00547403 (CONDITIONAL_JUMP)  ; LAB_00547403
    MOV ECX,dword ptr [EAX]             ; 00547b90
    MOV dword ptr [EDX],ECX             ; 00547b92
    MOV ECX,dword ptr [EAX + 0x4]       ; 00547b94
    MOV dword ptr [EDX + 0x4],ECX       ; 00547b97
    MOV ECX,dword ptr [EAX + 0x8]       ; 00547b9a
    MOV dword ptr [EDX + 0x8],ECX       ; 00547b9d
    MOV EAX,0x2                         ; 00547ba0
    ADD ESP,0x108                       ; 00547ba5
    POP EBP                             ; 00547bab
    POP EDI                             ; 00547bac
    POP ESI                             ; 00547bad
    POP EBX                             ; 00547bae
    RET                                 ; 00547baf
    MOV ECX,0x63e9a0                    ; 00547bb0 | = "..\\core\\path.cpp"
        ;   Label: LAB_00547bb0
    MOV EAX,0x547                       ; 00547bb5
    PUSH 0x63e9b1                       ; 00547bba | = "Out of bounds1!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00547bbf | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00547bc5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00547bca
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00547bcf
    JMP 0x00547a11                      ; 00547bd2
        ;   XREF to: 00547a11 (UNCONDITIONAL_JUMP)  ; LAB_00547a11
    MOV EDX,0x63e9c1                    ; 00547bd7 | = "..\\core\\path.cpp"
        ;   Label: LAB_00547bd7
    MOV ECX,0x548                       ; 00547bdc
    PUSH 0x63e9d2                       ; 00547be1 | = "Out of bounds2!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00547be6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00547bec | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00547bf2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00547bf7
    JMP 0x00547a19                      ; 00547bfa
        ;   XREF to: 00547a19 (UNCONDITIONAL_JUMP)  ; LAB_00547a19

