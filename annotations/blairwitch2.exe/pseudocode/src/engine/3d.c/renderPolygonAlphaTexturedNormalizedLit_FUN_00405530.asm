; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405530(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405530
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405530
    PUSH ESI                            ; 00405531
    PUSH EBP                            ; 00405532
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405533
    LEA ESI,[EBX + 0x18]                ; 00405537
    LEA EAX,[EBX + 0x8]                 ; 0040553a
    PUSH EAX                            ; 0040553d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040553e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405543
    TEST EAX,EAX                        ; 00405546
    JZ 0x00405594                       ; 00405548
        ;   XREF to: 00405594 (CONDITIONAL_JUMP)  ; LAB_00405594
    CMP dword ptr [0x01c38b40],0x0      ; 0040554a | DAT_01c38b40
    JNZ 0x004055af                      ; 00405551
        ;   XREF to: 004055af (CONDITIONAL_JUMP)  ; LAB_004055af
    CMP dword ptr [0x006141c0],0x20     ; 00405553 | DAT_006141c0
    JNZ 0x004055a3                      ; 0040555a
        ;   XREF to: 004055a3 (CONDITIONAL_JUMP)  ; LAB_004055a3
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040555c | DAT_01c35e6c
    PUSH EDI                            ; 00405566
        ;   Label: LAB_00405566
    MOV EDI,0x9                         ; 00405567
    MOV EBP,0x2                         ; 0040556c
    PUSH EBX                            ; 00405571
    MOV dword ptr [0x01c38b54],EDI      ; 00405572 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405578 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 0040557e
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405583
    PUSH ESI                            ; 00405586
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405587
    PUSH EAX                            ; 0040558a
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040558b
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405590
    POP EDI                             ; 00405593
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405594
        ;   Label: LAB_00405594
    ADD EBX,0x18                        ; 00405597
    SHL EAX,0x2                         ; 0040559a
    ADD EAX,EBX                         ; 0040559d
    POP EBP                             ; 0040559f
    POP ESI                             ; 004055a0
    POP EBX                             ; 004055a1
    RET                                 ; 004055a2
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004055a3 | DAT_01c35e6c
        ;   Label: LAB_004055a3
    JMP 0x00405566                      ; 004055ad
        ;   XREF to: 00405566 (UNCONDITIONAL_JUMP)  ; LAB_00405566
    CMP dword ptr [0x006141c0],0x20     ; 004055af | DAT_006141c0
        ;   Label: LAB_004055af
    JNZ 0x004055c4                      ; 004055b6
        ;   XREF to: 004055c4 (CONDITIONAL_JUMP)  ; LAB_004055c4
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004055b8 | DAT_01c35e6c
    JMP 0x00405566                      ; 004055c2
        ;   XREF to: 00405566 (UNCONDITIONAL_JUMP)  ; LAB_00405566
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004055c4 | DAT_01c35e6c
        ;   Label: LAB_004055c4
    JMP 0x00405566                      ; 004055ce
        ;   XREF to: 00405566 (UNCONDITIONAL_JUMP)  ; LAB_00405566

