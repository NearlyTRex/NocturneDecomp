; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508643
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509961
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508fe6
;   core_set.cpp_FUN_0050a260 at 0050a474
;
; Referenced Globals:
;   string s_..\\core\\dlight.cpp_0057c697
;   string s_CDemonLight::endScene_-_Scene_no_0057c6aa
;   double DOUBLE_0057c6d6 = 0.00390625
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e720
        ;   Label: core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
    PUSH ESI                            ; 0044e721
    PUSH EDI                            ; 0044e722
    PUSH EBP                            ; 0044e723
    MOV EBP,ESP                         ; 0044e724
    SUB ESP,0x4                         ; 0044e726
    AND ESP,0xfffffff8                  ; 0044e729
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044e72c
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044e72f
    JZ 0x0044e7fa                       ; 0044e736
        ;   XREF to: 0044e7fa (CONDITIONAL_JUMP)  ; LAB_0044e7fa
    CMP dword ptr [ESI + 0x168],0x0     ; 0044e73c
        ;   Label: LAB_0044e73c
    JNZ 0x0044e78a                      ; 0044e743
        ;   XREF to: 0044e78a (CONDITIONAL_JUMP)  ; LAB_0044e78a
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044e745
    IMUL EDX,dword ptr [ESI + 0x1cc4]   ; 0044e74b
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0044e752
    XOR EBX,EBX                         ; 0044e758
    TEST EDX,EDX                        ; 0044e75a
    JLE 0x0044e778                      ; 0044e75c
        ;   XREF to: 0044e778 (CONDITIONAL_JUMP)  ; LAB_0044e778
    XOR EAX,EAX                         ; 0044e75e
        ;   Label: LAB_0044e75e
    MOV AX,word ptr [ECX]               ; 0044e760
    CMP EAX,0xffff                      ; 0044e763
    JGE 0x0044e770                      ; 0044e768
        ;   XREF to: 0044e770 (CONDITIONAL_JUMP)  ; LAB_0044e770
    CMP EAX,EBX                         ; 0044e76a
    JLE 0x0044e770                      ; 0044e76c
        ;   XREF to: 0044e770 (CONDITIONAL_JUMP)  ; LAB_0044e770
    MOV EBX,EAX                         ; 0044e76e
    DEC EDX                             ; 0044e770
        ;   Label: LAB_0044e770
    ADD ECX,0x2                         ; 0044e771
    TEST EDX,EDX                        ; 0044e774
    JG 0x0044e75e                       ; 0044e776
        ;   XREF to: 0044e75e (CONDITIONAL_JUMP)  ; LAB_0044e75e
    MOV dword ptr [ESP],EBX             ; 0044e778
        ;   Label: LAB_0044e778
    FILD dword ptr [ESP]                ; 0044e77b
    FMUL double ptr [0x0057c6d6]        ; 0044e77e | DOUBLE_0057c6d6
    FSTP float ptr [ESI + 0x100]        ; 0044e784
    PUSH 0x0                            ; 0044e78a
        ;   Label: LAB_0044e78a
    MOV EDX,dword ptr [0x005ae704]      ; 0044e78c | DAT_005ae704
    PUSH EDX                            ; 0044e792 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0044e793
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070()
    ADD ESP,0x8                         ; 0044e798
    MOV ECX,dword ptr [0x005ae704]      ; 0044e79b | DAT_005ae704
    PUSH ECX                            ; 0044e7a1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 0044e7a2
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70()
    ADD ESP,0x4                         ; 0044e7a7
    MOV EBX,dword ptr [ESI + 0x1cc4]    ; 0044e7aa
    XOR EAX,EAX                         ; 0044e7b0
    TEST EBX,EBX                        ; 0044e7b2
    JLE 0x0044e7e0                      ; 0044e7b4
        ;   XREF to: 0044e7e0 (CONDITIONAL_JUMP)  ; LAB_0044e7e0
    MOV EDX,ESI                         ; 0044e7b6
    MOV ECX,dword ptr [EDX + 0x1cd4]    ; 0044e7b8
        ;   Label: LAB_0044e7b8
    MOV dword ptr [EAX*0x4 + 0x1bd2fa0],ECX ; 0044e7be | DAT_01bd2fa0 | DAT_01bd2fa4
    INC EAX                             ; 0044e7c5
    MOV EDI,dword ptr [ESI + 0x1cc4]    ; 0044e7c6
    ADD EDX,0x4                         ; 0044e7cc
    CMP EAX,EDI                         ; 0044e7cf
    JL 0x0044e7b8                       ; 0044e7d1
        ;   XREF to: 0044e7b8 (CONDITIONAL_JUMP)  ; LAB_0044e7b8
    LEA EAX,[EAX]                       ; 0044e7d3
    LEA EDX,[EDX]                       ; 0044e7d9
    NOP                                 ; 0044e7df
    PUSH ESI                            ; 0044e7e0
        ;   Label: LAB_0044e7e0
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270 ; 0044e7e1
        ;   XREF to: 00440270 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270()
    ADD ESP,0x4                         ; 0044e7e6
    MOV dword ptr [ESI + 0x11e4],0x0    ; 0044e7e9
    MOV ESP,EBP                         ; 0044e7f3
    POP EBP                             ; 0044e7f5
    POP EDI                             ; 0044e7f6
    POP ESI                             ; 0044e7f7
    POP EBX                             ; 0044e7f8
    RET                                 ; 0044e7f9
    MOV ECX,0x57c697                    ; 0044e7fa | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044e7fa
    MOV EBX,0x164                       ; 0044e7ff
    PUSH 0x57c6aa                       ; 0044e804 | = "CDemonLight::endScene - Scene not open"
    MOV dword ptr [0x01cc4800],ECX      ; 0044e809 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044e80f | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044e815
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044e81a
    JMP 0x0044e73c                      ; 0044e81d
        ;   XREF to: 0044e73c (UNCONDITIONAL_JUMP)  ; LAB_0044e73c

