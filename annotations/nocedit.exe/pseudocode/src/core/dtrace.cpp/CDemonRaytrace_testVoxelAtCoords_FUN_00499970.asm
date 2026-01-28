; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970 (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
;
; XREF[1]:
;   core_particle.cpp_CParticle_process_FUN_00545760 at 0054583b
;
; Referenced Globals:
;   uchar[8] g_VoxelYBitMasks
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499970
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
    PUSH ESI                            ; 00499971
    PUSH EDI                            ; 00499972
    PUSH EBP                            ; 00499973
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499974
    MOV ECX,dword ptr [ESP + 0x18]      ; 00499978
    MOV EDX,dword ptr [ECX]             ; 0049997c
    TEST EDX,EDX                        ; 0049997e
    JL 0x00499a19                       ; 00499980
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    CMP dword ptr [ECX + 0x4],0x0       ; 00499986
    JL 0x00499a19                       ; 0049998a
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    CMP dword ptr [ECX + 0x8],0x0       ; 00499990
    JL 0x00499a19                       ; 00499994
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    MOV EAX,EDX                         ; 0049999a
    SAR EDX,0x1f                        ; 0049999c
    SHL EDX,0x3                         ; 0049999f
    SBB EAX,EDX                         ; 004999a2
    SAR EAX,0x3                         ; 004999a4
    MOV EBP,dword ptr [EBX + 0x40]      ; 004999a7
    MOV ESI,EAX                         ; 004999aa
    CMP EAX,EBP                         ; 004999ac
    JGE 0x00499a19                      ; 004999ae
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    MOV EAX,dword ptr [ECX + 0x4]       ; 004999b0
    MOV EDX,EAX                         ; 004999b3
    SAR EDX,0x1f                        ; 004999b5
    SHL EDX,0x3                         ; 004999b8
    SBB EAX,EDX                         ; 004999bb
    SAR EAX,0x3                         ; 004999bd
    MOV EDI,EAX                         ; 004999c0
    CMP EDI,dword ptr [EBX + 0x44]      ; 004999c2
    JGE 0x00499a19                      ; 004999c5
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    MOV EAX,dword ptr [ECX + 0x8]       ; 004999c7
    MOV EDX,EAX                         ; 004999ca
    SAR EDX,0x1f                        ; 004999cc
    SHL EDX,0x3                         ; 004999cf
    SBB EAX,EDX                         ; 004999d2
    SAR EAX,0x3                         ; 004999d4
    MOV EDX,dword ptr [EBX + 0x48]      ; 004999d7
    CMP EAX,EDX                         ; 004999da
    JGE 0x00499a19                      ; 004999dc
        ;   XREF to: 00499a19 (CONDITIONAL_JUMP)  ; LAB_00499a19
    IMUL EDI,EDX                        ; 004999de
    IMUL ESI,dword ptr [EBX + 0x44]     ; 004999e1
    IMUL ESI,EDX                        ; 004999e5
    ADD EAX,EDI                         ; 004999e8
    ADD ESI,EAX                         ; 004999ea
    LEA EAX,[ESI*0x4 + 0x0]             ; 004999ec
    SUB EAX,ESI                         ; 004999f3
    SHL EAX,0x2                         ; 004999f5
    ADD EAX,ESI                         ; 004999f8
    MOV EBX,dword ptr [EBX + 0x50]      ; 004999fa
    SHL EAX,0x2                         ; 004999fd
    MOV ESI,dword ptr [ECX]             ; 00499a00
    ADD EAX,EBX                         ; 00499a02
    AND ESI,0x7                         ; 00499a04
    MOV EBX,dword ptr [ECX + 0x4]       ; 00499a07
    MOV EDX,dword ptr [EAX]             ; 00499a0a
    MOV ECX,dword ptr [ECX + 0x8]       ; 00499a0c
    AND EBX,0x7                         ; 00499a0f
    AND ECX,0x7                         ; 00499a12
    TEST EDX,EDX                        ; 00499a15
    JNZ 0x00499a20                      ; 00499a17
        ;   XREF to: 00499a20 (CONDITIONAL_JUMP)  ; LAB_00499a20
    XOR EAX,EAX                         ; 00499a19
        ;   Label: LAB_00499a19
    POP EBP                             ; 00499a1b
    POP EDI                             ; 00499a1c
    POP ESI                             ; 00499a1d
    POP EBX                             ; 00499a1e
    RET                                 ; 00499a1f
    SHL ECX,0x3                         ; 00499a20
        ;   Label: LAB_00499a20
    MOV EAX,EDX                         ; 00499a23
    ADD ECX,EBX                         ; 00499a25
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00499a27
    XOR EAX,EDX                         ; 00499a2a
    AND ECX,0xff                        ; 00499a2c
    MOV AL,byte ptr [ESI + 0x6789f8]    ; 00499a32 | g_VoxelYBitMasks
    TEST ECX,EAX                        ; 00499a38
    SETNZ AL                            ; 00499a3a
    AND EAX,0xff                        ; 00499a3d
    POP EBP                             ; 00499a42
    POP EDI                             ; 00499a43
    POP ESI                             ; 00499a44
    POP EBX                             ; 00499a45
    RET                                 ; 00499a46

