; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 at 004f051d
;
; Referenced Globals:
;   undefined1 DAT_005b6d08
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b8d0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0
    PUSH ESI                            ; 0046b8d1
    PUSH EDI                            ; 0046b8d2
    PUSH EBP                            ; 0046b8d3
    SUB ESP,0x8                         ; 0046b8d4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0046b8d7
    MOV EAX,dword ptr [ECX]             ; 0046b8db
    MOV EDX,EAX                         ; 0046b8dd
    SAR EDX,0x1f                        ; 0046b8df
    SHL EDX,0x3                         ; 0046b8e2
    SBB EAX,EDX                         ; 0046b8e5
    SAR EAX,0x3                         ; 0046b8e7
    MOV EDI,EAX                         ; 0046b8ea
    MOV EAX,dword ptr [ECX + 0x4]       ; 0046b8ec
    MOV EDX,EAX                         ; 0046b8ef
    SAR EDX,0x1f                        ; 0046b8f1
    SHL EDX,0x3                         ; 0046b8f4
    SBB EAX,EDX                         ; 0046b8f7
    SAR EAX,0x3                         ; 0046b8f9
    MOV ESI,EAX                         ; 0046b8fc
    MOV EAX,dword ptr [ECX + 0x8]       ; 0046b8fe
    MOV EDX,EAX                         ; 0046b901
    SAR EDX,0x1f                        ; 0046b903
    SHL EDX,0x3                         ; 0046b906
    SBB EAX,EDX                         ; 0046b909
    SAR EAX,0x3                         ; 0046b90b
    MOV EBP,EAX                         ; 0046b90e
    TEST EDI,EDI                        ; 0046b910
    JL 0x0046b99f                       ; 0046b912
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    TEST ESI,ESI                        ; 0046b918
    JL 0x0046b99f                       ; 0046b91a
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    TEST EAX,EAX                        ; 0046b920
    JL 0x0046b99f                       ; 0046b922
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b928
    CMP EDI,dword ptr [EAX + 0x40]      ; 0046b92c
    JGE 0x0046b99f                      ; 0046b92f
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    CMP ESI,dword ptr [EAX + 0x44]      ; 0046b935
    JGE 0x0046b99f                      ; 0046b938
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    CMP EBP,dword ptr [EAX + 0x48]      ; 0046b93a
    JGE 0x0046b99f                      ; 0046b93d
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    MOV EAX,dword ptr [ECX]             ; 0046b93f
    AND EAX,0x7                         ; 0046b941
    MOV dword ptr [ESP],EAX             ; 0046b944
    MOV EAX,dword ptr [ECX + 0x8]       ; 0046b947
    AND EAX,0x7                         ; 0046b94a
    MOV EBX,dword ptr [ECX + 0x4]       ; 0046b94d
    SHL EAX,0x3                         ; 0046b950
    AND EBX,0x7                         ; 0046b953
    MOV dword ptr [ESP + 0x4],EAX       ; 0046b956
    PUSH EBP                            ; 0046b95a
        ;   Label: LAB_0046b95a
    PUSH ESI                            ; 0046b95b
    PUSH EDI                            ; 0046b95c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046b95d
    PUSH ECX                            ; 0046b961
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046b962
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0046b967
    TEST EAX,EAX                        ; 0046b96a
    JZ 0x0046b99f                       ; 0046b96c
        ;   XREF to: 0046b99f (CONDITIONAL_JUMP)  ; LAB_0046b99f
    CMP dword ptr [EAX],0x0             ; 0046b96e
    JZ 0x0046b990                       ; 0046b971
        ;   XREF to: 0046b990 (CONDITIONAL_JUMP)  ; LAB_0046b990
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b973
    MOV EAX,dword ptr [EAX]             ; 0046b977
    ADD EDX,EBX                         ; 0046b979
    ADD EAX,EDX                         ; 0046b97b
    XOR EDX,EDX                         ; 0046b97d
    MOV ECX,dword ptr [ESP]             ; 0046b97f
    MOV DL,byte ptr [EAX]               ; 0046b982
    XOR EAX,EAX                         ; 0046b984
    MOV AL,byte ptr [ECX + 0x5b6d08]    ; 0046b986 | DAT_005b6d08
    TEST EDX,EAX                        ; 0046b98c
    JNZ 0x0046b9ae                      ; 0046b98e
        ;   XREF to: 0046b9ae (CONDITIONAL_JUMP)  ; LAB_0046b9ae
    DEC EBX                             ; 0046b990
        ;   Label: LAB_0046b990
    TEST EBX,EBX                        ; 0046b991
    JGE 0x0046b95a                      ; 0046b993
        ;   XREF to: 0046b95a (CONDITIONAL_JUMP)  ; LAB_0046b95a
    DEC ESI                             ; 0046b995
    MOV EBX,0x7                         ; 0046b996
    TEST ESI,ESI                        ; 0046b99b
    JGE 0x0046b95a                      ; 0046b99d
        ;   XREF to: 0046b95a (CONDITIONAL_JUMP)  ; LAB_0046b95a
    MOV EBX,0xfffffc19                  ; 0046b99f
        ;   Label: LAB_0046b99f
    MOV EAX,EBX                         ; 0046b9a4
    ADD ESP,0x8                         ; 0046b9a6
    POP EBP                             ; 0046b9a9
    POP EDI                             ; 0046b9aa
    POP ESI                             ; 0046b9ab
    POP EBX                             ; 0046b9ac
    RET                                 ; 0046b9ad
    SHL ESI,0x3                         ; 0046b9ae
        ;   Label: LAB_0046b9ae
    ADD EBX,ESI                         ; 0046b9b1
    MOV EAX,EBX                         ; 0046b9b3
    ADD ESP,0x8                         ; 0046b9b5
    POP EBP                             ; 0046b9b8
    POP EDI                             ; 0046b9b9
    POP ESI                             ; 0046b9ba
    POP EBX                             ; 0046b9bb
    RET                                 ; 0046b9bc

