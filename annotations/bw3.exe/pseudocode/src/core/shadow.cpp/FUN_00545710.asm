; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shadow_cpp_FUN_00545710(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1366
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042f310
;   core_charactr.cpp_FUN_0042f6f0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545710
        ;   Label: core_shadow.cpp_FUN_00545710
    PUSH ESI                            ; 00545711
    PUSH EDI                            ; 00545712
    PUSH EBP                            ; 00545713
    SUB ESP,0x54                        ; 00545714
    MOV EBX,dword ptr [ESP + 0x68]      ; 00545717
    LEA EAX,[EBX + 0x158]               ; 0054571b
    PUSH EAX                            ; 00545721
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00545722
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,[0x01d5ba14]                ; 00545727 | DAT_01d5ba14
    SHL EAX,0x2                         ; 0054572c
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 0054572f
    ADD ESP,0x4                         ; 00545735
    TEST EDX,EDX                        ; 00545738
    JZ 0x005458ee                       ; 0054573a
        ;   XREF to: 005458ee (CONDITIONAL_JUMP)  ; LAB_005458ee
    MOV ECX,EDX                         ; 00545740
    LEA EDX,[EBX + 0x20]                ; 00545742
    LEA EDI,[ESP + 0x3c]                ; 00545745
    LEA ESI,[ESP + 0x30]                ; 00545749
    FLD float ptr [EDX]                 ; 0054574d
    FLD float ptr [EDX + 0x4]           ; 0054574f
    FLD float ptr [EDX + 0x8]           ; 00545752
    FXCH ST2                            ; 00545755
    FSUB float ptr [ECX + 0x20]         ; 00545757
    FXCH                                ; 0054575a
    FSUB float ptr [ECX + 0x24]         ; 0054575c
    FXCH ST2                            ; 0054575f
    FSUB float ptr [ECX + 0x28]         ; 00545761
    FXCH                                ; 00545764
    FSTP float ptr [ESP + 0x30]         ; 00545766
    FXCH                                ; 0054576a
    FSTP float ptr [ESP + 0x34]         ; 0054576c
    FSTP float ptr [ESP + 0x38]         ; 00545770
    MOVSD ES:EDI,ESI                    ; 00545774
    MOVSD ES:EDI,ESI                    ; 00545775
    MOVSD ES:EDI,ESI                    ; 00545776
    FLD float ptr [ESP + 0x40]          ; 00545777
    FMUL ST0                            ; 0054577b
    FLD float ptr [ESP + 0x3c]          ; 0054577d
    FMUL ST0                            ; 00545781
    FADDP                               ; 00545783
    FLD float ptr [ESP + 0x44]          ; 00545785
    FMUL ST0                            ; 00545789
    FADDP                               ; 0054578b
    MOV ECX,dword ptr [0x01d1a0a4]      ; 0054578d | DAT_01d1a0a4
    FSTP float ptr [ESP + 0x50]         ; 00545793
    MOV EDX,dword ptr [ESP + 0x50]      ; 00545797
    MOV dword ptr [EBX + 0x27bc],0x0    ; 0054579b
    SAR EDX,0x1                         ; 005457a5
    MOV EAX,dword ptr [EAX + 0x1d5ba04] ; 005457a7
    ADD EDX,ECX                         ; 005457ad
    MOV EAX,dword ptr [EAX + 0x20b88]   ; 005457af
    MOV dword ptr [ESP + 0x48],EDX      ; 005457b5
    MOV dword ptr [ESP + 0x4c],EAX      ; 005457b9
    FLD float ptr [ESP + 0x48]          ; 005457bd
    FCOMP float ptr [ESP + 0x4c]        ; 005457c1
    FNSTSW AX                           ; 005457c5
    SAHF                                ; 005457c7
    JA 0x005458f8                       ; 005457c8
        ;   XREF to: 005458f8 (CONDITIONAL_JUMP)  ; LAB_005458f8
    FLD float ptr [ESP + 0x4c]          ; 005457ce
    FLD ST0                             ; 005457d2
    FSUB float ptr [ESP + 0x48]         ; 005457d4
    FDIVRP                              ; 005457d8
    FMUL double ptr [0x005d1366]        ; 005457da | DAT_005d1366
    CALL crt_math.c_round_FUN_005a3120  ; 005457e0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd0d8]      ; 005457e5
    MOV ESI,dword ptr [EBX + 0xcdd0]    ; 005457eb
        ;   Label: LAB_005457eb
    TEST ESI,ESI                        ; 005457f1
    JNZ 0x005458ee                      ; 005457f3
        ;   XREF to: 005458ee (CONDITIONAL_JUMP)  ; LAB_005458ee
    PUSH EBX                            ; 005457f9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005457fa
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005457ff
    PUSH ESI                            ; 00545802
    MOV EAX,dword ptr [EBX + 0x154]     ; 00545803
    PUSH EBX                            ; 00545809
    LEA ESI,[ESP + 0x20]                ; 0054580a
    LEA EDI,[ESP + 0x8]                 ; 0054580e
    CALL dword ptr [EAX + 0x1c]         ; 00545812
    MOV ECX,0x6                         ; 00545815
    ADD ESP,0x4                         ; 0054581a
    LEA EAX,[ESP + 0x4]                 ; 0054581d
    LEA ESI,[ESP + 0x1c]                ; 00545821
    PUSH EAX                            ; 00545825
    MOVSD.REP ES:EDI,ESI                ; 00545826
    CALL core_box.cpp_FUN_0041daf0      ; 00545828
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0054582d
    TEST EAX,EAX                        ; 00545830
    JZ 0x005458d7                       ; 00545832
        ;   XREF to: 005458d7 (CONDITIONAL_JUMP)  ; LAB_005458d7
    MOV EDI,dword ptr [EBX + 0xd0d8]    ; 00545838
    PUSH EDI                            ; 0054583e
    MOV EBP,dword ptr [0x005f2afc]      ; 0054583f | DAT_005f2afc
    PUSH EBP                            ; 00545845 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00545846
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00545850
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00545855
    PUSH 0x0                            ; 00545858
    MOV EAX,[0x005f2afc]                ; 0054585a | DAT_005f2afc
    PUSH EAX                            ; 0054585f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00545860
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00545865
    PUSH 0x1                            ; 00545868
    MOV EDX,dword ptr [0x005f2afc]      ; 0054586a | DAT_005f2afc
    PUSH EDX                            ; 00545870 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00545871
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00545876
    PUSH 0x0                            ; 00545879
    PUSH 0x1                            ; 0054587b
    PUSH 0x2e7                          ; 0054587d
    PUSH -0x1                           ; 00545882
    LEA ESI,[EBX + 0x158]               ; 00545884
    PUSH ESI                            ; 0054588a
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 0054588b
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00545890
    MOV ECX,dword ptr [0x005f2afc]      ; 00545893 | DAT_005f2afc
    PUSH ECX                            ; 00545899 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 0054589a
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV EDI,dword ptr [0x01d8e40c]      ; 0054589f | DAT_01d8e40c
    ADD ESP,0x4                         ; 005458a5
    TEST EDI,EDI                        ; 005458a8
    JZ 0x005458b6                       ; 005458aa
        ;   XREF to: 005458b6 (CONDITIONAL_JUMP)  ; LAB_005458b6
    PUSH EBX                            ; 005458ac
    PUSH ESI                            ; 005458ad
    CALL core_motion.cpp_FUN_004fcdc0   ; 005458ae
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005458b3
    FLD float ptr [EBX + 0x3254]        ; 005458b6
        ;   Label: LAB_005458b6
    FLDZ                                ; 005458bc
    FCOMPP                              ; 005458be
    FNSTSW AX                           ; 005458c0
    SAHF                                ; 005458c2
    JNC 0x005458ce                      ; 005458c3
        ;   XREF to: 005458ce (CONDITIONAL_JUMP)  ; LAB_005458ce
    PUSH EBX                            ; 005458c5
    CALL core_charactr.cpp_FUN_0042f310 ; 005458c6
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005458cb
    PUSH EBX                            ; 005458ce
        ;   Label: LAB_005458ce
    CALL core_charactr.cpp_FUN_0042f6f0 ; 005458cf
        ;   XREF to: 0042f6f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f6f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005458d4
    PUSH EBX                            ; 005458d7
        ;   Label: LAB_005458d7
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005458d8
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005458dd
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 005458e0
    ADD ESP,0x54                        ; 005458e6
    POP EBP                             ; 005458e9
    POP EDI                             ; 005458ea
    POP ESI                             ; 005458eb
    POP EBX                             ; 005458ec
    RET                                 ; 005458ed
    XOR EAX,EAX                         ; 005458ee
        ;   Label: LAB_005458ee
    ADD ESP,0x54                        ; 005458f0
    POP EBP                             ; 005458f3
    POP EDI                             ; 005458f4
    POP ESI                             ; 005458f5
    POP EBX                             ; 005458f6
    RET                                 ; 005458f7
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 005458f8
        ;   Label: LAB_005458f8
    JMP 0x005457eb                      ; 00545902
        ;   XREF to: 005457eb (UNCONDITIONAL_JUMP)  ; LAB_005457eb

