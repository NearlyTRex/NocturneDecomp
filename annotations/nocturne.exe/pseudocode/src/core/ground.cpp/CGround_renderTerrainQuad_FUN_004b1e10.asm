; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10(CGround *this_ptr,int world_column,int world_row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_column
; int              Stack[0xc]:4   world_row
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0 at 004b207b
;
; Referenced Globals:
;   undefined4 DAT_005c5024
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004b1800
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1e10
        ;   Label: core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10
    PUSH ESI                            ; 004b1e11
    PUSH EDI                            ; 004b1e12
    PUSH EBP                            ; 004b1e13
    SUB ESP,0x74                        ; 004b1e14
    MOV EBX,dword ptr [ESP + 0x88]      ; 004b1e17
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004b1e1e
    MOV EBP,dword ptr [ESP + 0x90]      ; 004b1e25
    MOV ESI,EDI                         ; 004b1e2c
    MOV EDX,dword ptr [EBX + 0x30]      ; 004b1e2e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b1e31
    SUB EBP,EDX                         ; 004b1e34
    SUB ESI,EAX                         ; 004b1e36
    MOV EDX,dword ptr [EBX + 0x10]      ; 004b1e38
    MOV ECX,dword ptr [EBX + 0x14]      ; 004b1e3b
    ADD ESI,EDX                         ; 004b1e3e
    MOV EAX,dword ptr [EBX + 0xc]       ; 004b1e40
    PUSH ESI                            ; 004b1e43
    ADD EBP,ECX                         ; 004b1e44
    MOV EDX,dword ptr [ESP + 0x94]      ; 004b1e46
    PUSH EBP                            ; 004b1e4d
    MOV ECX,dword ptr [EBX + 0x8]       ; 004b1e4e
    AND EDX,EAX                         ; 004b1e51
    PUSH EBX                            ; 004b1e53
    AND EDI,ECX                         ; 004b1e54
    MOV dword ptr [ESP + 0x9c],EDX      ; 004b1e56
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004b1800 ; 004b1e5d
        ;   XREF to: 004b1800 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004b1800(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004b1e62
    MOV dword ptr [EBX + 0x4c],EAX      ; 004b1e65
    LEA EAX,[ESI + 0x1]                 ; 004b1e68
    PUSH EAX                            ; 004b1e6b
    PUSH EBP                            ; 004b1e6c
    PUSH EBX                            ; 004b1e6d
    MOV dword ptr [ESP + 0x7c],EAX      ; 004b1e6e
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004b1800 ; 004b1e72
        ;   XREF to: 004b1800 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004b1800(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004b1e77
    MOV dword ptr [EBX + 0x50],EAX      ; 004b1e7a
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b1e7d
    PUSH EAX                            ; 004b1e81
    INC EBP                             ; 004b1e82
    PUSH EBP                            ; 004b1e83
    PUSH EBX                            ; 004b1e84
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004b1800 ; 004b1e85
        ;   XREF to: 004b1800 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004b1800(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004b1e8a
    PUSH ESI                            ; 004b1e8d
    PUSH EBP                            ; 004b1e8e
    PUSH EBX                            ; 004b1e8f
    MOV dword ptr [EBX + 0x54],EAX      ; 004b1e90
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004b1800 ; 004b1e93
        ;   XREF to: 004b1800 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004b1800(CGround * this_ptr, int column, int row)
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004b1e98
    LEA EBP,[ESI*0x4 + 0x0]             ; 004b1e9b
    SUB EBP,ESI                         ; 004b1ea2
    MOV ESI,dword ptr [EBX + 0x50]      ; 004b1ea4
    MOV dword ptr [EBX + 0x58],EAX      ; 004b1ea7
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b1eaa
    SUB EAX,ESI                         ; 004b1eb1
    MOV ESI,EAX                         ; 004b1eb3
    SHL ESI,0x4                         ; 004b1eb5
    MOV EDX,dword ptr [ESI + 0x5c5024]  ; 004b1eb8 | DAT_005c5024
    MOV ESI,dword ptr [EBX + 0x54]      ; 004b1ebe
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b1ec1
    SUB EAX,ESI                         ; 004b1ec8
    SHL EBP,0x4                         ; 004b1eca
    SHL EAX,0x4                         ; 004b1ecd
    MOV ESI,dword ptr [EBX + 0x58]      ; 004b1ed0
    MOV ECX,dword ptr [EAX + 0x5c5024]  ; 004b1ed3 | DAT_005c5024
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b1ed9
    MOV EBP,dword ptr [EBP + 0x5c5024]  ; 004b1ee0 | DAT_005c5024
    SUB EAX,ESI                         ; 004b1ee6
    AND EBP,EDX                         ; 004b1ee8
    SHL EAX,0x4                         ; 004b1eea
    AND EBP,ECX                         ; 004b1eed
    MOV EAX,dword ptr [EAX + 0x5c5024]  ; 004b1eef | DAT_005c5024
    AND EAX,EBP                         ; 004b1ef5
    ADD ESP,0xc                         ; 004b1ef7
    TEST EAX,0x80000000                 ; 004b1efa
    JZ 0x004b1f0d                       ; 004b1eff
        ;   XREF to: 004b1f0d (CONDITIONAL_JUMP)  ; LAB_004b1f0d
    TEST AL,0xff                        ; 004b1f01
    JZ 0x004b1f0d                       ; 004b1f03
        ;   XREF to: 004b1f0d (CONDITIONAL_JUMP)  ; LAB_004b1f0d
    ADD ESP,0x74                        ; 004b1f05
    POP EBP                             ; 004b1f08
    POP EDI                             ; 004b1f09
    POP ESI                             ; 004b1f0a
    POP EBX                             ; 004b1f0b
    RET                                 ; 004b1f0c
    MOV ESI,dword ptr [ESP + 0x90]      ; 004b1f0d
        ;   Label: LAB_004b1f0d
    PUSH ESI                            ; 004b1f14
    PUSH EDI                            ; 004b1f15
    PUSH EBX                            ; 004b1f16
    CALL core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00 ; 004b1f17
        ;   XREF to: 004b1d00 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround * this_ptr, int column, int row)
    MOV EAX,ESI                         ; 004b1f1c
    AND EDI,0x1                         ; 004b1f1e
    AND EAX,0x1                         ; 004b1f21
    ADD ESP,0xc                         ; 004b1f24
    CMP EDI,EAX                         ; 004b1f27
    JNZ 0x004b1f88                      ; 004b1f29
        ;   XREF to: 004b1f88 (CONDITIONAL_JUMP)  ; LAB_004b1f88
    MOV dword ptr [ESP + 0x4],0x3       ; 004b1f2b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004b1f33
    MOV dword ptr [ESP + 0x20],EAX      ; 004b1f36
    MOV EAX,dword ptr [EBX + 0x50]      ; 004b1f3a
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b1f3d
    MOV EAX,dword ptr [EBX + 0x54]      ; 004b1f41
    MOV dword ptr [ESP + 0x18],EAX      ; 004b1f44
    MOV EAX,ESP                         ; 004b1f48
    PUSH EAX                            ; 004b1f4a
    PUSH EBX                            ; 004b1f4b
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0 ; 004b1f4c
        ;   XREF to: 004b1df0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    MOV EDX,0x3                         ; 004b1f51
    ADD ESP,0x8                         ; 004b1f56
    MOV dword ptr [ESP + 0x3c],EDX      ; 004b1f59
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004b1f5d
    MOV dword ptr [ESP + 0x58],EAX      ; 004b1f60
    MOV EAX,dword ptr [EBX + 0x54]      ; 004b1f64
    MOV dword ptr [ESP + 0x54],EAX      ; 004b1f67
    MOV EAX,dword ptr [EBX + 0x58]      ; 004b1f6b
    MOV dword ptr [ESP + 0x50],EAX      ; 004b1f6e
    LEA EAX,[ESP + 0x38]                ; 004b1f72
    PUSH EAX                            ; 004b1f76
    PUSH EBX                            ; 004b1f77
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0 ; 004b1f78
        ;   XREF to: 004b1df0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004b1f7d
    ADD ESP,0x74                        ; 004b1f80
    POP EBP                             ; 004b1f83
    POP EDI                             ; 004b1f84
    POP ESI                             ; 004b1f85
    POP EBX                             ; 004b1f86
    RET                                 ; 004b1f87
    MOV EDI,0x3                         ; 004b1f88
        ;   Label: LAB_004b1f88
    MOV dword ptr [ESP + 0x4],EDI       ; 004b1f8d
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004b1f91
    MOV dword ptr [ESP + 0x20],EAX      ; 004b1f94
    MOV EAX,dword ptr [EBX + 0x50]      ; 004b1f98
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b1f9b
    MOV EAX,dword ptr [EBX + 0x58]      ; 004b1f9f
    MOV dword ptr [ESP + 0x18],EAX      ; 004b1fa2
    MOV EAX,ESP                         ; 004b1fa6
    PUSH EAX                            ; 004b1fa8
    PUSH EBX                            ; 004b1fa9
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0 ; 004b1faa
        ;   XREF to: 004b1df0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004b1faf
    MOV dword ptr [ESP + 0x3c],EDI      ; 004b1fb2
    MOV EAX,dword ptr [EBX + 0x50]      ; 004b1fb6
    MOV dword ptr [ESP + 0x58],EAX      ; 004b1fb9
    MOV EAX,dword ptr [EBX + 0x54]      ; 004b1fbd
    MOV dword ptr [ESP + 0x54],EAX      ; 004b1fc0
    MOV EAX,dword ptr [EBX + 0x58]      ; 004b1fc4
    MOV dword ptr [ESP + 0x50],EAX      ; 004b1fc7
    LEA EAX,[ESP + 0x38]                ; 004b1fcb
    PUSH EAX                            ; 004b1fcf
    PUSH EBX                            ; 004b1fd0
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0 ; 004b1fd1
        ;   XREF to: 004b1df0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004b1fd6
    ADD ESP,0x74                        ; 004b1fd9
    POP EBP                             ; 004b1fdc
    POP EDI                             ; 004b1fdd
    POP ESI                             ; 004b1fde
    POP EBX                             ; 004b1fdf
    RET                                 ; 004b1fe0

