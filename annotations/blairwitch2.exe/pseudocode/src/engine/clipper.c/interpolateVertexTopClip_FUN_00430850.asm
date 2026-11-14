; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_00430850(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[4]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 at 00407d67
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 at 00408067
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 00431a4b
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 at 0046ba67
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430850
        ;   Label: engine_clipper.c_interpolateVertexTopClip_FUN_00430850
    PUSH ESI                            ; 00430851
    PUSH EDI                            ; 00430852
    PUSH EBP                            ; 00430853
    MOV ECX,dword ptr [ESP + 0x14]      ; 00430854
    MOV EDI,dword ptr [ESP + 0x18]      ; 00430858
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043085c
    MOV EBX,dword ptr [EDI + 0x4]       ; 00430860
    MOV EDX,dword ptr [ECX + 0x8]       ; 00430863
    MOV EAX,dword ptr [ECX + 0x4]       ; 00430866
    MOV EBP,dword ptr [EDI + 0x8]       ; 00430869
    ADD EBX,EDX                         ; 0043086c
    ADD EAX,EBP                         ; 0043086e
    SUB EBX,EAX                         ; 00430870
    MOV EAX,EDX                         ; 00430872
    MOV EDX,dword ptr [ECX + 0x4]       ; 00430874
    SUB EAX,EDX                         ; 00430877
    MOV EDX,EAX                         ; 00430879
    CMP EDX,EBX                         ; 0043087b
    JGE 0x00430891                      ; 0043087d
        ;   XREF to: 00430891 (CONDITIONAL_JUMP)  ; LAB_00430891
    NEG EBX                             ; 0043087f
    CMP EDX,EBX                         ; 00430881
    JLE 0x00430898                      ; 00430883
        ;   XREF to: 00430898 (CONDITIONAL_JUMP)  ; LAB_00430898
    NEG EBX                             ; 00430885
    XOR EAX,EAX                         ; 00430887
    SAR EDX,0x1                         ; 00430889
    RCR EAX,0x1                         ; 0043088b
    IDIV EBX                            ; 0043088d
    JMP 0x0043089f                      ; 0043088f
        ;   XREF to: 0043089f (UNCONDITIONAL_JUMP)  ; LAB_0043089f
    MOV EAX,0x7fffffff                  ; 00430891
        ;   Label: LAB_00430891
    JMP 0x0043089f                      ; 00430896
        ;   XREF to: 0043089f (UNCONDITIONAL_JUMP)  ; LAB_0043089f
    NEG EBX                             ; 00430898
        ;   Label: LAB_00430898
    MOV EAX,0x80000000                  ; 0043089a
    MOV EBX,EAX                         ; 0043089f
        ;   Label: LAB_0043089f
    MOV EBP,dword ptr [ECX + 0x8]       ; 004308a1
    MOV EAX,dword ptr [EDI + 0x8]       ; 004308a4
    MOV EDX,EBX                         ; 004308a7
    SUB EAX,EBP                         ; 004308a9
    IMUL EDX                            ; 004308ab
    ADD EAX,EAX                         ; 004308ad
    ADC EDX,EDX                         ; 004308af
    MOV EAX,EDX                         ; 004308b1
    MOV EDX,dword ptr [ECX + 0x8]       ; 004308b3
    ADD EAX,EDX                         ; 004308b6
    MOV dword ptr [ESI + 0x8],EAX       ; 004308b8
    MOV dword ptr [ESI + 0x4],EAX       ; 004308bb
    MOV EAX,dword ptr [EDI]             ; 004308be
    SUB EAX,dword ptr [ECX]             ; 004308c0
    MOV EDX,EBX                         ; 004308c2
    IMUL EDX                            ; 004308c4
    ADD EAX,EAX                         ; 004308c6
    ADC EDX,EDX                         ; 004308c8
    MOV EAX,EDX                         ; 004308ca
    MOV EDX,dword ptr [ECX]             ; 004308cc
    ADD EAX,EDX                         ; 004308ce
    MOV dword ptr [ESI],EAX             ; 004308d0
    MOV EAX,dword ptr [EDI + 0x20]      ; 004308d2
    MOV EBP,dword ptr [ECX + 0x20]      ; 004308d5
    MOV EDX,EBX                         ; 004308d8
    SUB EAX,EBP                         ; 004308da
    IMUL EDX                            ; 004308dc
    ADD EAX,EAX                         ; 004308de
    ADC EDX,EDX                         ; 004308e0
    MOV EAX,EDX                         ; 004308e2
    MOV EDX,dword ptr [ECX + 0x20]      ; 004308e4
    ADD EAX,EDX                         ; 004308e7
    MOV dword ptr [ESI + 0x20],EAX      ; 004308e9
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004308ec
    SUB EAX,dword ptr [ECX + 0x2c]      ; 004308ef
    MOV EDX,EBX                         ; 004308f2
    IMUL EDX                            ; 004308f4
    ADD EAX,EAX                         ; 004308f6
    ADC EDX,EDX                         ; 004308f8
    MOV EAX,EDX                         ; 004308fa
    MOV EDX,dword ptr [ECX + 0x2c]      ; 004308fc
    ADD EAX,EDX                         ; 004308ff
    MOV dword ptr [ESI + 0x2c],EAX      ; 00430901
    MOV EAX,dword ptr [EDI + 0x18]      ; 00430904
    MOV EBP,dword ptr [ECX + 0x18]      ; 00430907
    MOV EDX,EBX                         ; 0043090a
    SUB EAX,EBP                         ; 0043090c
    IMUL EDX                            ; 0043090e
    ADD EAX,EAX                         ; 00430910
    ADC EDX,EDX                         ; 00430912
    MOV EAX,EDX                         ; 00430914
    MOV EDX,dword ptr [ECX + 0x18]      ; 00430916
    ADD EAX,EDX                         ; 00430919
    MOV dword ptr [ESI + 0x18],EAX      ; 0043091b
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043091e
    SUB EAX,dword ptr [ECX + 0x1c]      ; 00430921
    MOV EDX,EBX                         ; 00430924
    IMUL EDX                            ; 00430926
    ADD EAX,EAX                         ; 00430928
    ADC EDX,EDX                         ; 0043092a
    MOV EAX,EDX                         ; 0043092c
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043092e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00430931
    ADD EDX,EAX                         ; 00430938
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043093a
    POP EBP                             ; 0043093d
    POP EDI                             ; 0043093e
    POP ESI                             ; 0043093f
    POP EBX                             ; 00430940
    RET                                 ; 00430941

