; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004e7c80(CGround *this_ptr,int world_column,int world_row)
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
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004e7e60 at 004e7eeb
;
; Referenced Globals:
;   undefined4 DAT_00629024
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004e7670
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7c80
        ;   Label: core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80
    PUSH ESI                            ; 004e7c81
    PUSH EDI                            ; 004e7c82
    PUSH EBP                            ; 004e7c83
    SUB ESP,0x74                        ; 004e7c84
    MOV EBX,dword ptr [ESP + 0x88]      ; 004e7c87
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004e7c8e
    MOV EBP,dword ptr [ESP + 0x90]      ; 004e7c95
    MOV ESI,EDI                         ; 004e7c9c
    MOV EDX,dword ptr [EBX + 0x30]      ; 004e7c9e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004e7ca1
    SUB EBP,EDX                         ; 004e7ca4
    SUB ESI,EAX                         ; 004e7ca6
    MOV EDX,dword ptr [EBX + 0x10]      ; 004e7ca8
    MOV ECX,dword ptr [EBX + 0x14]      ; 004e7cab
    ADD ESI,EDX                         ; 004e7cae
    MOV EAX,dword ptr [EBX + 0xc]       ; 004e7cb0
    PUSH ESI                            ; 004e7cb3
    ADD EBP,ECX                         ; 004e7cb4
    MOV EDX,dword ptr [ESP + 0x94]      ; 004e7cb6
    PUSH EBP                            ; 004e7cbd
    MOV ECX,dword ptr [EBX + 0x8]       ; 004e7cbe
    AND EDX,EAX                         ; 004e7cc1
    PUSH EBX                            ; 004e7cc3
    AND EDI,ECX                         ; 004e7cc4
    MOV dword ptr [ESP + 0x9c],EDX      ; 004e7cc6
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004e7670 ; 004e7ccd
        ;   XREF to: 004e7670 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004e7670(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004e7cd2
    MOV dword ptr [EBX + 0x4c],EAX      ; 004e7cd5
    LEA EAX,[ESI + 0x1]                 ; 004e7cd8
    PUSH EAX                            ; 004e7cdb
    PUSH EBP                            ; 004e7cdc
    PUSH EBX                            ; 004e7cdd
    MOV dword ptr [ESP + 0x7c],EAX      ; 004e7cde
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004e7670 ; 004e7ce2
        ;   XREF to: 004e7670 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004e7670(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004e7ce7
    MOV dword ptr [EBX + 0x50],EAX      ; 004e7cea
    MOV EAX,dword ptr [ESP + 0x70]      ; 004e7ced
    PUSH EAX                            ; 004e7cf1
    INC EBP                             ; 004e7cf2
    PUSH EBP                            ; 004e7cf3
    PUSH EBX                            ; 004e7cf4
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004e7670 ; 004e7cf5
        ;   XREF to: 004e7670 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004e7670(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004e7cfa
    PUSH ESI                            ; 004e7cfd
    PUSH EBP                            ; 004e7cfe
    PUSH EBX                            ; 004e7cff
    MOV dword ptr [EBX + 0x54],EAX      ; 004e7d00
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004e7670 ; 004e7d03
        ;   XREF to: 004e7670 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004e7670(CGround * this_ptr, int column, int row)
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004e7d08
    LEA EBP,[ESI*0x4 + 0x0]             ; 004e7d0b
    SUB EBP,ESI                         ; 004e7d12
    MOV ESI,dword ptr [EBX + 0x50]      ; 004e7d14
    MOV dword ptr [EBX + 0x58],EAX      ; 004e7d17
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e7d1a
    SUB EAX,ESI                         ; 004e7d21
    MOV ESI,EAX                         ; 004e7d23
    SHL ESI,0x4                         ; 004e7d25
    MOV EDX,dword ptr [ESI + 0x629024]  ; 004e7d28 | DAT_00629024
    MOV ESI,dword ptr [EBX + 0x54]      ; 004e7d2e
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e7d31
    SUB EAX,ESI                         ; 004e7d38
    SHL EBP,0x4                         ; 004e7d3a
    SHL EAX,0x4                         ; 004e7d3d
    MOV ESI,dword ptr [EBX + 0x58]      ; 004e7d40
    MOV ECX,dword ptr [EAX + 0x629024]  ; 004e7d43 | DAT_00629024
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e7d49
    MOV EBP,dword ptr [EBP + 0x629024]  ; 004e7d50 | DAT_00629024
    SUB EAX,ESI                         ; 004e7d56
    AND EBP,EDX                         ; 004e7d58
    SHL EAX,0x4                         ; 004e7d5a
    AND EBP,ECX                         ; 004e7d5d
    MOV EAX,dword ptr [EAX + 0x629024]  ; 004e7d5f | DAT_00629024
    AND EAX,EBP                         ; 004e7d65
    ADD ESP,0xc                         ; 004e7d67
    TEST EAX,0x80000000                 ; 004e7d6a
    JZ 0x004e7d7d                       ; 004e7d6f
        ;   XREF to: 004e7d7d (CONDITIONAL_JUMP)  ; LAB_004e7d7d
    TEST AL,0xff                        ; 004e7d71
    JZ 0x004e7d7d                       ; 004e7d73
        ;   XREF to: 004e7d7d (CONDITIONAL_JUMP)  ; LAB_004e7d7d
    ADD ESP,0x74                        ; 004e7d75
    POP EBP                             ; 004e7d78
    POP EDI                             ; 004e7d79
    POP ESI                             ; 004e7d7a
    POP EBX                             ; 004e7d7b
    RET                                 ; 004e7d7c
    MOV ESI,dword ptr [ESP + 0x90]      ; 004e7d7d
        ;   Label: LAB_004e7d7d
    PUSH ESI                            ; 004e7d84
    PUSH EDI                            ; 004e7d85
    PUSH EBX                            ; 004e7d86
    CALL core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70 ; 004e7d87
        ;   XREF to: 004e7b70 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70(CGround * this_ptr, int column, int row)
    MOV EAX,ESI                         ; 004e7d8c
    AND EDI,0x1                         ; 004e7d8e
    AND EAX,0x1                         ; 004e7d91
    ADD ESP,0xc                         ; 004e7d94
    CMP EDI,EAX                         ; 004e7d97
    JNZ 0x004e7df8                      ; 004e7d99
        ;   XREF to: 004e7df8 (CONDITIONAL_JUMP)  ; LAB_004e7df8
    MOV dword ptr [ESP + 0x4],0x3       ; 004e7d9b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004e7da3
    MOV dword ptr [ESP + 0x20],EAX      ; 004e7da6
    MOV EAX,dword ptr [EBX + 0x50]      ; 004e7daa
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e7dad
    MOV EAX,dword ptr [EBX + 0x54]      ; 004e7db1
    MOV dword ptr [ESP + 0x18],EAX      ; 004e7db4
    MOV EAX,ESP                         ; 004e7db8
    PUSH EAX                            ; 004e7dba
    PUSH EBX                            ; 004e7dbb
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60 ; 004e7dbc
        ;   XREF to: 004e7c60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    MOV EDX,0x3                         ; 004e7dc1
    ADD ESP,0x8                         ; 004e7dc6
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e7dc9
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004e7dcd
    MOV dword ptr [ESP + 0x58],EAX      ; 004e7dd0
    MOV EAX,dword ptr [EBX + 0x54]      ; 004e7dd4
    MOV dword ptr [ESP + 0x54],EAX      ; 004e7dd7
    MOV EAX,dword ptr [EBX + 0x58]      ; 004e7ddb
    MOV dword ptr [ESP + 0x50],EAX      ; 004e7dde
    LEA EAX,[ESP + 0x38]                ; 004e7de2
    PUSH EAX                            ; 004e7de6
    PUSH EBX                            ; 004e7de7
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60 ; 004e7de8
        ;   XREF to: 004e7c60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004e7ded
    ADD ESP,0x74                        ; 004e7df0
    POP EBP                             ; 004e7df3
    POP EDI                             ; 004e7df4
    POP ESI                             ; 004e7df5
    POP EBX                             ; 004e7df6
    RET                                 ; 004e7df7
    MOV EDI,0x3                         ; 004e7df8
        ;   Label: LAB_004e7df8
    MOV dword ptr [ESP + 0x4],EDI       ; 004e7dfd
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004e7e01
    MOV dword ptr [ESP + 0x20],EAX      ; 004e7e04
    MOV EAX,dword ptr [EBX + 0x50]      ; 004e7e08
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e7e0b
    MOV EAX,dword ptr [EBX + 0x58]      ; 004e7e0f
    MOV dword ptr [ESP + 0x18],EAX      ; 004e7e12
    MOV EAX,ESP                         ; 004e7e16
    PUSH EAX                            ; 004e7e18
    PUSH EBX                            ; 004e7e19
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60 ; 004e7e1a
        ;   XREF to: 004e7c60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004e7e1f
    MOV dword ptr [ESP + 0x3c],EDI      ; 004e7e22
    MOV EAX,dword ptr [EBX + 0x50]      ; 004e7e26
    MOV dword ptr [ESP + 0x58],EAX      ; 004e7e29
    MOV EAX,dword ptr [EBX + 0x54]      ; 004e7e2d
    MOV dword ptr [ESP + 0x54],EAX      ; 004e7e30
    MOV EAX,dword ptr [EBX + 0x58]      ; 004e7e34
    MOV dword ptr [ESP + 0x50],EAX      ; 004e7e37
    LEA EAX,[ESP + 0x38]                ; 004e7e3b
    PUSH EAX                            ; 004e7e3f
    PUSH EBX                            ; 004e7e40
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60 ; 004e7e41
        ;   XREF to: 004e7c60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004e7e46
    ADD ESP,0x74                        ; 004e7e49
    POP EBP                             ; 004e7e4c
    POP EDI                             ; 004e7e4d
    POP ESI                             ; 004e7e4e
    POP EBX                             ; 004e7e4f
    RET                                 ; 004e7e50

