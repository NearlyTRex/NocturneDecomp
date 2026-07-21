; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005badbc
;   undefined4 DAT_005baf90
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   FUN_004cc440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc5d0
        ;   Label: core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0
    PUSH EBP                            ; 004cc5d1
    SUB ESP,0x8c                        ; 004cc5d2
    MOV EBX,dword ptr [ESP + 0x98]      ; 004cc5d8
    CMP dword ptr [EBX + 0x194],0x0     ; 004cc5df
    JNZ 0x004cc5f3                      ; 004cc5e6
        ;   XREF to: 004cc5f3 (CONDITIONAL_JUMP)  ; LAB_004cc5f3
    XOR EAX,EAX                         ; 004cc5e8
    ADD ESP,0x8c                        ; 004cc5ea
    POP EBP                             ; 004cc5f0
    POP EBX                             ; 004cc5f1
    RET                                 ; 004cc5f2
    PUSH EDI                            ; 004cc5f3
        ;   Label: LAB_004cc5f3
    PUSH ESI                            ; 004cc5f4
    PUSH 0x1                            ; 004cc5f5
    MOV ECX,dword ptr [0x005ae704]      ; 004cc5f7 | DAT_005ae704
    PUSH ECX                            ; 004cc5fd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004cc5fe
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    ADD ESP,0x8                         ; 004cc603
    PUSH 0xffff                         ; 004cc606
    MOV ESI,dword ptr [0x005ae704]      ; 004cc60b | DAT_005ae704
    PUSH ESI                            ; 004cc611 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004cc612
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004cc617
    PUSH 0x5badbc                       ; 004cc61a | DAT_005badbc
    MOV EDI,dword ptr [0x005ae704]      ; 004cc61f | DAT_005ae704
    PUSH EDI                            ; 004cc625 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004cc626
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    MOV EDX,dword ptr [0x005baf90]      ; 004cc62b | DAT_005baf90
    ADD ESP,0x8                         ; 004cc631
    MOV EBP,dword ptr [EDX + 0x4]       ; 004cc634 | DAT_01cc9454
    LEA EAX,[EBX + 0x19c]               ; 004cc637
    TEST EBP,EBP                        ; 004cc63d
    JZ 0x004cc6ef                       ; 004cc63f
        ;   XREF to: 004cc6ef (CONDITIONAL_JUMP)  ; LAB_004cc6ef
    MOV EDX,dword ptr [EAX]             ; 004cc645
    XOR EDI,EDI                         ; 004cc647
    MOV EBP,EDX                         ; 004cc649
    TEST EDX,EDX                        ; 004cc64b
    JLE 0x004cc6ce                      ; 004cc64d
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    MOV dword ptr [ESP + 0x84],EAX      ; 004cc653
    LEA EAX,[ESP + 0x8]                 ; 004cc65a
        ;   Label: LAB_004cc65a
    MOV dword ptr [ESP + 0x90],EDI      ; 004cc65e
    PUSH EAX                            ; 004cc665
    LEA EAX,[ESP + 0x54]                ; 004cc666
    FILD dword ptr [ESP + 0x94]         ; 004cc66a
    PUSH EAX                            ; 004cc671
    FSTP float ptr [ESP + 0x7c]         ; 004cc672
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004cc676
    PUSH dword ptr [ESP + 0x7c]         ; 004cc67d
    PUSH EAX                            ; 004cc681
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004cc682
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 004cc687
    LEA EAX,[ESP + 0x50]                ; 004cc68a
    PUSH EAX                            ; 004cc68e
    LEA EAX,[ESP + 0x6c]                ; 004cc68f
    PUSH EAX                            ; 004cc693
    PUSH EBX                            ; 004cc694
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004cc695
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV ESI,EAX                         ; 004cc69a
    LEA EAX,[ESP + 0x5c]                ; 004cc69c
    ADD ESP,0xc                         ; 004cc6a0
    CMP EAX,ESI                         ; 004cc6a3
    JZ 0x004cc6bb                       ; 004cc6a5
        ;   XREF to: 004cc6bb (CONDITIONAL_JUMP)  ; LAB_004cc6bb
    MOV EAX,dword ptr [ESI]             ; 004cc6a7
    MOV dword ptr [ESP + 0x50],EAX      ; 004cc6a9
    MOV EAX,dword ptr [ESI + 0x4]       ; 004cc6ad
    MOV dword ptr [ESP + 0x54],EAX      ; 004cc6b0
    MOV EAX,dword ptr [ESI + 0x8]       ; 004cc6b4
    MOV dword ptr [ESP + 0x58],EAX      ; 004cc6b7
    LEA EAX,[ESP + 0x50]                ; 004cc6bb
        ;   Label: LAB_004cc6bb
    PUSH EAX                            ; 004cc6bf
    PUSH EBX                            ; 004cc6c0
    INC EDI                             ; 004cc6c1
    CALL FUN_004cc440                   ; 004cc6c2
        ;   XREF to: 004cc440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc440()
    ADD ESP,0x8                         ; 004cc6c7
    CMP EDI,EBP                         ; 004cc6ca
    JL 0x004cc65a                       ; 004cc6cc
        ;   XREF to: 004cc65a (CONDITIONAL_JUMP)  ; LAB_004cc65a
    PUSH 0x0                            ; 004cc6ce
        ;   Label: LAB_004cc6ce
    MOV EDX,dword ptr [0x005ae704]      ; 004cc6d0 | DAT_005ae704
    PUSH EDX                            ; 004cc6d6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004cc6d7
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    MOV EAX,0x1                         ; 004cc6dc
    ADD ESP,0x8                         ; 004cc6e1
    POP ESI                             ; 004cc6e4
    POP EDI                             ; 004cc6e5
    ADD ESP,0x8c                        ; 004cc6e6
    POP EBP                             ; 004cc6ec
    POP EBX                             ; 004cc6ed
    RET                                 ; 004cc6ee
    MOV EDX,dword ptr [EBX + 0x198]     ; 004cc6ef
        ;   Label: LAB_004cc6ef
    CMP EDX,0x1                         ; 004cc6f5
    JNZ 0x004cc79f                      ; 004cc6f8
        ;   XREF to: 004cc79f (CONDITIONAL_JUMP)  ; LAB_004cc79f
    FLD float ptr [EBX + 0x174]         ; 004cc6fe
    CALL crt_math.c_round_FUN_00563a30  ; 004cc704
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8c]        ; 004cc709
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004cc710
    XOR ESI,ESI                         ; 004cc717
    TEST EDI,EDI                        ; 004cc719
    JLE 0x004cc6ce                      ; 004cc71b
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004cc71d
    MOV EDI,EAX                         ; 004cc724
    LEA EAX,[ESP + 0x20]                ; 004cc726
        ;   Label: LAB_004cc726
    MOV dword ptr [ESP + 0x90],ESI      ; 004cc72a
    PUSH EAX                            ; 004cc731
    LEA EAX,[ESP + 0x3c]                ; 004cc732
    FILD dword ptr [ESP + 0x94]         ; 004cc736
    PUSH EAX                            ; 004cc73d
    FSTP float ptr [ESP + 0x80]         ; 004cc73e
    PUSH dword ptr [ESP + 0x80]         ; 004cc745
    PUSH EDI                            ; 004cc74c
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004cc74d
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 004cc752
    LEA EAX,[ESP + 0x38]                ; 004cc755
    PUSH EAX                            ; 004cc759
    LEA EAX,[ESP + 0x30]                ; 004cc75a
    PUSH EAX                            ; 004cc75e
    PUSH EBX                            ; 004cc75f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004cc760
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 004cc765
    LEA EAX,[ESP + 0x44]                ; 004cc767
    ADD ESP,0xc                         ; 004cc76b
    CMP EAX,EDX                         ; 004cc76e
    JZ 0x004cc786                       ; 004cc770
        ;   XREF to: 004cc786 (CONDITIONAL_JUMP)  ; LAB_004cc786
    MOV EAX,dword ptr [EDX]             ; 004cc772
    MOV dword ptr [ESP + 0x38],EAX      ; 004cc774
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cc778
    MOV dword ptr [ESP + 0x3c],EAX      ; 004cc77b
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cc77f
    MOV dword ptr [ESP + 0x40],EAX      ; 004cc782
    LEA EAX,[ESP + 0x38]                ; 004cc786
        ;   Label: LAB_004cc786
    PUSH EAX                            ; 004cc78a
    PUSH EBX                            ; 004cc78b
    INC ESI                             ; 004cc78c
    CALL FUN_004cc440                   ; 004cc78d
        ;   XREF to: 004cc440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc440()
    ADD ESP,0x8                         ; 004cc792
    CMP ESI,EBP                         ; 004cc795
    JGE 0x004cc6ce                      ; 004cc797
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    JMP 0x004cc726                      ; 004cc79d
        ;   XREF to: 004cc726 (UNCONDITIONAL_JUMP)  ; LAB_004cc726
    TEST EDX,EDX                        ; 004cc79f
        ;   Label: LAB_004cc79f
    JNZ 0x004cc6ce                      ; 004cc7a1
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    FLD float ptr [EBX + 0x174]         ; 004cc7a7
    CALL crt_math.c_round_FUN_00563a30  ; 004cc7ad
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV EDX,dword ptr [EAX]             ; 004cc7b2
    XOR EDI,EDI                         ; 004cc7b4
    FISTP dword ptr [ESP + 0x80]        ; 004cc7b6
    MOV dword ptr [ESP + 0x88],EDX      ; 004cc7bd
    TEST EDX,EDX                        ; 004cc7c4
    JLE 0x004cc6ce                      ; 004cc7c6
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    MOV ESI,dword ptr [ESP + 0x80]      ; 004cc7cc
    MOV EBP,EAX                         ; 004cc7d3
    MOV EAX,ESI                         ; 004cc7d5
        ;   Label: LAB_004cc7d5
    MOV EDX,ESI                         ; 004cc7d7
    MOV ECX,dword ptr [EBX + 0x178]     ; 004cc7d9
    SAR EDX,0x1f                        ; 004cc7df
    IDIV ECX                            ; 004cc7e2
    TEST EDX,EDX                        ; 004cc7e4
    JNZ 0x004cc7fb                      ; 004cc7e6
        ;   XREF to: 004cc7fb (CONDITIONAL_JUMP)  ; LAB_004cc7fb
    MOV EAX,dword ptr [ESP + 0x88]      ; 004cc7e8
        ;   Label: LAB_004cc7e8
    INC EDI                             ; 004cc7ef
    INC ESI                             ; 004cc7f0
    CMP EDI,EAX                         ; 004cc7f1
    JGE 0x004cc6ce                      ; 004cc7f3
        ;   XREF to: 004cc6ce (CONDITIONAL_JUMP)  ; LAB_004cc6ce
    JMP 0x004cc7d5                      ; 004cc7f9
        ;   XREF to: 004cc7d5 (UNCONDITIONAL_JUMP)  ; LAB_004cc7d5
    LEA EAX,[ESP + 0x44]                ; 004cc7fb
        ;   Label: LAB_004cc7fb
    MOV dword ptr [ESP + 0x90],EDI      ; 004cc7ff
    PUSH EAX                            ; 004cc806
    LEA EAX,[ESP + 0x18]                ; 004cc807
    FILD dword ptr [ESP + 0x94]         ; 004cc80b
    PUSH EAX                            ; 004cc812
    FSTP float ptr [ESP + 0x84]         ; 004cc813
    PUSH dword ptr [ESP + 0x84]         ; 004cc81a
    PUSH EBP                            ; 004cc821
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004cc822
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 004cc827
    LEA EAX,[ESP + 0x14]                ; 004cc82a
    PUSH EAX                            ; 004cc82e
    LEA EAX,[ESP + 0x60]                ; 004cc82f
    PUSH EAX                            ; 004cc833
    PUSH EBX                            ; 004cc834
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004cc835
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 004cc83a
    LEA EAX,[ESP + 0x20]                ; 004cc83c
    ADD ESP,0xc                         ; 004cc840
    CMP EAX,EDX                         ; 004cc843
    JZ 0x004cc85b                       ; 004cc845
        ;   XREF to: 004cc85b (CONDITIONAL_JUMP)  ; LAB_004cc85b
    MOV EAX,dword ptr [EDX]             ; 004cc847
    MOV dword ptr [ESP + 0x14],EAX      ; 004cc849
    MOV EAX,dword ptr [EDX + 0x4]       ; 004cc84d
    MOV dword ptr [ESP + 0x18],EAX      ; 004cc850
    MOV EAX,dword ptr [EDX + 0x8]       ; 004cc854
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cc857
    LEA EAX,[ESP + 0x14]                ; 004cc85b
        ;   Label: LAB_004cc85b
    PUSH EAX                            ; 004cc85f
    PUSH EBX                            ; 004cc860
    CALL FUN_004cc440                   ; 004cc861
        ;   XREF to: 004cc440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc440()
    ADD ESP,0x8                         ; 004cc866
    JMP 0x004cc7e8                      ; 004cc869
        ;   XREF to: 004cc7e8 (UNCONDITIONAL_JUMP)  ; LAB_004cc7e8

