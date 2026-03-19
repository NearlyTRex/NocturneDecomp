; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005f8330(void)
;
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_005f8324 = 005f83fd
;   void* PTR_caseD_3_005f832c = 005f83dd
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.screen_x
;   int g_ClipVertexCountStage4
;   SRenderVertex[32] g_ClipVertexBufferStage4
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.inv_z
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.screen_x
;   undefined4 g_ClipVertexBufferStage4[1].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage4[1].projected_vertex.transformed_z
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8330
        ;   Label: core_xform.cpp_clipPolygonStage4_FUN_005f8330
    PUSH ESI                            ; 005f8331
    PUSH EDI                            ; 005f8332
    PUSH EBP                            ; 005f8333
    SUB ESP,0x4                         ; 005f8334
    XOR EDX,EDX                         ; 005f8337
    MOV ECX,dword ptr [0x03f9951c]      ; 005f8339 | g_ClipVertexCountStage4
    MOV dword ptr [ESP],EDX             ; 005f833f
    TEST ECX,ECX                        ; 005f8342
    JLE 0x005f83f5                      ; 005f8344
        ;   XREF to: 005f83f5 (CONDITIONAL_JUMP)  ; LAB_005f83f5
    MOV EBX,0x3f9a720                   ; 005f834a | g_ClipVertexBufferStage4
    MOV EAX,dword ptr [ESP]             ; 005f834f
        ;   Label: LAB_005f834f
    MOV EBP,dword ptr [0x03f9951c]      ; 005f8352 | g_ClipVertexCountStage4
    INC EAX                             ; 005f8358
    CMP EAX,EBP                         ; 005f8359
    JNZ 0x005f835f                      ; 005f835b
        ;   XREF to: 005f835f (CONDITIONAL_JUMP)  ; LAB_005f835f
    XOR EAX,EBP                         ; 005f835d
    IMUL EAX,EAX,0x30                   ; 005f835f
        ;   Label: LAB_005f835f
    MOV EBP,0x3f9a720                   ; 005f8362 | g_ClipVertexBufferStage4
    MOV EDX,EBX                         ; 005f8367 | g_ClipVertexBufferStage4
    MOV EDI,dword ptr [EBX + 0x8]       ; 005f8369 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[1].projected_vertex.transformed_z
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f836c | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[1].projected_vertex.transformed_y
    NEG EDI                             ; 005f836f
    ADD EBP,EAX                         ; 005f8371
    XOR EAX,EAX                         ; 005f8373
    CMP EDI,ECX                         ; 005f8375
    JL 0x005f837e                       ; 005f8377
        ;   XREF to: 005f837e (CONDITIONAL_JUMP)  ; LAB_005f837e
    MOV EAX,0x1                         ; 005f8379
    MOV EDI,dword ptr [EBP + 0x8]       ; 005f837e | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
        ;   Label: LAB_005f837e
    MOV ESI,dword ptr [EBP + 0x4]       ; 005f8381 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    NEG EDI                             ; 005f8384
    CMP EDI,ESI                         ; 005f8386
    JL 0x005f838c                       ; 005f8388
        ;   XREF to: 005f838c (CONDITIONAL_JUMP)  ; LAB_005f838c
    OR AL,0x2                           ; 005f838a
    CMP EAX,0x3                         ; 005f838c
        ;   Label: LAB_005f838c
    JA 0x005f83dd                       ; 005f838f
        ;   XREF to: 005f83dd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f8320]  ; 005f8391 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 005f8398 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f839f
    MOV ESI,EDX                         ; 005f83a4
    ADD EDI,0x824e28                    ; 005f83a6 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 005f83ac
    JZ 0x005f83ba                       ; 005f83b2
        ;   XREF to: 005f83ba (CONDITIONAL_JUMP)  ; LAB_005f83ba
    MOVSD ES:EDI,ESI                    ; 005f83b4 | g_ClipVertexBufferStage4 | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 005f83b5
    JLE 0x005f83d7                      ; 005f83b8
        ;   XREF to: 005f83d7 (CONDITIONAL_JUMP)  ; LAB_005f83d7
    SUB ECX,0x8                         ; 005f83ba
        ;   Label: LAB_005f83ba
    JL 0x005f83cb                       ; 005f83bd
        ;   XREF to: 005f83cb (CONDITIONAL_JUMP)  ; LAB_005f83cb
    FILD qword ptr [ESI]                ; 005f83bf | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    ADD ESI,0x8                         ; 005f83c1
    FISTP qword ptr [EDI]               ; 005f83c4 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 005f83c6
    JMP 0x005f83ba                      ; 005f83c9
        ;   XREF to: 005f83ba (UNCONDITIONAL_JUMP)  ; LAB_005f83ba
    ADD ECX,0x8                         ; 005f83cb
        ;   Label: LAB_005f83cb
    JLE 0x005f83d7                      ; 005f83ce
        ;   XREF to: 005f83d7 (CONDITIONAL_JUMP)  ; LAB_005f83d7
    MOVSD ES:EDI,ESI                    ; 005f83d0 | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 005f83d1
    JLE 0x005f83d7                      ; 005f83d4
        ;   XREF to: 005f83d7 (CONDITIONAL_JUMP)  ; LAB_005f83d7
    MOVSD ES:EDI,ESI                    ; 005f83d6 | g_ClipVertexBufferStage4[0].projected_vertex.screen_x | g_ClippedVertexBuffer[0].projected_vertex.screen_x
    INC dword ptr [0x00824e24]          ; 005f83d7 | g_ClippedVertexCount
        ;   Label: LAB_005f83d7
    MOV ESI,dword ptr [ESP]             ; 005f83dd
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x03f9951c]      ; 005f83e0 | g_ClipVertexCountStage4
    INC ESI                             ; 005f83e6
    ADD EBX,0x30                        ; 005f83e7
    MOV dword ptr [ESP],ESI             ; 005f83ea
    CMP ESI,EDI                         ; 005f83ed
    JL 0x005f834f                       ; 005f83ef
        ;   XREF to: 005f834f (CONDITIONAL_JUMP)  ; LAB_005f834f
    ADD ESP,0x4                         ; 005f83f5
        ;   Label: LAB_005f83f5
    POP EBP                             ; 005f83f8
    POP EDI                             ; 005f83f9
    POP ESI                             ; 005f83fa
    POP EBX                             ; 005f83fb
    RET                                 ; 005f83fc
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 005f83fd | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 005f8404 | g_ClippedVertexBuffer
    PUSH EAX                            ; 005f8409
    PUSH EDX                            ; 005f840a | g_ClipVertexBufferStage4
    PUSH EBP                            ; 005f840b
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00 ; 005f840c
        ;   XREF to: 005f7e00 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x00824e24]      ; 005f8411 | g_ClippedVertexCount
    INC ESI                             ; 005f8417
    ADD ESP,0xc                         ; 005f8418
    MOV dword ptr [0x00824e24],ESI      ; 005f841b | g_ClippedVertexCount
    JMP 0x005f83dd                      ; 005f8421
        ;   XREF to: 005f83dd (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 005f8423 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f842a
    MOV ESI,EDX                         ; 005f842f
    ADD EDI,0x824e28                    ; 005f8431 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 005f8437
    JZ 0x005f8445                       ; 005f843d
        ;   XREF to: 005f8445 (CONDITIONAL_JUMP)  ; LAB_005f8445
    MOVSD ES:EDI,ESI                    ; 005f843f | g_ClipVertexBufferStage4 | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 005f8440
    JLE 0x005f8462                      ; 005f8443
        ;   XREF to: 005f8462 (CONDITIONAL_JUMP)  ; LAB_005f8462
    SUB ECX,0x8                         ; 005f8445
        ;   Label: LAB_005f8445
    JL 0x005f8456                       ; 005f8448
        ;   XREF to: 005f8456 (CONDITIONAL_JUMP)  ; LAB_005f8456
    FILD qword ptr [ESI]                ; 005f844a | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    ADD ESI,0x8                         ; 005f844c
    FISTP qword ptr [EDI]               ; 005f844f | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 005f8451
    JMP 0x005f8445                      ; 005f8454
        ;   XREF to: 005f8445 (UNCONDITIONAL_JUMP)  ; LAB_005f8445
    ADD ECX,0x8                         ; 005f8456
        ;   Label: LAB_005f8456
    JLE 0x005f8462                      ; 005f8459
        ;   XREF to: 005f8462 (CONDITIONAL_JUMP)  ; LAB_005f8462
    MOVSD ES:EDI,ESI                    ; 005f845b | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 005f845c
    JLE 0x005f8462                      ; 005f845f
        ;   XREF to: 005f8462 (CONDITIONAL_JUMP)  ; LAB_005f8462
    MOVSD ES:EDI,ESI                    ; 005f8461 | g_ClipVertexBufferStage4[0].projected_vertex.screen_x | g_ClippedVertexBuffer[0].projected_vertex.screen_x
    MOV ECX,dword ptr [0x00824e24]      ; 005f8462 | g_ClippedVertexCount
        ;   Label: LAB_005f8462
    INC ECX                             ; 005f8468
    MOV dword ptr [0x00824e24],ECX      ; 005f8469 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 005f846f
    ADD EAX,0x824e28                    ; 005f8472 | g_ClippedVertexBuffer
    PUSH EAX                            ; 005f8477
    PUSH EBP                            ; 005f8478
    PUSH EDX                            ; 005f8479 | g_ClipVertexBufferStage4
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00 ; 005f847a
        ;   XREF to: 005f7e00 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x00824e24]      ; 005f847f | g_ClippedVertexCount
    INC EDI                             ; 005f8485
    ADD ESP,0xc                         ; 005f8486
    MOV dword ptr [0x00824e24],EDI      ; 005f8489 | g_ClippedVertexCount
    JMP 0x005f83dd                      ; 005f848f
        ;   XREF to: 005f83dd (UNCONDITIONAL_JUMP)  ; caseD_3

