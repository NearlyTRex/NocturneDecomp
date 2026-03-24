; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00499f10 at 0049a116
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622d9e
;   TerminatedCString s_Parity_Check_999_00622db1
;   uchar[8] g_VoxelYBitMasks
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a280
        ;   Label: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280
    PUSH ESI                            ; 0049a281
    PUSH EDI                            ; 0049a282
    PUSH EBP                            ; 0049a283
    SUB ESP,0x30                        ; 0049a284
    MOV EBX,dword ptr [ESP + 0x44]      ; 0049a287
    MOV EDX,dword ptr [ESP + 0x48]      ; 0049a28b
    PUSH EDX                            ; 0049a28f
    PUSH EBX                            ; 0049a290
    LEA ESI,[ESP + 0x20]                ; 0049a291
    LEA EDI,[ESP + 0x14]                ; 0049a295
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0 ; 0049a299
        ;   XREF to: 004997d0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
    LEA ESI,[ESP + 0x20]                ; 0049a29e
    ADD ESP,0x8                         ; 0049a2a2
    JMP 0x0060a58a                      ; 0049a2a5
        ;   XREF to: 0060a58a (UNCONDITIONAL_JUMP)  ; LAB_0060a58a
    TEST ECX,ECX                        ; 0049a2ac
        ;   Label: LAB_0049a2ac
    JL 0x0049a2cf                       ; 0049a2ae
        ;   XREF to: 0049a2cf (CONDITIONAL_JUMP)  ; LAB_0049a2cf
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049a2b0
    TEST ESI,ESI                        ; 0049a2b4
    JL 0x0049a2cf                       ; 0049a2b6
        ;   XREF to: 0049a2cf (CONDITIONAL_JUMP)  ; LAB_0049a2cf
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049a2b8
    TEST EDI,EDI                        ; 0049a2bc
    JL 0x0049a2cf                       ; 0049a2be
        ;   XREF to: 0049a2cf (CONDITIONAL_JUMP)  ; LAB_0049a2cf
    CMP ECX,dword ptr [EBX + 0x40]      ; 0049a2c0
    JGE 0x0049a2cf                      ; 0049a2c3
        ;   XREF to: 0049a2cf (CONDITIONAL_JUMP)  ; LAB_0049a2cf
    CMP ESI,dword ptr [EBX + 0x44]      ; 0049a2c5
    JGE 0x0049a2cf                      ; 0049a2c8
        ;   XREF to: 0049a2cf (CONDITIONAL_JUMP)  ; LAB_0049a2cf
    CMP EDI,dword ptr [EBX + 0x48]      ; 0049a2ca
    JL 0x0049a2d7                       ; 0049a2cd
        ;   XREF to: 0049a2d7 (CONDITIONAL_JUMP)  ; LAB_0049a2d7
    ADD ESP,0x30                        ; 0049a2cf
        ;   Label: LAB_0049a2cf
    POP EBP                             ; 0049a2d2
    POP EDI                             ; 0049a2d3
    POP ESI                             ; 0049a2d4
    POP EBX                             ; 0049a2d5
    RET                                 ; 0049a2d6
    MOV ESI,dword ptr [ESP + 0x48]      ; 0049a2d7
        ;   Label: LAB_0049a2d7
    PUSH ESI                            ; 0049a2db
    PUSH EBX                            ; 0049a2dc
    LEA ESI,[ESP + 0x2c]                ; 0049a2dd
    LEA EDI,[ESP + 0x8]                 ; 0049a2e1
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 0049a2e5
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x2c]                ; 0049a2ea
    ADD ESP,0x8                         ; 0049a2ee
    JMP 0x0060a5a9                      ; 0049a2f1
        ;   XREF to: 0060a5a9 (UNCONDITIONAL_JUMP)  ; LAB_0060a5a9
    MOV EDX,EAX                         ; 0049a2f7
        ;   Label: LAB_0049a2f7
    MOV ESI,0x8                         ; 0049a2f9
    SAR EDX,0x1f                        ; 0049a2fe
    IDIV ESI                            ; 0049a301
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a303
    MOV dword ptr [ESP],EDX             ; 0049a307
    MOV EDX,EAX                         ; 0049a30a
    SAR EDX,0x1f                        ; 0049a30c
    IDIV ESI                            ; 0049a30f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049a311
    MOV dword ptr [ESP + 0x4],EDX       ; 0049a315
    MOV EDX,EAX                         ; 0049a319
    SAR EDX,0x1f                        ; 0049a31b
    IDIV ESI                            ; 0049a31e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049a320
    PUSH EDI                            ; 0049a324
    MOV EBP,dword ptr [ESP + 0x14]      ; 0049a325
    PUSH EBP                            ; 0049a329
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049a32a
    PUSH EAX                            ; 0049a32e
    PUSH EBX                            ; 0049a32f
    MOV dword ptr [ESP + 0x18],EDX      ; 0049a330
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 0049a334
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0049a339
    MOV EBX,EAX                         ; 0049a33c
    TEST EAX,EAX                        ; 0049a33e
    JNZ 0x0049a365                      ; 0049a340
        ;   XREF to: 0049a365 (CONDITIONAL_JUMP)  ; LAB_0049a365
    MOV EDX,0x622d9e                    ; 0049a342 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb55                       ; 0049a347
    PUSH 0x622db1                       ; 0049a34c | = "Parity Check 999"
    MOV dword ptr [0x02f0ca48],EDX      ; 0049a351 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0049a357 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049a35d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049a362
    CMP dword ptr [EBX],0x0             ; 0049a365
        ;   Label: LAB_0049a365
    JNZ 0x0049a373                      ; 0049a368
        ;   XREF to: 0049a373 (CONDITIONAL_JUMP)  ; LAB_0049a373
    PUSH EBX                            ; 0049a36a
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0 ; 0049a36b
        ;   XREF to: 004567b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0049a370
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049a373
        ;   Label: LAB_0049a373
    MOV EDI,dword ptr [ESP + 0x4]       ; 0049a377
    MOV EDX,dword ptr [ESP]             ; 0049a37b
    MOV ESI,dword ptr [EBX]             ; 0049a37e
    SHL EAX,0x3                         ; 0049a380
    MOV DL,byte ptr [EDX + 0x6789f8]    ; 0049a383 | g_VoxelYBitMasks
    ADD EAX,EDI                         ; 0049a389
    XOR DL,0xff                         ; 0049a38b
    AND byte ptr [ESI + EAX*0x1],DL     ; 0049a38e
    MOV ESI,dword ptr [EBX]             ; 0049a391
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049a393
    ADD ESI,EAX                         ; 0049a396
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0049a398
    MOV EDX,dword ptr [ESP]             ; 0049a39b
    AND AL,byte ptr [EDX + 0x6789f8]    ; 0049a39e | g_VoxelYBitMasks
    OR byte ptr [ESI],AL                ; 0049a3a4
    ADD ESP,0x30                        ; 0049a3a6
    POP EBP                             ; 0049a3a9
    POP EDI                             ; 0049a3aa
    POP ESI                             ; 0049a3ab
    POP EBX                             ; 0049a3ac
    RET                                 ; 0049a3ad
    MOV ECX,dword ptr [ESI]             ; 0060a58a
        ;   Label: LAB_0060a58a
    MOV dword ptr [EDI],ECX             ; 0060a58c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a58e
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a591
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a594
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a597
    ADD ESI,0xc                         ; 0060a59a
    ADD EDI,0xc                         ; 0060a59d
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060a5a0
    JMP 0x0049a2ac                      ; 0060a5a4
        ;   XREF to: 0049a2ac (UNCONDITIONAL_JUMP)  ; LAB_0049a2ac
    MOV ECX,dword ptr [ESI]             ; 0060a5a9
        ;   Label: LAB_0060a5a9
    MOV dword ptr [EDI],ECX             ; 0060a5ab
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a5ad
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a5b0
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a5b3
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a5b6
    ADD ESI,0xc                         ; 0060a5b9
    ADD EDI,0xc                         ; 0060a5bc
    MOV EAX,dword ptr [ESP]             ; 0060a5bf
    JMP 0x0049a2f7                      ; 0060a5c2
        ;   XREF to: 0049a2f7 (UNCONDITIONAL_JUMP)  ; LAB_0049a2f7

