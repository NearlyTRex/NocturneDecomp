; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[3]:
;   engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840 at 00437900
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 0043822c
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 00438a24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437360
        ;   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
    PUSH ESI                            ; 00437361
    PUSH EDI                            ; 00437362
    PUSH EBP                            ; 00437363
    MOV ESI,dword ptr [ESP + 0x14]      ; 00437364
    MOV EBP,dword ptr [ESP + 0x18]      ; 00437368
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043736c
    MOV ECX,dword ptr [ESI]             ; 00437370
    ADD ECX,dword ptr [ESI + 0x8]       ; 00437372
    MOV EAX,dword ptr [EBP]             ; 00437375
    MOV EBX,ECX                         ; 00437378
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043737a
    SUB EBX,EAX                         ; 0043737d
    SUB EBX,EDX                         ; 0043737f
    MOV EDX,ECX                         ; 00437381
    CMP EDX,EBX                         ; 00437383
    JGE 0x00437399                      ; 00437385 | LAB_00437399
        ;   XREF to: 00437399 (CONDITIONAL_JUMP)
    NEG EBX                             ; 00437387
    CMP EDX,EBX                         ; 00437389
    JLE 0x004373a0                      ; 0043738b | LAB_004373a0
        ;   XREF to: 004373a0 (CONDITIONAL_JUMP)
    NEG EBX                             ; 0043738d
    XOR EAX,EAX                         ; 0043738f
    SAR EDX,0x1                         ; 00437391
    RCR EAX,0x1                         ; 00437393
    IDIV EBX                            ; 00437395
    JMP 0x004373a7                      ; 00437397 | LAB_004373a7
        ;   XREF to: 004373a7 (UNCONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 00437399
        ;   Label: LAB_00437399
    JMP 0x004373a7                      ; 0043739e | LAB_004373a7
        ;   XREF to: 004373a7 (UNCONDITIONAL_JUMP)
    NEG EBX                             ; 004373a0
        ;   Label: LAB_004373a0
    MOV EAX,0x80000000                  ; 004373a2
    MOV ECX,EAX                         ; 004373a7
        ;   Label: LAB_004373a7
    MOV EBX,dword ptr [ESI + 0x8]       ; 004373a9
    MOV EAX,dword ptr [EBP + 0x8]       ; 004373ac
    MOV EDX,ECX                         ; 004373af
    SUB EAX,EBX                         ; 004373b1
    IMUL EDX                            ; 004373b3
    ADD EAX,EAX                         ; 004373b5
    ADC EDX,EDX                         ; 004373b7
    MOV EAX,EDX                         ; 004373b9
    MOV EBX,dword ptr [ESI + 0x8]       ; 004373bb
    ADD EAX,EBX                         ; 004373be
    MOV dword ptr [EDI + 0x8],EAX       ; 004373c0
    MOV dword ptr [EDI],EAX             ; 004373c3
    NEG EAX                             ; 004373c5
    MOV dword ptr [EDI],EAX             ; 004373c7
    MOV EAX,dword ptr [EBP + 0x4]       ; 004373c9
    SUB EAX,dword ptr [ESI + 0x4]       ; 004373cc
    MOV EDX,ECX                         ; 004373cf
    IMUL EDX                            ; 004373d1
    ADD EAX,EAX                         ; 004373d3
    ADC EDX,EDX                         ; 004373d5
    MOV EAX,EDX                         ; 004373d7
    MOV EBX,dword ptr [ESI + 0x4]       ; 004373d9
    MOV dword ptr [EDI + 0x10],0xffffffff ; 004373dc
    ADD EAX,EBX                         ; 004373e3
    MOV dword ptr [EDI + 0x4],EAX       ; 004373e5
    MOV EAX,dword ptr [EBP + 0x20]      ; 004373e8
    MOV EBX,dword ptr [ESI + 0x20]      ; 004373eb
    MOV EDX,ECX                         ; 004373ee
    SUB EAX,EBX                         ; 004373f0
    IMUL EDX                            ; 004373f2
    ADD EAX,EAX                         ; 004373f4
    ADC EDX,EDX                         ; 004373f6
    MOV EAX,EDX                         ; 004373f8
    MOV EBX,dword ptr [ESI + 0x20]      ; 004373fa
    ADD EAX,EBX                         ; 004373fd
    MOV dword ptr [EDI + 0x20],EAX      ; 004373ff
    MOV EAX,dword ptr [EBP + 0x24]      ; 00437402
    SUB EAX,dword ptr [ESI + 0x24]      ; 00437405
    MOV EDX,ECX                         ; 00437408
    IMUL EDX                            ; 0043740a
    ADD EAX,EAX                         ; 0043740c
    ADC EDX,EDX                         ; 0043740e
    MOV EAX,EDX                         ; 00437410
    MOV EBX,dword ptr [ESI + 0x24]      ; 00437412
    ADD EAX,EBX                         ; 00437415
    MOV dword ptr [EDI + 0x24],EAX      ; 00437417
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043741a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043741d
    MOV EDX,ECX                         ; 00437420
    SUB EAX,EBX                         ; 00437422
    IMUL EDX                            ; 00437424
    ADD EAX,EAX                         ; 00437426
    ADC EDX,EDX                         ; 00437428
    MOV EAX,EDX                         ; 0043742a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043742c
    ADD EAX,EBX                         ; 0043742f
    MOV dword ptr [EDI + 0x28],EAX      ; 00437431
    MOV EAX,dword ptr [EBP + 0x18]      ; 00437434
    SUB EAX,dword ptr [ESI + 0x18]      ; 00437437
    MOV EDX,ECX                         ; 0043743a
    IMUL EDX                            ; 0043743c
    ADD EAX,EAX                         ; 0043743e
    ADC EDX,EDX                         ; 00437440
    MOV EAX,EDX                         ; 00437442
    MOV EBX,dword ptr [ESI + 0x18]      ; 00437444
    ADD EBX,EAX                         ; 00437447
    MOV dword ptr [EDI + 0x18],EBX      ; 00437449
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043744c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043744f
    MOV EDX,ECX                         ; 00437452
    SUB EAX,EBX                         ; 00437454
    IMUL EDX                            ; 00437456
    ADD EAX,EAX                         ; 00437458
    ADC EDX,EDX                         ; 0043745a
    MOV EAX,EDX                         ; 0043745c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043745e
    ADD EBX,EAX                         ; 00437461
    MOV dword ptr [EDI + 0x1c],EBX      ; 00437463
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00437466
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00437469
    MOV EDX,ECX                         ; 0043746c
    SUB EAX,EBP                         ; 0043746e
    IMUL EDX                            ; 00437470
    ADD EAX,EAX                         ; 00437472
    ADC EDX,EDX                         ; 00437474
    MOV EAX,EDX                         ; 00437476
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00437478
    ADD ECX,EAX                         ; 0043747b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0043747d
    POP EBP                             ; 00437480
    POP EDI                             ; 00437481
    POP ESI                             ; 00437482
    POP EBX                             ; 00437483
    RET                                 ; 00437484

