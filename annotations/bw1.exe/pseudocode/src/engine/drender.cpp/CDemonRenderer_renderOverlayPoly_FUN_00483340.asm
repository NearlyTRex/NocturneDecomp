; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_00483340(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483340
        ;   Label: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_00483340
    PUSH ESI                            ; 00483341
    PUSH EDI                            ; 00483342
    PUSH EBP                            ; 00483343
    SUB ESP,0x4                         ; 00483344
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483347
    CMP dword ptr [EBX + 0xc],0x0       ; 0048334b
    JNZ 0x004833ee                      ; 0048334f
        ;   XREF to: 004833ee (CONDITIONAL_JUMP)  ; LAB_004833ee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483355
        ;   Label: LAB_00483355
    MOV ECX,0xffffffff                  ; 00483359
    XOR EDX,EDX                         ; 0048335e
    MOV ESI,dword ptr [EAX + 0x4]       ; 00483360
    MOV dword ptr [ESP],ECX             ; 00483363
    TEST ESI,ESI                        ; 00483366
    JLE 0x004833a0                      ; 00483368
        ;   XREF to: 004833a0 (CONDITIONAL_JUMP)  ; LAB_004833a0
    XOR ECX,ECX                         ; 0048336a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048336c
        ;   Label: LAB_0048336c
    MOV dword ptr [ECX + 0x1bc1240],ESI ; 0048336f
    IMUL ESI,ESI,0x30                   ; 00483375
    MOV EDI,dword ptr [EBX]             ; 00483378
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048337a
    MOV EDI,dword ptr [ESP]             ; 0048337e
    ADD ECX,0x4                         ; 00483381
    AND EDI,ESI                         ; 00483384
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483386
    ADD EAX,0xc                         ; 0048338a
    INC EDX                             ; 0048338d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048338e
    MOV dword ptr [ESP],EDI             ; 00483391
    CMP EDX,EBP                         ; 00483394
    JL 0x0048336c                       ; 00483396
        ;   XREF to: 0048336c (CONDITIONAL_JUMP)  ; LAB_0048336c
    LEA EAX,[EAX]                       ; 00483398
    MOV EDX,EDX                         ; 0048339e
    TEST byte ptr [ESP + 0x3],0x80      ; 004833a0
        ;   Label: LAB_004833a0
    JZ 0x004833ad                       ; 004833a5
        ;   XREF to: 004833ad (CONDITIONAL_JUMP)  ; LAB_004833ad
    TEST byte ptr [ESP],0x1f            ; 004833a7
    JNZ 0x004833e6                      ; 004833ab
        ;   XREF to: 004833e6 (CONDITIONAL_JUMP)  ; LAB_004833e6
    CMP dword ptr [EBX + 0x4],0x0       ; 004833ad
        ;   Label: LAB_004833ad
    JZ 0x00483407                       ; 004833b1
        ;   XREF to: 00483407 (CONDITIONAL_JUMP)  ; LAB_00483407
    XOR ESI,ESI                         ; 004833b3
    MOV ECX,0x486e26                    ; 004833b5
    MOV dword ptr [0x01c51d14],ESI      ; 004833ba | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ESI      ; 004833c0 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 004833c6 | DAT_01c4f02c
    LEA EAX,[EAX]                       ; 004833cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004833d0
        ;   Label: LAB_004833d0
    PUSH 0x1bc1240                      ; 004833d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004833d9
    PUSH EDX                            ; 004833dc
    PUSH EBX                            ; 004833dd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004833de
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004833e3
    ADD ESP,0x4                         ; 004833e6
        ;   Label: LAB_004833e6
    POP EBP                             ; 004833e9
    POP EDI                             ; 004833ea
    POP ESI                             ; 004833eb
    POP EBX                             ; 004833ec
    RET                                 ; 004833ed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004833ee
        ;   Label: LAB_004833ee
    ADD EAX,0x8                         ; 004833f2
    PUSH EAX                            ; 004833f5
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004833f6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004833fb
    TEST EAX,EAX                        ; 004833fe
    JZ 0x004833e6                       ; 00483400
        ;   XREF to: 004833e6 (CONDITIONAL_JUMP)  ; LAB_004833e6
    JMP 0x00483355                      ; 00483402
        ;   XREF to: 00483355 (UNCONDITIONAL_JUMP)  ; LAB_00483355
    CMP dword ptr [0x0061b4a0],0x20     ; 00483407 | DAT_0061b4a0
        ;   Label: LAB_00483407
    JNZ 0x00483476                      ; 0048340e
        ;   XREF to: 00483476 (CONDITIONAL_JUMP)  ; LAB_00483476
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00483410 | DAT_01c4f02c
    MOV EDI,0x327                       ; 0048341a
        ;   Label: LAB_0048341a
    XOR EBP,EBP                         ; 0048341f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00483421
    MOV dword ptr [0x01c51d18],EBP      ; 00483424 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 0048342a | DAT_01c51d14
    TEST EAX,EAX                        ; 00483430
    JNZ 0x004833d0                      ; 00483432
        ;   XREF to: 004833d0 (CONDITIONAL_JUMP)  ; LAB_004833d0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483434
    MOV EDX,dword ptr [EAX + 0x4]       ; 00483438
    XOR ECX,ECX                         ; 0048343b
    TEST EDX,EDX                        ; 0048343d
    JLE 0x004833d0                      ; 0048343f
        ;   XREF to: 004833d0 (CONDITIONAL_JUMP)  ; LAB_004833d0
    XOR EDX,EDX                         ; 00483441
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 00483443
        ;   Label: LAB_00483443
    IMUL ESI,ESI,0x30                   ; 00483449
    MOV EDI,dword ptr [EBX]             ; 0048344c
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048344e
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00483451
    MOV EDI,dword ptr [EBX]             ; 00483455
    ADD EDI,ESI                         ; 00483457
    MOV ESI,dword ptr [EAX + 0x20]      ; 00483459
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048345c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048345f
    ADD EAX,0xc                         ; 00483463
    INC ECX                             ; 00483466
    MOV EBP,dword ptr [ESI + 0x4]       ; 00483467
    ADD EDX,0x4                         ; 0048346a
    CMP ECX,EBP                         ; 0048346d
    JL 0x00483443                       ; 0048346f
        ;   XREF to: 00483443 (CONDITIONAL_JUMP)  ; LAB_00483443
    JMP 0x004833d0                      ; 00483471
        ;   XREF to: 004833d0 (UNCONDITIONAL_JUMP)  ; LAB_004833d0
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00483476 | DAT_01c4f02c
        ;   Label: LAB_00483476
    JMP 0x0048341a                      ; 00483480
        ;   XREF to: 0048341a (UNCONDITIONAL_JUMP)  ; LAB_0048341a

