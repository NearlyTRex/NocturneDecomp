; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClip_FUN_00430650(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 at 00407d01
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 at 00408001
;   engine_clipper.c_clipPolygonRightPlane_FUN_00430b70 at 00430c31
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 004318d1
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 at 0046ba04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430650
        ;   Label: engine_clipper.c_interpolateVertexRightClip_FUN_00430650
    PUSH ESI                            ; 00430651
    PUSH EDI                            ; 00430652
    PUSH EBP                            ; 00430653
    MOV ECX,dword ptr [ESP + 0x14]      ; 00430654
    MOV EDI,dword ptr [ESP + 0x18]      ; 00430658
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043065c
    MOV EBX,dword ptr [EDI]             ; 00430660
    MOV EDX,dword ptr [ECX + 0x8]       ; 00430662
    MOV EAX,dword ptr [ECX]             ; 00430665
    MOV EBP,dword ptr [EDI + 0x8]       ; 00430667
    ADD EBX,EDX                         ; 0043066a
    ADD EAX,EBP                         ; 0043066c
    SUB EBX,EAX                         ; 0043066e
    MOV EAX,EDX                         ; 00430670
    MOV EDX,dword ptr [ECX]             ; 00430672
    SUB EAX,EDX                         ; 00430674
    MOV EDX,EAX                         ; 00430676
    CMP EDX,EBX                         ; 00430678
    JGE 0x0043068e                      ; 0043067a
        ;   XREF to: 0043068e (CONDITIONAL_JUMP)  ; LAB_0043068e
    NEG EBX                             ; 0043067c
    CMP EDX,EBX                         ; 0043067e
    JLE 0x00430695                      ; 00430680
        ;   XREF to: 00430695 (CONDITIONAL_JUMP)  ; LAB_00430695
    NEG EBX                             ; 00430682
    XOR EAX,EAX                         ; 00430684
    SAR EDX,0x1                         ; 00430686
    RCR EAX,0x1                         ; 00430688
    IDIV EBX                            ; 0043068a
    JMP 0x0043069c                      ; 0043068c
        ;   XREF to: 0043069c (UNCONDITIONAL_JUMP)  ; LAB_0043069c
    MOV EAX,0x7fffffff                  ; 0043068e
        ;   Label: LAB_0043068e
    JMP 0x0043069c                      ; 00430693
        ;   XREF to: 0043069c (UNCONDITIONAL_JUMP)  ; LAB_0043069c
    NEG EBX                             ; 00430695
        ;   Label: LAB_00430695
    MOV EAX,0x80000000                  ; 00430697
    MOV EBX,EAX                         ; 0043069c
        ;   Label: LAB_0043069c
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043069e
    MOV EAX,dword ptr [EDI + 0x8]       ; 004306a1
    MOV EDX,EBX                         ; 004306a4
    SUB EAX,EBP                         ; 004306a6
    IMUL EDX                            ; 004306a8
    ADD EAX,EAX                         ; 004306aa
    ADC EDX,EDX                         ; 004306ac
    MOV EAX,EDX                         ; 004306ae
    MOV EDX,dword ptr [ECX + 0x8]       ; 004306b0
    ADD EAX,EDX                         ; 004306b3
    MOV dword ptr [ESI + 0x8],EAX       ; 004306b5
    MOV dword ptr [ESI],EAX             ; 004306b8
    MOV EAX,dword ptr [EDI + 0x4]       ; 004306ba
    SUB EAX,dword ptr [ECX + 0x4]       ; 004306bd
    MOV EDX,EBX                         ; 004306c0
    IMUL EDX                            ; 004306c2
    ADD EAX,EAX                         ; 004306c4
    ADC EDX,EDX                         ; 004306c6
    MOV EAX,EDX                         ; 004306c8
    MOV EDX,dword ptr [ECX + 0x4]       ; 004306ca
    ADD EAX,EDX                         ; 004306cd
    MOV dword ptr [ESI + 0x4],EAX       ; 004306cf
    MOV EAX,dword ptr [EDI + 0x18]      ; 004306d2
    MOV EBP,dword ptr [ECX + 0x18]      ; 004306d5
    MOV EDX,EBX                         ; 004306d8
    SUB EAX,EBP                         ; 004306da
    IMUL EDX                            ; 004306dc
    ADD EAX,EAX                         ; 004306de
    ADC EDX,EDX                         ; 004306e0
    MOV EAX,EDX                         ; 004306e2
    MOV EDX,dword ptr [ECX + 0x18]      ; 004306e4
    ADD EAX,EDX                         ; 004306e7
    MOV dword ptr [ESI + 0x18],EAX      ; 004306e9
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004306ec
    SUB EAX,dword ptr [ECX + 0x1c]      ; 004306ef
    MOV EDX,EBX                         ; 004306f2
    IMUL EDX                            ; 004306f4
    ADD EAX,EAX                         ; 004306f6
    ADC EDX,EDX                         ; 004306f8
    MOV EAX,EDX                         ; 004306fa
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004306fc
    ADD EAX,EDX                         ; 004306ff
    MOV dword ptr [ESI + 0x1c],EAX      ; 00430701
    MOV EAX,dword ptr [EDI + 0x20]      ; 00430704
    MOV EBP,dword ptr [ECX + 0x20]      ; 00430707
    MOV EDX,EBX                         ; 0043070a
    SUB EAX,EBP                         ; 0043070c
    IMUL EDX                            ; 0043070e
    ADD EAX,EAX                         ; 00430710
    ADC EDX,EDX                         ; 00430712
    MOV EAX,EDX                         ; 00430714
    MOV EDX,dword ptr [ECX + 0x20]      ; 00430716
    ADD EAX,EDX                         ; 00430719
    MOV dword ptr [ESI + 0x20],EAX      ; 0043071b
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043071e
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00430721
    MOV EDX,EBX                         ; 00430724
    IMUL EDX                            ; 00430726
    ADD EAX,EAX                         ; 00430728
    ADC EDX,EDX                         ; 0043072a
    MOV EAX,EDX                         ; 0043072c
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043072e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00430731
    ADD EDX,EAX                         ; 00430738
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043073a
    POP EBP                             ; 0043073d
    POP EDI                             ; 0043073e
    POP ESI                             ; 0043073f
    POP EBX                             ; 00430740
    RET                                 ; 00430741

