; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50 (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 at 00546c1d
;
; Referenced Globals:
;   uchar[8] g_VoxelYBitMasks
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499a50
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
    PUSH ESI                            ; 00499a51
    PUSH EDI                            ; 00499a52
    PUSH EBP                            ; 00499a53
    SUB ESP,0x8                         ; 00499a54
    MOV ECX,dword ptr [ESP + 0x20]      ; 00499a57
    MOV EAX,dword ptr [ECX]             ; 00499a5b
    MOV EDX,EAX                         ; 00499a5d
    SAR EDX,0x1f                        ; 00499a5f
    SHL EDX,0x3                         ; 00499a62
    SBB EAX,EDX                         ; 00499a65
    SAR EAX,0x3                         ; 00499a67
    MOV EDI,EAX                         ; 00499a6a
    MOV EAX,dword ptr [ECX + 0x4]       ; 00499a6c
    MOV EDX,EAX                         ; 00499a6f
    SAR EDX,0x1f                        ; 00499a71
    SHL EDX,0x3                         ; 00499a74
    SBB EAX,EDX                         ; 00499a77
    SAR EAX,0x3                         ; 00499a79
    MOV ESI,EAX                         ; 00499a7c
    MOV EAX,dword ptr [ECX + 0x8]       ; 00499a7e
    MOV EDX,EAX                         ; 00499a81
    SAR EDX,0x1f                        ; 00499a83
    SHL EDX,0x3                         ; 00499a86
    SBB EAX,EDX                         ; 00499a89
    SAR EAX,0x3                         ; 00499a8b
    MOV EBP,EAX                         ; 00499a8e
    TEST EDI,EDI                        ; 00499a90
    JL 0x00499b1f                       ; 00499a92
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    TEST ESI,ESI                        ; 00499a98
    JL 0x00499b1f                       ; 00499a9a
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    TEST EAX,EAX                        ; 00499aa0
    JL 0x00499b1f                       ; 00499aa2
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499aa8
    CMP EDI,dword ptr [EAX + 0x40]      ; 00499aac
    JGE 0x00499b1f                      ; 00499aaf
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    CMP ESI,dword ptr [EAX + 0x44]      ; 00499ab5
    JGE 0x00499b1f                      ; 00499ab8
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    CMP EBP,dword ptr [EAX + 0x48]      ; 00499aba
    JGE 0x00499b1f                      ; 00499abd
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    MOV EAX,dword ptr [ECX]             ; 00499abf
    AND EAX,0x7                         ; 00499ac1
    MOV dword ptr [ESP],EAX             ; 00499ac4
    MOV EAX,dword ptr [ECX + 0x8]       ; 00499ac7
    AND EAX,0x7                         ; 00499aca
    MOV EBX,dword ptr [ECX + 0x4]       ; 00499acd
    SHL EAX,0x3                         ; 00499ad0
    AND EBX,0x7                         ; 00499ad3
    MOV dword ptr [ESP + 0x4],EAX       ; 00499ad6
    PUSH EBP                            ; 00499ada
        ;   Label: LAB_00499ada
    PUSH ESI                            ; 00499adb
    PUSH EDI                            ; 00499adc
    MOV ECX,dword ptr [ESP + 0x28]      ; 00499add
    PUSH ECX                            ; 00499ae1
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00499ae2
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00499ae7
    TEST EAX,EAX                        ; 00499aea
    JZ 0x00499b1f                       ; 00499aec
        ;   XREF to: 00499b1f (CONDITIONAL_JUMP)  ; LAB_00499b1f
    CMP dword ptr [EAX],0x0             ; 00499aee
    JZ 0x00499b10                       ; 00499af1
        ;   XREF to: 00499b10 (CONDITIONAL_JUMP)  ; LAB_00499b10
    MOV EDX,dword ptr [ESP + 0x4]       ; 00499af3
    MOV EAX,dword ptr [EAX]             ; 00499af7
    ADD EDX,EBX                         ; 00499af9
    ADD EAX,EDX                         ; 00499afb
    XOR EDX,EDX                         ; 00499afd
    MOV ECX,dword ptr [ESP]             ; 00499aff
    MOV DL,byte ptr [EAX]               ; 00499b02
    XOR EAX,EAX                         ; 00499b04
    MOV AL,byte ptr [ECX + 0x6789f8]    ; 00499b06 | g_VoxelYBitMasks
    TEST EDX,EAX                        ; 00499b0c
    JNZ 0x00499b2e                      ; 00499b0e
        ;   XREF to: 00499b2e (CONDITIONAL_JUMP)  ; LAB_00499b2e
    DEC EBX                             ; 00499b10
        ;   Label: LAB_00499b10
    TEST EBX,EBX                        ; 00499b11
    JGE 0x00499ada                      ; 00499b13
        ;   XREF to: 00499ada (CONDITIONAL_JUMP)  ; LAB_00499ada
    DEC ESI                             ; 00499b15
    MOV EBX,0x7                         ; 00499b16
    TEST ESI,ESI                        ; 00499b1b
    JGE 0x00499ada                      ; 00499b1d
        ;   XREF to: 00499ada (CONDITIONAL_JUMP)  ; LAB_00499ada
    MOV EBX,0xfffffc19                  ; 00499b1f
        ;   Label: LAB_00499b1f
    MOV EAX,EBX                         ; 00499b24
    ADD ESP,0x8                         ; 00499b26
    POP EBP                             ; 00499b29
    POP EDI                             ; 00499b2a
    POP ESI                             ; 00499b2b
    POP EBX                             ; 00499b2c
    RET                                 ; 00499b2d
    SHL ESI,0x3                         ; 00499b2e
        ;   Label: LAB_00499b2e
    ADD EBX,ESI                         ; 00499b31
    MOV EAX,EBX                         ; 00499b33
    ADD ESP,0x8                         ; 00499b35
    POP EBP                             ; 00499b38
    POP EDI                             ; 00499b39
    POP ESI                             ; 00499b3a
    POP EBX                             ; 00499b3b
    RET                                 ; 00499b3c

