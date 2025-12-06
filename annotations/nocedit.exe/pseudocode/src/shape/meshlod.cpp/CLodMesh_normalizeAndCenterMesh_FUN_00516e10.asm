; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516d94
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b8c5
;
; Referenced Globals:
;   float FLOAT_00637671 = 0.5
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
;   shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
;   shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516e10
        ;   Label: shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
    PUSH EBP                            ; 00516e11
    MOV EBP,ESP                         ; 00516e12
    SUB ESP,0x58                        ; 00516e14
    AND ESP,0xfffffff8                  ; 00516e17
    MOV EBX,dword ptr [EBP + 0xc]       ; 00516e1a
    LEA EAX,[ESP + 0x4]                 ; 00516e1d
    PUSH EAX                            ; 00516e21
    PUSH EBX                            ; 00516e22
    CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 ; 00516e23 | CBoundingBox3D * shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh * this_ptr, CBoundingBox3D * out_bbox)
        ;   XREF to: 00516500 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516e28
    FLD float ptr [ESP + 0x4]           ; 00516e2b
    FADD float ptr [ESP + 0x10]         ; 00516e2f
    FST float ptr [ESP + 0x40]          ; 00516e33
    FLD float ptr [0x00637671]          ; 00516e37 | float FLOAT_00637671
    FXCH                                ; 00516e3d
    FMUL ST1                            ; 00516e3f
    FLD float ptr [ESP + 0xc]           ; 00516e41
    FLD float ptr [ESP + 0x8]           ; 00516e45
    FADD float ptr [ESP + 0x14]         ; 00516e49
    FXCH                                ; 00516e4d
    FADD float ptr [ESP + 0x18]         ; 00516e4f
    FXCH                                ; 00516e53
    FST float ptr [ESP + 0x44]          ; 00516e55
    FMUL ST3                            ; 00516e59
    FXCH                                ; 00516e5b
    FST float ptr [ESP + 0x48]          ; 00516e5d
    FMULP ST3                           ; 00516e61
    LEA EAX,[ESP + 0x4c]                ; 00516e63
    LEA EDX,[EBX + 0x64]                ; 00516e67
    FXCH                                ; 00516e6a
    FSTP float ptr [ESP + 0x28]         ; 00516e6c
    FSTP float ptr [ESP + 0x2c]         ; 00516e70
    FSTP float ptr [ESP + 0x30]         ; 00516e74
    FLD float ptr [ESP + 0x28]          ; 00516e78
    FLD float ptr [ESP + 0x2c]          ; 00516e7c
    FLD float ptr [ESP + 0x30]          ; 00516e80
    FXCH ST2                            ; 00516e84
    FCHS                                ; 00516e86
    FXCH                                ; 00516e88
    FCHS                                ; 00516e8a
    FXCH ST2                            ; 00516e8c
    FCHS                                ; 00516e8e
    FXCH                                ; 00516e90
    FSTP float ptr [ESP + 0x4c]         ; 00516e92
    FXCH                                ; 00516e96
    FSTP float ptr [ESP + 0x50]         ; 00516e98
    FSTP float ptr [ESP + 0x54]         ; 00516e9c
    CMP EDX,EAX                         ; 00516ea0
    JZ 0x00516eb8                       ; 00516ea2 | LAB_00516eb8
        ;   XREF to: 00516eb8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00516ea4
    MOV dword ptr [EDX],EAX             ; 00516ea8
    MOV EAX,dword ptr [ESP + 0x50]      ; 00516eaa
    MOV dword ptr [EDX + 0x4],EAX       ; 00516eae
    MOV EAX,dword ptr [ESP + 0x54]      ; 00516eb1
    MOV dword ptr [EDX + 0x8],EAX       ; 00516eb5
    LEA EAX,[EBX + 0x64]                ; 00516eb8
        ;   Label: LAB_00516eb8
    PUSH EAX                            ; 00516ebb
    PUSH EBX                            ; 00516ebc
    CALL shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570 ; 00516ebd | void shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh * this_ptr, CVector3f * offset)
        ;   XREF to: 00516570 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516ec2
    FLD float ptr [ESP + 0x10]          ; 00516ec5
    FLD float ptr [ESP + 0x14]          ; 00516ec9
    FLD float ptr [ESP + 0x18]          ; 00516ecd
    FXCH ST2                            ; 00516ed1
    FSUB float ptr [ESP + 0x4]          ; 00516ed3
    FXCH                                ; 00516ed7
    FSUB float ptr [ESP + 0x8]          ; 00516ed9
    FXCH ST2                            ; 00516edd
    FSUB float ptr [ESP + 0xc]          ; 00516edf
    FXCH                                ; 00516ee3
    FSTP float ptr [ESP + 0x1c]         ; 00516ee5
    FXCH                                ; 00516ee9
    FSTP float ptr [ESP + 0x20]         ; 00516eeb
    FSTP float ptr [ESP + 0x24]         ; 00516eef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00516ef3
    FLD float ptr [ESP + 0x20]          ; 00516ef7
    MOV dword ptr [ESP],EAX             ; 00516efb
    FCOMP float ptr [ESP + 0x1c]        ; 00516efe
    FNSTSW AX                           ; 00516f02
    SAHF                                ; 00516f04
    JBE 0x00516f0e                      ; 00516f05 | LAB_00516f0e
        ;   XREF to: 00516f0e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 00516f07
    MOV dword ptr [ESP],EAX             ; 00516f0b
    FLD float ptr [ESP + 0x24]          ; 00516f0e
        ;   Label: LAB_00516f0e
    FCOMP float ptr [ESP]               ; 00516f12
    FNSTSW AX                           ; 00516f15
    SAHF                                ; 00516f17
    JBE 0x00516f21                      ; 00516f18 | LAB_00516f21
        ;   XREF to: 00516f21 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 00516f1a
    MOV dword ptr [ESP],EAX             ; 00516f1e
    FLD float ptr [ESP]                 ; 00516f21
        ;   Label: LAB_00516f21
    FLD1                                ; 00516f24
    FDIVRP                              ; 00516f26
    FSTP float ptr [EBX + 0x70]         ; 00516f28
    MOV EAX,dword ptr [EBX + 0x70]      ; 00516f2b
    MOV dword ptr [ESP + 0x34],EAX      ; 00516f2e
    MOV dword ptr [ESP + 0x38],EAX      ; 00516f32
    MOV dword ptr [ESP + 0x3c],EAX      ; 00516f36
    LEA EAX,[ESP + 0x34]                ; 00516f3a
    PUSH EAX                            ; 00516f3e
    PUSH EBX                            ; 00516f3f
    CALL shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0 ; 00516f40 | void shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh * this_ptr, CVector3f * scale_factors)
        ;   XREF to: 005165c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516f45
    MOV ESP,EBP                         ; 00516f48
    POP EBP                             ; 00516f4a
    POP EBX                             ; 00516f4b
    RET                                 ; 00516f4c

