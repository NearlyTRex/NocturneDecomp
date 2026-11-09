; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400(CGround *this_ptr,int world_column,int world_row)
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
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004cb5e0 at 004cb66b
;
; Referenced Globals:
;   undefined4 DAT_00622024
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb400
        ;   Label: core_ground.cpp_CGround_renderTerrainQuad_FUN_004cb400
    PUSH ESI                            ; 004cb401
    PUSH EDI                            ; 004cb402
    PUSH EBP                            ; 004cb403
    SUB ESP,0x74                        ; 004cb404
    MOV EBX,dword ptr [ESP + 0x88]      ; 004cb407
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004cb40e
    MOV EBP,dword ptr [ESP + 0x90]      ; 004cb415
    MOV ESI,EDI                         ; 004cb41c
    MOV EDX,dword ptr [EBX + 0x30]      ; 004cb41e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004cb421
    SUB EBP,EDX                         ; 004cb424
    SUB ESI,EAX                         ; 004cb426
    MOV EDX,dword ptr [EBX + 0x10]      ; 004cb428
    MOV ECX,dword ptr [EBX + 0x14]      ; 004cb42b
    ADD ESI,EDX                         ; 004cb42e
    MOV EAX,dword ptr [EBX + 0xc]       ; 004cb430
    PUSH ESI                            ; 004cb433
    ADD EBP,ECX                         ; 004cb434
    MOV EDX,dword ptr [ESP + 0x94]      ; 004cb436
    PUSH EBP                            ; 004cb43d
    MOV ECX,dword ptr [EBX + 0x8]       ; 004cb43e
    AND EDX,EAX                         ; 004cb441
    PUSH EBX                            ; 004cb443
    AND EDI,ECX                         ; 004cb444
    MOV dword ptr [ESP + 0x9c],EDX      ; 004cb446
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0 ; 004cb44d
        ;   XREF to: 004cadf0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004cb452
    MOV dword ptr [EBX + 0x4c],EAX      ; 004cb455
    LEA EAX,[ESI + 0x1]                 ; 004cb458
    PUSH EAX                            ; 004cb45b
    PUSH EBP                            ; 004cb45c
    PUSH EBX                            ; 004cb45d
    MOV dword ptr [ESP + 0x7c],EAX      ; 004cb45e
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0 ; 004cb462
        ;   XREF to: 004cadf0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004cb467
    MOV dword ptr [EBX + 0x50],EAX      ; 004cb46a
    MOV EAX,dword ptr [ESP + 0x70]      ; 004cb46d
    PUSH EAX                            ; 004cb471
    INC EBP                             ; 004cb472
    PUSH EBP                            ; 004cb473
    PUSH EBX                            ; 004cb474
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0 ; 004cb475
        ;   XREF to: 004cadf0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004cb47a
    PUSH ESI                            ; 004cb47d
    PUSH EBP                            ; 004cb47e
    PUSH EBX                            ; 004cb47f
    MOV dword ptr [EBX + 0x54],EAX      ; 004cb480
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0 ; 004cb483
        ;   XREF to: 004cadf0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0(CGround * this_ptr, int column, int row)
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004cb488
    LEA EBP,[ESI*0x4 + 0x0]             ; 004cb48b
    SUB EBP,ESI                         ; 004cb492
    MOV ESI,dword ptr [EBX + 0x50]      ; 004cb494
    MOV dword ptr [EBX + 0x58],EAX      ; 004cb497
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb49a
    SUB EAX,ESI                         ; 004cb4a1
    MOV ESI,EAX                         ; 004cb4a3
    SHL ESI,0x4                         ; 004cb4a5
    MOV EDX,dword ptr [ESI + 0x622024]  ; 004cb4a8 | DAT_00622024
    MOV ESI,dword ptr [EBX + 0x54]      ; 004cb4ae
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb4b1
    SUB EAX,ESI                         ; 004cb4b8
    SHL EBP,0x4                         ; 004cb4ba
    SHL EAX,0x4                         ; 004cb4bd
    MOV ESI,dword ptr [EBX + 0x58]      ; 004cb4c0
    MOV ECX,dword ptr [EAX + 0x622024]  ; 004cb4c3 | DAT_00622024
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb4c9
    MOV EBP,dword ptr [EBP + 0x622024]  ; 004cb4d0 | DAT_00622024
    SUB EAX,ESI                         ; 004cb4d6
    AND EBP,EDX                         ; 004cb4d8
    SHL EAX,0x4                         ; 004cb4da
    AND EBP,ECX                         ; 004cb4dd
    MOV EAX,dword ptr [EAX + 0x622024]  ; 004cb4df | DAT_00622024
    AND EAX,EBP                         ; 004cb4e5
    ADD ESP,0xc                         ; 004cb4e7
    TEST EAX,0x80000000                 ; 004cb4ea
    JZ 0x004cb4fd                       ; 004cb4ef
        ;   XREF to: 004cb4fd (CONDITIONAL_JUMP)  ; LAB_004cb4fd
    TEST AL,0xff                        ; 004cb4f1
    JZ 0x004cb4fd                       ; 004cb4f3
        ;   XREF to: 004cb4fd (CONDITIONAL_JUMP)  ; LAB_004cb4fd
    ADD ESP,0x74                        ; 004cb4f5
    POP EBP                             ; 004cb4f8
    POP EDI                             ; 004cb4f9
    POP ESI                             ; 004cb4fa
    POP EBX                             ; 004cb4fb
    RET                                 ; 004cb4fc
    MOV ESI,dword ptr [ESP + 0x90]      ; 004cb4fd
        ;   Label: LAB_004cb4fd
    PUSH ESI                            ; 004cb504
    PUSH EDI                            ; 004cb505
    PUSH EBX                            ; 004cb506
    CALL core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0 ; 004cb507
        ;   XREF to: 004cb2f0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0(CGround * this_ptr, int column, int row)
    MOV EAX,ESI                         ; 004cb50c
    AND EDI,0x1                         ; 004cb50e
    AND EAX,0x1                         ; 004cb511
    ADD ESP,0xc                         ; 004cb514
    CMP EDI,EAX                         ; 004cb517
    JNZ 0x004cb578                      ; 004cb519
        ;   XREF to: 004cb578 (CONDITIONAL_JUMP)  ; LAB_004cb578
    MOV dword ptr [ESP + 0x4],0x3       ; 004cb51b
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004cb523
    MOV dword ptr [ESP + 0x20],EAX      ; 004cb526
    MOV EAX,dword ptr [EBX + 0x50]      ; 004cb52a
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cb52d
    MOV EAX,dword ptr [EBX + 0x54]      ; 004cb531
    MOV dword ptr [ESP + 0x18],EAX      ; 004cb534
    MOV EAX,ESP                         ; 004cb538
    PUSH EAX                            ; 004cb53a
    PUSH EBX                            ; 004cb53b
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0 ; 004cb53c
        ;   XREF to: 004cb3e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    MOV EDX,0x3                         ; 004cb541
    ADD ESP,0x8                         ; 004cb546
    MOV dword ptr [ESP + 0x3c],EDX      ; 004cb549
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004cb54d
    MOV dword ptr [ESP + 0x58],EAX      ; 004cb550
    MOV EAX,dword ptr [EBX + 0x54]      ; 004cb554
    MOV dword ptr [ESP + 0x54],EAX      ; 004cb557
    MOV EAX,dword ptr [EBX + 0x58]      ; 004cb55b
    MOV dword ptr [ESP + 0x50],EAX      ; 004cb55e
    LEA EAX,[ESP + 0x38]                ; 004cb562
    PUSH EAX                            ; 004cb566
    PUSH EBX                            ; 004cb567
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0 ; 004cb568
        ;   XREF to: 004cb3e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004cb56d
    ADD ESP,0x74                        ; 004cb570
    POP EBP                             ; 004cb573
    POP EDI                             ; 004cb574
    POP ESI                             ; 004cb575
    POP EBX                             ; 004cb576
    RET                                 ; 004cb577
    MOV EDI,0x3                         ; 004cb578
        ;   Label: LAB_004cb578
    MOV dword ptr [ESP + 0x4],EDI       ; 004cb57d
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004cb581
    MOV dword ptr [ESP + 0x20],EAX      ; 004cb584
    MOV EAX,dword ptr [EBX + 0x50]      ; 004cb588
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cb58b
    MOV EAX,dword ptr [EBX + 0x58]      ; 004cb58f
    MOV dword ptr [ESP + 0x18],EAX      ; 004cb592
    MOV EAX,ESP                         ; 004cb596
    PUSH EAX                            ; 004cb598
    PUSH EBX                            ; 004cb599
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0 ; 004cb59a
        ;   XREF to: 004cb3e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004cb59f
    MOV dword ptr [ESP + 0x3c],EDI      ; 004cb5a2
    MOV EAX,dword ptr [EBX + 0x50]      ; 004cb5a6
    MOV dword ptr [ESP + 0x58],EAX      ; 004cb5a9
    MOV EAX,dword ptr [EBX + 0x54]      ; 004cb5ad
    MOV dword ptr [ESP + 0x54],EAX      ; 004cb5b0
    MOV EAX,dword ptr [EBX + 0x58]      ; 004cb5b4
    MOV dword ptr [ESP + 0x50],EAX      ; 004cb5b7
    LEA EAX,[ESP + 0x38]                ; 004cb5bb
    PUSH EAX                            ; 004cb5bf
    PUSH EBX                            ; 004cb5c0
    CALL core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0 ; 004cb5c1
        ;   XREF to: 004cb3e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(CGround * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004cb5c6
    ADD ESP,0x74                        ; 004cb5c9
    POP EBP                             ; 004cb5cc
    POP EDI                             ; 004cb5cd
    POP ESI                             ; 004cb5ce
    POP EBX                             ; 004cb5cf
    RET                                 ; 004cb5d0

