; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0 at 00407b31
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0 at 00407e31
;   engine_clipper.c_clipPolygonRightPlane_FUN_0043b9d0 at 0043ba91
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c731
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 at 00483f04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b4b0
        ;   Label: engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0
    PUSH ESI                            ; 0043b4b1
    PUSH EDI                            ; 0043b4b2
    PUSH EBP                            ; 0043b4b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043b4b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043b4b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043b4bc
    MOV EBX,dword ptr [EDI]             ; 0043b4c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043b4c2
    MOV EAX,dword ptr [ECX]             ; 0043b4c5
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043b4c7
    ADD EBX,EDX                         ; 0043b4ca
    ADD EAX,EBP                         ; 0043b4cc
    SUB EBX,EAX                         ; 0043b4ce
    MOV EAX,EDX                         ; 0043b4d0
    MOV EDX,dword ptr [ECX]             ; 0043b4d2
    SUB EAX,EDX                         ; 0043b4d4
    MOV EDX,EAX                         ; 0043b4d6
    CMP EDX,EBX                         ; 0043b4d8
    JGE 0x0043b4ee                      ; 0043b4da
        ;   XREF to: 0043b4ee (CONDITIONAL_JUMP)  ; LAB_0043b4ee
    NEG EBX                             ; 0043b4dc
    CMP EDX,EBX                         ; 0043b4de
    JLE 0x0043b4f5                      ; 0043b4e0
        ;   XREF to: 0043b4f5 (CONDITIONAL_JUMP)  ; LAB_0043b4f5
    NEG EBX                             ; 0043b4e2
    XOR EAX,EAX                         ; 0043b4e4
    SAR EDX,0x1                         ; 0043b4e6
    RCR EAX,0x1                         ; 0043b4e8
    IDIV EBX                            ; 0043b4ea
    JMP 0x0043b4fc                      ; 0043b4ec
        ;   XREF to: 0043b4fc (UNCONDITIONAL_JUMP)  ; LAB_0043b4fc
    MOV EAX,0x7fffffff                  ; 0043b4ee
        ;   Label: LAB_0043b4ee
    JMP 0x0043b4fc                      ; 0043b4f3
        ;   XREF to: 0043b4fc (UNCONDITIONAL_JUMP)  ; LAB_0043b4fc
    NEG EBX                             ; 0043b4f5
        ;   Label: LAB_0043b4f5
    MOV EAX,0x80000000                  ; 0043b4f7
    MOV EBX,EAX                         ; 0043b4fc
        ;   Label: LAB_0043b4fc
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043b4fe
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043b501
    MOV EDX,EBX                         ; 0043b504
    SUB EAX,EBP                         ; 0043b506
    IMUL EDX                            ; 0043b508
    ADD EAX,EAX                         ; 0043b50a
    ADC EDX,EDX                         ; 0043b50c
    MOV EAX,EDX                         ; 0043b50e
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043b510
    ADD EAX,EDX                         ; 0043b513
    MOV dword ptr [ESI + 0x8],EAX       ; 0043b515
    MOV dword ptr [ESI],EAX             ; 0043b518
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043b51a
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043b51d
    MOV EDX,EBX                         ; 0043b520
    IMUL EDX                            ; 0043b522
    ADD EAX,EAX                         ; 0043b524
    ADC EDX,EDX                         ; 0043b526
    MOV EAX,EDX                         ; 0043b528
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043b52a
    ADD EAX,EDX                         ; 0043b52d
    MOV dword ptr [ESI + 0x4],EAX       ; 0043b52f
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043b532
    MOV EBP,dword ptr [ECX + 0x18]      ; 0043b535
    MOV EDX,EBX                         ; 0043b538
    SUB EAX,EBP                         ; 0043b53a
    IMUL EDX                            ; 0043b53c
    ADD EAX,EAX                         ; 0043b53e
    ADC EDX,EDX                         ; 0043b540
    MOV EAX,EDX                         ; 0043b542
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043b544
    ADD EAX,EDX                         ; 0043b547
    MOV dword ptr [ESI + 0x18],EAX      ; 0043b549
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043b54c
    SUB EAX,dword ptr [ECX + 0x1c]      ; 0043b54f
    MOV EDX,EBX                         ; 0043b552
    IMUL EDX                            ; 0043b554
    ADD EAX,EAX                         ; 0043b556
    ADC EDX,EDX                         ; 0043b558
    MOV EAX,EDX                         ; 0043b55a
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043b55c
    ADD EAX,EDX                         ; 0043b55f
    MOV dword ptr [ESI + 0x1c],EAX      ; 0043b561
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043b564
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043b567
    MOV EDX,EBX                         ; 0043b56a
    SUB EAX,EBP                         ; 0043b56c
    IMUL EDX                            ; 0043b56e
    ADD EAX,EAX                         ; 0043b570
    ADC EDX,EDX                         ; 0043b572
    MOV EAX,EDX                         ; 0043b574
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043b576
    ADD EAX,EDX                         ; 0043b579
    MOV dword ptr [ESI + 0x20],EAX      ; 0043b57b
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043b57e
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043b581
    MOV EDX,EBX                         ; 0043b584
    IMUL EDX                            ; 0043b586
    ADD EAX,EAX                         ; 0043b588
    ADC EDX,EDX                         ; 0043b58a
    MOV EAX,EDX                         ; 0043b58c
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043b58e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043b591
    ADD EDX,EAX                         ; 0043b598
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043b59a
    POP EBP                             ; 0043b59d
    POP EDI                             ; 0043b59e
    POP ESI                             ; 0043b59f
    POP EBX                             ; 0043b5a0
    RET                                 ; 0043b5a1

