; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_render_FUN_004af340(CBloodPool *this_ptr,int expire_flag)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004afe80 at 004aff17
;
; Referenced Globals:
;   double DOUBLE_00585128 = 8
;   float FLOAT_0059e4d4 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b9d4c
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   undefined4 DAT_005c5094
;   undefined4 DAT_005c5098
;   undefined4 DAT_005c509c
;   undefined4 DAT_005c50c4
;   undefined4 DAT_005c50c8
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af340
        ;   Label: core_gore.cpp_CBloodPool_render_FUN_004af340
    PUSH ESI                            ; 004af341
    PUSH EDI                            ; 004af342
    PUSH EBP                            ; 004af343
    SUB ESP,0x40                        ; 004af344
    MOV ESI,dword ptr [ESP + 0x54]      ; 004af347
    FLD float ptr [ESI + 0x18]          ; 004af34b
    FMUL double ptr [0x00585128]        ; 004af34e | DOUBLE_00585128
    CALL crt_math.c_round_FUN_00563a30  ; 004af354
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 004af359
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004af35d
    TEST EDX,EDX                        ; 004af361
    JL 0x004af5f8                       ; 004af363
        ;   XREF to: 004af5f8 (CONDITIONAL_JUMP)  ; LAB_004af5f8
    CMP EDX,0x1c                        ; 004af369
    JLE 0x004af37d                      ; 004af36c
        ;   XREF to: 004af37d (CONDITIONAL_JUMP)  ; LAB_004af37d
    MOV EBX,0x1c                        ; 004af36e
    MOV dword ptr [ESI],0x1             ; 004af373
    MOV dword ptr [ESP + 0x3c],EBX      ; 004af379
    LEA EAX,[ESI + 0x4]                 ; 004af37d
        ;   Label: LAB_004af37d
    PUSH EAX                            ; 004af380
    MOV EBP,dword ptr [0x005ae704]      ; 004af381 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004af387 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004af388
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    IMUL EAX,dword ptr [ESI + 0x14],0x2b8 ; 004af38d
    ADD ESP,0x8                         ; 004af394
    MOV EBX,0x5b9d4c                    ; 004af397 | DAT_005b9d4c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004af39c
    ADD EBX,EAX                         ; 004af3a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004af3a2
    SUB EAX,EDX                         ; 004af3a9
    SHL EAX,0x3                         ; 004af3ab
    ADD EAX,EBX                         ; 004af3ae
    PUSH EAX                            ; 004af3b0
    MOV ECX,dword ptr [0x005ae704]      ; 004af3b1 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004af3b7 | DAT_01b4d738
    XOR EDI,EDI                         ; 004af3b8
    MOV EBX,0xbfaa9fbe                  ; 004af3ba
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004af3bf
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EBP,EBX                         ; 004af3c4
    LEA EAX,[ESP + 0x2c]                ; 004af3c6
    ADD ESP,0x8                         ; 004af3ca
    MOV EDX,dword ptr [0x005ae704]      ; 004af3cd | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x24],EBX      ; 004af3d3
    MOV dword ptr [ESP + 0x2c],EBX      ; 004af3d7
    LEA EBX,[ESP + 0x30]                ; 004af3db
    MOV dword ptr [ESP + 0x28],EDI      ; 004af3df
    FLD float ptr [EAX]                 ; 004af3e3
    FMUL float ptr [0x0059e4d4]         ; 004af3e5 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004af3eb
    FLD float ptr [EAX + 0x4]           ; 004af3ed
    FMUL float ptr [0x0059e4d4]         ; 004af3f0 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004af3f6
    FLD float ptr [EAX + 0x8]           ; 004af3f9
    FMUL float ptr [0x0059e4d4]         ; 004af3fc | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af402
    LEA EAX,[ESP + 0x30]                ; 004af405
    PUSH EAX                            ; 004af409
    MOV EAX,dword ptr [EDX]             ; 004af40a | DAT_01b4d738
    PUSH EAX                            ; 004af40c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004af40d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3faa9fbe                  ; 004af412
    LEA EBX,[ESP + 0x8]                 ; 004af417
    MOV EDX,dword ptr [0x005ae704]      ; 004af41b | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 004af421
    MOV ECX,EBP                         ; 004af424
    MOV dword ptr [ESP + 0x24],EAX      ; 004af426
    MOV dword ptr [ESP + 0x28],EDI      ; 004af42a
    LEA EAX,[ESP + 0x24]                ; 004af42e
    MOV dword ptr [ESP + 0x2c],ECX      ; 004af432
    FLD float ptr [EAX]                 ; 004af436
    FMUL float ptr [0x0059e4d4]         ; 004af438 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004af43e
    FLD float ptr [EAX + 0x4]           ; 004af440
    FMUL float ptr [0x0059e4d4]         ; 004af443 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004af449
    FLD float ptr [EAX + 0x8]           ; 004af44c
    FMUL float ptr [0x0059e4d4]         ; 004af44f | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af455
    MOV EAX,ESP                         ; 004af458
    PUSH EAX                            ; 004af45a
    MOV EAX,dword ptr [EDX]             ; 004af45b | DAT_01b4d738
    ADD EAX,0x30                        ; 004af45d
    PUSH EAX                            ; 004af460
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004af461
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3faa9fbe                  ; 004af466
    LEA EAX,[ESP + 0x2c]                ; 004af46b
    ADD ESP,0x8                         ; 004af46f
    MOV EDX,dword ptr [0x005ae704]      ; 004af472 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x24],EBX      ; 004af478
    MOV EBP,EBX                         ; 004af47c
    MOV dword ptr [ESP + 0x2c],EBX      ; 004af47e
    LEA EBX,[ESP + 0xc]                 ; 004af482
    MOV dword ptr [ESP + 0x28],EDI      ; 004af486
    FLD float ptr [EAX]                 ; 004af48a
    FMUL float ptr [0x0059e4d4]         ; 004af48c | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004af492
    FLD float ptr [EAX + 0x4]           ; 004af494
    FMUL float ptr [0x0059e4d4]         ; 004af497 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004af49d
    FLD float ptr [EAX + 0x8]           ; 004af4a0
    FMUL float ptr [0x0059e4d4]         ; 004af4a3 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af4a9
    LEA EAX,[ESP + 0xc]                 ; 004af4ac
    PUSH EAX                            ; 004af4b0
    MOV EAX,dword ptr [EDX]             ; 004af4b1 | DAT_01b4d738
    ADD EAX,0x60                        ; 004af4b3
    PUSH EAX                            ; 004af4b6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004af4b7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbfaa9fbe                  ; 004af4bc
    LEA EBX,[ESP + 0x20]                ; 004af4c1
    MOV EDX,dword ptr [0x005ae704]      ; 004af4c5 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 004af4cb
    MOV ECX,EBP                         ; 004af4ce
    MOV dword ptr [ESP + 0x24],EAX      ; 004af4d0
    MOV dword ptr [ESP + 0x28],EDI      ; 004af4d4
    LEA EAX,[ESP + 0x24]                ; 004af4d8
    MOV dword ptr [ESP + 0x2c],ECX      ; 004af4dc
    FLD float ptr [EAX]                 ; 004af4e0
    FMUL float ptr [0x0059e4d4]         ; 004af4e2 | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004af4e8
    FLD float ptr [EAX + 0x4]           ; 004af4ea
    FMUL float ptr [0x0059e4d4]         ; 004af4ed | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004af4f3
    FLD float ptr [EAX + 0x8]           ; 004af4f6
    FMUL float ptr [0x0059e4d4]         ; 004af4f9 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af4ff
    LEA EAX,[ESP + 0x18]                ; 004af502
    PUSH EAX                            ; 004af506
    MOV EAX,dword ptr [EDX]             ; 004af507 | DAT_01b4d738
    ADD EAX,0x90                        ; 004af509
    PUSH EAX                            ; 004af50e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004af50f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x5c5034                    ; 004af514 | DAT_005c5034
    MOV EDX,0x5c5038                    ; 004af519 | DAT_005c5038
    MOV ECX,0x5c503c                    ; 004af51e | DAT_005c503c
    MOV EAX,dword ptr [ESI + 0x10]      ; 004af523
    ADD ESP,0x8                         ; 004af526
    CMP EAX,0x1                         ; 004af529
    JNC 0x004af636                      ; 004af52c
        ;   XREF to: 004af636 (CONDITIONAL_JUMP)  ; LAB_004af636
    MOV dword ptr [EBX],0x2000          ; 004af532 | DAT_005c5034
        ;   Label: LAB_004af532
    MOV dword ptr [EDX],0x0             ; 004af538 | DAT_005c5038
    MOV dword ptr [ECX],0x0             ; 004af53e | DAT_005c503c
    MOV ECX,0x5c5064                    ; 004af544 | DAT_005c5064
        ;   Label: LAB_004af544
    MOV EDX,0x5c5068                    ; 004af549 | DAT_005c5068
    MOV EAX,dword ptr [ESI + 0x10]      ; 004af54e
    MOV EBX,0x5c506c                    ; 004af551 | DAT_005c506c
    CMP EAX,0x1                         ; 004af556
    JNC 0x004af677                      ; 004af559
        ;   XREF to: 004af677 (CONDITIONAL_JUMP)  ; LAB_004af677
    MOV dword ptr [ECX],0x2000          ; 004af55f | DAT_005c5064
        ;   Label: LAB_004af55f
    MOV dword ptr [EDX],0x0             ; 004af565 | DAT_005c5068
    MOV dword ptr [EBX],0x0             ; 004af56b | DAT_005c506c
    MOV EBX,0x5c5094                    ; 004af571 | DAT_005c5094
        ;   Label: LAB_004af571
    MOV EDX,0x5c5098                    ; 004af576 | DAT_005c5098
    MOV EAX,dword ptr [ESI + 0x10]      ; 004af57b
    MOV ECX,0x5c509c                    ; 004af57e | DAT_005c509c
    CMP EAX,0x1                         ; 004af583
    JNC 0x004af6b8                      ; 004af586
        ;   XREF to: 004af6b8 (CONDITIONAL_JUMP)  ; LAB_004af6b8
    MOV dword ptr [EBX],0x2000          ; 004af58c | DAT_005c5094
        ;   Label: LAB_004af58c
    MOV dword ptr [EDX],0x0             ; 004af592 | DAT_005c5098
    MOV dword ptr [ECX],0x0             ; 004af598 | DAT_005c509c
    MOV ECX,0x5c50c4                    ; 004af59e | DAT_005c50c4
        ;   Label: LAB_004af59e
    MOV EDX,0x5c50c8                    ; 004af5a3 | DAT_005c50c8
    MOV EAX,dword ptr [ESI + 0x10]      ; 004af5a8
    MOV EBX,0x5c50cc                    ; 004af5ab | DAT_005c50cc
    CMP EAX,0x1                         ; 004af5b0
    JC 0x004af6c4                       ; 004af5b3
        ;   XREF to: 004af6c4 (CONDITIONAL_JUMP)  ; LAB_004af6c4
    JBE 0x004af6db                      ; 004af5b9
        ;   XREF to: 004af6db (CONDITIONAL_JUMP)  ; LAB_004af6db
    CMP EAX,0x2                         ; 004af5bf
    JNZ 0x004af6c4                      ; 004af5c2
        ;   XREF to: 004af6c4 (CONDITIONAL_JUMP)  ; LAB_004af6c4
    XOR EBX,EBX                         ; 004af5c8
    MOV dword ptr [0x005c50c8],EBX      ; 004af5ca | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 004af5d0 | DAT_005c50cc
    MOV dword ptr [0x005c50c4],EBX      ; 004af5d6 | DAT_005c50c4
    PUSH 0x1c78c80                      ; 004af5dc
        ;   Label: LAB_004af5dc
    MOV ECX,dword ptr [0x005ae704]      ; 004af5e1 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004af5e7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 004af5e8
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004af5ed
    ADD ESP,0x40                        ; 004af5f0
    POP EBP                             ; 004af5f3
    POP EDI                             ; 004af5f4
    POP ESI                             ; 004af5f5
    POP EBX                             ; 004af5f6
    RET                                 ; 004af5f7
    XOR EDI,EDI                         ; 004af5f8
        ;   Label: LAB_004af5f8
    MOV dword ptr [ESP + 0x3c],EDI      ; 004af5fa
    JMP 0x004af37d                      ; 004af5fe
        ;   XREF to: 004af37d (UNCONDITIONAL_JUMP)  ; LAB_004af37d
    MOV EDX,0x7f80                      ; 004af603
        ;   Label: LAB_004af603
    MOV dword ptr [0x005c503c],EDI      ; 004af608 | DAT_005c503c
    MOV dword ptr [0x005c5034],EDI      ; 004af60e | DAT_005c5034
    MOV dword ptr [0x005c5038],EDX      ; 004af614 | DAT_005c5038
    JMP 0x004af544                      ; 004af61a
        ;   XREF to: 004af544 (UNCONDITIONAL_JUMP)  ; LAB_004af544
    MOV dword ptr [0x005c5038],EDI      ; 004af61f | DAT_005c5038
        ;   Label: LAB_004af61f
    MOV dword ptr [0x005c503c],EDI      ; 004af625 | DAT_005c503c
    MOV dword ptr [0x005c5034],EDI      ; 004af62b | DAT_005c5034
    JMP 0x004af544                      ; 004af631
        ;   XREF to: 004af544 (UNCONDITIONAL_JUMP)  ; LAB_004af544
    JBE 0x004af603                      ; 004af636
        ;   XREF to: 004af603 (CONDITIONAL_JUMP)  ; LAB_004af603
        ;   Label: LAB_004af636
    CMP EAX,0x2                         ; 004af638
    JZ 0x004af61f                       ; 004af63b
        ;   XREF to: 004af61f (CONDITIONAL_JUMP)  ; LAB_004af61f
    JMP 0x004af532                      ; 004af63d
        ;   XREF to: 004af532 (UNCONDITIONAL_JUMP)  ; LAB_004af532
    MOV EDX,0x7f80                      ; 004af642
        ;   Label: LAB_004af642
    XOR EAX,EAX                         ; 004af647
    MOV dword ptr [0x005c5068],EDX      ; 004af649 | DAT_005c5068
    MOV [0x005c506c],EAX                ; 004af64f | DAT_005c506c
    MOV [0x005c5064],EAX                ; 004af654 | DAT_005c5064
    JMP 0x004af571                      ; 004af659
        ;   XREF to: 004af571 (UNCONDITIONAL_JUMP)  ; LAB_004af571
    XOR EBX,EBX                         ; 004af65e
        ;   Label: LAB_004af65e
    MOV dword ptr [0x005c5068],EBX      ; 004af660 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 004af666 | DAT_005c506c
    MOV dword ptr [0x005c5064],EBX      ; 004af66c | DAT_005c5064
    JMP 0x004af571                      ; 004af672
        ;   XREF to: 004af571 (UNCONDITIONAL_JUMP)  ; LAB_004af571
    JBE 0x004af642                      ; 004af677
        ;   XREF to: 004af642 (CONDITIONAL_JUMP)  ; LAB_004af642
        ;   Label: LAB_004af677
    CMP EAX,0x2                         ; 004af679
    JZ 0x004af65e                       ; 004af67c
        ;   XREF to: 004af65e (CONDITIONAL_JUMP)  ; LAB_004af65e
    JMP 0x004af55f                      ; 004af67e
        ;   XREF to: 004af55f (UNCONDITIONAL_JUMP)  ; LAB_004af55f
    MOV EDX,0x7f80                      ; 004af683
        ;   Label: LAB_004af683
    XOR EAX,EAX                         ; 004af688
    MOV dword ptr [0x005c5098],EDX      ; 004af68a | DAT_005c5098
    MOV [0x005c509c],EAX                ; 004af690 | DAT_005c509c
    MOV [0x005c5094],EAX                ; 004af695 | DAT_005c5094
    JMP 0x004af59e                      ; 004af69a
        ;   XREF to: 004af59e (UNCONDITIONAL_JUMP)  ; LAB_004af59e
    XOR EBX,EBX                         ; 004af69f
        ;   Label: LAB_004af69f
    MOV dword ptr [0x005c5098],EBX      ; 004af6a1 | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 004af6a7 | DAT_005c509c
    MOV dword ptr [0x005c5094],EBX      ; 004af6ad | DAT_005c5094
    JMP 0x004af59e                      ; 004af6b3
        ;   XREF to: 004af59e (UNCONDITIONAL_JUMP)  ; LAB_004af59e
    JBE 0x004af683                      ; 004af6b8
        ;   XREF to: 004af683 (CONDITIONAL_JUMP)  ; LAB_004af683
        ;   Label: LAB_004af6b8
    CMP EAX,0x2                         ; 004af6ba
    JZ 0x004af69f                       ; 004af6bd
        ;   XREF to: 004af69f (CONDITIONAL_JUMP)  ; LAB_004af69f
    JMP 0x004af58c                      ; 004af6bf
        ;   XREF to: 004af58c (UNCONDITIONAL_JUMP)  ; LAB_004af58c
    MOV dword ptr [ECX],0x2000          ; 004af6c4 | DAT_005c50c4
        ;   Label: LAB_004af6c4
    MOV dword ptr [EDX],0x0             ; 004af6ca | DAT_005c50c8
    MOV dword ptr [EBX],0x0             ; 004af6d0 | DAT_005c50cc
    JMP 0x004af5dc                      ; 004af6d6
        ;   XREF to: 004af5dc (UNCONDITIONAL_JUMP)  ; LAB_004af5dc
    MOV EAX,0x7f80                      ; 004af6db
        ;   Label: LAB_004af6db
    XOR EBP,EBP                         ; 004af6e0
    MOV [0x005c50c8],EAX                ; 004af6e2 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBP      ; 004af6e7 | DAT_005c50cc
    MOV dword ptr [0x005c50c4],EBP      ; 004af6ed | DAT_005c50c4
    JMP 0x004af5dc                      ; 004af6f3
        ;   XREF to: 004af5dc (UNCONDITIONAL_JUMP)  ; LAB_004af5dc

