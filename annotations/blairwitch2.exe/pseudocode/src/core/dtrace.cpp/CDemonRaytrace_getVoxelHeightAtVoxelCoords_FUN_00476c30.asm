; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 at 0051236d
;
; Referenced Globals:
;   undefined4 DAT_00613888
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476c30
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30
    PUSH ESI                            ; 00476c31
    PUSH EDI                            ; 00476c32
    PUSH EBP                            ; 00476c33
    SUB ESP,0x8                         ; 00476c34
    MOV ECX,dword ptr [ESP + 0x20]      ; 00476c37
    MOV EAX,dword ptr [ECX]             ; 00476c3b
    MOV EDX,EAX                         ; 00476c3d
    SAR EDX,0x1f                        ; 00476c3f
    SHL EDX,0x3                         ; 00476c42
    SBB EAX,EDX                         ; 00476c45
    SAR EAX,0x3                         ; 00476c47
    MOV EDI,EAX                         ; 00476c4a
    MOV EAX,dword ptr [ECX + 0x4]       ; 00476c4c
    MOV EDX,EAX                         ; 00476c4f
    SAR EDX,0x1f                        ; 00476c51
    SHL EDX,0x3                         ; 00476c54
    SBB EAX,EDX                         ; 00476c57
    SAR EAX,0x3                         ; 00476c59
    MOV ESI,EAX                         ; 00476c5c
    MOV EAX,dword ptr [ECX + 0x8]       ; 00476c5e
    MOV EDX,EAX                         ; 00476c61
    SAR EDX,0x1f                        ; 00476c63
    SHL EDX,0x3                         ; 00476c66
    SBB EAX,EDX                         ; 00476c69
    SAR EAX,0x3                         ; 00476c6b
    MOV EBP,EAX                         ; 00476c6e
    TEST EDI,EDI                        ; 00476c70
    JL 0x00476cff                       ; 00476c72
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    TEST ESI,ESI                        ; 00476c78
    JL 0x00476cff                       ; 00476c7a
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    TEST EAX,EAX                        ; 00476c80
    JL 0x00476cff                       ; 00476c82
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00476c88
    CMP EDI,dword ptr [EAX + 0x40]      ; 00476c8c
    JGE 0x00476cff                      ; 00476c8f
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    CMP ESI,dword ptr [EAX + 0x44]      ; 00476c95
    JGE 0x00476cff                      ; 00476c98
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    CMP EBP,dword ptr [EAX + 0x48]      ; 00476c9a
    JGE 0x00476cff                      ; 00476c9d
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    MOV EAX,dword ptr [ECX]             ; 00476c9f
    AND EAX,0x7                         ; 00476ca1
    MOV dword ptr [ESP],EAX             ; 00476ca4
    MOV EAX,dword ptr [ECX + 0x8]       ; 00476ca7
    AND EAX,0x7                         ; 00476caa
    MOV EBX,dword ptr [ECX + 0x4]       ; 00476cad
    SHL EAX,0x3                         ; 00476cb0
    AND EBX,0x7                         ; 00476cb3
    MOV dword ptr [ESP + 0x4],EAX       ; 00476cb6
    PUSH EBP                            ; 00476cba
        ;   Label: LAB_00476cba
    PUSH ESI                            ; 00476cbb
    PUSH EDI                            ; 00476cbc
    MOV ECX,dword ptr [ESP + 0x28]      ; 00476cbd
    PUSH ECX                            ; 00476cc1
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 00476cc2
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00476cc7
    TEST EAX,EAX                        ; 00476cca
    JZ 0x00476cff                       ; 00476ccc
        ;   XREF to: 00476cff (CONDITIONAL_JUMP)  ; LAB_00476cff
    CMP dword ptr [EAX],0x0             ; 00476cce
    JZ 0x00476cf0                       ; 00476cd1
        ;   XREF to: 00476cf0 (CONDITIONAL_JUMP)  ; LAB_00476cf0
    MOV EDX,dword ptr [ESP + 0x4]       ; 00476cd3
    MOV EAX,dword ptr [EAX]             ; 00476cd7
    ADD EDX,EBX                         ; 00476cd9
    ADD EAX,EDX                         ; 00476cdb
    XOR EDX,EDX                         ; 00476cdd
    MOV ECX,dword ptr [ESP]             ; 00476cdf
    MOV DL,byte ptr [EAX]               ; 00476ce2
    XOR EAX,EAX                         ; 00476ce4
    MOV AL,byte ptr [ECX + 0x613888]    ; 00476ce6 | DAT_00613888
    TEST EDX,EAX                        ; 00476cec
    JNZ 0x00476d0e                      ; 00476cee
        ;   XREF to: 00476d0e (CONDITIONAL_JUMP)  ; LAB_00476d0e
    DEC EBX                             ; 00476cf0
        ;   Label: LAB_00476cf0
    TEST EBX,EBX                        ; 00476cf1
    JGE 0x00476cba                      ; 00476cf3
        ;   XREF to: 00476cba (CONDITIONAL_JUMP)  ; LAB_00476cba
    DEC ESI                             ; 00476cf5
    MOV EBX,0x7                         ; 00476cf6
    TEST ESI,ESI                        ; 00476cfb
    JGE 0x00476cba                      ; 00476cfd
        ;   XREF to: 00476cba (CONDITIONAL_JUMP)  ; LAB_00476cba
    MOV EBX,0xfffffc19                  ; 00476cff
        ;   Label: LAB_00476cff
    MOV EAX,EBX                         ; 00476d04
    ADD ESP,0x8                         ; 00476d06
    POP EBP                             ; 00476d09
    POP EDI                             ; 00476d0a
    POP ESI                             ; 00476d0b
    POP EBX                             ; 00476d0c
    RET                                 ; 00476d0d
    SHL ESI,0x3                         ; 00476d0e
        ;   Label: LAB_00476d0e
    ADD EBX,ESI                         ; 00476d11
    MOV EAX,EBX                         ; 00476d13
    ADD ESP,0x8                         ; 00476d15
    POP EBP                             ; 00476d18
    POP EDI                             ; 00476d19
    POP ESI                             ; 00476d1a
    POP EBX                             ; 00476d1b
    RET                                 ; 00476d1c

