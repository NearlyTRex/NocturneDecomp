; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[4]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30 at 00407bd7
;   engine_3d.c_clipAndDrawLine3D_FUN_00407e30 at 00407ed7
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0 at 0043a4db
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 at 0046d647
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004392c0
        ;   Label: engine_clipper.c_interpolateVertexTopClip_FUN_004392c0
    PUSH ESI                            ; 004392c1
    PUSH EDI                            ; 004392c2
    PUSH EBP                            ; 004392c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004392c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004392c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004392cc
    MOV EBX,dword ptr [EDI + 0x4]       ; 004392d0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004392d3
    MOV EAX,dword ptr [ECX + 0x4]       ; 004392d6
    MOV EBP,dword ptr [EDI + 0x8]       ; 004392d9
    ADD EBX,EDX                         ; 004392dc
    ADD EAX,EBP                         ; 004392de
    SUB EBX,EAX                         ; 004392e0
    MOV EAX,EDX                         ; 004392e2
    MOV EDX,dword ptr [ECX + 0x4]       ; 004392e4
    SUB EAX,EDX                         ; 004392e7
    MOV EDX,EAX                         ; 004392e9
    CMP EDX,EBX                         ; 004392eb
    JGE 0x00439301                      ; 004392ed
        ;   XREF to: 00439301 (CONDITIONAL_JUMP)  ; LAB_00439301
    NEG EBX                             ; 004392ef
    CMP EDX,EBX                         ; 004392f1
    JLE 0x00439308                      ; 004392f3
        ;   XREF to: 00439308 (CONDITIONAL_JUMP)  ; LAB_00439308
    NEG EBX                             ; 004392f5
    XOR EAX,EAX                         ; 004392f7
    SAR EDX,0x1                         ; 004392f9
    RCR EAX,0x1                         ; 004392fb
    IDIV EBX                            ; 004392fd
    JMP 0x0043930f                      ; 004392ff
        ;   XREF to: 0043930f (UNCONDITIONAL_JUMP)  ; LAB_0043930f
    MOV EAX,0x7fffffff                  ; 00439301
        ;   Label: LAB_00439301
    JMP 0x0043930f                      ; 00439306
        ;   XREF to: 0043930f (UNCONDITIONAL_JUMP)  ; LAB_0043930f
    NEG EBX                             ; 00439308
        ;   Label: LAB_00439308
    MOV EAX,0x80000000                  ; 0043930a
    MOV EBX,EAX                         ; 0043930f
        ;   Label: LAB_0043930f
    MOV EBP,dword ptr [ECX + 0x8]       ; 00439311
    MOV EAX,dword ptr [EDI + 0x8]       ; 00439314
    MOV EDX,EBX                         ; 00439317
    SUB EAX,EBP                         ; 00439319
    IMUL EDX                            ; 0043931b
    ADD EAX,EAX                         ; 0043931d
    ADC EDX,EDX                         ; 0043931f
    MOV EAX,EDX                         ; 00439321
    MOV EDX,dword ptr [ECX + 0x8]       ; 00439323
    ADD EAX,EDX                         ; 00439326
    MOV dword ptr [ESI + 0x8],EAX       ; 00439328
    MOV dword ptr [ESI + 0x4],EAX       ; 0043932b
    MOV EAX,dword ptr [EDI]             ; 0043932e
    SUB EAX,dword ptr [ECX]             ; 00439330
    MOV EDX,EBX                         ; 00439332
    IMUL EDX                            ; 00439334
    ADD EAX,EAX                         ; 00439336
    ADC EDX,EDX                         ; 00439338
    MOV EAX,EDX                         ; 0043933a
    MOV EDX,dword ptr [ECX]             ; 0043933c
    ADD EAX,EDX                         ; 0043933e
    MOV dword ptr [ESI],EAX             ; 00439340
    MOV EAX,dword ptr [EDI + 0x20]      ; 00439342
    MOV EBP,dword ptr [ECX + 0x20]      ; 00439345
    MOV EDX,EBX                         ; 00439348
    SUB EAX,EBP                         ; 0043934a
    IMUL EDX                            ; 0043934c
    ADD EAX,EAX                         ; 0043934e
    ADC EDX,EDX                         ; 00439350
    MOV EAX,EDX                         ; 00439352
    MOV EDX,dword ptr [ECX + 0x20]      ; 00439354
    ADD EAX,EDX                         ; 00439357
    MOV dword ptr [ESI + 0x20],EAX      ; 00439359
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043935c
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043935f
    MOV EDX,EBX                         ; 00439362
    IMUL EDX                            ; 00439364
    ADD EAX,EAX                         ; 00439366
    ADC EDX,EDX                         ; 00439368
    MOV EAX,EDX                         ; 0043936a
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043936c
    ADD EAX,EDX                         ; 0043936f
    MOV dword ptr [ESI + 0x2c],EAX      ; 00439371
    MOV EAX,dword ptr [EDI + 0x18]      ; 00439374
    MOV EBP,dword ptr [ECX + 0x18]      ; 00439377
    MOV EDX,EBX                         ; 0043937a
    SUB EAX,EBP                         ; 0043937c
    IMUL EDX                            ; 0043937e
    ADD EAX,EAX                         ; 00439380
    ADC EDX,EDX                         ; 00439382
    MOV EAX,EDX                         ; 00439384
    MOV EDX,dword ptr [ECX + 0x18]      ; 00439386
    ADD EAX,EDX                         ; 00439389
    MOV dword ptr [ESI + 0x18],EAX      ; 0043938b
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043938e
    SUB EAX,dword ptr [ECX + 0x1c]      ; 00439391
    MOV EDX,EBX                         ; 00439394
    IMUL EDX                            ; 00439396
    ADD EAX,EAX                         ; 00439398
    ADC EDX,EDX                         ; 0043939a
    MOV EAX,EDX                         ; 0043939c
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043939e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 004393a1
    ADD EDX,EAX                         ; 004393a8
    MOV dword ptr [ESI + 0x1c],EDX      ; 004393aa
    POP EBP                             ; 004393ad
    POP EDI                             ; 004393ae
    POP ESI                             ; 004393af
    POP EBX                             ; 004393b0
    RET                                 ; 004393b1

