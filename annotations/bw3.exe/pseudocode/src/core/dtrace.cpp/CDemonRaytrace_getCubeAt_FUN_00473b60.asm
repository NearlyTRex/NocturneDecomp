; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
;
; XREF[12]:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130 at 00478169
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90 at 00474cc5
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00477370 at 0047747c
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0 at 00477d32
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720 at 00475789
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_004785c0 at 00478674
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0 at 00478555
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80 at 00474fec
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00477530 at 00477845
;   core_dtrace.cpp_FUN_00473cd0 at 00474115
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b60
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
    PUSH EDI                            ; 00473b61
    PUSH EBP                            ; 00473b62
    MOV EDX,dword ptr [ESP + 0x10]      ; 00473b63
    MOV EAX,dword ptr [ESP + 0x14]      ; 00473b67
    MOV ECX,dword ptr [ESP + 0x18]      ; 00473b6b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00473b6f
    TEST EAX,EAX                        ; 00473b73
    JL 0x00473b92                       ; 00473b75
        ;   XREF to: 00473b92 (CONDITIONAL_JUMP)  ; LAB_00473b92
    TEST ECX,ECX                        ; 00473b77
    JL 0x00473b92                       ; 00473b79
        ;   XREF to: 00473b92 (CONDITIONAL_JUMP)  ; LAB_00473b92
    TEST EBX,EBX                        ; 00473b7b
    JL 0x00473b92                       ; 00473b7d
        ;   XREF to: 00473b92 (CONDITIONAL_JUMP)  ; LAB_00473b92
    CMP EAX,dword ptr [EDX + 0x40]      ; 00473b7f
    JGE 0x00473b92                      ; 00473b82
        ;   XREF to: 00473b92 (CONDITIONAL_JUMP)  ; LAB_00473b92
    MOV EDI,dword ptr [EDX + 0x44]      ; 00473b84
    CMP ECX,EDI                         ; 00473b87
    JGE 0x00473b92                      ; 00473b89
        ;   XREF to: 00473b92 (CONDITIONAL_JUMP)  ; LAB_00473b92
    MOV EBP,dword ptr [EDX + 0x48]      ; 00473b8b
    CMP EBX,EBP                         ; 00473b8e
    JL 0x00473b98                       ; 00473b90
        ;   XREF to: 00473b98 (CONDITIONAL_JUMP)  ; LAB_00473b98
    XOR EAX,EAX                         ; 00473b92
        ;   Label: LAB_00473b92
    POP EBP                             ; 00473b94
    POP EDI                             ; 00473b95
    POP EBX                             ; 00473b96
    RET                                 ; 00473b97
    IMUL EAX,EDI                        ; 00473b98
        ;   Label: LAB_00473b98
    IMUL ECX,EBP                        ; 00473b9b
    IMUL EAX,EBP                        ; 00473b9e
    ADD ECX,EBX                         ; 00473ba1
    ADD ECX,EAX                         ; 00473ba3
    LEA EAX,[ECX*0x4 + 0x0]             ; 00473ba5
    SUB EAX,ECX                         ; 00473bac
    SHL EAX,0x2                         ; 00473bae
    ADD ECX,EAX                         ; 00473bb1
    SHL ECX,0x2                         ; 00473bb3
    MOV EAX,dword ptr [EDX + 0x50]      ; 00473bb6
    ADD EAX,ECX                         ; 00473bb9
    POP EBP                             ; 00473bbb
    POP EDI                             ; 00473bbc
    POP EBX                             ; 00473bbd
    RET                                 ; 00473bbe

