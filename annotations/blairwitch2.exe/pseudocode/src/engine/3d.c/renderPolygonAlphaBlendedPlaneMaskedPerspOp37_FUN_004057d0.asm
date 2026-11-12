; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 0040706f
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004057d0
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0
    PUSH ESI                            ; 004057d1
    PUSH EBP                            ; 004057d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004057d3
    LEA ESI,[EBX + 0x18]                ; 004057d7
    LEA EAX,[EBX + 0x8]                 ; 004057da
    PUSH EAX                            ; 004057dd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004057de
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 004057e3
    TEST EAX,EAX                        ; 004057e6
    JZ 0x00405835                       ; 004057e8
        ;   XREF to: 00405835 (CONDITIONAL_JUMP)  ; LAB_00405835
    CMP dword ptr [0x01c35e68],0x0      ; 004057ea | DAT_01c35e68
    JZ 0x00405871                       ; 004057f1
        ;   XREF to: 00405871 (CONDITIONAL_JUMP)  ; LAB_00405871
    CMP dword ptr [0x01c38b40],0x0      ; 004057f7 | DAT_01c38b40
    JNZ 0x00405850                      ; 004057fe
        ;   XREF to: 00405850 (CONDITIONAL_JUMP)  ; LAB_00405850
    CMP dword ptr [0x006141c0],0x20     ; 00405800 | DAT_006141c0
    JNZ 0x00405844                      ; 00405807
        ;   XREF to: 00405844 (CONDITIONAL_JUMP)  ; LAB_00405844
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405809 | DAT_01c35e6c
    MOV EBP,0xd                         ; 00405813
        ;   Label: LAB_00405813
    PUSH ESI                            ; 00405818
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405819
    MOV EAX,0x5                         ; 0040581c
    PUSH EDX                            ; 00405821
    MOV dword ptr [0x01c38b54],EBP      ; 00405822 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00405828 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040582d
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405832
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405835
        ;   Label: LAB_00405835
    LEA EAX,[EBX + 0x18]                ; 00405838
    SHL ESI,0x2                         ; 0040583b
    ADD EAX,ESI                         ; 0040583e
    POP EBP                             ; 00405840
    POP ESI                             ; 00405841
    POP EBX                             ; 00405842
    RET                                 ; 00405843
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405844 | DAT_01c35e6c
        ;   Label: LAB_00405844
    JMP 0x00405813                      ; 0040584e
        ;   XREF to: 00405813 (UNCONDITIONAL_JUMP)  ; LAB_00405813
    CMP dword ptr [0x006141c0],0x20     ; 00405850 | DAT_006141c0
        ;   Label: LAB_00405850
    JNZ 0x00405865                      ; 00405857
        ;   XREF to: 00405865 (CONDITIONAL_JUMP)  ; LAB_00405865
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405859 | DAT_01c35e6c
    JMP 0x00405813                      ; 00405863
        ;   XREF to: 00405813 (UNCONDITIONAL_JUMP)  ; LAB_00405813
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405865 | DAT_01c35e6c
        ;   Label: LAB_00405865
    JMP 0x00405813                      ; 0040586f
        ;   XREF to: 00405813 (UNCONDITIONAL_JUMP)  ; LAB_00405813
    CMP dword ptr [0x01c38b40],0x0      ; 00405871 | DAT_01c38b40
        ;   Label: LAB_00405871
    JNZ 0x004058ca                      ; 00405878
        ;   XREF to: 004058ca (CONDITIONAL_JUMP)  ; LAB_004058ca
    CMP dword ptr [0x006141c0],0x20     ; 0040587a | DAT_006141c0
    JNZ 0x004058be                      ; 00405881
        ;   XREF to: 004058be (CONDITIONAL_JUMP)  ; LAB_004058be
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405883 | DAT_01c35e6c
    MOV EBP,0x20d                       ; 0040588d
        ;   Label: LAB_0040588d
    PUSH ESI                            ; 00405892
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405893
    MOV EAX,0x5                         ; 00405896
    PUSH EDX                            ; 0040589b
    MOV dword ptr [0x01c38b54],EBP      ; 0040589c | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 004058a2 | DAT_01c38b58
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 004058a7
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004058ac
    MOV ESI,dword ptr [EBX + 0x4]       ; 004058af
    LEA EAX,[EBX + 0x18]                ; 004058b2
    SHL ESI,0x2                         ; 004058b5
    ADD EAX,ESI                         ; 004058b8
    POP EBP                             ; 004058ba
    POP ESI                             ; 004058bb
    POP EBX                             ; 004058bc
    RET                                 ; 004058bd
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004058be | DAT_01c35e6c
        ;   Label: LAB_004058be
    JMP 0x0040588d                      ; 004058c8
        ;   XREF to: 0040588d (UNCONDITIONAL_JUMP)  ; LAB_0040588d
    CMP dword ptr [0x006141c0],0x20     ; 004058ca | DAT_006141c0
        ;   Label: LAB_004058ca
    JNZ 0x004058df                      ; 004058d1
        ;   XREF to: 004058df (CONDITIONAL_JUMP)  ; LAB_004058df
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004058d3 | DAT_01c35e6c
    JMP 0x0040588d                      ; 004058dd
        ;   XREF to: 0040588d (UNCONDITIONAL_JUMP)  ; LAB_0040588d
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004058df | DAT_01c35e6c
        ;   Label: LAB_004058df
    JMP 0x0040588d                      ; 004058e9
        ;   XREF to: 0040588d (UNCONDITIONAL_JUMP)  ; LAB_0040588d

