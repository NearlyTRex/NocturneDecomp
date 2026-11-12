; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0 at 00478442
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bcc2d
;   TerminatedCString s_Parity_Check_999_005bcc40
;   undefined4 DAT_005fb0e8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_00477a10
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004785c0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0
    PUSH ESI                            ; 004785c1
    PUSH EDI                            ; 004785c2
    PUSH EBP                            ; 004785c3
    SUB ESP,0x30                        ; 004785c4
    MOV EBX,dword ptr [ESP + 0x44]      ; 004785c7
    MOV EDX,dword ptr [ESP + 0x48]      ; 004785cb
    PUSH EDX                            ; 004785cf
    PUSH EBX                            ; 004785d0
    LEA ESI,[ESP + 0x20]                ; 004785d1
    LEA EDI,[ESP + 0x14]                ; 004785d5
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_00477a10 ; 004785d9
        ;   XREF to: 00477a10 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_00477a10(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
    LEA ESI,[ESP + 0x20]                ; 004785de
    ADD ESP,0x8                         ; 004785e2
    MOVSD ES:EDI,ESI                    ; 004785e5
    MOVSD ES:EDI,ESI                    ; 004785e6
    MOVSD ES:EDI,ESI                    ; 004785e7
    MOV ECX,dword ptr [ESP + 0xc]       ; 004785e8
    TEST ECX,ECX                        ; 004785ec
    JL 0x0047860f                       ; 004785ee
        ;   XREF to: 0047860f (CONDITIONAL_JUMP)  ; LAB_0047860f
    MOV ESI,dword ptr [ESP + 0x10]      ; 004785f0
    TEST ESI,ESI                        ; 004785f4
    JL 0x0047860f                       ; 004785f6
        ;   XREF to: 0047860f (CONDITIONAL_JUMP)  ; LAB_0047860f
    MOV EDI,dword ptr [ESP + 0x14]      ; 004785f8
    TEST EDI,EDI                        ; 004785fc
    JL 0x0047860f                       ; 004785fe
        ;   XREF to: 0047860f (CONDITIONAL_JUMP)  ; LAB_0047860f
    CMP ECX,dword ptr [EBX + 0x40]      ; 00478600
    JGE 0x0047860f                      ; 00478603
        ;   XREF to: 0047860f (CONDITIONAL_JUMP)  ; LAB_0047860f
    CMP ESI,dword ptr [EBX + 0x44]      ; 00478605
    JGE 0x0047860f                      ; 00478608
        ;   XREF to: 0047860f (CONDITIONAL_JUMP)  ; LAB_0047860f
    CMP EDI,dword ptr [EBX + 0x48]      ; 0047860a
    JL 0x00478617                       ; 0047860d
        ;   XREF to: 00478617 (CONDITIONAL_JUMP)  ; LAB_00478617
    ADD ESP,0x30                        ; 0047860f
        ;   Label: LAB_0047860f
    POP EBP                             ; 00478612
    POP EDI                             ; 00478613
    POP ESI                             ; 00478614
    POP EBX                             ; 00478615
    RET                                 ; 00478616
    MOV ESI,dword ptr [ESP + 0x48]      ; 00478617
        ;   Label: LAB_00478617
    PUSH ESI                            ; 0047861b
    PUSH EBX                            ; 0047861c
    LEA ESI,[ESP + 0x2c]                ; 0047861d
    LEA EDI,[ESP + 0x8]                 ; 00478621
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0 ; 00478625
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x2c]                ; 0047862a
    ADD ESP,0x8                         ; 0047862e
    MOVSD ES:EDI,ESI                    ; 00478631
    MOVSD ES:EDI,ESI                    ; 00478632
    MOVSD ES:EDI,ESI                    ; 00478633
    MOV EAX,dword ptr [ESP]             ; 00478634
    MOV EDX,EAX                         ; 00478637
    MOV ESI,0x8                         ; 00478639
    SAR EDX,0x1f                        ; 0047863e
    IDIV ESI                            ; 00478641
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478643
    MOV dword ptr [ESP],EDX             ; 00478647
    MOV EDX,EAX                         ; 0047864a
    SAR EDX,0x1f                        ; 0047864c
    IDIV ESI                            ; 0047864f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00478651
    MOV dword ptr [ESP + 0x4],EDX       ; 00478655
    MOV EDX,EAX                         ; 00478659
    SAR EDX,0x1f                        ; 0047865b
    IDIV ESI                            ; 0047865e
    MOV EDI,dword ptr [ESP + 0x14]      ; 00478660
    PUSH EDI                            ; 00478664
    MOV EBP,dword ptr [ESP + 0x14]      ; 00478665
    PUSH EBP                            ; 00478669
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047866a
    PUSH EAX                            ; 0047866e
    PUSH EBX                            ; 0047866f
    MOV dword ptr [ESP + 0x18],EDX      ; 00478670
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60 ; 00478674
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00478679
    MOV EBX,EAX                         ; 0047867c
    TEST EAX,EAX                        ; 0047867e
    JNZ 0x004786a5                      ; 00478680
        ;   XREF to: 004786a5 (CONDITIONAL_JUMP)  ; LAB_004786a5
    MOV EDX,0x5bcc2d                    ; 00478682 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb55                       ; 00478687
    PUSH 0x5bcc40                       ; 0047868c | = "Parity Check 999"
    MOV dword ptr [0x01d71de0],EDX      ; 00478691 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00478697 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047869d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004786a2
    CMP dword ptr [EBX],0x0             ; 004786a5
        ;   Label: LAB_004786a5
    JNZ 0x004786b3                      ; 004786a8
        ;   XREF to: 004786b3 (CONDITIONAL_JUMP)  ; LAB_004786b3
    PUSH EBX                            ; 004786aa
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10 ; 004786ab
        ;   XREF to: 00453d10 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 004786b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004786b3
        ;   Label: LAB_004786b3
    MOV EDI,dword ptr [ESP + 0x4]       ; 004786b7
    MOV EDX,dword ptr [ESP]             ; 004786bb
    MOV ESI,dword ptr [EBX]             ; 004786be
    SHL EAX,0x3                         ; 004786c0
    MOV DL,byte ptr [EDX + 0x5fb0e8]    ; 004786c3 | DAT_005fb0e8
    ADD EAX,EDI                         ; 004786c9
    XOR DL,0xff                         ; 004786cb
    AND byte ptr [ESI + EAX*0x1],DL     ; 004786ce
    MOV ESI,dword ptr [EBX]             ; 004786d1
    MOV EDX,dword ptr [EBX + 0x4]       ; 004786d3
    ADD ESI,EAX                         ; 004786d6
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004786d8
    MOV EDX,dword ptr [ESP]             ; 004786db
    AND AL,byte ptr [EDX + 0x5fb0e8]    ; 004786de | DAT_005fb0e8
    OR byte ptr [ESI],AL                ; 004786e4
    ADD ESP,0x30                        ; 004786e6
    POP EBP                             ; 004786e9
    POP EDI                             ; 004786ea
    POP ESI                             ; 004786eb
    POP EBX                             ; 004786ec
    RET                                 ; 004786ed

