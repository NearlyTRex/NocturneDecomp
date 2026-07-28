; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a8ed
;
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c5094
;   ... and 8 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489360
        ;   Label: core_fire.cpp_CTrail_render_FUN_00489360
    PUSH EBP                            ; 00489361
    SUB ESP,0x70                        ; 00489362
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00489365
    FLD float ptr [EBX + 0x10]          ; 00489369
    FLDZ                                ; 0048936c
    FCOMPP                              ; 0048936e
    FNSTSW AX                           ; 00489370
    SAHF                                ; 00489372
    JC 0x0048937b                       ; 00489373
        ;   XREF to: 0048937b (CONDITIONAL_JUMP)  ; LAB_0048937b
    ADD ESP,0x70                        ; 00489375
    POP EBP                             ; 00489378
    POP EBX                             ; 00489379
    RET                                 ; 0048937a
    PUSH EDI                            ; 0048937b
        ;   Label: LAB_0048937b
    PUSH ESI                            ; 0048937c
    MOV EDX,dword ptr [EBX + 0x20]      ; 0048937d
    PUSH EDX                            ; 00489380
    MOV ECX,dword ptr [0x005ae704]      ; 00489381 | DAT_005ae704
    PUSH ECX                            ; 00489387 | DAT_01b4d738
    MOV ESI,0x4                         ; 00489388
    MOV EBP,0x3                         ; 0048938d
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00489392
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00489397
    XOR EDI,EDI                         ; 0048939a
    MOV dword ptr [ESP + 0xc],ESI       ; 0048939c
    MOV dword ptr [ESP + 0x1c],EDI      ; 004893a0
    MOV dword ptr [ESP + 0x18],EDI      ; 004893a4
    MOV dword ptr [ESP + 0x14],EDI      ; 004893a8
    MOV dword ptr [ESP + 0x10],EDI      ; 004893ac
    MOV dword ptr [ESP + 0x20],EDI      ; 004893b0
    MOV dword ptr [ESP + 0x2c],EBP      ; 004893b4
    MOV ESI,0x1                         ; 004893b8
    MOV EDI,0x2                         ; 004893bd
    MOV dword ptr [ESP + 0x24],ESI      ; 004893c2
    MOV dword ptr [ESP + 0x28],EDI      ; 004893c6
    MOV EAX,[0x005ae704]                ; 004893ca | DAT_005ae704
    PUSH dword ptr [EBX + 0x14]         ; 004893cf
    PUSH EAX                            ; 004893d2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020 ; 004893d3
        ;   XREF to: 00461020 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 004893d8
    PUSH ESI                            ; 004893db
    MOV EDX,dword ptr [0x005ae704]      ; 004893dc | DAT_005ae704
    PUSH EDX                            ; 004893e2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004893e3
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004893e8
    PUSH EBX                            ; 004893eb
    MOV ECX,dword ptr [0x005ae704]      ; 004893ec | DAT_005ae704
    PUSH ECX                            ; 004893f2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004893f3
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004893f8
    LEA EAX,[ESP + 0x60]                ; 004893fb
    PUSH EAX                            ; 004893ff
    MOV ESI,dword ptr [0x005ae704]      ; 00489400 | DAT_005ae704
    PUSH ESI                            ; 00489406 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 00489407
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0048940c
    PUSH 0x0                            ; 0048940f
    LEA EAX,[ESP + 0x64]                ; 00489411
    PUSH EAX                            ; 00489415
    MOV EDI,dword ptr [0x005ae704]      ; 00489416 | DAT_005ae704
    PUSH EDI                            ; 0048941c | DAT_01b4d738
    XOR EBP,EBP                         ; 0048941d
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048941f
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00489424
    MOV dword ptr [ESP + 0x3c],EBP      ; 00489427
    MOV dword ptr [ESP + 0x40],EBP      ; 0048942b
    MOV dword ptr [ESP + 0x44],EBP      ; 0048942f
    FLD float ptr [EBX + 0xc]           ; 00489433
    FMUL float ptr [EBX + 0x14]         ; 00489436
    FSTP float ptr [ESP + 0x3c]         ; 00489439
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048943d
    LEA EBX,[ESP + 0x54]                ; 00489441
    MOV dword ptr [ESP + 0x40],EAX      ; 00489445
    LEA EAX,[ESP + 0x3c]                ; 00489449
    MOV EDX,dword ptr [0x005ae704]      ; 0048944d | DAT_005ae704
    FLD float ptr [EAX]                 ; 00489453
    FMUL float ptr [0x0059d1f8]         ; 00489455 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048945b
    FLD float ptr [EAX + 0x4]           ; 0048945d
    FMUL float ptr [0x0059d1f8]         ; 00489460 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489466
    FLD float ptr [EAX + 0x8]           ; 00489469
    FMUL float ptr [0x0059d1f8]         ; 0048946c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489472
    LEA EAX,[ESP + 0x54]                ; 00489475
    PUSH EAX                            ; 00489479
    MOV EAX,dword ptr [EDX]             ; 0048947a | DAT_01b4d738
    PUSH EAX                            ; 0048947c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048947d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00489482
    MOV AH,byte ptr [ESP + 0x3f]        ; 00489485
    XOR AH,0x80                         ; 00489489
    MOV EDX,dword ptr [0x005ae704]      ; 0048948c | DAT_005ae704
    MOV byte ptr [ESP + 0x3f],AH        ; 00489492
    POP ESI                             ; 00489496
    POP EDI                             ; 00489497
    LEA EBX,[ESP + 0x64]                ; 00489498
    LEA EAX,[ESP + 0x34]                ; 0048949c
    FLD float ptr [EAX]                 ; 004894a0
    FMUL float ptr [0x0059d1f8]         ; 004894a2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004894a8
    FLD float ptr [EAX + 0x4]           ; 004894aa
    FMUL float ptr [0x0059d1f8]         ; 004894ad | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004894b3
    FLD float ptr [EAX + 0x8]           ; 004894b6
    FMUL float ptr [0x0059d1f8]         ; 004894b9 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004894bf
    LEA EAX,[ESP + 0x64]                ; 004894c2
    PUSH EAX                            ; 004894c6
    MOV EAX,dword ptr [EDX]             ; 004894c7 | DAT_01b4d738
    ADD EAX,0x30                        ; 004894c9
    PUSH EAX                            ; 004894cc
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004894cd
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004894d2
    MOV DL,byte ptr [ESP + 0x3b]        ; 004894d5
    LEA EBX,[ESP + 0x40]                ; 004894d9
    XOR DL,0x80                         ; 004894dd
    LEA EAX,[ESP + 0x34]                ; 004894e0
    MOV byte ptr [ESP + 0x3b],DL        ; 004894e4
    MOV EDX,dword ptr [0x005ae704]      ; 004894e8 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004894ee
    FMUL float ptr [0x0059d1f8]         ; 004894f0 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004894f6
    FLD float ptr [EAX + 0x4]           ; 004894f8
    FMUL float ptr [0x0059d1f8]         ; 004894fb | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489501
    FLD float ptr [EAX + 0x8]           ; 00489504
    FMUL float ptr [0x0059d1f8]         ; 00489507 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048950d
    LEA EAX,[ESP + 0x40]                ; 00489510
    PUSH EAX                            ; 00489514
    MOV EAX,dword ptr [EDX]             ; 00489515 | DAT_01b4d738
    ADD EAX,0x60                        ; 00489517
    PUSH EAX                            ; 0048951a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048951b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00489520
    MOV DH,byte ptr [ESP + 0x37]        ; 00489523
    LEA EBX,[ESP + 0x28]                ; 00489527
    XOR DH,0x80                         ; 0048952b
    LEA EAX,[ESP + 0x34]                ; 0048952e
    MOV byte ptr [ESP + 0x37],DH        ; 00489532
    MOV EDX,dword ptr [0x005ae704]      ; 00489536 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048953c
    FMUL float ptr [0x0059d1f8]         ; 0048953e | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489544
    FLD float ptr [EAX + 0x4]           ; 00489546
    FMUL float ptr [0x0059d1f8]         ; 00489549 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048954f
    FLD float ptr [EAX + 0x8]           ; 00489552
    FMUL float ptr [0x0059d1f8]         ; 00489555 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048955b
    LEA EAX,[ESP + 0x28]                ; 0048955e
    PUSH EAX                            ; 00489562
    MOV EAX,dword ptr [EDX]             ; 00489563 | DAT_01b4d738
    ADD EAX,0x90                        ; 00489565
    PUSH EAX                            ; 0048956a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048956b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 00489570
    MOV EBX,0xf80000                    ; 00489575
    LEA EAX,[ESP + 0x8]                 ; 0048957a
    MOV EDX,dword ptr [0x005ae704]      ; 0048957e | DAT_005ae704
    ADD ESP,0x8                         ; 00489584
    MOV dword ptr [0x005c502c],ECX      ; 00489587 | DAT_005c502c
    MOV dword ptr [0x005c5030],EBX      ; 0048958d | DAT_005c5030
    MOV dword ptr [0x005c505c],EBX      ; 00489593 | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 00489599 | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 0048959f | DAT_005c508c
    MOV dword ptr [0x005c5090],ECX      ; 004895a5 | DAT_005c5090
    MOV dword ptr [0x005c50bc],ECX      ; 004895ab | DAT_005c50bc
    PUSH EAX                            ; 004895b1
    MOV dword ptr [0x005c50c0],ECX      ; 004895b2 | DAT_005c50c0
    MOV EBX,0xffff                      ; 004895b8
    PUSH EDX                            ; 004895bd | DAT_01b4d738
    MOV dword ptr [0x005c5034],EBX      ; 004895be | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 004895c4 | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 004895ca | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 004895d0 | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 004895d6 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 004895dc | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 004895e2 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 004895e8 | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 004895ee | DAT_005c509c
    MOV dword ptr [0x005c50c4],EBX      ; 004895f4 | DAT_005c50c4
    MOV dword ptr [0x005c50c8],EBX      ; 004895fa | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 00489600 | DAT_005c50cc
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00489606
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048960b
    MOV ECX,dword ptr [0x005ae704]      ; 0048960e | DAT_005ae704
    PUSH ECX                            ; 00489614 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00489615
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048961a
    PUSH EBP                            ; 0048961d
    MOV EBX,dword ptr [0x005ae704]      ; 0048961e | DAT_005ae704
    PUSH EBX                            ; 00489624 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00489625
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048962a
    ADD ESP,0x70                        ; 0048962d
    POP EBP                             ; 00489630
    POP EBX                             ; 00489631
    RET                                 ; 00489632

