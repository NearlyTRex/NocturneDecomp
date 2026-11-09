; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0048f120(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 at 005336bd
;
; Referenced Globals:
;   undefined4 DAT_0061ab68
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f120
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0048f120
    PUSH ESI                            ; 0048f121
    PUSH EDI                            ; 0048f122
    PUSH EBP                            ; 0048f123
    SUB ESP,0x8                         ; 0048f124
    MOV ECX,dword ptr [ESP + 0x20]      ; 0048f127
    MOV EAX,dword ptr [ECX]             ; 0048f12b
    MOV EDX,EAX                         ; 0048f12d
    SAR EDX,0x1f                        ; 0048f12f
    SHL EDX,0x3                         ; 0048f132
    SBB EAX,EDX                         ; 0048f135
    SAR EAX,0x3                         ; 0048f137
    MOV EDI,EAX                         ; 0048f13a
    MOV EAX,dword ptr [ECX + 0x4]       ; 0048f13c
    MOV EDX,EAX                         ; 0048f13f
    SAR EDX,0x1f                        ; 0048f141
    SHL EDX,0x3                         ; 0048f144
    SBB EAX,EDX                         ; 0048f147
    SAR EAX,0x3                         ; 0048f149
    MOV ESI,EAX                         ; 0048f14c
    MOV EAX,dword ptr [ECX + 0x8]       ; 0048f14e
    MOV EDX,EAX                         ; 0048f151
    SAR EDX,0x1f                        ; 0048f153
    SHL EDX,0x3                         ; 0048f156
    SBB EAX,EDX                         ; 0048f159
    SAR EAX,0x3                         ; 0048f15b
    MOV EBP,EAX                         ; 0048f15e
    TEST EDI,EDI                        ; 0048f160
    JL 0x0048f1ef                       ; 0048f162
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    TEST ESI,ESI                        ; 0048f168
    JL 0x0048f1ef                       ; 0048f16a
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    TEST EAX,EAX                        ; 0048f170
    JL 0x0048f1ef                       ; 0048f172
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048f178
    CMP EDI,dword ptr [EAX + 0x40]      ; 0048f17c
    JGE 0x0048f1ef                      ; 0048f17f
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    CMP ESI,dword ptr [EAX + 0x44]      ; 0048f185
    JGE 0x0048f1ef                      ; 0048f188
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    CMP EBP,dword ptr [EAX + 0x48]      ; 0048f18a
    JGE 0x0048f1ef                      ; 0048f18d
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    MOV EAX,dword ptr [ECX]             ; 0048f18f
    AND EAX,0x7                         ; 0048f191
    MOV dword ptr [ESP],EAX             ; 0048f194
    MOV EAX,dword ptr [ECX + 0x8]       ; 0048f197
    AND EAX,0x7                         ; 0048f19a
    MOV EBX,dword ptr [ECX + 0x4]       ; 0048f19d
    SHL EAX,0x3                         ; 0048f1a0
    AND EBX,0x7                         ; 0048f1a3
    MOV dword ptr [ESP + 0x4],EAX       ; 0048f1a6
    PUSH EBP                            ; 0048f1aa
        ;   Label: LAB_0048f1aa
    PUSH ESI                            ; 0048f1ab
    PUSH EDI                            ; 0048f1ac
    MOV ECX,dword ptr [ESP + 0x28]      ; 0048f1ad
    PUSH ECX                            ; 0048f1b1
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048f1b2
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048f1b7
    TEST EAX,EAX                        ; 0048f1ba
    JZ 0x0048f1ef                       ; 0048f1bc
        ;   XREF to: 0048f1ef (CONDITIONAL_JUMP)  ; LAB_0048f1ef
    CMP dword ptr [EAX],0x0             ; 0048f1be
    JZ 0x0048f1e0                       ; 0048f1c1
        ;   XREF to: 0048f1e0 (CONDITIONAL_JUMP)  ; LAB_0048f1e0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048f1c3
    MOV EAX,dword ptr [EAX]             ; 0048f1c7
    ADD EDX,EBX                         ; 0048f1c9
    ADD EAX,EDX                         ; 0048f1cb
    XOR EDX,EDX                         ; 0048f1cd
    MOV ECX,dword ptr [ESP]             ; 0048f1cf
    MOV DL,byte ptr [EAX]               ; 0048f1d2
    XOR EAX,EAX                         ; 0048f1d4
    MOV AL,byte ptr [ECX + 0x61ab68]    ; 0048f1d6 | DAT_0061ab68
    TEST EDX,EAX                        ; 0048f1dc
    JNZ 0x0048f1fe                      ; 0048f1de
        ;   XREF to: 0048f1fe (CONDITIONAL_JUMP)  ; LAB_0048f1fe
    DEC EBX                             ; 0048f1e0
        ;   Label: LAB_0048f1e0
    TEST EBX,EBX                        ; 0048f1e1
    JGE 0x0048f1aa                      ; 0048f1e3
        ;   XREF to: 0048f1aa (CONDITIONAL_JUMP)  ; LAB_0048f1aa
    DEC ESI                             ; 0048f1e5
    MOV EBX,0x7                         ; 0048f1e6
    TEST ESI,ESI                        ; 0048f1eb
    JGE 0x0048f1aa                      ; 0048f1ed
        ;   XREF to: 0048f1aa (CONDITIONAL_JUMP)  ; LAB_0048f1aa
    MOV EBX,0xfffffc19                  ; 0048f1ef
        ;   Label: LAB_0048f1ef
    MOV EAX,EBX                         ; 0048f1f4
    ADD ESP,0x8                         ; 0048f1f6
    POP EBP                             ; 0048f1f9
    POP EDI                             ; 0048f1fa
    POP ESI                             ; 0048f1fb
    POP EBX                             ; 0048f1fc
    RET                                 ; 0048f1fd
    SHL ESI,0x3                         ; 0048f1fe
        ;   Label: LAB_0048f1fe
    ADD EBX,ESI                         ; 0048f201
    MOV EAX,EBX                         ; 0048f203
    ADD ESP,0x8                         ; 0048f205
    POP EBP                             ; 0048f208
    POP EDI                             ; 0048f209
    POP ESI                             ; 0048f20a
    POP EBX                             ; 0048f20b
    RET                                 ; 0048f20c

