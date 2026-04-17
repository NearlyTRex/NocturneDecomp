; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
; Local Variables:
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490 at 004ef858
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef3a0
        ;   Label: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
    PUSH ESI                            ; 004ef3a1
    PUSH EDI                            ; 004ef3a2
    PUSH EBP                            ; 004ef3a3
    SUB ESP,0xc                         ; 004ef3a4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ef3a7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ef3ab
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ef3af
    MOV EDX,EBP                         ; 004ef3b3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004ef3b5
    MOV EDI,dword ptr [ESI + 0x10]      ; 004ef3b8
    SUB EDX,ECX                         ; 004ef3bb
    ADD EDX,EDI                         ; 004ef3bd
    MOV EAX,dword ptr [ESI + 0x30]      ; 004ef3bf
    PUSH EDX                            ; 004ef3c2
    MOV EDX,EBX                         ; 004ef3c3
    MOV ECX,dword ptr [ESI + 0x14]      ; 004ef3c5
    SUB EDX,EAX                         ; 004ef3c8
    ADD EDX,ECX                         ; 004ef3ca
    PUSH EDX                            ; 004ef3cc
    PUSH ESI                            ; 004ef3cd
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004ef380 ; 004ef3ce
        ;   XREF to: 004ef380 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004ef3d3
    IMUL EDX,EBP                        ; 004ef3d6
    ADD ESP,0xc                         ; 004ef3d9
    SHL EDX,0x8                         ; 004ef3dc
    MOV dword ptr [ESP],EDX             ; 004ef3df
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004ef3e2
    IMUL EDX,EBX                        ; 004ef3e5
    SHL EDX,0x8                         ; 004ef3e8
    MOV dword ptr [ESP + 0x8],EDX       ; 004ef3eb
    MOV EDX,dword ptr [ESI + 0xc]       ; 004ef3ef
    MOV ECX,dword ptr [ESI]             ; 004ef3f2
    AND EBX,EDX                         ; 004ef3f4
    IMUL EBX,ECX                        ; 004ef3f6
    LEA EDI,[EAX*0x4 + 0x0]             ; 004ef3f9
    SUB EDI,EAX                         ; 004ef400
    AND EBP,dword ptr [ESI + 0x8]       ; 004ef402
    LEA EDX,[EBX + EBP*0x1]             ; 004ef405
    MOV EBX,dword ptr [ESI + 0x24]      ; 004ef408
    MOVSX EDX,word ptr [EBX + EDX*0x4]  ; 004ef40b
    MOV EBX,dword ptr [ESI + 0x20]      ; 004ef40f
    IMUL EBX,EDX                        ; 004ef412
    MOV EDX,ESP                         ; 004ef415
    SHL EDI,0x4                         ; 004ef417
    PUSH EDX                            ; 004ef41a
    ADD EDI,0x688014                    ; 004ef41b | g_RenderVertexBuffer
    PUSH EDI                            ; 004ef421
    MOV dword ptr [ESP + 0xc],EBX       ; 004ef422
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004ef426
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV dword ptr [EDI + 0x20],0x3fff   ; 004ef42b | g_RenderVertexBuffer[0].r
    MOV dword ptr [EDI + 0x24],0x3fff   ; 004ef432 | g_RenderVertexBuffer[0].g
    ADD ESP,0x8                         ; 004ef439
    MOV EBX,dword ptr [EDI + 0x8]       ; 004ef43c | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV dword ptr [EDI + 0x28],0x3fff   ; 004ef43f | g_RenderVertexBuffer[0].b
    TEST EBX,EBX                        ; 004ef446
    JL 0x004ef472                       ; 004ef448
        ;   XREF to: 004ef472 (CONDITIONAL_JUMP)  ; LAB_004ef472
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004ef44a
    MOV EBX,dword ptr [ESI + 0x10]      ; 004ef44d
    IMUL EBX,EBP                        ; 004ef450
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ef453 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SHL EDX,0x8                         ; 004ef456
    MOV EAX,EDX                         ; 004ef459
    SAR EDX,0x1f                        ; 004ef45b
    IDIV EBX                            ; 004ef45e
    MOV dword ptr [EDI + 0x2c],EAX      ; 004ef460 | g_RenderVertexBuffer[0].a
    CMP EAX,0xffff                      ; 004ef463
    JG 0x004ef47b                       ; 004ef468
        ;   XREF to: 004ef47b (CONDITIONAL_JUMP)  ; LAB_004ef47b
    ADD ESP,0xc                         ; 004ef46a
        ;   Label: LAB_004ef46a
    POP EBP                             ; 004ef46d
    POP EDI                             ; 004ef46e
    POP ESI                             ; 004ef46f
    POP EBX                             ; 004ef470
    RET                                 ; 004ef471
    MOV dword ptr [EDI + 0x2c],0x0      ; 004ef472 | g_RenderVertexBuffer[0].a
        ;   Label: LAB_004ef472
    JMP 0x004ef46a                      ; 004ef479
        ;   XREF to: 004ef46a (UNCONDITIONAL_JUMP)  ; LAB_004ef46a
    MOV dword ptr [EDI + 0x2c],0xffff   ; 004ef47b | g_RenderVertexBuffer[0].a
        ;   Label: LAB_004ef47b
    ADD ESP,0xc                         ; 004ef482
    POP EBP                             ; 004ef485
    POP EDI                             ; 004ef486
    POP ESI                             ; 004ef487
    POP EBX                             ; 004ef488
    RET                                 ; 004ef489

