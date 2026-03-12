; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; CVector3f        Stack[-0x58]:12  local_58
; CVector3f        Stack[-0x4c]:12  local_4c
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
; int              Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0 at 0045708e
;
; Referenced Globals:
;   float g_VoxelSubdivisionCount = 8
;   float g_VoxelSubdivisionReciprocal = 0.125
;   uchar[8] g_VoxelGridBitmasks
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00457cf0
        ;   Label: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
    PUSH EBP                            ; 00457cf1
    SUB ESP,0x5c                        ; 00457cf2
    MOV ESI,dword ptr [ESP + 0x68]      ; 00457cf5
    CMP dword ptr [ESI],0x0             ; 00457cf9
    JZ 0x00457e6b                       ; 00457cfc
        ;   XREF to: 00457e6b (CONDITIONAL_JUMP)  ; LAB_00457e6b
    PUSH EDI                            ; 00457d02
    PUSH EBX                            ; 00457d03
    LEA EBX,[ESI + 0x14]                ; 00457d04
    LEA EAX,[ESI + 0x8]                 ; 00457d07
    FLD float ptr [EBX]                 ; 00457d0a
    FSUB float ptr [EAX]                ; 00457d0c
    FSTP float ptr [ESP + 0x8]          ; 00457d0e
    FLD float ptr [EBX + 0x4]           ; 00457d12
    FSUB float ptr [EAX + 0x4]          ; 00457d15
    FSTP float ptr [ESP + 0xc]          ; 00457d18
    FLD float ptr [EBX + 0x8]           ; 00457d1c
    LEA EBX,[ESP + 0x2c]                ; 00457d1f
    FSUB float ptr [EAX + 0x8]          ; 00457d23
    LEA EAX,[ESP + 0x8]                 ; 00457d26
    FSTP float ptr [ESP + 0x10]         ; 00457d2a
    CMP EBX,EAX                         ; 00457d2e
    JNZ 0x00457e71                      ; 00457d30
        ;   XREF to: 00457e71 (CONDITIONAL_JUMP)  ; LAB_00457e71
    FLD float ptr [ESP + 0x2c]          ; 00457d36
        ;   Label: LAB_00457d36
    FDIV float ptr [0x0061a84e]         ; 00457d3a | g_VoxelSubdivisionCount
    FLD float ptr [0x0061a852]          ; 00457d40 | g_VoxelSubdivisionReciprocal
    FLD float ptr [ESP + 0x30]          ; 00457d46
    FMUL ST1                            ; 00457d4a
    FLD float ptr [ESP + 0x34]          ; 00457d4c
    FMULP ST2                           ; 00457d50
    LEA EAX,[ESP + 0x38]                ; 00457d52
    LEA EBX,[ESP + 0x44]                ; 00457d56
    FSTP float ptr [ESP + 0x3c]         ; 00457d5a
    FSTP float ptr [ESP + 0x40]         ; 00457d5e
    FSTP float ptr [ESP + 0x38]         ; 00457d62
    CMP EBX,EAX                         ; 00457d66
    JNZ 0x00457e8e                      ; 00457d68
        ;   XREF to: 00457e8e (CONDITIONAL_JUMP)  ; LAB_00457e8e
    XOR ECX,ECX                         ; 00457d6e
        ;   Label: LAB_00457d6e
    MOV dword ptr [ESP + 0x50],ECX      ; 00457d70
    MOV dword ptr [ESP + 0x54],ECX      ; 00457d74
    MOV EAX,dword ptr [ESP + 0x54]      ; 00457d78
        ;   Label: LAB_00457d78
    MOV dword ptr [ESP + 0x60],EAX      ; 00457d7c
    FILD dword ptr [ESP + 0x60]         ; 00457d80
    FMUL float ptr [ESP + 0x4c]         ; 00457d84
    XOR EBP,EBP                         ; 00457d88
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457d8a
    FADD float ptr [ESI + 0x10]         ; 00457d8e
    MOV dword ptr [ESP + 0x58],EAX      ; 00457d91
    FST float ptr [ESP + 0x28]          ; 00457d95
    FADD float ptr [ESP + 0x4c]         ; 00457d99
    MOV dword ptr [ESP + 0x5c],EAX      ; 00457d9d
    FSTP float ptr [ESP + 0x1c]         ; 00457da1
    MOV dword ptr [ESP + 0x60],EBP      ; 00457da5
        ;   Label: LAB_00457da5
    FILD dword ptr [ESP + 0x60]         ; 00457da9
    FMUL float ptr [ESP + 0x48]         ; 00457dad
    FADD float ptr [ESI + 0xc]          ; 00457db1
    FST float ptr [ESP + 0x24]          ; 00457db4
    FADD float ptr [ESP + 0x48]         ; 00457db8
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00457dbc
    FSTP float ptr [ESP + 0x18]         ; 00457dc0
    MOV EAX,dword ptr [ESI]             ; 00457dc4
    ADD EAX,EDI                         ; 00457dc6
    XOR EBX,EBX                         ; 00457dc8
    MOV EDI,dword ptr [ESP + 0x58]      ; 00457dca
    MOV byte ptr [EAX],0x0              ; 00457dce
    MOV dword ptr [ESP + 0x60],EBX      ; 00457dd1
        ;   Label: LAB_00457dd1
    LEA EAX,[ESP + 0x14]                ; 00457dd5
    FILD dword ptr [ESP + 0x60]         ; 00457dd9
    FMUL float ptr [ESP + 0x44]         ; 00457ddd
    PUSH EAX                            ; 00457de1
    LEA EAX,[ESP + 0x24]                ; 00457de2
    FADD float ptr [ESI + 0x8]          ; 00457de6
    PUSH EAX                            ; 00457de9
    FST float ptr [ESP + 0x28]          ; 00457dea
    FADD float ptr [ESP + 0x4c]         ; 00457dee
    PUSH ESI                            ; 00457df2
    FSTP float ptr [ESP + 0x20]         ; 00457df3
    CALL core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0 ; 00457df7
        ;   XREF to: 00457ca0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0(CDemonCube * this_ptr, CVector3f * aabb_min, CVector3f * aabb_max)
    ADD ESP,0xc                         ; 00457dfc
    TEST EAX,EAX                        ; 00457dff
    JZ 0x00457e0e                       ; 00457e01
        ;   XREF to: 00457e0e (CONDITIONAL_JUMP)  ; LAB_00457e0e
    MOV EAX,dword ptr [ESI]             ; 00457e03
    MOV DL,byte ptr [EBX + 0x66ed90]    ; 00457e05 | g_VoxelGridBitmasks
    OR byte ptr [EDI + EAX*0x1],DL      ; 00457e0b
    INC EBX                             ; 00457e0e
        ;   Label: LAB_00457e0e
    CMP EBX,0x8                         ; 00457e0f
    JL 0x00457dd1                       ; 00457e12
        ;   XREF to: 00457dd1 (CONDITIONAL_JUMP)  ; LAB_00457dd1
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00457e14
    MOV EAX,dword ptr [ESP + 0x58]      ; 00457e18
    INC EBP                             ; 00457e1c
    INC EDX                             ; 00457e1d
    INC EAX                             ; 00457e1e
    MOV dword ptr [ESP + 0x5c],EDX      ; 00457e1f
    MOV dword ptr [ESP + 0x58],EAX      ; 00457e23
    CMP EBP,0x8                         ; 00457e27
    JL 0x00457da5                       ; 00457e2a
        ;   XREF to: 00457da5 (CONDITIONAL_JUMP)  ; LAB_00457da5
    MOV EBX,dword ptr [ESP + 0x54]      ; 00457e30
    MOV ECX,dword ptr [ESP + 0x50]      ; 00457e34
    INC EBX                             ; 00457e38
    ADD ECX,0x8                         ; 00457e39
    MOV dword ptr [ESP + 0x54],EBX      ; 00457e3c
    MOV dword ptr [ESP + 0x50],ECX      ; 00457e40
    CMP EBX,0x8                         ; 00457e44
    JL 0x00457d78                       ; 00457e47
        ;   XREF to: 00457d78 (CONDITIONAL_JUMP)  ; LAB_00457d78
    MOV ECX,0x40                        ; 00457e4d
    MOV EAX,dword ptr [ESI]             ; 00457e52
    MOV EDI,dword ptr [ESI + 0x4]       ; 00457e54
    MOV ESI,EAX                         ; 00457e57
    PUSH EDI                            ; 00457e59
    MOV EAX,ECX                         ; 00457e5a
    SHR ECX,0x2                         ; 00457e5c
    MOVSD.REP ES:EDI,ESI                ; 00457e5f
    MOV CL,AL                           ; 00457e61
    AND CL,0x3                          ; 00457e63
    MOVSB.REP ES:EDI,ESI                ; 00457e66
    POP EDI                             ; 00457e68
    POP EBX                             ; 00457e69
    POP EDI                             ; 00457e6a
    ADD ESP,0x5c                        ; 00457e6b
        ;   Label: LAB_00457e6b
    POP EBP                             ; 00457e6e
    POP ESI                             ; 00457e6f
    RET                                 ; 00457e70
    MOV EAX,dword ptr [ESP + 0x8]       ; 00457e71
        ;   Label: LAB_00457e71
    MOV dword ptr [ESP + 0x2c],EAX      ; 00457e75
    MOV EAX,dword ptr [ESP + 0xc]       ; 00457e79
    MOV dword ptr [ESP + 0x30],EAX      ; 00457e7d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00457e81
    MOV dword ptr [ESP + 0x34],EAX      ; 00457e85
    JMP 0x00457d36                      ; 00457e89
        ;   XREF to: 00457d36 (UNCONDITIONAL_JUMP)  ; LAB_00457d36
    MOV EAX,dword ptr [ESP + 0x38]      ; 00457e8e
        ;   Label: LAB_00457e8e
    MOV dword ptr [ESP + 0x44],EAX      ; 00457e92
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00457e96
    MOV dword ptr [ESP + 0x48],EAX      ; 00457e9a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00457e9e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00457ea2
    JMP 0x00457d6e                      ; 00457ea6
        ;   XREF to: 00457d6e (UNCONDITIONAL_JUMP)  ; LAB_00457d6e

