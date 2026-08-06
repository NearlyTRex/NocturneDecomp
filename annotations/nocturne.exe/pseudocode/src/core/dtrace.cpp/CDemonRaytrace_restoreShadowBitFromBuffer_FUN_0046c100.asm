; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90 at 0046bf96
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e402
;   TerminatedCString s_Parity_Check_999_0057e415
;   undefined1 DAT_005b6d08
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c100
        ;   Label: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0046c100
    PUSH ESI                            ; 0046c101
    PUSH EDI                            ; 0046c102
    PUSH EBP                            ; 0046c103
    SUB ESP,0x30                        ; 0046c104
    MOV EBX,dword ptr [ESP + 0x44]      ; 0046c107
    MOV EDX,dword ptr [ESP + 0x48]      ; 0046c10b
    PUSH EDX                            ; 0046c10f
    PUSH EBX                            ; 0046c110
    LEA ESI,[ESP + 0x20]                ; 0046c111
    LEA EDI,[ESP + 0x14]                ; 0046c115
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650 ; 0046c119
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
    LEA ESI,[ESP + 0x20]                ; 0046c11e
    ADD ESP,0x8                         ; 0046c122
    MOVSD ES:EDI,ESI                    ; 0046c125
    MOVSD ES:EDI,ESI                    ; 0046c126
    MOVSD ES:EDI,ESI                    ; 0046c127
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046c128
    TEST ECX,ECX                        ; 0046c12c
    JL 0x0046c14f                       ; 0046c12e
        ;   XREF to: 0046c14f (CONDITIONAL_JUMP)  ; LAB_0046c14f
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046c130
    TEST ESI,ESI                        ; 0046c134
    JL 0x0046c14f                       ; 0046c136
        ;   XREF to: 0046c14f (CONDITIONAL_JUMP)  ; LAB_0046c14f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0046c138
    TEST EDI,EDI                        ; 0046c13c
    JL 0x0046c14f                       ; 0046c13e
        ;   XREF to: 0046c14f (CONDITIONAL_JUMP)  ; LAB_0046c14f
    CMP ECX,dword ptr [EBX + 0x40]      ; 0046c140
    JGE 0x0046c14f                      ; 0046c143
        ;   XREF to: 0046c14f (CONDITIONAL_JUMP)  ; LAB_0046c14f
    CMP ESI,dword ptr [EBX + 0x44]      ; 0046c145
    JGE 0x0046c14f                      ; 0046c148
        ;   XREF to: 0046c14f (CONDITIONAL_JUMP)  ; LAB_0046c14f
    CMP EDI,dword ptr [EBX + 0x48]      ; 0046c14a
    JL 0x0046c157                       ; 0046c14d
        ;   XREF to: 0046c157 (CONDITIONAL_JUMP)  ; LAB_0046c157
    ADD ESP,0x30                        ; 0046c14f
        ;   Label: LAB_0046c14f
    POP EBP                             ; 0046c152
    POP EDI                             ; 0046c153
    POP ESI                             ; 0046c154
    POP EBX                             ; 0046c155
    RET                                 ; 0046c156
    MOV ESI,dword ptr [ESP + 0x48]      ; 0046c157
        ;   Label: LAB_0046c157
    PUSH ESI                            ; 0046c15b
    PUSH EBX                            ; 0046c15c
    LEA ESI,[ESP + 0x2c]                ; 0046c15d
    LEA EDI,[ESP + 0x8]                 ; 0046c161
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700 ; 0046c165
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x2c]                ; 0046c16a
    ADD ESP,0x8                         ; 0046c16e
    MOVSD ES:EDI,ESI                    ; 0046c171
    MOVSD ES:EDI,ESI                    ; 0046c172
    MOVSD ES:EDI,ESI                    ; 0046c173
    MOV EAX,dword ptr [ESP]             ; 0046c174
    MOV EDX,EAX                         ; 0046c177
    MOV ESI,0x8                         ; 0046c179
    SAR EDX,0x1f                        ; 0046c17e
    IDIV ESI                            ; 0046c181
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046c183
    MOV dword ptr [ESP],EDX             ; 0046c187
    MOV EDX,EAX                         ; 0046c18a
    SAR EDX,0x1f                        ; 0046c18c
    IDIV ESI                            ; 0046c18f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046c191
    MOV dword ptr [ESP + 0x4],EDX       ; 0046c195
    MOV EDX,EAX                         ; 0046c199
    SAR EDX,0x1f                        ; 0046c19b
    IDIV ESI                            ; 0046c19e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0046c1a0
    PUSH EDI                            ; 0046c1a4
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c1a5
    PUSH EBP                            ; 0046c1a9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046c1aa
    PUSH EAX                            ; 0046c1ae
    PUSH EBX                            ; 0046c1af
    MOV dword ptr [ESP + 0x18],EDX      ; 0046c1b0
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046c1b4
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0046c1b9
    MOV EBX,EAX                         ; 0046c1bc
    TEST EAX,EAX                        ; 0046c1be
    JNZ 0x0046c1e5                      ; 0046c1c0
        ;   XREF to: 0046c1e5 (CONDITIONAL_JUMP)  ; LAB_0046c1e5
    MOV EDX,0x57e402                    ; 0046c1c2 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb55                       ; 0046c1c7
    PUSH 0x57e415                       ; 0046c1cc | = "Parity Check 999"
    MOV dword ptr [0x01cc4800],EDX      ; 0046c1d1 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0046c1d7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0046c1dd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0046c1e2
    CMP dword ptr [EBX],0x0             ; 0046c1e5
        ;   Label: LAB_0046c1e5
    JNZ 0x0046c1f3                      ; 0046c1e8
        ;   XREF to: 0046c1f3 (CONDITIONAL_JUMP)  ; LAB_0046c1f3
    PUSH EBX                            ; 0046c1ea
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30 ; 0046c1eb
        ;   XREF to: 0044ac30 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0046c1f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046c1f3
        ;   Label: LAB_0046c1f3
    MOV EDI,dword ptr [ESP + 0x4]       ; 0046c1f7
    MOV EDX,dword ptr [ESP]             ; 0046c1fb
    MOV ESI,dword ptr [EBX]             ; 0046c1fe
    SHL EAX,0x3                         ; 0046c200
    MOV DL,byte ptr [EDX + 0x5b6d08]    ; 0046c203 | DAT_005b6d08
    ADD EAX,EDI                         ; 0046c209
    XOR DL,0xff                         ; 0046c20b
    AND byte ptr [ESI + EAX*0x1],DL     ; 0046c20e
    MOV ESI,dword ptr [EBX]             ; 0046c211
    MOV EDX,dword ptr [EBX + 0x4]       ; 0046c213
    ADD ESI,EAX                         ; 0046c216
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0046c218
    MOV EDX,dword ptr [ESP]             ; 0046c21b
    AND AL,byte ptr [EDX + 0x5b6d08]    ; 0046c21e | DAT_005b6d08
    OR byte ptr [ESI],AL                ; 0046c224
    ADD ESP,0x30                        ; 0046c226
    POP EBP                             ; 0046c229
    POP EDI                             ; 0046c22a
    POP ESI                             ; 0046c22b
    POP EBX                             ; 0046c22c
    RET                                 ; 0046c22d

