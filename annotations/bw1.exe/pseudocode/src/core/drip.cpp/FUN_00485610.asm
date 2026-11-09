; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_FUN_00485610(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db5fa
;   undefined4 DAT_005db5fe
;   undefined4 DAT_005db606
;   undefined4 DAT_005db60e
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dtrace.cpp_FUN_0048b040
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_FUN_004b5eb0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485610
        ;   Label: core_drip.cpp_FUN_00485610
    PUSH ESI                            ; 00485611
    PUSH EDI                            ; 00485612
    PUSH EBP                            ; 00485613
    SUB ESP,0xc8                        ; 00485614
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0048561a
    CMP dword ptr [EBX + 0x2ec],0x0     ; 00485621
    JZ 0x0048566e                       ; 00485628
        ;   XREF to: 0048566e (CONDITIONAL_JUMP)  ; LAB_0048566e
    TEST dword ptr [EBX + 0x2dc],0x7fffffff ; 0048562a
        ;   Label: LAB_0048562a
    JZ 0x004856d6                       ; 00485634
        ;   XREF to: 004856d6 (CONDITIONAL_JUMP)  ; LAB_004856d6
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0048563a
    JZ 0x00485663                       ; 00485641
        ;   XREF to: 00485663 (CONDITIONAL_JUMP)  ; LAB_00485663
    FLD float ptr [EBX + 0x2dc]         ; 00485643
    FSUB float ptr [ESP + 0xe0]         ; 00485649
    FST float ptr [EBX + 0x2dc]         ; 00485650
    FLDZ                                ; 00485656
    FCOMPP                              ; 00485658
    FNSTSW AX                           ; 0048565a
    SAHF                                ; 0048565c
    JA 0x00485a46                       ; 0048565d
        ;   XREF to: 00485a46 (CONDITIONAL_JUMP)  ; LAB_00485a46
    ADD ESP,0xc8                        ; 00485663
        ;   Label: LAB_00485663
    POP EBP                             ; 00485669
    POP EDI                             ; 0048566a
    POP ESI                             ; 0048566b
    POP EBX                             ; 0048566c
    RET                                 ; 0048566d
    LEA EDI,[ESP + 0x84]                ; 0048566e
        ;   Label: LAB_0048566e
    LEA ESI,[EBX + 0x2f8]               ; 00485675
    LEA EAX,[ESP + 0x84]                ; 0048567b
    MOVSD ES:EDI,ESI                    ; 00485682
    MOVSD ES:EDI,ESI                    ; 00485683
    MOVSD ES:EDI,ESI                    ; 00485684
    PUSH EAX                            ; 00485685
    FLD float ptr [ESP + 0x8c]          ; 00485686
    LEA ESI,[ESP + 0x70]                ; 0048568d
    LEA EAX,[EBX + 0x2f8]               ; 00485691
    LEA EDI,[ESP + 0x7c]                ; 00485697
    PUSH EAX                            ; 0048569b
    FADD float ptr [0x005db5fa]         ; 0048569c | DAT_005db5fa
    PUSH 0x1fe5c1c                      ; 004856a2
    FSTP float ptr [ESP + 0x94]         ; 004856a7
    CALL core_dtrace.cpp_FUN_0048b040   ; 004856ae
        ;   XREF to: 0048b040 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b040()
    LEA ESI,[ESP + 0x78]                ; 004856b3
    ADD ESP,0xc                         ; 004856b7
    MOVSD ES:EDI,ESI                    ; 004856ba
    MOVSD ES:EDI,ESI                    ; 004856bb
    MOVSD ES:EDI,ESI                    ; 004856bc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004856bd
    MOV dword ptr [EBX + 0x2ec],0x1     ; 004856c1
    MOV dword ptr [EBX + 0x2f0],EAX     ; 004856cb
    JMP 0x0048562a                      ; 004856d1
        ;   XREF to: 0048562a (UNCONDITIONAL_JUMP)  ; LAB_0048562a
    FLD float ptr [ESP + 0xe0]          ; 004856d6
        ;   Label: LAB_004856d6
    FLD ST0                             ; 004856dd
    FMUL double ptr [0x005db5fe]        ; 004856df | DAT_005db5fe
    FSUBR float ptr [EBX + 0x308]       ; 004856e5
    FST float ptr [EBX + 0x308]         ; 004856eb
    FMULP                               ; 004856f1
    LEA ESI,[ESP + 0x3c]                ; 004856f3
    LEA EDI,[ESP + 0x54]                ; 004856f7
    PUSH EBX                            ; 004856fb
    FADD float ptr [EBX + 0x24]         ; 004856fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004856ff
    FSTP float ptr [EBX + 0x24]         ; 00485705
    CALL dword ptr [EAX + 0x1c]         ; 00485708
    MOV ECX,0x6                         ; 0048570b
    LEA ESI,[ESP + 0x40]                ; 00485710
    ADD ESP,0x4                         ; 00485714
    MOVSD.REP ES:EDI,ESI                ; 00485717
    FLD float ptr [ESP + 0x64]          ; 00485719
    FSUB float ptr [ESP + 0x58]         ; 0048571d
    FMUL double ptr [0x005db606]        ; 00485721 | DAT_005db606
    FSUBR float ptr [EBX + 0x2f0]       ; 00485727
    FLD float ptr [EBX + 0x24]          ; 0048572d
    FCOMPP                              ; 00485730
    FNSTSW AX                           ; 00485732
    SAHF                                ; 00485734
    JC 0x004857a0                       ; 00485735
        ;   XREF to: 004857a0 (CONDITIONAL_JUMP)  ; LAB_004857a0
    LEA EAX,[EBX + 0x20]                ; 00485737
        ;   Label: LAB_00485737
    XOR ESI,ESI                         ; 0048573a
    XOR EDI,EDI                         ; 0048573c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0048573e
    MOV EAX,[0x00622c18]                ; 00485745 | g_CDemonSetPtr
        ;   Label: LAB_00485745
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 0048574a
    JGE 0x00485663                      ; 00485750
        ;   XREF to: 00485663 (CONDITIONAL_JUMP)  ; LAB_00485663
    MOV EBP,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 00485756
    MOV EAX,ESP                         ; 0048575d
    PUSH EAX                            ; 0048575f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00485760
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00485765
    MOV EDX,ESP                         ; 00485768
    MOV EAX,dword ptr [EBX + 0x310]     ; 0048576a
    PUSH EDX                            ; 00485770
    MOV dword ptr [ESP + 0x8],EAX       ; 00485771
    MOV dword ptr [ESP + 0x38],EBX      ; 00485775
    PUSH 0x3f800000                     ; 00485779
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0048577e
    MOV dword ptr [ESP + 0x40],EBX      ; 00485785
    PUSH EDX                            ; 00485789
    MOV EAX,dword ptr [EBP + 0x154]     ; 0048578a
    PUSH EBP                            ; 00485790
    ADD EDI,0x4                         ; 00485791
    INC ESI                             ; 00485794
    CALL dword ptr [EAX + 0x100]        ; 00485795
    ADD ESP,0x10                        ; 0048579b
    JMP 0x00485745                      ; 0048579e
        ;   XREF to: 00485745 (UNCONDITIONAL_JUMP)  ; LAB_00485745
    CMP dword ptr [EBX + 0x338],0x0     ; 004857a0
        ;   Label: LAB_004857a0
    JZ 0x004857da                       ; 004857a7
        ;   XREF to: 004857da (CONDITIONAL_JUMP)  ; LAB_004857da
    PUSH 0x3f800000                     ; 004857a9
    PUSH 0x0                            ; 004857ae
    PUSH 0x0                            ; 004857b0
    MOV EBP,dword ptr [0x00622c18]      ; 004857b2 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004857b8
    PUSH EBP                            ; 004857bd
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0 ; 004857be
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004857c3
    LEA EAX,[EBX + 0x314]               ; 004857c6
    PUSH EAX                            ; 004857cc
    MOV EDX,dword ptr [EBX + 0x154]     ; 004857cd
    PUSH EBX                            ; 004857d3
    CALL dword ptr [EDX + 0x2c]         ; 004857d4
    ADD ESP,0x8                         ; 004857d7
    FLD float ptr [EBX + 0x2f0]         ; 004857da
        ;   Label: LAB_004857da
    MOV EAX,dword ptr [EBX + 0x334]     ; 004857e0
    FSTP float ptr [EBX + 0x24]         ; 004857e6
    TEST EAX,EAX                        ; 004857e9
    JNZ 0x004859a0                      ; 004857eb
        ;   XREF to: 004859a0 (CONDITIONAL_JUMP)  ; LAB_004859a0
    LEA ESI,[EBX + 0x20]                ; 004857f1
    XOR EDI,EDI                         ; 004857f4
    PUSH 0x3f000000                     ; 004857f6
        ;   Label: LAB_004857f6
    PUSH 0xbf000000                     ; 004857fb
    CALL core_actor.cpp_FUN_0040cc00    ; 00485800
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 00485805
    FLD float ptr [ESP + 0xcc]          ; 0048580c
    ADD ESP,0x8                         ; 00485813
    PUSH 0x3f000000                     ; 00485816
    PUSH 0xbf000000                     ; 0048581b
    FSTP float ptr [ESP + 0xa4]         ; 00485820
    CALL core_actor.cpp_FUN_0040cc00    ; 00485827
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0048582c
    FLD float ptr [ESP + 0xcc]          ; 00485833
    ADD ESP,0x8                         ; 0048583a
    PUSH 0x3f000000                     ; 0048583d
    PUSH 0xbf000000                     ; 00485842
    FSTP float ptr [ESP + 0xa8]         ; 00485847
    CALL core_actor.cpp_FUN_0040cc00    ; 0048584e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 00485853
    MOV EDX,dword ptr [0x0061c010]      ; 0048585a | DAT_0061c010
    FLD float ptr [ESP + 0xcc]          ; 00485860
    ADD ESP,0x8                         ; 00485867
    LEA EAX,[ESP + 0x9c]                ; 0048586a
    FLD float ptr [ESP + 0x9c]          ; 00485871
    FLD float ptr [ESP + 0xa0]          ; 00485878
    FXCH ST2                            ; 0048587f
    FSTP float ptr [ESP + 0xa4]         ; 00485881
    PUSH 0xffff                         ; 00485888
    FLD float ptr [ESP + 0xa8]          ; 0048588d
    PUSH 0x0                            ; 00485894
    FXCH                                ; 00485896
    FADD float ptr [ESI]                ; 00485898
    PUSH 0x3f000000                     ; 0048589a
    FSTP float ptr [ESP + 0xa8]         ; 0048589f
    FXCH                                ; 004858a6
    FADD float ptr [ESI + 0x4]          ; 004858a8
    PUSH EAX                            ; 004858ab
    FSTP float ptr [ESP + 0xb0]         ; 004858ac
    FADD float ptr [ESI + 0x8]          ; 004858b3
    PUSH EDX                            ; 004858b6
    FSTP float ptr [ESP + 0xb8]         ; 004858b7
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004858be
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004858c3
    PUSH 0x3fc90fdb                     ; 004858c6
    PUSH 0x3f490fdb                     ; 004858cb
    CALL core_actor.cpp_FUN_0040cc00    ; 004858d0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004858d5
    FLD float ptr [ESP + 0xcc]          ; 004858dc
    ADD ESP,0x8                         ; 004858e3
    PUSH 0x40c90fdb                     ; 004858e6
    PUSH 0x0                            ; 004858eb
    FSTP float ptr [ESP + 0xc8]         ; 004858ed
    CALL core_actor.cpp_FUN_0040cc00    ; 004858f4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004858f9
    FLD float ptr [ESP + 0xcc]          ; 00485900
    ADD ESP,0x8                         ; 00485907
    FLD ST0                             ; 0048590a
    FCOS                                ; 0048590c
    FLD float ptr [ESP + 0xc0]          ; 0048590e
    FLD ST0                             ; 00485915
    FCOS                                ; 00485917
    FXCH ST3                            ; 00485919
    FSIN                                ; 0048591b
    FXCH                                ; 0048591d
    FSIN                                ; 0048591f
    FXCH ST2                            ; 00485921
    FMUL float ptr [0x005db60e]         ; 00485923 | DAT_005db60e
    FXCH                                ; 00485929
    FMUL float ptr [0x005db60e]         ; 0048592b | DAT_005db60e
    FXCH ST2                            ; 00485931
    FMUL float ptr [0x005db60e]         ; 00485933 | DAT_005db60e
    FXCH ST3                            ; 00485939
    FSTP float ptr [ESP + 0xbc]         ; 0048593b
    FMUL float ptr [ESP + 0xbc]         ; 00485942
    FXCH                                ; 00485949
    FMUL float ptr [ESP + 0xbc]         ; 0048594b
    PUSH 0x1beee04                      ; 00485952
    FXCH ST2                            ; 00485957
    FSTP float ptr [ESP + 0x98]         ; 00485959
    FSTP float ptr [ESP + 0x94]         ; 00485960
    FSTP float ptr [ESP + 0x9c]         ; 00485967
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0048596e
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00485973
    PUSH EAX                            ; 00485976
    LEA EAX,[ESP + 0x94]                ; 00485977
    PUSH EAX                            ; 0048597e
    PUSH ESI                            ; 0048597f
    MOV ECX,dword ptr [0x0061c010]      ; 00485980 | DAT_0061c010
    PUSH ECX                            ; 00485986
    INC EDI                             ; 00485987
    CALL core_fire.cpp_FUN_004b5eb0     ; 00485988
        ;   XREF to: 004b5eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b5eb0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0048598d
    CMP EDI,0xa                         ; 00485990
    JL 0x004857f6                       ; 00485993
        ;   XREF to: 004857f6 (CONDITIONAL_JUMP)  ; LAB_004857f6
    LEA EAX,[EAX]                       ; 00485999
    NOP                                 ; 0048599f
    PUSH 0x3f800000                     ; 004859a0
        ;   Label: LAB_004859a0
    FLD float ptr [EBX + 0x2fc]         ; 004859a5
    PUSH 0x0                            ; 004859ab
    FSTP float ptr [EBX + 0x24]         ; 004859ad
    CALL core_actor.cpp_FUN_0040cc00    ; 004859b0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004859b5
    FLD float ptr [ESP + 0xcc]          ; 004859bc
    ADD ESP,0x8                         ; 004859c3
    FMUL float ptr [EBX + 0x2e8]        ; 004859c6
    PUSH 0x3f800000                     ; 004859cc
    FADD float ptr [EBX + 0x2f8]        ; 004859d1
    PUSH 0x0                            ; 004859d7
    FSTP float ptr [EBX + 0x20]         ; 004859d9
    CALL core_actor.cpp_FUN_0040cc00    ; 004859dc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004859e1
    FLD float ptr [ESP + 0xcc]          ; 004859e8
    FMUL float ptr [EBX + 0x2e8]        ; 004859ef
    FADD float ptr [EBX + 0x300]        ; 004859f5
    LEA EAX,[EBX + 0x304]               ; 004859fb
    FSTP float ptr [EBX + 0x28]         ; 00485a01
    MOV dword ptr [EAX + 0x8],0x0       ; 00485a04
    ADD ESP,0x8                         ; 00485a0b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00485a0e
    MOV dword ptr [EAX + 0x4],EDX       ; 00485a11
    MOV EDX,dword ptr [EAX + 0x4]       ; 00485a14
    MOV dword ptr [EAX],EDX             ; 00485a17
    PUSH dword ptr [EBX + 0x2e4]        ; 00485a19
    PUSH dword ptr [EBX + 0x2e0]        ; 00485a1f
    CALL core_actor.cpp_FUN_0040cc00    ; 00485a25
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xcc],EAX      ; 00485a2a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00485a31
    MOV dword ptr [EBX + 0x2dc],EAX     ; 00485a38
    ADD ESP,0x8                         ; 00485a3e
    JMP 0x00485737                      ; 00485a41
        ;   XREF to: 00485737 (UNCONDITIONAL_JUMP)  ; LAB_00485737
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00485a46
        ;   Label: LAB_00485a46
    ADD ESP,0xc8                        ; 00485a50
    POP EBP                             ; 00485a56
    POP EDI                             ; 00485a57
    POP ESI                             ; 00485a58
    POP EBX                             ; 00485a59
    RET                                 ; 00485a5a

