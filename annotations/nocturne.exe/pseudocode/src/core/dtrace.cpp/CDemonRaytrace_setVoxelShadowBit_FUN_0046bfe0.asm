; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0 at 0046bca6
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e3de
;   TerminatedCString s_Parity_Check_999_0057e3f1
;   undefined1 DAT_005b6d08
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bfe0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0
    PUSH ESI                            ; 0046bfe1
    PUSH EDI                            ; 0046bfe2
    PUSH EBP                            ; 0046bfe3
    SUB ESP,0x30                        ; 0046bfe4
    MOV EBX,dword ptr [ESP + 0x44]      ; 0046bfe7
    MOV EDX,dword ptr [ESP + 0x48]      ; 0046bfeb
    PUSH EDX                            ; 0046bfef
    PUSH EBX                            ; 0046bff0
    LEA ESI,[ESP + 0x20]                ; 0046bff1
    LEA EDI,[ESP + 0x8]                 ; 0046bff5
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650 ; 0046bff9
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_0046b650()
    LEA ESI,[ESP + 0x20]                ; 0046bffe
    ADD ESP,0x8                         ; 0046c002
    MOVSD ES:EDI,ESI                    ; 0046c005
    MOVSD ES:EDI,ESI                    ; 0046c006
    MOVSD ES:EDI,ESI                    ; 0046c007
    MOV ECX,dword ptr [ESP]             ; 0046c008
    TEST ECX,ECX                        ; 0046c00b
    JL 0x0046c02e                       ; 0046c00d
        ;   XREF to: 0046c02e (CONDITIONAL_JUMP)  ; LAB_0046c02e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0046c00f
    TEST ESI,ESI                        ; 0046c013
    JL 0x0046c02e                       ; 0046c015
        ;   XREF to: 0046c02e (CONDITIONAL_JUMP)  ; LAB_0046c02e
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046c017
    TEST EDI,EDI                        ; 0046c01b
    JL 0x0046c02e                       ; 0046c01d
        ;   XREF to: 0046c02e (CONDITIONAL_JUMP)  ; LAB_0046c02e
    CMP ECX,dword ptr [EBX + 0x40]      ; 0046c01f
    JGE 0x0046c02e                      ; 0046c022
        ;   XREF to: 0046c02e (CONDITIONAL_JUMP)  ; LAB_0046c02e
    CMP ESI,dword ptr [EBX + 0x44]      ; 0046c024
    JGE 0x0046c02e                      ; 0046c027
        ;   XREF to: 0046c02e (CONDITIONAL_JUMP)  ; LAB_0046c02e
    CMP EDI,dword ptr [EBX + 0x48]      ; 0046c029
    JL 0x0046c036                       ; 0046c02c
        ;   XREF to: 0046c036 (CONDITIONAL_JUMP)  ; LAB_0046c036
    ADD ESP,0x30                        ; 0046c02e
        ;   Label: LAB_0046c02e
    POP EBP                             ; 0046c031
    POP EDI                             ; 0046c032
    POP ESI                             ; 0046c033
    POP EBX                             ; 0046c034
    RET                                 ; 0046c035
    MOV ESI,dword ptr [ESP + 0x48]      ; 0046c036
        ;   Label: LAB_0046c036
    PUSH ESI                            ; 0046c03a
    PUSH EBX                            ; 0046c03b
    LEA ESI,[ESP + 0x2c]                ; 0046c03c
    LEA EDI,[ESP + 0x14]                ; 0046c040
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700 ; 0046c044
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700()
    LEA ESI,[ESP + 0x2c]                ; 0046c049
    ADD ESP,0x8                         ; 0046c04d
    MOVSD ES:EDI,ESI                    ; 0046c050
    MOVSD ES:EDI,ESI                    ; 0046c051
    MOVSD ES:EDI,ESI                    ; 0046c052
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c053
    MOV EDX,EAX                         ; 0046c057
    MOV ESI,0x8                         ; 0046c059
    SAR EDX,0x1f                        ; 0046c05e
    IDIV ESI                            ; 0046c061
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046c063
    MOV dword ptr [ESP + 0xc],EDX       ; 0046c067
    MOV EDX,EAX                         ; 0046c06b
    SAR EDX,0x1f                        ; 0046c06d
    IDIV ESI                            ; 0046c070
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046c072
    MOV dword ptr [ESP + 0x10],EDX      ; 0046c076
    MOV EDX,EAX                         ; 0046c07a
    SAR EDX,0x1f                        ; 0046c07c
    IDIV ESI                            ; 0046c07f
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046c081
    PUSH EDI                            ; 0046c085
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046c086
    PUSH EBP                            ; 0046c08a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046c08b
    PUSH EAX                            ; 0046c08f
    PUSH EBX                            ; 0046c090
    MOV dword ptr [ESP + 0x24],EDX      ; 0046c091
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046c095
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0046c09a
    MOV EBX,EAX                         ; 0046c09d
    TEST EAX,EAX                        ; 0046c09f
    JNZ 0x0046c0c6                      ; 0046c0a1
        ;   XREF to: 0046c0c6 (CONDITIONAL_JUMP)  ; LAB_0046c0c6
    MOV EDX,0x57e3de                    ; 0046c0a3 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb19                       ; 0046c0a8
    PUSH 0x57e3f1                       ; 0046c0ad | = "Parity Check 999"
    MOV dword ptr [0x01cc4800],EDX      ; 0046c0b2 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0046c0b8 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046c0be
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046c0c3
    CMP dword ptr [EBX],0x0             ; 0046c0c6
        ;   Label: LAB_0046c0c6
    JNZ 0x0046c0d4                      ; 0046c0c9
        ;   XREF to: 0046c0d4 (CONDITIONAL_JUMP)  ; LAB_0046c0d4
    PUSH EBX                            ; 0046c0cb
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30 ; 0046c0cc
        ;   XREF to: 0044ac30 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0046c0d1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046c0d4
        ;   Label: LAB_0046c0d4
    MOV EDI,dword ptr [ESP + 0x10]      ; 0046c0d8
    SHL EAX,0x3                         ; 0046c0dc
    MOV EBX,dword ptr [EBX]             ; 0046c0df
    ADD EAX,EDI                         ; 0046c0e1
    ADD EAX,EBX                         ; 0046c0e3
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046c0e5
    MOV DL,byte ptr [EAX]               ; 0046c0e9
    MOV BL,byte ptr [EBX + 0x5b6d08]    ; 0046c0eb | DAT_005b6d08
    OR DL,BL                            ; 0046c0f1
    MOV byte ptr [EAX],DL               ; 0046c0f3
    ADD ESP,0x30                        ; 0046c0f5
    POP EBP                             ; 0046c0f8
    POP EDI                             ; 0046c0f9
    POP ESI                             ; 0046c0fa
    POP EBX                             ; 0046c0fb
    RET                                 ; 0046c0fc

