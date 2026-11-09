; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
;
; XREF[1]:
;   core_particle.cpp_FUN_00509f30 at 0050a079
;
; Referenced Globals:
;   undefined4 DAT_005fb0e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477bc0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00477bc0
    PUSH ESI                            ; 00477bc1
    PUSH EDI                            ; 00477bc2
    PUSH EBP                            ; 00477bc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00477bc4
    MOV ECX,dword ptr [ESP + 0x18]      ; 00477bc8
    MOV EDX,dword ptr [ECX]             ; 00477bcc
    TEST EDX,EDX                        ; 00477bce
    JL 0x00477c69                       ; 00477bd0
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    CMP dword ptr [ECX + 0x4],0x0       ; 00477bd6
    JL 0x00477c69                       ; 00477bda
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    CMP dword ptr [ECX + 0x8],0x0       ; 00477be0
    JL 0x00477c69                       ; 00477be4
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    MOV EAX,EDX                         ; 00477bea
    SAR EDX,0x1f                        ; 00477bec
    SHL EDX,0x3                         ; 00477bef
    SBB EAX,EDX                         ; 00477bf2
    SAR EAX,0x3                         ; 00477bf4
    MOV EBP,dword ptr [EBX + 0x40]      ; 00477bf7
    MOV ESI,EAX                         ; 00477bfa
    CMP EAX,EBP                         ; 00477bfc
    JGE 0x00477c69                      ; 00477bfe
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    MOV EAX,dword ptr [ECX + 0x4]       ; 00477c00
    MOV EDX,EAX                         ; 00477c03
    SAR EDX,0x1f                        ; 00477c05
    SHL EDX,0x3                         ; 00477c08
    SBB EAX,EDX                         ; 00477c0b
    SAR EAX,0x3                         ; 00477c0d
    MOV EDI,EAX                         ; 00477c10
    CMP EDI,dword ptr [EBX + 0x44]      ; 00477c12
    JGE 0x00477c69                      ; 00477c15
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    MOV EAX,dword ptr [ECX + 0x8]       ; 00477c17
    MOV EDX,EAX                         ; 00477c1a
    SAR EDX,0x1f                        ; 00477c1c
    SHL EDX,0x3                         ; 00477c1f
    SBB EAX,EDX                         ; 00477c22
    SAR EAX,0x3                         ; 00477c24
    MOV EDX,dword ptr [EBX + 0x48]      ; 00477c27
    CMP EAX,EDX                         ; 00477c2a
    JGE 0x00477c69                      ; 00477c2c
        ;   XREF to: 00477c69 (CONDITIONAL_JUMP)  ; LAB_00477c69
    IMUL EDI,EDX                        ; 00477c2e
    IMUL ESI,dword ptr [EBX + 0x44]     ; 00477c31
    IMUL ESI,EDX                        ; 00477c35
    ADD EAX,EDI                         ; 00477c38
    ADD ESI,EAX                         ; 00477c3a
    LEA EAX,[ESI*0x4 + 0x0]             ; 00477c3c
    SUB EAX,ESI                         ; 00477c43
    SHL EAX,0x2                         ; 00477c45
    ADD EAX,ESI                         ; 00477c48
    MOV EBX,dword ptr [EBX + 0x50]      ; 00477c4a
    SHL EAX,0x2                         ; 00477c4d
    MOV ESI,dword ptr [ECX]             ; 00477c50
    ADD EAX,EBX                         ; 00477c52
    AND ESI,0x7                         ; 00477c54
    MOV EBX,dword ptr [ECX + 0x4]       ; 00477c57
    MOV EDX,dword ptr [EAX]             ; 00477c5a
    MOV ECX,dword ptr [ECX + 0x8]       ; 00477c5c
    AND EBX,0x7                         ; 00477c5f
    AND ECX,0x7                         ; 00477c62
    TEST EDX,EDX                        ; 00477c65
    JNZ 0x00477c70                      ; 00477c67
        ;   XREF to: 00477c70 (CONDITIONAL_JUMP)  ; LAB_00477c70
    XOR EAX,EAX                         ; 00477c69
        ;   Label: LAB_00477c69
    POP EBP                             ; 00477c6b
    POP EDI                             ; 00477c6c
    POP ESI                             ; 00477c6d
    POP EBX                             ; 00477c6e
    RET                                 ; 00477c6f
    SHL ECX,0x3                         ; 00477c70
        ;   Label: LAB_00477c70
    MOV EAX,EDX                         ; 00477c73
    ADD ECX,EBX                         ; 00477c75
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00477c77
    XOR EAX,EDX                         ; 00477c7a
    AND ECX,0xff                        ; 00477c7c
    MOV AL,byte ptr [ESI + 0x5fb0e8]    ; 00477c82 | DAT_005fb0e8
    TEST ECX,EAX                        ; 00477c88
    SETNZ AL                            ; 00477c8a
    AND EAX,0xff                        ; 00477c8d
    POP EBP                             ; 00477c92
    POP EDI                             ; 00477c93
    POP ESI                             ; 00477c94
    POP EBX                             ; 00477c95
    RET                                 ; 00477c96

