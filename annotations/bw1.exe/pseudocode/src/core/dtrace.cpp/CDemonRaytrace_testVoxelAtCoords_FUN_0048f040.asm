; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040(CDemonRaytrace *this_ptr,CVector3i *voxel_coords)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   voxel_coords
;
; XREF[1]:
;   core_particle.cpp_FUN_00532250 at 00532399
;
; Referenced Globals:
;   undefined4 DAT_0061ab68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f040
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040
    PUSH ESI                            ; 0048f041
    PUSH EDI                            ; 0048f042
    PUSH EBP                            ; 0048f043
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048f044
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048f048
    MOV EDX,dword ptr [ECX]             ; 0048f04c
    TEST EDX,EDX                        ; 0048f04e
    JL 0x0048f0e9                       ; 0048f050
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    CMP dword ptr [ECX + 0x4],0x0       ; 0048f056
    JL 0x0048f0e9                       ; 0048f05a
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    CMP dword ptr [ECX + 0x8],0x0       ; 0048f060
    JL 0x0048f0e9                       ; 0048f064
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    MOV EAX,EDX                         ; 0048f06a
    SAR EDX,0x1f                        ; 0048f06c
    SHL EDX,0x3                         ; 0048f06f
    SBB EAX,EDX                         ; 0048f072
    SAR EAX,0x3                         ; 0048f074
    MOV EBP,dword ptr [EBX + 0x40]      ; 0048f077
    MOV ESI,EAX                         ; 0048f07a
    CMP EAX,EBP                         ; 0048f07c
    JGE 0x0048f0e9                      ; 0048f07e
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    MOV EAX,dword ptr [ECX + 0x4]       ; 0048f080
    MOV EDX,EAX                         ; 0048f083
    SAR EDX,0x1f                        ; 0048f085
    SHL EDX,0x3                         ; 0048f088
    SBB EAX,EDX                         ; 0048f08b
    SAR EAX,0x3                         ; 0048f08d
    MOV EDI,EAX                         ; 0048f090
    CMP EDI,dword ptr [EBX + 0x44]      ; 0048f092
    JGE 0x0048f0e9                      ; 0048f095
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    MOV EAX,dword ptr [ECX + 0x8]       ; 0048f097
    MOV EDX,EAX                         ; 0048f09a
    SAR EDX,0x1f                        ; 0048f09c
    SHL EDX,0x3                         ; 0048f09f
    SBB EAX,EDX                         ; 0048f0a2
    SAR EAX,0x3                         ; 0048f0a4
    MOV EDX,dword ptr [EBX + 0x48]      ; 0048f0a7
    CMP EAX,EDX                         ; 0048f0aa
    JGE 0x0048f0e9                      ; 0048f0ac
        ;   XREF to: 0048f0e9 (CONDITIONAL_JUMP)  ; LAB_0048f0e9
    IMUL EDI,EDX                        ; 0048f0ae
    IMUL ESI,dword ptr [EBX + 0x44]     ; 0048f0b1
    IMUL ESI,EDX                        ; 0048f0b5
    ADD EAX,EDI                         ; 0048f0b8
    ADD ESI,EAX                         ; 0048f0ba
    LEA EAX,[ESI*0x4 + 0x0]             ; 0048f0bc
    SUB EAX,ESI                         ; 0048f0c3
    SHL EAX,0x2                         ; 0048f0c5
    ADD EAX,ESI                         ; 0048f0c8
    MOV EBX,dword ptr [EBX + 0x50]      ; 0048f0ca
    SHL EAX,0x2                         ; 0048f0cd
    MOV ESI,dword ptr [ECX]             ; 0048f0d0
    ADD EAX,EBX                         ; 0048f0d2
    AND ESI,0x7                         ; 0048f0d4
    MOV EBX,dword ptr [ECX + 0x4]       ; 0048f0d7
    MOV EDX,dword ptr [EAX]             ; 0048f0da
    MOV ECX,dword ptr [ECX + 0x8]       ; 0048f0dc
    AND EBX,0x7                         ; 0048f0df
    AND ECX,0x7                         ; 0048f0e2
    TEST EDX,EDX                        ; 0048f0e5
    JNZ 0x0048f0f0                      ; 0048f0e7
        ;   XREF to: 0048f0f0 (CONDITIONAL_JUMP)  ; LAB_0048f0f0
    XOR EAX,EAX                         ; 0048f0e9
        ;   Label: LAB_0048f0e9
    POP EBP                             ; 0048f0eb
    POP EDI                             ; 0048f0ec
    POP ESI                             ; 0048f0ed
    POP EBX                             ; 0048f0ee
    RET                                 ; 0048f0ef
    SHL ECX,0x3                         ; 0048f0f0
        ;   Label: LAB_0048f0f0
    MOV EAX,EDX                         ; 0048f0f3
    ADD ECX,EBX                         ; 0048f0f5
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0048f0f7
    XOR EAX,EDX                         ; 0048f0fa
    AND ECX,0xff                        ; 0048f0fc
    MOV AL,byte ptr [ESI + 0x61ab68]    ; 0048f102 | DAT_0061ab68
    TEST ECX,EAX                        ; 0048f108
    SETNZ AL                            ; 0048f10a
    AND EAX,0xff                        ; 0048f10d
    POP EBP                             ; 0048f112
    POP EDI                             ; 0048f113
    POP ESI                             ; 0048f114
    POP EBX                             ; 0048f115
    RET                                 ; 0048f116

