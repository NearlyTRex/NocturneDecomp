; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30 at 00407c0c
;   engine_3d.c_clipAndDrawLine3D_FUN_00407e30 at 00407f0c
;   engine_clipper.c_clipPolygonBottomPlane_FUN_0043999e at 00439a69
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0 at 0043a596
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 at 0046d67b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004393c0
        ;   Label: engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0
    PUSH ESI                            ; 004393c1
    PUSH EDI                            ; 004393c2
    PUSH EBP                            ; 004393c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004393c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004393c8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004393cc
    MOV EDX,dword ptr [ESI + 0x4]       ; 004393d0
    MOV ECX,dword ptr [ESI + 0x8]       ; 004393d3
    MOV EBX,dword ptr [EBP + 0x8]       ; 004393d6
    ADD EDX,ECX                         ; 004393d9
    MOV ECX,dword ptr [EBP + 0x4]       ; 004393db
    ADD ECX,EBX                         ; 004393de
    MOV EBX,EDX                         ; 004393e0
    SUB EBX,ECX                         ; 004393e2
    CMP EDX,EBX                         ; 004393e4
    JGE 0x004393fa                      ; 004393e6
        ;   XREF to: 004393fa (CONDITIONAL_JUMP)  ; LAB_004393fa
    NEG EBX                             ; 004393e8
    CMP EDX,EBX                         ; 004393ea
    JLE 0x00439401                      ; 004393ec
        ;   XREF to: 00439401 (CONDITIONAL_JUMP)  ; LAB_00439401
    NEG EBX                             ; 004393ee
    XOR EAX,EAX                         ; 004393f0
    SAR EDX,0x1                         ; 004393f2
    RCR EAX,0x1                         ; 004393f4
    IDIV EBX                            ; 004393f6
    JMP 0x00439408                      ; 004393f8
        ;   XREF to: 00439408 (UNCONDITIONAL_JUMP)  ; LAB_00439408
    MOV EAX,0x7fffffff                  ; 004393fa
        ;   Label: LAB_004393fa
    JMP 0x00439408                      ; 004393ff
        ;   XREF to: 00439408 (UNCONDITIONAL_JUMP)  ; LAB_00439408
    NEG EBX                             ; 00439401
        ;   Label: LAB_00439401
    MOV EAX,0x80000000                  ; 00439403
    MOV ECX,EAX                         ; 00439408
        ;   Label: LAB_00439408
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043940a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043940d
    SUB EDX,EAX                         ; 00439410
    MOV EAX,EDX                         ; 00439412
    MOV EDX,ECX                         ; 00439414
    IMUL EDX                            ; 00439416
    ADD EAX,EAX                         ; 00439418
    ADC EDX,EDX                         ; 0043941a
    MOV EAX,EDX                         ; 0043941c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043941e
    ADD EAX,EDX                         ; 00439421
    MOV dword ptr [EDI + 0x8],EAX       ; 00439423
    MOV EDX,EAX                         ; 00439426
    MOV dword ptr [EDI + 0x4],EAX       ; 00439428
    NEG EDX                             ; 0043942b
    MOV dword ptr [EDI + 0x4],EDX       ; 0043942d
    MOV EAX,dword ptr [EBP]             ; 00439430
    MOV EBX,dword ptr [ESI]             ; 00439433
    MOV EDX,ECX                         ; 00439435
    SUB EAX,EBX                         ; 00439437
    IMUL EDX                            ; 00439439
    ADD EAX,EAX                         ; 0043943b
    ADC EDX,EDX                         ; 0043943d
    MOV EAX,EDX                         ; 0043943f
    MOV EDX,dword ptr [ESI]             ; 00439441
    ADD EAX,EDX                         ; 00439443
    MOV dword ptr [EDI],EAX             ; 00439445
    MOV EDX,dword ptr [EBP + 0x20]      ; 00439447
    MOV EAX,dword ptr [ESI + 0x20]      ; 0043944a
    SUB EDX,EAX                         ; 0043944d
    MOV EAX,EDX                         ; 0043944f
    MOV EDX,ECX                         ; 00439451
    IMUL EDX                            ; 00439453
    ADD EAX,EAX                         ; 00439455
    ADC EDX,EDX                         ; 00439457
    MOV EAX,EDX                         ; 00439459
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043945b
    ADD EAX,EDX                         ; 0043945e
    MOV dword ptr [EDI + 0x20],EAX      ; 00439460
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00439463
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00439466
    MOV EDX,ECX                         ; 00439469
    SUB EAX,EBX                         ; 0043946b
    IMUL EDX                            ; 0043946d
    ADD EAX,EAX                         ; 0043946f
    ADC EDX,EDX                         ; 00439471
    MOV EAX,EDX                         ; 00439473
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00439475
    ADD EAX,EDX                         ; 00439478
    MOV dword ptr [EDI + 0x2c],EAX      ; 0043947a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043947d
    MOV EAX,dword ptr [ESI + 0x18]      ; 00439480
    SUB EDX,EAX                         ; 00439483
    MOV EAX,EDX                         ; 00439485
    MOV EDX,ECX                         ; 00439487
    IMUL EDX                            ; 00439489
    ADD EAX,EAX                         ; 0043948b
    ADC EDX,EDX                         ; 0043948d
    MOV EAX,EDX                         ; 0043948f
    MOV EDX,dword ptr [ESI + 0x18]      ; 00439491
    ADD EAX,EDX                         ; 00439494
    MOV dword ptr [EDI + 0x18],EAX      ; 00439496
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00439499
    SUB EAX,dword ptr [ESI + 0x1c]      ; 0043949c
    MOV EDX,ECX                         ; 0043949f
    IMUL EDX                            ; 004394a1
    ADD EAX,EAX                         ; 004394a3
    ADC EDX,EDX                         ; 004394a5
    MOV EAX,EDX                         ; 004394a7
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004394a9
    MOV dword ptr [EDI + 0x10],0xffffffff ; 004394ac
    ADD EAX,EDX                         ; 004394b3
    MOV dword ptr [EDI + 0x1c],EAX      ; 004394b5
    POP EBP                             ; 004394b8
    POP EDI                             ; 004394b9
    POP ESI                             ; 004394ba
    POP EBX                             ; 004394bb
    RET                                 ; 004394bc

