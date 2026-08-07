; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00407880(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_005b762c
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00407880
        ;   Label: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00407880
    MOV EAX,dword ptr [ESP + 0x8]       ; 00407881
    ADD EAX,0x8                         ; 00407885
    MOV EBP,dword ptr [ESP + 0x8]       ; 00407888
    PUSH EAX                            ; 0040788c
    ADD EBP,0x18                        ; 0040788d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00407890
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407895
    TEST EAX,EAX                        ; 00407898
    JZ 0x004079f5                       ; 0040789a
        ;   XREF to: 004079f5 (CONDITIONAL_JUMP)  ; LAB_004079f5
    CMP dword ptr [0x01c03948],0x0      ; 004078a0 | g_MMXSupported
    JNZ 0x0040797b                      ; 004078a7
        ;   XREF to: 0040797b (CONDITIONAL_JUMP)  ; LAB_0040797b
    CMP dword ptr [0x005b7624],0x20     ; 004078ad | g_BitsPerPixel
    JNZ 0x0040796c                      ; 004078b4
        ;   XREF to: 0040796c (CONDITIONAL_JUMP)  ; LAB_0040796c
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004078ba | g_ScanlineRenderFunc
    PUSH EDI                            ; 004078c4
        ;   Label: LAB_004078c4
    PUSH ESI                            ; 004078c5
    PUSH EBX                            ; 004078c6
    MOV ECX,0xc3                        ; 004078c7
    PUSH 0xffff                         ; 004078cc
    MOV EBX,0x1                         ; 004078d1
    XOR EDI,EDI                         ; 004078d6
    XOR ESI,ESI                         ; 004078d8
    MOV dword ptr [0x01c039a0],ECX      ; 004078da | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004078e0
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 004078e5
    MOV dword ptr [0x01c039a4],EBX      ; 004078e8 | g_VertexPreprocessMode
    MOV ECX,EBP                         ; 004078ee
    XOR EBX,EBX                         ; 004078f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004078f2
        ;   Label: LAB_004078f2
    MOV EAX,dword ptr [EAX + 0x4]       ; 004078f6
    LEA EAX,[EAX + EAX*0x2]             ; 004078f9
    CMP ESI,EAX                         ; 004078fc
    JGE 0x004079e4                      ; 004078fe
        ;   XREF to: 004079e4 (CONDITIONAL_JUMP)  ; LAB_004079e4
    MOV EAX,dword ptr [ECX]             ; 00407904
    MOV dword ptr [EBX + 0x6b029c],EAX  ; 00407906 | DAT_006b029c | DAT_006b02a0
    MOV EBP,dword ptr [0x005b762c]      ; 0040790c | DAT_005b762c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00407912
    MOV EDX,dword ptr [ECX + 0x8]       ; 00407915
    CMP EBP,0x40                        ; 00407918
    JG 0x004079a9                       ; 0040791b
        ;   XREF to: 004079a9 (CONDITIONAL_JUMP)  ; LAB_004079a9
    CMP EAX,0x40000                     ; 00407921
    JGE 0x0040792d                      ; 00407926
        ;   XREF to: 0040792d (CONDITIONAL_JUMP)  ; LAB_0040792d
    MOV EAX,0x40000                     ; 00407928
    CMP EDX,0x40000                     ; 0040792d
        ;   Label: LAB_0040792d
    JGE 0x0040793a                      ; 00407933
        ;   XREF to: 0040793a (CONDITIONAL_JUMP)  ; LAB_0040793a
    MOV EDX,0x40000                     ; 00407935
    CMP EAX,0xfbffff                    ; 0040793a
        ;   Label: LAB_0040793a
    JLE 0x00407946                      ; 0040793f
        ;   XREF to: 00407946 (CONDITIONAL_JUMP)  ; LAB_00407946
    MOV EAX,0xfbffff                    ; 00407941
    CMP EDX,0xfbffff                    ; 00407946
        ;   Label: LAB_00407946
    JG 0x004079a2                       ; 0040794c
        ;   XREF to: 004079a2 (CONDITIONAL_JUMP)  ; LAB_004079a2
    IMUL EBP,dword ptr [ECX],0x30       ; 0040794e
        ;   Label: LAB_0040794e
    MOV dword ptr [EBP + 0x5c502c],EAX  ; 00407951 | DAT_005c502c
    IMUL EAX,dword ptr [ECX],0x30       ; 00407957
    ADD EBX,0x4                         ; 0040795a
    INC EDI                             ; 0040795d
    ADD ESI,0x3                         ; 0040795e
    ADD ECX,0xc                         ; 00407961
    MOV dword ptr [EAX + 0x5c5030],EDX  ; 00407964 | DAT_005c5030
    JMP 0x004078f2                      ; 0040796a
        ;   XREF to: 004078f2 (UNCONDITIONAL_JUMP)  ; LAB_004078f2
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040796c | g_ScanlineRenderFunc
        ;   Label: LAB_0040796c
    JMP 0x004078c4                      ; 00407976
        ;   XREF to: 004078c4 (UNCONDITIONAL_JUMP)  ; LAB_004078c4
    CMP dword ptr [0x005b7624],0x20     ; 0040797b | g_BitsPerPixel
        ;   Label: LAB_0040797b
    JNZ 0x00407993                      ; 00407982
        ;   XREF to: 00407993 (CONDITIONAL_JUMP)  ; LAB_00407993
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407984 | g_ScanlineRenderFunc
    JMP 0x004078c4                      ; 0040798e
        ;   XREF to: 004078c4 (UNCONDITIONAL_JUMP)  ; LAB_004078c4
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407993 | g_ScanlineRenderFunc
        ;   Label: LAB_00407993
    JMP 0x004078c4                      ; 0040799d
        ;   XREF to: 004078c4 (UNCONDITIONAL_JUMP)  ; LAB_004078c4
    MOV EDX,0xfbffff                    ; 004079a2
        ;   Label: LAB_004079a2
    JMP 0x0040794e                      ; 004079a7
        ;   XREF to: 0040794e (UNCONDITIONAL_JUMP)  ; LAB_0040794e
    CMP EAX,0x10000                     ; 004079a9
        ;   Label: LAB_004079a9
    JGE 0x004079b5                      ; 004079ae
        ;   XREF to: 004079b5 (CONDITIONAL_JUMP)  ; LAB_004079b5
    MOV EAX,0x10000                     ; 004079b0
    CMP EDX,0x10000                     ; 004079b5
        ;   Label: LAB_004079b5
    JGE 0x004079c2                      ; 004079bb
        ;   XREF to: 004079c2 (CONDITIONAL_JUMP)  ; LAB_004079c2
    MOV EDX,0x10000                     ; 004079bd
    CMP EAX,0xfeffff                    ; 004079c2
        ;   Label: LAB_004079c2
    JLE 0x004079ce                      ; 004079c7
        ;   XREF to: 004079ce (CONDITIONAL_JUMP)  ; LAB_004079ce
    MOV EAX,0xfeffff                    ; 004079c9
    CMP EDX,0xfeffff                    ; 004079ce
        ;   Label: LAB_004079ce
    JLE 0x0040794e                      ; 004079d4
        ;   XREF to: 0040794e (CONDITIONAL_JUMP)  ; LAB_0040794e
    MOV EDX,0xfeffff                    ; 004079da
    JMP 0x0040794e                      ; 004079df
        ;   XREF to: 0040794e (UNCONDITIONAL_JUMP)  ; LAB_0040794e
    PUSH 0x6b029c                       ; 004079e4 | DAT_006b029c
        ;   Label: LAB_004079e4
    PUSH EDI                            ; 004079e9
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 004079ea
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004079ef
    POP EBX                             ; 004079f2
    POP ESI                             ; 004079f3
    POP EDI                             ; 004079f4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004079f5
        ;   Label: LAB_004079f5
    MOV EDX,dword ptr [EDX + 0x4]       ; 004079f9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004079fc
    SUB EAX,EDX                         ; 00407a03
    MOV EDX,dword ptr [ESP + 0x8]       ; 00407a05
    SHL EAX,0x2                         ; 00407a09
    ADD EDX,0x18                        ; 00407a0c
    ADD EAX,EDX                         ; 00407a0f
    POP EBP                             ; 00407a11
    RET                                 ; 00407a12

