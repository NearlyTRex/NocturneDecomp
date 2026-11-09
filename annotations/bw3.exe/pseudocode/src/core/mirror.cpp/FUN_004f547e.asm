; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_mirror_cpp_FUN_004f547e(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e29c0
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f547e
        ;   Label: core_mirror.cpp_FUN_004f547e
    PUSH EBX                            ; 004f5480
    PUSH ESI                            ; 004f5481
    PUSH EDI                            ; 004f5482
    SUB ESP,0x58                        ; 004f5483
    MOV ESI,dword ptr [ESP + 0x68]      ; 004f5486
    MOV EDX,dword ptr [0x005f2afc]      ; 004f548a | DAT_005f2afc
    LEA EBX,[ESP + 0x40]                ; 004f5490
    MOV EAX,ESI                         ; 004f5494
    MOV EDX,dword ptr [EDX]             ; 004f5496
    FLD float ptr [EAX]                 ; 004f5498
    FMUL float ptr [0x005e29c0]         ; 004f549a | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f54a0
    FLD float ptr [EAX + 0x4]           ; 004f54a2
    FMUL float ptr [0x005e29c0]         ; 004f54a5 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f54ab
    FLD float ptr [EAX + 0x8]           ; 004f54ae
    FMUL float ptr [0x005e29c0]         ; 004f54b1 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f54b7
    LEA EAX,[ESP + 0x40]                ; 004f54ba
    PUSH EAX                            ; 004f54be
    PUSH EDX                            ; 004f54bf
    CALL engine_special.cpp_FUN_0056356c ; 004f54c0
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 004f54c5 | DAT_005f2afc
    LEA EBX,[ESP + 0x3c]                ; 004f54ca
    ADD ESP,0x8                         ; 004f54ce
    MOV EDX,dword ptr [EAX]             ; 004f54d1
    LEA EAX,[ESI + 0xc]                 ; 004f54d3
    FLD float ptr [EAX]                 ; 004f54d6
    FMUL float ptr [0x005e29c0]         ; 004f54d8 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f54de
    FLD float ptr [EAX + 0x4]           ; 004f54e0
    FMUL float ptr [0x005e29c0]         ; 004f54e3 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f54e9
    FLD float ptr [EAX + 0x8]           ; 004f54ec
    FMUL float ptr [0x005e29c0]         ; 004f54ef | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f54f5
    LEA EAX,[ESP + 0x34]                ; 004f54f8
    PUSH EAX                            ; 004f54fc
    ADD EDX,0x30                        ; 004f54fd
    PUSH EDX                            ; 004f5500
    CALL engine_special.cpp_FUN_0056356c ; 004f5501
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 004f5506
    MOV EDX,dword ptr [0x005f2afc]      ; 004f550a | DAT_005f2afc
    ADD ESP,0x8                         ; 004f5510
    LEA EAX,[ESI + 0x18]                ; 004f5513
    MOV EDX,dword ptr [EDX]             ; 004f5516
    FLD float ptr [EAX]                 ; 004f5518
    FMUL float ptr [0x005e29c0]         ; 004f551a | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f5520
    FLD float ptr [EAX + 0x4]           ; 004f5522
    FMUL float ptr [0x005e29c0]         ; 004f5525 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f552b
    FLD float ptr [EAX + 0x8]           ; 004f552e
    FMUL float ptr [0x005e29c0]         ; 004f5531 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f5537
    LEA EAX,[ESP + 0x28]                ; 004f553a
    PUSH EAX                            ; 004f553e
    ADD EDX,0x60                        ; 004f553f
    PUSH EDX                            ; 004f5542
    CALL engine_special.cpp_FUN_0056356c ; 004f5543
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 004f5548 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 004f554d
    ADD ESP,0x8                         ; 004f554f
    LEA EDX,[EAX + 0x90]                ; 004f5552
    LEA EBX,[ESP + 0x4c]                ; 004f5558
    LEA EAX,[ESI + 0x24]                ; 004f555c
    FLD float ptr [EAX]                 ; 004f555f
    FMUL float ptr [0x005e29c0]         ; 004f5561 | DAT_005e29c0
    FISTP dword ptr [EBX]               ; 004f5567
    FLD float ptr [EAX + 0x4]           ; 004f5569
    FMUL float ptr [0x005e29c0]         ; 004f556c | DAT_005e29c0
    FISTP dword ptr [EBX + 0x4]         ; 004f5572
    FLD float ptr [EAX + 0x8]           ; 004f5575
    FMUL float ptr [0x005e29c0]         ; 004f5578 | DAT_005e29c0
    FISTP dword ptr [EBX + 0x8]         ; 004f557e
    LEA EAX,[ESP + 0x4c]                ; 004f5581
    PUSH EAX                            ; 004f5585
    PUSH EDX                            ; 004f5586
    CALL engine_special.cpp_FUN_0056356c ; 004f5587
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f558c
    PUSH 0x1                            ; 004f558f
    MOV EDX,dword ptr [0x005f2afc]      ; 004f5591 | DAT_005f2afc
    PUSH EDX                            ; 004f5597
    XOR EBX,EBX                         ; 004f5598
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 004f559a
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    MOV ECX,0x4                         ; 004f559f
    MOV EDX,0x1                         ; 004f55a4
    LEA EAX,[ESP + 0x8]                 ; 004f55a9
    ADD ESP,0x8                         ; 004f55ad
    MOV ESI,dword ptr [0x005f2afc]      ; 004f55b0 | DAT_005f2afc
    MOV dword ptr [ESP + 0x4],ECX       ; 004f55b6
    MOV dword ptr [ESP + 0x14],EBX      ; 004f55ba
    MOV dword ptr [ESP + 0x10],EBX      ; 004f55be
    MOV dword ptr [ESP + 0xc],EBX       ; 004f55c2
    MOV dword ptr [ESP + 0x8],EBX       ; 004f55c6
    MOV dword ptr [ESP + 0x18],EBX      ; 004f55ca
    MOV dword ptr [ESP + 0x1c],EDX      ; 004f55ce
    PUSH EAX                            ; 004f55d2
    MOV ECX,0x2                         ; 004f55d3
    MOV EBX,0x3                         ; 004f55d8
    PUSH ESI                            ; 004f55dd
    MOV dword ptr [ESP + 0x28],ECX      ; 004f55de
    MOV dword ptr [ESP + 0x2c],EBX      ; 004f55e2
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 ; 004f55e6
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004f55eb
    PUSH 0x1                            ; 004f55ee
    MOV EDI,dword ptr [0x005f2afc]      ; 004f55f0 | DAT_005f2afc
    PUSH EDI                            ; 004f55f6
    MOV EBX,EAX                         ; 004f55f7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 004f55f9
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004f55fe
    MOV EAX,EBX                         ; 004f5601
    ADD ESP,0x58                        ; 004f5603
    POP EDI                             ; 004f5606
    POP ESI                             ; 004f5607
    POP EBX                             ; 004f5608
    RET                                 ; 004f5609

