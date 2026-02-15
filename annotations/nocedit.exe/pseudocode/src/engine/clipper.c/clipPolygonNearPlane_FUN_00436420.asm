; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_3_0043641c = 00436565
;   int g_NearPlaneDistance = 0x7fffffff
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   undefined4 DAT_00824e2c
;   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 DAT_00824e34
;   undefined4 DAT_00824e38
;   undefined4 DAT_00824e58
;   undefined4 DAT_00824e60
;   int g_SecondaryClipVertexCount
;   SRenderVertex[16] g_SecondaryClipVertexBuffer
;   undefined4 g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 DAT_008254b8
;   ... and 4 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436420
        ;   Label: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
    PUSH ESI                            ; 00436421
    PUSH EDI                            ; 00436422
    PUSH EBP                            ; 00436423
    SUB ESP,0x4                         ; 00436424
    MOV EDX,dword ptr [0x0066e804]      ; 00436427 | g_NearPlaneDistance
    XOR EBX,EBX                         ; 0043642d
    TEST EDX,EDX                        ; 0043642f
    JZ 0x00436466                       ; 00436431
        ;   XREF to: 00436466 (CONDITIONAL_JUMP)  ; LAB_00436466
    MOV ECX,dword ptr [0x00824e24]      ; 00436433 | g_ClippedVertexCount
    TEST ECX,ECX                        ; 00436439
    JLE 0x0043645e                      ; 0043643b
        ;   XREF to: 0043645e (CONDITIONAL_JUMP)  ; LAB_0043645e
    LEA EDI,[ECX*0x4 + 0x0]             ; 0043643d
    SUB EDI,ECX                         ; 00436444
    XOR EAX,EAX                         ; 00436446
    SHL EDI,0x4                         ; 00436448
    MOV EDX,dword ptr [EAX + 0x824e30]  ; 0043644b | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e60
        ;   Label: LAB_0043644b
    CMP EBX,EDX                         ; 00436451
    JGE 0x00436457                      ; 00436453
        ;   XREF to: 00436457 (CONDITIONAL_JUMP)  ; LAB_00436457
    MOV EBX,EDX                         ; 00436455
    ADD EAX,0x30                        ; 00436457
        ;   Label: LAB_00436457
    CMP EAX,EDI                         ; 0043645a
    JL 0x0043644b                       ; 0043645c
        ;   XREF to: 0043644b (CONDITIONAL_JUMP)  ; LAB_0043644b
    CMP EBX,dword ptr [0x0066e804]      ; 0043645e | g_NearPlaneDistance
        ;   Label: LAB_0043645e
    JGE 0x0043646e                      ; 00436464
        ;   XREF to: 0043646e (CONDITIONAL_JUMP)  ; LAB_0043646e
    ADD ESP,0x4                         ; 00436466
        ;   Label: LAB_00436466
    POP EBP                             ; 00436469
    POP EDI                             ; 0043646a
    POP ESI                             ; 0043646b
    POP EBX                             ; 0043646c
    RET                                 ; 0043646d
    MOV EAX,[0x00824e24]                ; 0043646e | g_ClippedVertexCount
        ;   Label: LAB_0043646e
    MOV [0x008254a8],EAX                ; 00436473 | g_SecondaryClipVertexCount
    LEA ECX,[EAX*0x4 + 0x0]             ; 00436478
    MOV ESI,0x824e28                    ; 0043647f | g_ClippedVertexBuffer
    SUB ECX,EAX                         ; 00436484
    MOV EDI,0x8254ac                    ; 00436486 | g_SecondaryClipVertexBuffer
    SHL ECX,0x4                         ; 0043648b
    XOR EBX,EBX                         ; 0043648e
    TEST EDI,0x7                        ; 00436490
    JZ 0x0043649e                       ; 00436496
        ;   XREF to: 0043649e (CONDITIONAL_JUMP)  ; LAB_0043649e
    MOVSD ES:EDI,ESI                    ; 00436498 | g_ClippedVertexBuffer | g_SecondaryClipVertexBuffer
    SUB ECX,0x4                         ; 00436499
    JLE 0x004364bb                      ; 0043649c
        ;   XREF to: 004364bb (CONDITIONAL_JUMP)  ; LAB_004364bb
    SUB ECX,0x8                         ; 0043649e
        ;   Label: LAB_0043649e
    JL 0x004364af                       ; 004364a1
        ;   XREF to: 004364af (CONDITIONAL_JUMP)  ; LAB_004364af
    FILD qword ptr [ESI]                ; 004364a3 | DAT_00824e2c | DAT_00824e34 | g_ClippedVertexBuffer
    ADD ESI,0x8                         ; 004364a5
    FISTP qword ptr [EDI]               ; 004364a8 | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y | DAT_008254b8
    ADD EDI,0x8                         ; 004364aa
    JMP 0x0043649e                      ; 004364ad
        ;   XREF to: 0043649e (UNCONDITIONAL_JUMP)  ; LAB_0043649e
    ADD ECX,0x8                         ; 004364af
        ;   Label: LAB_004364af
    JLE 0x004364bb                      ; 004364b2
        ;   XREF to: 004364bb (CONDITIONAL_JUMP)  ; LAB_004364bb
    MOVSD ES:EDI,ESI                    ; 004364b4 | DAT_00824e34 | DAT_008254b8
    SUB ECX,0x4                         ; 004364b5
    JLE 0x004364bb                      ; 004364b8
        ;   XREF to: 004364bb (CONDITIONAL_JUMP)  ; LAB_004364bb
    MOVSD ES:EDI,ESI                    ; 004364ba | DAT_00824e38 | DAT_008254bc
    XOR EDI,EDI                         ; 004364bb
        ;   Label: LAB_004364bb
    MOV EBP,dword ptr [0x008254a8]      ; 004364bd | g_SecondaryClipVertexCount
    MOV dword ptr [0x00824e24],EDI      ; 004364c3 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 004364c9
    JLE 0x00436466                      ; 004364cb
        ;   XREF to: 00436466 (CONDITIONAL_JUMP)  ; LAB_00436466
    MOV EBP,0x8254ac                    ; 004364cd | g_SecondaryClipVertexBuffer
    MOV ESI,dword ptr [0x008254a8]      ; 004364d2 | g_SecondaryClipVertexCount
        ;   Label: LAB_004364d2
    LEA EAX,[EBX + 0x1]                 ; 004364d8
    CMP EAX,ESI                         ; 004364db
    JNZ 0x004364e1                      ; 004364dd
        ;   XREF to: 004364e1 (CONDITIONAL_JUMP)  ; LAB_004364e1
    XOR EAX,ESI                         ; 004364df
    IMUL EAX,EAX,0x30                   ; 004364e1
        ;   Label: LAB_004364e1
    MOV EDI,0x8254ac                    ; 004364e4 | g_SecondaryClipVertexBuffer
    MOV ECX,dword ptr [0x0066e804]      ; 004364e9 | g_NearPlaneDistance
    ADD EDI,EAX                         ; 004364ef
    MOV EDX,EBP                         ; 004364f1
    MOV dword ptr [ESP],EDI             ; 004364f3 | g_SecondaryClipVertexBuffer[2].projected_vertex.transformed_x
    MOV EDI,dword ptr [EBP + 0x8]       ; 004364f6 | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | DAT_008254e0+4
    XOR EAX,EAX                         ; 004364f9
    CMP EDI,ECX                         ; 004364fb
    JL 0x00436504                       ; 004364fd
        ;   XREF to: 00436504 (CONDITIONAL_JUMP)  ; LAB_00436504
    MOV EAX,0x1                         ; 004364ff
    MOV EDI,dword ptr [ESP]             ; 00436504
        ;   Label: LAB_00436504
    MOV ESI,dword ptr [0x0066e804]      ; 00436507 | g_NearPlaneDistance
    CMP ESI,dword ptr [EDI + 0x8]       ; 0043650d | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[2].projected_vertex.transformed_z
    JG 0x00436514                       ; 00436510
        ;   XREF to: 00436514 (CONDITIONAL_JUMP)  ; LAB_00436514
    OR AL,0x2                           ; 00436512
    CMP EAX,0x3                         ; 00436514
        ;   Label: LAB_00436514
    JA 0x00436565                       ; 00436517
        ;   XREF to: 00436565 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x436410]  ; 00436519 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00436520 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00436527
    MOV ESI,EDX                         ; 0043652c
    ADD EDI,0x824e28                    ; 0043652e | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 00436534
    JZ 0x00436542                       ; 0043653a
        ;   XREF to: 00436542 (CONDITIONAL_JUMP)  ; LAB_00436542
    MOVSD ES:EDI,ESI                    ; 0043653c | g_SecondaryClipVertexBuffer | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 0043653d
    JLE 0x0043655f                      ; 00436540
        ;   XREF to: 0043655f (CONDITIONAL_JUMP)  ; LAB_0043655f
    SUB ECX,0x8                         ; 00436542
        ;   Label: LAB_00436542
    JL 0x00436553                       ; 00436545
        ;   XREF to: 00436553 (CONDITIONAL_JUMP)  ; LAB_00436553
    FILD qword ptr [ESI]                ; 00436547 | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 00436549
    FISTP qword ptr [EDI]               ; 0043654c | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e2c
    ADD EDI,0x8                         ; 0043654e
    JMP 0x00436542                      ; 00436551
        ;   XREF to: 00436542 (UNCONDITIONAL_JUMP)  ; LAB_00436542
    ADD ECX,0x8                         ; 00436553
        ;   Label: LAB_00436553
    JLE 0x0043655f                      ; 00436556
        ;   XREF to: 0043655f (CONDITIONAL_JUMP)  ; LAB_0043655f
    MOVSD ES:EDI,ESI                    ; 00436558 | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 00436559
    JLE 0x0043655f                      ; 0043655c
        ;   XREF to: 0043655f (CONDITIONAL_JUMP)  ; LAB_0043655f
    MOVSD ES:EDI,ESI                    ; 0043655e | DAT_008254b8 | DAT_00824e34
    INC dword ptr [0x00824e24]          ; 0043655f | g_ClippedVertexCount
        ;   Label: LAB_0043655f
    MOV ECX,dword ptr [0x008254a8]      ; 00436565 | g_SecondaryClipVertexCount
        ;   Label: caseD_3
    INC EBX                             ; 0043656b
    ADD EBP,0x30                        ; 0043656c
    CMP EBX,ECX                         ; 0043656f
    JGE 0x00436466                      ; 00436571
        ;   XREF to: 00436466 (CONDITIONAL_JUMP)  ; LAB_00436466
    JMP 0x004364d2                      ; 00436577
        ;   XREF to: 004364d2 (UNCONDITIONAL_JUMP)  ; LAB_004364d2
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 0043657c | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 00436583 | g_ClippedVertexBuffer
    PUSH EAX                            ; 00436588 | g_ClippedVertexBuffer
    PUSH EDX                            ; 00436589 | g_SecondaryClipVertexBuffer
    MOV ESI,dword ptr [ESP + 0x8]       ; 0043658a
    PUSH ESI                            ; 0043658e
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00 ; 0043658f
        ;   XREF to: 00435e00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00824e24]      ; 00436594 | g_ClippedVertexCount
    INC EDI                             ; 0043659a
    ADD ESP,0xc                         ; 0043659b
    MOV dword ptr [0x00824e24],EDI      ; 0043659e | g_ClippedVertexCount
    JMP 0x00436565                      ; 004365a4
        ;   XREF to: 00436565 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 004365a6 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004365ad
    MOV ESI,EDX                         ; 004365b2
    ADD EDI,0x824e28                    ; 004365b4 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 004365ba
    JZ 0x004365c8                       ; 004365c0
        ;   XREF to: 004365c8 (CONDITIONAL_JUMP)  ; LAB_004365c8
    MOVSD ES:EDI,ESI                    ; 004365c2 | g_SecondaryClipVertexBuffer | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 004365c3
    JLE 0x004365e5                      ; 004365c6
        ;   XREF to: 004365e5 (CONDITIONAL_JUMP)  ; LAB_004365e5
    SUB ECX,0x8                         ; 004365c8
        ;   Label: LAB_004365c8
    JL 0x004365d9                       ; 004365cb
        ;   XREF to: 004365d9 (CONDITIONAL_JUMP)  ; LAB_004365d9
    FILD qword ptr [ESI]                ; 004365cd | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 004365cf
    FISTP qword ptr [EDI]               ; 004365d2 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | DAT_00824e2c
    ADD EDI,0x8                         ; 004365d4
    JMP 0x004365c8                      ; 004365d7
        ;   XREF to: 004365c8 (UNCONDITIONAL_JUMP)  ; LAB_004365c8
    ADD ECX,0x8                         ; 004365d9
        ;   Label: LAB_004365d9
    JLE 0x004365e5                      ; 004365dc
        ;   XREF to: 004365e5 (CONDITIONAL_JUMP)  ; LAB_004365e5
    MOVSD ES:EDI,ESI                    ; 004365de | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 004365df
    JLE 0x004365e5                      ; 004365e2
        ;   XREF to: 004365e5 (CONDITIONAL_JUMP)  ; LAB_004365e5
    MOVSD ES:EDI,ESI                    ; 004365e4 | DAT_008254b8 | DAT_00824e34
    MOV ECX,dword ptr [0x00824e24]      ; 004365e5 | g_ClippedVertexCount
        ;   Label: LAB_004365e5
    INC ECX                             ; 004365eb
    MOV dword ptr [0x00824e24],ECX      ; 004365ec | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 004365f2
    ADD EAX,0x824e28                    ; 004365f5 | g_ClippedVertexBuffer
    PUSH EAX                            ; 004365fa | DAT_00824e58
    MOV EDI,dword ptr [ESP + 0x4]       ; 004365fb
    PUSH EDI                            ; 004365ff
    PUSH EDX                            ; 00436600 | g_SecondaryClipVertexBuffer
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00 ; 00436601
        ;   XREF to: 00435e00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EAX,[0x00824e24]                ; 00436606 | g_ClippedVertexCount
    INC EAX                             ; 0043660b
    ADD ESP,0xc                         ; 0043660c
    MOV [0x00824e24],EAX                ; 0043660f | g_ClippedVertexCount
    JMP 0x00436565                      ; 00436614
        ;   XREF to: 00436565 (UNCONDITIONAL_JUMP)  ; caseD_3

