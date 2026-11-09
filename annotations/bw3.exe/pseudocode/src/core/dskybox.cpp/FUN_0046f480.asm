; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_FUN_0046f480(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)
;
; Parameters:
; SMRGLSkyTexture * Stack[0x4]:4   sky_texture
; char *           Stack[0x8]:4   texture_name
; int              Stack[0xc]:4   brightness_factor
; Local Variables:
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533d93
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 005352b8
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_005bc7e1
;   undefined4 DAT_005bc7e9
;   undefined4 DAT_005bc7f1
;   undefined4 DAT_005bc7f9
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005f4a5c
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c0b798
;   undefined4 DAT_01c0b79c
;   undefined4 DAT_01c0b7a0
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dskybox.cpp_generateSkyDomeVertex_FUN_0046f340
;   core_dtrace.cpp_FUN_00477d90
;   core_dtrace.cpp_FUN_00477db0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f480
        ;   Label: core_dskybox.cpp_FUN_0046f480
    PUSH ESI                            ; 0046f481
    PUSH EDI                            ; 0046f482
    PUSH EBP                            ; 0046f483
    SUB ESP,0xbc                        ; 0046f484
    MOV EBP,dword ptr [ESP + 0xd0]      ; 0046f48a
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0046f491
    LEA EDI,[EBP + 0xc]                 ; 0046f498
    PUSH EDI                            ; 0046f49b
    MOV AL,byte ptr [ESI]               ; 0046f49c
        ;   Label: LAB_0046f49c
    MOV byte ptr [EDI],AL               ; 0046f49e
    CMP AL,0x0                          ; 0046f4a0
    JZ 0x0046f4b4                       ; 0046f4a2
        ;   XREF to: 0046f4b4 (CONDITIONAL_JUMP)  ; LAB_0046f4b4
    MOV AL,byte ptr [ESI + 0x1]         ; 0046f4a4
    ADD ESI,0x2                         ; 0046f4a7
    MOV byte ptr [EDI + 0x1],AL         ; 0046f4aa
    ADD EDI,0x2                         ; 0046f4ad
    CMP AL,0x0                          ; 0046f4b0
    JNZ 0x0046f49c                      ; 0046f4b2
        ;   XREF to: 0046f49c (CONDITIONAL_JUMP)  ; LAB_0046f49c
    POP EDI                             ; 0046f4b4
        ;   Label: LAB_0046f4b4
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0046f4b5
    PUSH 0x203b37c                      ; 0046f4bc | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x4c]                ; 0046f4c1
    MOV dword ptr [EBP],EAX             ; 0046f4c5
    LEA EDI,[ESP + 0x7c]                ; 0046f4c8
    CALL core_dtrace.cpp_FUN_00477d90   ; 0046f4cc
        ;   XREF to: 00477d90 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477d90()
    LEA ESI,[ESP + 0x4c]                ; 0046f4d1
    ADD ESP,0x4                         ; 0046f4d5
    MOVSD ES:EDI,ESI                    ; 0046f4d8
    MOVSD ES:EDI,ESI                    ; 0046f4d9
    MOVSD ES:EDI,ESI                    ; 0046f4da
    PUSH 0x203b37c                      ; 0046f4db | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x58]                ; 0046f4e0
    LEA EDI,[ESP + 0x64]                ; 0046f4e4
    CALL core_dtrace.cpp_FUN_00477db0   ; 0046f4e8
        ;   XREF to: 00477db0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477db0()
    LEA ESI,[ESP + 0x58]                ; 0046f4ed
    ADD ESP,0x4                         ; 0046f4f1
    MOVSD ES:EDI,ESI                    ; 0046f4f4
    MOVSD ES:EDI,ESI                    ; 0046f4f5
    MOVSD ES:EDI,ESI                    ; 0046f4f6
    FLD float ptr [ESP + 0x78]          ; 0046f4f7
    FADD float ptr [ESP + 0x60]         ; 0046f4fb
    FLD double ptr [0x005bc7e1]         ; 0046f4ff | DAT_005bc7e1
    FXCH                                ; 0046f505
    FMUL ST1                            ; 0046f507
    FLD float ptr [ESP + 0x80]          ; 0046f509
    FLD float ptr [ESP + 0x60]          ; 0046f510
    FSUB float ptr [ESP + 0x78]         ; 0046f514
    FXCH                                ; 0046f518
    FADD float ptr [ESP + 0x68]         ; 0046f51a
    FXCH                                ; 0046f51e
    FMUL ST3                            ; 0046f520
    FXCH                                ; 0046f522
    FMULP ST3                           ; 0046f524
    FMUL double ptr [0x005bc7e9]        ; 0046f526 | DAT_005bc7e9
    FLDZ                                ; 0046f52c
    XOR EDX,EDX                         ; 0046f52e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046f530
    MOV dword ptr [0x005f4a5c],EDX      ; 0046f534 | DAT_005f4a5c
    MOV [0x01c0b79c],EAX                ; 0046f53a | DAT_01c0b79c
    FXCH ST2                            ; 0046f53f
    FSTP float ptr [0x01c0b798]         ; 0046f541 | DAT_01c0b798
    FXCH ST2                            ; 0046f547
    FSTP float ptr [0x01c0b7a0]         ; 0046f549 | DAT_01c0b7a0
    FXCH                                ; 0046f54f
    FSTP float ptr [ESP + 0xa0]         ; 0046f551
    FCOMP float ptr [ESP + 0xa0]        ; 0046f558
    FNSTSW AX                           ; 0046f55f
    SAHF                                ; 0046f561
    JC 0x0046f94f                       ; 0046f562
        ;   XREF to: 0046f94f (CONDITIONAL_JUMP)  ; LAB_0046f94f
    FLD float ptr [ESP + 0x64]          ; 0046f568
        ;   Label: LAB_0046f568
    FSUB float ptr [ESP + 0x7c]         ; 0046f56c
    FMUL double ptr [0x005bc7e9]        ; 0046f570 | DAT_005bc7e9
    FST float ptr [ESP + 0x9c]          ; 0046f576
    FCOMP float ptr [0x005f4a5c]        ; 0046f57d | DAT_005f4a5c
    FNSTSW AX                           ; 0046f583
    SAHF                                ; 0046f585
    JBE 0x0046f594                      ; 0046f586
        ;   XREF to: 0046f594 (CONDITIONAL_JUMP)  ; LAB_0046f594
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0046f588
    MOV [0x005f4a5c],EAX                ; 0046f58f | DAT_005f4a5c
    FLD float ptr [ESP + 0x68]          ; 0046f594
        ;   Label: LAB_0046f594
    FSUB float ptr [ESP + 0x80]         ; 0046f598
    FMUL double ptr [0x005bc7e1]        ; 0046f59f | DAT_005bc7e1
    FMUL double ptr [0x005bc7e9]        ; 0046f5a5 | DAT_005bc7e9
    FST float ptr [ESP + 0x98]          ; 0046f5ab
    FCOMP float ptr [0x005f4a5c]        ; 0046f5b2 | DAT_005f4a5c
    FNSTSW AX                           ; 0046f5b8
    SAHF                                ; 0046f5ba
    JBE 0x0046f5c9                      ; 0046f5bb
        ;   XREF to: 0046f5c9 (CONDITIONAL_JUMP)  ; LAB_0046f5c9
    MOV EAX,dword ptr [ESP + 0x98]      ; 0046f5bd
    MOV [0x005f4a5c],EAX                ; 0046f5c4 | DAT_005f4a5c
    PUSH 0x1c0b798                      ; 0046f5c9 | DAT_01c0b798
        ;   Label: LAB_0046f5c9
    MOV ECX,dword ptr [0x005f2afc]      ; 0046f5ce | DAT_005f2afc
    PUSH ECX                            ; 0046f5d4 | DAT_01bdd7e4
    MOV EBX,0x4                         ; 0046f5d5
    XOR ESI,ESI                         ; 0046f5da
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0046f5dc
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV ECX,dword ptr [0x005f2afc]      ; 0046f5e1 | DAT_005f2afc
    ADD ESP,0x8                         ; 0046f5e7
    LEA EAX,[EBX + EBP*0x1]             ; 0046f5ea
    MOV dword ptr [ESP + 0x4],EBX       ; 0046f5ed
    PUSH EAX                            ; 0046f5f1
    MOV dword ptr [ESP + 0x18],ESI      ; 0046f5f2
    MOV dword ptr [ESP + 0x14],ESI      ; 0046f5f6
    PUSH ECX                            ; 0046f5fa | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x14],ESI      ; 0046f5fb
    MOV dword ptr [ESP + 0x10],ESI      ; 0046f5ff
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0046f603
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    FLD double ptr [0x005bc7f1]         ; 0046f608 | DAT_005bc7f1
    FSIN                                ; 0046f60e
    ADD ESP,0x8                         ; 0046f610
    FLD float ptr [0x005f4a5c]          ; 0046f613 | DAT_005f4a5c
    FXCH                                ; 0046f619
    FMUL ST1                            ; 0046f61b
    FLD double ptr [0x005bc7f9]         ; 0046f61d | DAT_005bc7f9
    FXCH                                ; 0046f623
    FMUL ST1                            ; 0046f625
    FXCH ST2                            ; 0046f627
    FMULP                               ; 0046f629
    FXCH                                ; 0046f62b
    CALL crt_math.c_round_FUN_005a3120  ; 0046f62d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x6c]        ; 0046f632
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046f636
    MOV ECX,dword ptr [0x005f2afc]      ; 0046f63a | DAT_005f2afc
    MOV dword ptr [ESP + 0x74],EAX      ; 0046f640
    LEA EAX,[ESP + 0x6c]                ; 0046f644
    CALL crt_math.c_round_FUN_005a3120  ; 0046f648
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 0046f64d
    FISTP dword ptr [ESP + 0x74]        ; 0046f64e
    MOV EAX,dword ptr [ECX]             ; 0046f652
    PUSH EAX                            ; 0046f654
    CALL engine_special.cpp_FUN_005632a3 ; 0046f655
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046f65a
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0046f65d
    LEA EAX,[ESP + 0x6c]                ; 0046f661
    NEG EBX                             ; 0046f665
    MOV ECX,dword ptr [0x005f2afc]      ; 0046f667 | DAT_005f2afc
    MOV dword ptr [ESP + 0x6c],EBX      ; 0046f66d
    PUSH EAX                            ; 0046f671
    MOV EAX,dword ptr [ECX]             ; 0046f672 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0046f674
    PUSH EAX                            ; 0046f677
    CALL engine_special.cpp_FUN_005632a3 ; 0046f678
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046f67d
    MOV ESI,dword ptr [ESP + 0x74]      ; 0046f680
    LEA EAX,[ESP + 0x6c]                ; 0046f684
    NEG ESI                             ; 0046f688
    MOV ECX,dword ptr [0x005f2afc]      ; 0046f68a | DAT_005f2afc
    MOV dword ptr [ESP + 0x74],ESI      ; 0046f690
    PUSH EAX                            ; 0046f694
    MOV EAX,dword ptr [ECX]             ; 0046f695 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0046f697
    PUSH EAX                            ; 0046f69a
    CALL engine_special.cpp_FUN_005632a3 ; 0046f69b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046f6a0
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0046f6a3
    NEG EDI                             ; 0046f6a7
    MOV EAX,[0x005f2afc]                ; 0046f6a9 | DAT_005f2afc
    MOV dword ptr [ESP + 0x6c],EDI      ; 0046f6ae
    LEA ECX,[ESP + 0x6c]                ; 0046f6b2
    MOV EAX,dword ptr [EAX]             ; 0046f6b6 | DAT_01bdd7e4
    PUSH ECX                            ; 0046f6b8
    ADD EAX,0x90                        ; 0046f6b9
    PUSH EAX                            ; 0046f6be
    CALL engine_special.cpp_FUN_005632a3 ; 0046f6bf
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046f6c4
    MOV EAX,[0x005f2afc]                ; 0046f6c7 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0046f6cc | DAT_01bdd7e4
    MOV ECX,dword ptr [EBP]             ; 0046f6ce
    MOV dword ptr [EBX + 0x20],ECX      ; 0046f6d1
    MOV EBX,dword ptr [EAX]             ; 0046f6d4 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x24],ECX      ; 0046f6d6
    MOV ECX,dword ptr [EAX]             ; 0046f6d9 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBP]             ; 0046f6db
    MOV dword ptr [ECX + 0x28],EBX      ; 0046f6de
    MOV ECX,dword ptr [EAX]             ; 0046f6e1 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x2c],0x0      ; 0046f6e3
    MOV ECX,dword ptr [EAX]             ; 0046f6ea | DAT_01bdd7e4
    MOV EBX,dword ptr [EBP]             ; 0046f6ec
    MOV dword ptr [ECX + 0x50],EBX      ; 0046f6ef
    MOV ECX,dword ptr [EAX]             ; 0046f6f2 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x54],EBX      ; 0046f6f4
    MOV EBX,dword ptr [EAX]             ; 0046f6f7 | DAT_01bdd7e4
    MOV ECX,dword ptr [EBP]             ; 0046f6f9
    MOV dword ptr [EBX + 0x58],ECX      ; 0046f6fc
    MOV ECX,dword ptr [EAX]             ; 0046f6ff | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x5c],0x0      ; 0046f701
    MOV EBX,dword ptr [EAX]             ; 0046f708 | DAT_01bdd7e4
    MOV ECX,dword ptr [EBP]             ; 0046f70a
    MOV dword ptr [EBX + 0x80],ECX      ; 0046f70d
    MOV EBX,dword ptr [EAX]             ; 0046f713 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x84],ECX      ; 0046f715
    MOV EBX,dword ptr [EAX]             ; 0046f71b | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x88],ECX      ; 0046f71d
    MOV ECX,dword ptr [EAX]             ; 0046f723 | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x8c],0x0      ; 0046f725
    MOV EBX,dword ptr [EAX]             ; 0046f72f | DAT_01bdd7e4
    MOV ECX,dword ptr [EBP]             ; 0046f731
    MOV dword ptr [EBX + 0xb0],ECX      ; 0046f734
    MOV EBX,dword ptr [EAX]             ; 0046f73a | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb4],ECX      ; 0046f73c
    MOV EBX,dword ptr [EAX]             ; 0046f742 | DAT_01bdd7e4
    MOV ESI,0x1                         ; 0046f744
    MOV dword ptr [EBX + 0xb8],ECX      ; 0046f749
    MOV EDI,0x3                         ; 0046f74f
    MOV ECX,dword ptr [EAX]             ; 0046f754 | DAT_01bdd7e4
    PUSH 0x2c5                          ; 0046f756
    XOR EDX,EDX                         ; 0046f75b
    MOV dword ptr [ECX + 0xbc],0x0      ; 0046f75d
    MOV ECX,0x80000                     ; 0046f767
    MOV dword ptr [ESP + 0x1c],EDX      ; 0046f76c
    MOV dword ptr [ESP + 0x28],ESI      ; 0046f770
    MOV dword ptr [ESP + 0x20],ECX      ; 0046f774
    MOV EBX,ECX                         ; 0046f778
    MOV dword ptr [ESP + 0x24],ECX      ; 0046f77a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0046f77e
    MOV dword ptr [ESP + 0x30],ECX      ; 0046f782
    MOV ECX,0x2                         ; 0046f786
    MOV dword ptr [ESP + 0x40],EDI      ; 0046f78b
    MOV dword ptr [ESP + 0x34],ECX      ; 0046f78f
    LEA ECX,[ESP + 0x4]                 ; 0046f793
    XOR EDI,EDI                         ; 0046f797
    PUSH ECX                            ; 0046f799
    MOV dword ptr [ESP + 0x3c],EBX      ; 0046f79a
    MOV dword ptr [ESP + 0x40],EBX      ; 0046f79e
    PUSH EAX                            ; 0046f7a2 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x4c],EBX      ; 0046f7a3
    MOV dword ptr [ESP + 0x50],EBX      ; 0046f7a7
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 0046f7ab
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0046f7b0
    MOV dword ptr [ESP + 0xa8],EDI      ; 0046f7b3
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0046f7ba
        ;   Label: LAB_0046f7ba
    XOR EBX,EBX                         ; 0046f7c1
    PUSH ESI                            ; 0046f7c3
        ;   Label: LAB_0046f7c3
    PUSH EBX                            ; 0046f7c4
    PUSH EDI                            ; 0046f7c5
    PUSH EBP                            ; 0046f7c6
    INC ESI                             ; 0046f7c7
    INC EBX                             ; 0046f7c8
    CALL core_dskybox.cpp_generateSkyDomeVertex_FUN_0046f340 ; 0046f7c9
        ;   XREF to: 0046f340 (UNCONDITIONAL_CALL)  ; undefined core_dskybox.cpp_generateSkyDomeVertex_FUN_0046f340()
    ADD ESP,0x10                        ; 0046f7ce
    CMP EBX,0x4                         ; 0046f7d1
    JL 0x0046f7c3                       ; 0046f7d4
        ;   XREF to: 0046f7c3 (CONDITIONAL_JUMP)  ; LAB_0046f7c3
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0046f7d6
    ADD ESI,0x4                         ; 0046f7dd
    INC EDI                             ; 0046f7e0
    MOV dword ptr [ESP + 0xa8],ESI      ; 0046f7e1
    CMP EDI,0x10                        ; 0046f7e8
    JLE 0x0046f7ba                      ; 0046f7eb
        ;   XREF to: 0046f7ba (CONDITIONAL_JUMP)  ; LAB_0046f7ba
    XOR EDI,EDI                         ; 0046f7ed
    MOV dword ptr [ESP + 0xac],EDI      ; 0046f7ef
    MOV dword ptr [ESP + 0xa4],EDI      ; 0046f7f6
    MOV EAX,dword ptr [ESP + 0xac]      ; 0046f7fd
        ;   Label: LAB_0046f7fd
    MOV dword ptr [ESP + 0xb0],EAX      ; 0046f804
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0046f80b
    MOV EDX,EAX                         ; 0046f812
    SAR EDX,0x1f                        ; 0046f814
    SHL EDX,0x2                         ; 0046f817
    SBB EAX,EDX                         ; 0046f81a
    SAR EAX,0x2                         ; 0046f81c
    MOV ESI,0x1000000                   ; 0046f81f
    AND EAX,0xffffff                    ; 0046f824
    XOR EBX,EBX                         ; 0046f829
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046f82b
    ADD EAX,0x400000                    ; 0046f832 | IMAGE_DOS_HEADER_00400000
    XOR EDI,EDI                         ; 0046f837
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046f839
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0046f840
        ;   Label: LAB_0046f840
    ADD ECX,EDI                         ; 0046f847
    LEA EAX,[ECX + 0x1]                 ; 0046f849
    MOV dword ptr [ESP + 0x8c],EAX      ; 0046f84c
    LEA EAX,[ECX + 0x5]                 ; 0046f853
    MOV EDX,EBX                         ; 0046f856
    MOV dword ptr [ESP + 0x90],EAX      ; 0046f858
    LEA EAX,[ECX + 0x4]                 ; 0046f85f
    SAR EDX,0x1f                        ; 0046f862
    MOV dword ptr [ESP + 0x94],EAX      ; 0046f865
    MOV EAX,EBX                         ; 0046f86c
    SHL EDX,0x2                         ; 0046f86e
    SBB EAX,EDX                         ; 0046f871
    SAR EAX,0x2                         ; 0046f873
    MOV EBP,EAX                         ; 0046f876
    MOV EDX,ESI                         ; 0046f878
    MOV EAX,ESI                         ; 0046f87a
    SAR EDX,0x1f                        ; 0046f87c
    SHL EDX,0x2                         ; 0046f87f
    SBB EAX,EDX                         ; 0046f882
    SAR EAX,0x2                         ; 0046f884
    MOV dword ptr [ESP + 0x18],ECX      ; 0046f887
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0046f88b
    MOV dword ptr [ESP + 0x1c],ECX      ; 0046f892
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0046f896
    PUSH 0x2c5                          ; 0046f89d
    MOV dword ptr [ESP + 0x28],ECX      ; 0046f8a2
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0046f8a6
    INC EDI                             ; 0046f8ad
    MOV dword ptr [ESP + 0x2c],ECX      ; 0046f8ae
    MOV ECX,dword ptr [ESP + 0x94]      ; 0046f8b2
    ADD EBX,0x1000000                   ; 0046f8b9
    MOV dword ptr [ESP + 0x34],ECX      ; 0046f8bf
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0046f8c3
    XOR EAX,0xffffff                    ; 0046f8ca
    MOV dword ptr [ESP + 0x38],ECX      ; 0046f8cf
    MOV dword ptr [ESP + 0x30],EAX      ; 0046f8d3
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046f8d7
    MOV EAX,dword ptr [ESP + 0x98]      ; 0046f8db
    MOV dword ptr [ESP + 0x44],ECX      ; 0046f8e2
    MOV dword ptr [ESP + 0x40],EAX      ; 0046f8e6
    LEA EAX,[ESP + 0x4]                 ; 0046f8ea
    XOR EBP,0xffffff                    ; 0046f8ee
    PUSH EAX                            ; 0046f8f4
    MOV EAX,[0x005f2afc]                ; 0046f8f5 | DAT_005f2afc
    MOV dword ptr [ESP + 0x28],EBP      ; 0046f8fa
    PUSH EAX                            ; 0046f8fe | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x50],EBP      ; 0046f8ff
    ADD ESI,0x1000000                   ; 0046f903
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 0046f909
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0046f90e
    CMP EDI,0x3                         ; 0046f911
    JL 0x0046f840                       ; 0046f914
        ;   XREF to: 0046f840 (CONDITIONAL_JUMP)  ; LAB_0046f840
    MOV EDX,dword ptr [ESP + 0xac]      ; 0046f91a
    MOV AH,byte ptr [ESP + 0xa7]        ; 0046f921
    ADD EDX,0x4                         ; 0046f928
    INC AH                              ; 0046f92b
    MOV dword ptr [ESP + 0xac],EDX      ; 0046f92d
    MOV byte ptr [ESP + 0xa7],AH        ; 0046f934
    CMP EDX,0x40                        ; 0046f93b
    JNZ 0x0046f7fd                      ; 0046f93e
        ;   XREF to: 0046f7fd (CONDITIONAL_JUMP)  ; LAB_0046f7fd
    ADD ESP,0xbc                        ; 0046f944
    POP EBP                             ; 0046f94a
    POP EDI                             ; 0046f94b
    POP ESI                             ; 0046f94c
    POP EBX                             ; 0046f94d
    RET                                 ; 0046f94e
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0046f94f
        ;   Label: LAB_0046f94f
    MOV [0x005f4a5c],EAX                ; 0046f956 | DAT_005f4a5c
    JMP 0x0046f568                      ; 0046f95b
        ;   XREF to: 0046f568 (UNCONDITIONAL_JUMP)  ; LAB_0046f568

