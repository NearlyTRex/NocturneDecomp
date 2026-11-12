; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407570(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   render_state_flags
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f024
;   undefined4 DAT_01c4f028
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407570
        ;   Label: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407570
    PUSH ESI                            ; 00407571
    PUSH EDI                            ; 00407572
    PUSH EBP                            ; 00407573
    MOV EDI,dword ptr [ESP + 0x14]      ; 00407574
    MOV EBX,dword ptr [ESP + 0x18]      ; 00407578
    LEA EAX,[EDI + 0x8]                 ; 0040757c
    PUSH EAX                            ; 0040757f
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00407580
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407585
    TEST EAX,EAX                        ; 00407588
    JZ 0x0040764a                       ; 0040758a
        ;   XREF to: 0040764a (CONDITIONAL_JUMP)  ; LAB_0040764a
    CMP dword ptr [0x01c51d00],0x0      ; 00407590 | DAT_01c51d00
    JNZ 0x0040765e                      ; 00407597
        ;   XREF to: 0040765e (CONDITIONAL_JUMP)  ; LAB_0040765e
    CMP dword ptr [0x0061b4a0],0x20     ; 0040759d | DAT_0061b4a0
    JNZ 0x0040764f                      ; 004075a4
        ;   XREF to: 0040764f (CONDITIONAL_JUMP)  ; LAB_0040764f
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004075aa | DAT_01c4f02c
    MOV dword ptr [0x01c51d14],EBX      ; 004075b4 | DAT_01c51d14
        ;   Label: LAB_004075b4
    TEST BL,0x10                        ; 004075ba
    JZ 0x004075d8                       ; 004075bd
        ;   XREF to: 004075d8 (CONDITIONAL_JUMP)  ; LAB_004075d8
    MOV ESI,dword ptr [EDI + 0x10]      ; 004075bf
    PUSH ESI                            ; 004075c2
    MOV EBP,dword ptr [EDI + 0xc]       ; 004075c3
    PUSH EBP                            ; 004075c6
    MOV EAX,dword ptr [EDI + 0x8]       ; 004075c7
    PUSH EAX                            ; 004075ca
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 004075cb
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004075d0
    MOV [0x01c4f024],EAX                ; 004075d3 | DAT_01c4f024
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004075d8
        ;   Label: LAB_004075d8
    TEST EDX,EDX                        ; 004075dc
    JZ 0x00407685                       ; 004075de
        ;   XREF to: 00407685 (CONDITIONAL_JUMP)  ; LAB_00407685
    MOV dword ptr [0x01c51d18],0x5      ; 004075e4 | DAT_01c51d18
    MOV EBP,dword ptr [EDI + 0x4]       ; 004075ee
        ;   Label: LAB_004075ee
    XOR ECX,ECX                         ; 004075f1
    TEST EBP,EBP                        ; 004075f3
    JLE 0x00407630                      ; 004075f5
        ;   XREF to: 00407630 (CONDITIONAL_JUMP)  ; LAB_00407630
    MOV EAX,EDI                         ; 004075f7
    XOR EDX,EDX                         ; 004075f9
    MOV EBX,dword ptr [EAX + 0x18]      ; 004075fb
        ;   Label: LAB_004075fb
    MOV dword ptr [EDX + 0x713a98],EBX  ; 004075fe
    IMUL EBX,EBX,0x30                   ; 00407604
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00407607
    MOV dword ptr [EBX + 0x62902c],ESI  ; 0040760a
    MOV ESI,dword ptr [EAX + 0x20]      ; 00407610
    ADD EDX,0x4                         ; 00407613
    MOV dword ptr [EBX + 0x629030],ESI  ; 00407616
    INC ECX                             ; 0040761c
    MOV EBX,dword ptr [EDI + 0x4]       ; 0040761d
    ADD EAX,0xc                         ; 00407620
    CMP ECX,EBX                         ; 00407623
    JL 0x004075fb                       ; 00407625
        ;   XREF to: 004075fb (CONDITIONAL_JUMP)  ; LAB_004075fb
    LEA EAX,[EAX]                       ; 00407627
    LEA EDX,[EDX]                       ; 0040762d
    CMP dword ptr [0x01c4f028],0x0      ; 00407630 | DAT_01c4f028
        ;   Label: LAB_00407630
    JZ 0x004076a4                       ; 00407637
        ;   XREF to: 004076a4 (CONDITIONAL_JUMP)  ; LAB_004076a4
    PUSH 0x713a98                       ; 00407639
    MOV EAX,dword ptr [EDI + 0x4]       ; 0040763e
    PUSH EAX                            ; 00407641
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00407642
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407647
    POP EBP                             ; 0040764a
        ;   Label: LAB_0040764a
    POP EDI                             ; 0040764b
    POP ESI                             ; 0040764c
    POP EBX                             ; 0040764d
    RET                                 ; 0040764e
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 0040764f | DAT_01c4f02c
        ;   Label: LAB_0040764f
    JMP 0x004075b4                      ; 00407659
        ;   XREF to: 004075b4 (UNCONDITIONAL_JUMP)  ; LAB_004075b4
    CMP dword ptr [0x0061b4a0],0x20     ; 0040765e | DAT_0061b4a0
        ;   Label: LAB_0040765e
    JNZ 0x00407676                      ; 00407665
        ;   XREF to: 00407676 (CONDITIONAL_JUMP)  ; LAB_00407676
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00407667 | DAT_01c4f02c
    JMP 0x004075b4                      ; 00407671
        ;   XREF to: 004075b4 (UNCONDITIONAL_JUMP)  ; LAB_004075b4
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00407676 | DAT_01c4f02c
        ;   Label: LAB_00407676
    JMP 0x004075b4                      ; 00407680
        ;   XREF to: 004075b4 (UNCONDITIONAL_JUMP)  ; LAB_004075b4
    TEST BL,0xc0                        ; 00407685
        ;   Label: LAB_00407685
    JZ 0x00407699                       ; 00407688
        ;   XREF to: 00407699 (CONDITIONAL_JUMP)  ; LAB_00407699
    MOV dword ptr [0x01c51d18],0x1      ; 0040768a | DAT_01c51d18
    JMP 0x004075ee                      ; 00407694
        ;   XREF to: 004075ee (UNCONDITIONAL_JUMP)  ; LAB_004075ee
    MOV dword ptr [0x01c51d18],EDX      ; 00407699 | DAT_01c51d18
        ;   Label: LAB_00407699
    JMP 0x004075ee                      ; 0040769f
        ;   XREF to: 004075ee (UNCONDITIONAL_JUMP)  ; LAB_004075ee
    PUSH 0x713a98                       ; 004076a4
        ;   Label: LAB_004076a4
    MOV EBP,dword ptr [EDI + 0x4]       ; 004076a9
    PUSH EBP                            ; 004076ac
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 004076ad
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004076b2
    POP EBP                             ; 004076b5
    POP EDI                             ; 004076b6
    POP ESI                             ; 004076b7
    POP EBX                             ; 004076b8
    RET                                 ; 004076b9

