; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_00476df0 at 00477062
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1d53
;   TerminatedCString s_Parity_Check_999_005d1d66
;   undefined4 DAT_00613888
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477430
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430
    PUSH ESI                            ; 00477431
    PUSH EDI                            ; 00477432
    PUSH EBP                            ; 00477433
    SUB ESP,0x30                        ; 00477434
    MOV EBX,dword ptr [ESP + 0x44]      ; 00477437
    MOV EDX,dword ptr [ESP + 0x48]      ; 0047743b
    PUSH EDX                            ; 0047743f
    PUSH EBX                            ; 00477440
    LEA ESI,[ESP + 0x20]                ; 00477441
    LEA EDI,[ESP + 0x8]                 ; 00477445
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0 ; 00477449
        ;   XREF to: 004769a0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
    LEA ESI,[ESP + 0x20]                ; 0047744e
    ADD ESP,0x8                         ; 00477452
    MOVSD ES:EDI,ESI                    ; 00477455
    MOVSD ES:EDI,ESI                    ; 00477456
    MOVSD ES:EDI,ESI                    ; 00477457
    MOV ECX,dword ptr [ESP]             ; 00477458
    TEST ECX,ECX                        ; 0047745b
    JL 0x0047747e                       ; 0047745d
        ;   XREF to: 0047747e (CONDITIONAL_JUMP)  ; LAB_0047747e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0047745f
    TEST ESI,ESI                        ; 00477463
    JL 0x0047747e                       ; 00477465
        ;   XREF to: 0047747e (CONDITIONAL_JUMP)  ; LAB_0047747e
    MOV EDI,dword ptr [ESP + 0x8]       ; 00477467
    TEST EDI,EDI                        ; 0047746b
    JL 0x0047747e                       ; 0047746d
        ;   XREF to: 0047747e (CONDITIONAL_JUMP)  ; LAB_0047747e
    CMP ECX,dword ptr [EBX + 0x40]      ; 0047746f
    JGE 0x0047747e                      ; 00477472
        ;   XREF to: 0047747e (CONDITIONAL_JUMP)  ; LAB_0047747e
    CMP ESI,dword ptr [EBX + 0x44]      ; 00477474
    JGE 0x0047747e                      ; 00477477
        ;   XREF to: 0047747e (CONDITIONAL_JUMP)  ; LAB_0047747e
    CMP EDI,dword ptr [EBX + 0x48]      ; 00477479
    JL 0x00477486                       ; 0047747c
        ;   XREF to: 00477486 (CONDITIONAL_JUMP)  ; LAB_00477486
    ADD ESP,0x30                        ; 0047747e
        ;   Label: LAB_0047747e
    POP EBP                             ; 00477481
    POP EDI                             ; 00477482
    POP ESI                             ; 00477483
    POP EBX                             ; 00477484
    RET                                 ; 00477485
    MOV ESI,dword ptr [ESP + 0x48]      ; 00477486
        ;   Label: LAB_00477486
    PUSH ESI                            ; 0047748a
    PUSH EBX                            ; 0047748b
    LEA ESI,[ESP + 0x2c]                ; 0047748c
    LEA EDI,[ESP + 0x14]                ; 00477490
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50 ; 00477494
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x2c]                ; 00477499
    ADD ESP,0x8                         ; 0047749d
    MOVSD ES:EDI,ESI                    ; 004774a0
    MOVSD ES:EDI,ESI                    ; 004774a1
    MOVSD ES:EDI,ESI                    ; 004774a2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004774a3
    MOV EDX,EAX                         ; 004774a7
    MOV ESI,0x8                         ; 004774a9
    SAR EDX,0x1f                        ; 004774ae
    IDIV ESI                            ; 004774b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004774b3
    MOV dword ptr [ESP + 0xc],EDX       ; 004774b7
    MOV EDX,EAX                         ; 004774bb
    SAR EDX,0x1f                        ; 004774bd
    IDIV ESI                            ; 004774c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004774c2
    MOV dword ptr [ESP + 0x10],EDX      ; 004774c6
    MOV EDX,EAX                         ; 004774ca
    SAR EDX,0x1f                        ; 004774cc
    IDIV ESI                            ; 004774cf
    MOV EDI,dword ptr [ESP + 0x8]       ; 004774d1
    PUSH EDI                            ; 004774d5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004774d6
    PUSH EBP                            ; 004774da
    MOV EAX,dword ptr [ESP + 0x8]       ; 004774db
    PUSH EAX                            ; 004774df
    PUSH EBX                            ; 004774e0
    MOV dword ptr [ESP + 0x24],EDX      ; 004774e1
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 004774e5
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 004774ea
    MOV EBX,EAX                         ; 004774ed
    TEST EAX,EAX                        ; 004774ef
    JNZ 0x00477516                      ; 004774f1
        ;   XREF to: 00477516 (CONDITIONAL_JUMP)  ; LAB_00477516
    MOV EDX,0x5d1d53                    ; 004774f3 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb19                       ; 004774f8
    PUSH 0x5d1d66                       ; 004774fd | = "Parity Check 999"
    MOV dword ptr [0x01d046a0],EDX      ; 00477502 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00477508 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047750e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00477513
    CMP dword ptr [EBX],0x0             ; 00477516
        ;   Label: LAB_00477516
    JNZ 0x00477524                      ; 00477519
        ;   XREF to: 00477524 (CONDITIONAL_JUMP)  ; LAB_00477524
    PUSH EBX                            ; 0047751b
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510 ; 0047751c
        ;   XREF to: 00446510 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00477521
    MOV EAX,dword ptr [ESP + 0x14]      ; 00477524
        ;   Label: LAB_00477524
    MOV EDI,dword ptr [ESP + 0x10]      ; 00477528
    SHL EAX,0x3                         ; 0047752c
    MOV EBX,dword ptr [EBX]             ; 0047752f
    ADD EAX,EDI                         ; 00477531
    ADD EAX,EBX                         ; 00477533
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477535
    MOV DL,byte ptr [EAX]               ; 00477539
    MOV BL,byte ptr [EBX + 0x613888]    ; 0047753b | DAT_00613888
    OR DL,BL                            ; 00477541
    MOV byte ptr [EAX],DL               ; 00477543
    ADD ESP,0x30                        ; 00477545
    POP EBP                             ; 00477548
    POP EDI                             ; 00477549
    POP ESI                             ; 0047754a
    POP EBX                             ; 0047754b
    RET                                 ; 0047754c

