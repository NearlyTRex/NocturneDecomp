; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; int[1014]        Stack[-0x1028]:4056  aiStackY_1028
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_00499c20 at 00499e26
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622d7a
;   TerminatedCString s_Parity_Check_999_00622d8d
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

    PUSH EBX                            ; 0049a160
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
    PUSH ESI                            ; 0049a161
    PUSH EDI                            ; 0049a162
    PUSH EBP                            ; 0049a163
    SUB ESP,0x30                        ; 0049a164
    MOV EBX,dword ptr [ESP + 0x44]      ; 0049a167
    MOV EDX,dword ptr [ESP + 0x48]      ; 0049a16b
    PUSH EDX                            ; 0049a16f
    PUSH EBX                            ; 0049a170
    LEA ESI,[ESP + 0x20]                ; 0049a171
    LEA EDI,[ESP + 0x8]                 ; 0049a175
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0 ; 0049a179
        ;   XREF to: 004997d0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
    LEA ESI,[ESP + 0x20]                ; 0049a17e
    ADD ESP,0x8                         ; 0049a182
    MOVSD ES:EDI,ESI                    ; 0049a185
    MOVSD ES:EDI,ESI                    ; 0049a186
    MOVSD ES:EDI,ESI                    ; 0049a187
    MOV ECX,dword ptr [ESP]             ; 0049a188
    TEST ECX,ECX                        ; 0049a18b
    JL 0x0049a1ae                       ; 0049a18d
        ;   XREF to: 0049a1ae (CONDITIONAL_JUMP)  ; LAB_0049a1ae
    MOV ESI,dword ptr [ESP + 0x4]       ; 0049a18f
    TEST ESI,ESI                        ; 0049a193
    JL 0x0049a1ae                       ; 0049a195
        ;   XREF to: 0049a1ae (CONDITIONAL_JUMP)  ; LAB_0049a1ae
    MOV EDI,dword ptr [ESP + 0x8]       ; 0049a197
    TEST EDI,EDI                        ; 0049a19b
    JL 0x0049a1ae                       ; 0049a19d
        ;   XREF to: 0049a1ae (CONDITIONAL_JUMP)  ; LAB_0049a1ae
    CMP ECX,dword ptr [EBX + 0x40]      ; 0049a19f
    JGE 0x0049a1ae                      ; 0049a1a2
        ;   XREF to: 0049a1ae (CONDITIONAL_JUMP)  ; LAB_0049a1ae
    CMP ESI,dword ptr [EBX + 0x44]      ; 0049a1a4
    JGE 0x0049a1ae                      ; 0049a1a7
        ;   XREF to: 0049a1ae (CONDITIONAL_JUMP)  ; LAB_0049a1ae
    CMP EDI,dword ptr [EBX + 0x48]      ; 0049a1a9
    JL 0x0049a1b6                       ; 0049a1ac
        ;   XREF to: 0049a1b6 (CONDITIONAL_JUMP)  ; LAB_0049a1b6
    ADD ESP,0x30                        ; 0049a1ae
        ;   Label: LAB_0049a1ae
    POP EBP                             ; 0049a1b1
    POP EDI                             ; 0049a1b2
    POP ESI                             ; 0049a1b3
    POP EBX                             ; 0049a1b4
    RET                                 ; 0049a1b5
    MOV ESI,dword ptr [ESP + 0x48]      ; 0049a1b6
        ;   Label: LAB_0049a1b6
    PUSH ESI                            ; 0049a1ba
    PUSH EBX                            ; 0049a1bb
    LEA ESI,[ESP + 0x2c]                ; 0049a1bc
    LEA EDI,[ESP + 0x14]                ; 0049a1c0
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 0049a1c4
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x2c]                ; 0049a1c9
    ADD ESP,0x8                         ; 0049a1cd
    MOVSD ES:EDI,ESI                    ; 0049a1d0
    MOVSD ES:EDI,ESI                    ; 0049a1d1
    MOVSD ES:EDI,ESI                    ; 0049a1d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049a1d3
    MOV EDX,EAX                         ; 0049a1d7
    MOV ESI,0x8                         ; 0049a1d9
    SAR EDX,0x1f                        ; 0049a1de
    IDIV ESI                            ; 0049a1e1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049a1e3
    MOV dword ptr [ESP + 0xc],EDX       ; 0049a1e7
    MOV EDX,EAX                         ; 0049a1eb
    SAR EDX,0x1f                        ; 0049a1ed
    IDIV ESI                            ; 0049a1f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049a1f2
    MOV dword ptr [ESP + 0x10],EDX      ; 0049a1f6
    MOV EDX,EAX                         ; 0049a1fa
    SAR EDX,0x1f                        ; 0049a1fc
    IDIV ESI                            ; 0049a1ff
    MOV EDI,dword ptr [ESP + 0x8]       ; 0049a201
    PUSH EDI                            ; 0049a205
    MOV EBP,dword ptr [ESP + 0x8]       ; 0049a206
    PUSH EBP                            ; 0049a20a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049a20b
    PUSH EAX                            ; 0049a20f
    PUSH EBX                            ; 0049a210
    MOV dword ptr [ESP + 0x24],EDX      ; 0049a211
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 0049a215
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0049a21a
    MOV EBX,EAX                         ; 0049a21d
    TEST EAX,EAX                        ; 0049a21f
    JNZ 0x0049a246                      ; 0049a221
        ;   XREF to: 0049a246 (CONDITIONAL_JUMP)  ; LAB_0049a246
    MOV EDX,0x622d7a                    ; 0049a223 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb19                       ; 0049a228
    PUSH 0x622d8d                       ; 0049a22d | = "Parity Check 999"
    MOV dword ptr [0x02f0ca48],EDX      ; 0049a232 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0049a238 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049a23e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049a243
    CMP dword ptr [EBX],0x0             ; 0049a246
        ;   Label: LAB_0049a246
    JNZ 0x0049a254                      ; 0049a249
        ;   XREF to: 0049a254 (CONDITIONAL_JUMP)  ; LAB_0049a254
    PUSH EBX                            ; 0049a24b
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0 ; 0049a24c
        ;   XREF to: 004567b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0049a251
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049a254
        ;   Label: LAB_0049a254
    MOV EDI,dword ptr [ESP + 0x10]      ; 0049a258
    SHL EAX,0x3                         ; 0049a25c
    MOV EBX,dword ptr [EBX]             ; 0049a25f
    ADD EAX,EDI                         ; 0049a261
    ADD EAX,EBX                         ; 0049a263
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049a265
    MOV DL,byte ptr [EAX]               ; 0049a269
    MOV BL,byte ptr [EBX + 0x6789f8]    ; 0049a26b | g_VoxelYBitMasks
    OR DL,BL                            ; 0049a271
    MOV byte ptr [EAX],DL               ; 0049a273
    ADD ESP,0x30                        ; 0049a275
    POP EBP                             ; 0049a278
    POP EDI                             ; 0049a279
    POP ESI                             ; 0049a27a
    POP EBX                             ; 0049a27b
    RET                                 ; 0049a27c

