; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
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
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70 at 004efc72
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef990
        ;   Label: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
    PUSH ESI                            ; 004ef991
    PUSH EDI                            ; 004ef992
    PUSH EBP                            ; 004ef993
    SUB ESP,0x74                        ; 004ef994
    MOV EBX,dword ptr [ESP + 0x88]      ; 004ef997
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004ef99e
    MOV EBP,dword ptr [ESP + 0x90]      ; 004ef9a5
    MOV ESI,EDI                         ; 004ef9ac
    MOV EDX,dword ptr [EBX + 0x30]      ; 004ef9ae
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004ef9b1
    SUB EBP,EDX                         ; 004ef9b4
    SUB ESI,EAX                         ; 004ef9b6
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ef9b8
    MOV ECX,dword ptr [EBX + 0x14]      ; 004ef9bb
    ADD ESI,EDX                         ; 004ef9be
    MOV EAX,dword ptr [EBX + 0xc]       ; 004ef9c0
    PUSH ESI                            ; 004ef9c3
    ADD EBP,ECX                         ; 004ef9c4
    MOV EDX,dword ptr [ESP + 0x94]      ; 004ef9c6
    PUSH EBP                            ; 004ef9cd
    MOV ECX,dword ptr [EBX + 0x8]       ; 004ef9ce
    AND EDX,EAX                         ; 004ef9d1
    PUSH EBX                            ; 004ef9d3
    AND EDI,ECX                         ; 004ef9d4
    MOV dword ptr [ESP + 0x9c],EDX      ; 004ef9d6
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380 ; 004ef9dd
        ;   XREF to: 004ef380 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004ef9e2
    MOV dword ptr [EBX + 0x4c],EAX      ; 004ef9e5
    LEA EAX,[ESI + 0x1]                 ; 004ef9e8
    PUSH EAX                            ; 004ef9eb
    PUSH EBP                            ; 004ef9ec
    PUSH EBX                            ; 004ef9ed
    MOV dword ptr [ESP + 0x7c],EAX      ; 004ef9ee
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380 ; 004ef9f2
        ;   XREF to: 004ef380 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004ef9f7
    MOV dword ptr [EBX + 0x50],EAX      ; 004ef9fa
    MOV EAX,dword ptr [ESP + 0x70]      ; 004ef9fd
    PUSH EAX                            ; 004efa01
    INC EBP                             ; 004efa02
    PUSH EBP                            ; 004efa03
    PUSH EBX                            ; 004efa04
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380 ; 004efa05
        ;   XREF to: 004ef380 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004efa0a
    PUSH ESI                            ; 004efa0d
    PUSH EBP                            ; 004efa0e
    PUSH EBX                            ; 004efa0f
    MOV dword ptr [EBX + 0x54],EAX      ; 004efa10
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380 ; 004efa13
        ;   XREF to: 004ef380 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004efa18
    LEA EBP,[ESI*0x4 + 0x0]             ; 004efa1b
    SUB EBP,ESI                         ; 004efa22
    MOV ESI,dword ptr [EBX + 0x50]      ; 004efa24
    MOV dword ptr [EBX + 0x58],EAX      ; 004efa27
    LEA EAX,[ESI*0x4 + 0x0]             ; 004efa2a
    SUB EAX,ESI                         ; 004efa31
    MOV ESI,EAX                         ; 004efa33
    SHL ESI,0x4                         ; 004efa35
    MOV EDX,dword ptr [ESI + 0x688024]  ; 004efa38 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV ESI,dword ptr [EBX + 0x54]      ; 004efa3e
    LEA EAX,[ESI*0x4 + 0x0]             ; 004efa41
    SUB EAX,ESI                         ; 004efa48
    SHL EBP,0x4                         ; 004efa4a
    SHL EAX,0x4                         ; 004efa4d
    MOV ESI,dword ptr [EBX + 0x58]      ; 004efa50
    MOV ECX,dword ptr [EAX + 0x688024]  ; 004efa53 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    LEA EAX,[ESI*0x4 + 0x0]             ; 004efa59
    MOV EBP,dword ptr [EBP + 0x688024]  ; 004efa60 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EAX,ESI                         ; 004efa66
    AND EBP,EDX                         ; 004efa68
    SHL EAX,0x4                         ; 004efa6a
    AND EBP,ECX                         ; 004efa6d
    MOV EAX,dword ptr [EAX + 0x688024]  ; 004efa6f | g_RenderVertexBuffer[0].projected_vertex.screen_x
    AND EAX,EBP                         ; 004efa75
    ADD ESP,0xc                         ; 004efa77
    TEST EAX,0x80000000                 ; 004efa7a
    JZ 0x004efa8d                       ; 004efa7f
        ;   XREF to: 004efa8d (CONDITIONAL_JUMP)  ; LAB_004efa8d
    TEST AL,0xff                        ; 004efa81
    JZ 0x004efa8d                       ; 004efa83
        ;   XREF to: 004efa8d (CONDITIONAL_JUMP)  ; LAB_004efa8d
    ADD ESP,0x74                        ; 004efa85
    POP EBP                             ; 004efa88
    POP EDI                             ; 004efa89
    POP ESI                             ; 004efa8a
    POP EBX                             ; 004efa8b
    RET                                 ; 004efa8c
    MOV ESI,dword ptr [ESP + 0x90]      ; 004efa8d
        ;   Label: LAB_004efa8d
    PUSH ESI                            ; 004efa94
    PUSH EDI                            ; 004efa95
    PUSH EBX                            ; 004efa96
    CALL core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880 ; 004efa97
        ;   XREF to: 004ef880 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround * this_ptr, int column, int row)
    MOV EAX,ESI                         ; 004efa9c
    AND EDI,0x1                         ; 004efa9e
    AND EAX,0x1                         ; 004efaa1
    ADD ESP,0xc                         ; 004efaa4
    CMP EDI,EAX                         ; 004efaa7
    JNZ 0x004efb08                      ; 004efaa9
        ;   XREF to: 004efb08 (CONDITIONAL_JUMP)  ; LAB_004efb08
    MOV dword ptr [ESP + 0x4],0x3       ; 004efaab
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004efab3
    MOV dword ptr [ESP + 0x20],EAX      ; 004efab6
    MOV EAX,dword ptr [EBX + 0x50]      ; 004efaba
    MOV dword ptr [ESP + 0x1c],EAX      ; 004efabd
    MOV EAX,dword ptr [EBX + 0x54]      ; 004efac1
    MOV dword ptr [ESP + 0x18],EAX      ; 004efac4
    MOV EAX,ESP                         ; 004efac8
    PUSH EAX                            ; 004efaca
    PUSH EBX                            ; 004efacb
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 ; 004efacc
        ;   XREF to: 004ef970 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    MOV EDX,0x3                         ; 004efad1
    ADD ESP,0x8                         ; 004efad6
    MOV dword ptr [ESP + 0x3c],EDX      ; 004efad9
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004efadd
    MOV dword ptr [ESP + 0x58],EAX      ; 004efae0
    MOV EAX,dword ptr [EBX + 0x54]      ; 004efae4
    MOV dword ptr [ESP + 0x54],EAX      ; 004efae7
    MOV EAX,dword ptr [EBX + 0x58]      ; 004efaeb
    MOV dword ptr [ESP + 0x50],EAX      ; 004efaee
    LEA EAX,[ESP + 0x38]                ; 004efaf2
    PUSH EAX                            ; 004efaf6
    PUSH EBX                            ; 004efaf7
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 ; 004efaf8
        ;   XREF to: 004ef970 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004efafd
    ADD ESP,0x74                        ; 004efb00
    POP EBP                             ; 004efb03
    POP EDI                             ; 004efb04
    POP ESI                             ; 004efb05
    POP EBX                             ; 004efb06
    RET                                 ; 004efb07
    MOV EDI,0x3                         ; 004efb08
        ;   Label: LAB_004efb08
    MOV dword ptr [ESP + 0x4],EDI       ; 004efb0d
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004efb11
    MOV dword ptr [ESP + 0x20],EAX      ; 004efb14
    MOV EAX,dword ptr [EBX + 0x50]      ; 004efb18
    MOV dword ptr [ESP + 0x1c],EAX      ; 004efb1b
    MOV EAX,dword ptr [EBX + 0x58]      ; 004efb1f
    MOV dword ptr [ESP + 0x18],EAX      ; 004efb22
    MOV EAX,ESP                         ; 004efb26
    PUSH EAX                            ; 004efb28
    PUSH EBX                            ; 004efb29
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 ; 004efb2a
        ;   XREF to: 004ef970 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004efb2f
    MOV dword ptr [ESP + 0x3c],EDI      ; 004efb32
    MOV EAX,dword ptr [EBX + 0x50]      ; 004efb36
    MOV dword ptr [ESP + 0x58],EAX      ; 004efb39
    MOV EAX,dword ptr [EBX + 0x54]      ; 004efb3d
    MOV dword ptr [ESP + 0x54],EAX      ; 004efb40
    MOV EAX,dword ptr [EBX + 0x58]      ; 004efb44
    MOV dword ptr [ESP + 0x50],EAX      ; 004efb47
    LEA EAX,[ESP + 0x38]                ; 004efb4b
    PUSH EAX                            ; 004efb4f
    PUSH EBX                            ; 004efb50
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 ; 004efb51
        ;   XREF to: 004ef970 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004efb56
    ADD ESP,0x74                        ; 004efb59
    POP EBP                             ; 004efb5c
    POP EDI                             ; 004efb5d
    POP ESI                             ; 004efb5e
    POP EBX                             ; 004efb5f
    RET                                 ; 004efb60

