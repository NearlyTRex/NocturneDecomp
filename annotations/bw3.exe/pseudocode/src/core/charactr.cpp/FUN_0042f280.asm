; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042f280(int param_1)
;
;
; XREF[5]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0ba4
;   core_exorcism.cpp_CExorcism_setup_FUN_0048b690 at 0048b6dc
;   core_fire.cpp_CFireEffect_preloadTossAssets_FUN_004a4340 at 004a43d8
;   core_lightsta.cpp_CLightStaff_setup_FUN_004e3eb0 at 004e3f04
;   core_styldemo.cpp_CStylerDemon_setup_FUN_0059e130 at 0059e16f
;
; Referenced Globals:
;   undefined4 DAT_005f1004
;   undefined4 DAT_005f101c
;   undefined4 DAT_005f1094
;   undefined4 DAT_005f10ac
;   undefined4 DAT_005f1124
;   undefined4 DAT_005f113c
;   undefined4 DAT_005f11b4
;   undefined4 DAT_005f11cc
;   undefined4 DAT_005f1244
;   undefined4 DAT_005f125c
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f280
        ;   Label: core_charactr.cpp_FUN_0042f280
    PUSH ESI                            ; 0042f281
    PUSH EDI                            ; 0042f282
    PUSH EBP                            ; 0042f283
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042f284
    XOR EBX,EBX                         ; 0042f288
    TEST ESI,ESI                        ; 0042f28a
        ;   Label: LAB_0042f28a
    JZ 0x0042f2ba                       ; 0042f28c
        ;   XREF to: 0042f2ba (CONDITIONAL_JUMP)  ; LAB_0042f2ba
    CMP ESI,0x1                         ; 0042f28e
    JNZ 0x0042f2ca                      ; 0042f291
        ;   XREF to: 0042f2ca (CONDITIONAL_JUMP)  ; LAB_0042f2ca
    MOV EAX,0x5f1004                    ; 0042f293 | DAT_005f1004
    ADD EAX,EBX                         ; 0042f298
    PUSH EAX                            ; 0042f29a | DAT_005f1004 | DAT_005f101c
    MOV EBP,dword ptr [0x005f2afc]      ; 0042f29b | DAT_005f2afc
    PUSH EBP                            ; 0042f2a1 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0042f2a2
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_0042f2a2
    ADD ESP,0x8                         ; 0042f2a7
    ADD EBX,0x18                        ; 0042f2aa
        ;   Label: LAB_0042f2aa
    CMP EBX,0x90                        ; 0042f2ad
    JNZ 0x0042f28a                      ; 0042f2b3
        ;   XREF to: 0042f28a (CONDITIONAL_JUMP)  ; LAB_0042f28a
    POP EBP                             ; 0042f2b5
    POP EDI                             ; 0042f2b6
    POP ESI                             ; 0042f2b7
    POP EBX                             ; 0042f2b8
    RET                                 ; 0042f2b9
    MOV EAX,0x5f1124                    ; 0042f2ba | DAT_005f1124
        ;   Label: LAB_0042f2ba
    ADD EAX,EBX                         ; 0042f2bf
    PUSH EAX                            ; 0042f2c1 | DAT_005f113c
    MOV EAX,[0x005f2afc]                ; 0042f2c2 | DAT_005f2afc
    PUSH EAX                            ; 0042f2c7 | DAT_01bdd7e4
    JMP 0x0042f2a2                      ; 0042f2c8
        ;   XREF to: 0042f2a2 (UNCONDITIONAL_JUMP)  ; LAB_0042f2a2
    CMP ESI,0x2                         ; 0042f2ca
        ;   Label: LAB_0042f2ca
    JZ 0x0042f2ea                       ; 0042f2cd
        ;   XREF to: 0042f2ea (CONDITIONAL_JUMP)  ; LAB_0042f2ea
    CMP ESI,0x4                         ; 0042f2cf
    JZ 0x0042f2fb                       ; 0042f2d2
        ;   XREF to: 0042f2fb (CONDITIONAL_JUMP)  ; LAB_0042f2fb
    CMP ESI,0x3                         ; 0042f2d4
    JNZ 0x0042f2aa                      ; 0042f2d7
        ;   XREF to: 0042f2aa (CONDITIONAL_JUMP)  ; LAB_0042f2aa
    MOV EAX,0x5f1244                    ; 0042f2d9 | DAT_005f1244
    ADD EAX,EBX                         ; 0042f2de
    PUSH EAX                            ; 0042f2e0 | DAT_005f125c
    MOV EDX,dword ptr [0x005f2afc]      ; 0042f2e1 | DAT_005f2afc
    PUSH EDX                            ; 0042f2e7 | DAT_01bdd7e4
    JMP 0x0042f2a2                      ; 0042f2e8
        ;   XREF to: 0042f2a2 (UNCONDITIONAL_JUMP)  ; LAB_0042f2a2
    MOV EAX,0x5f1094                    ; 0042f2ea | DAT_005f1094
        ;   Label: LAB_0042f2ea
    ADD EAX,EBX                         ; 0042f2ef
    PUSH EAX                            ; 0042f2f1 | DAT_005f10ac
    MOV EDI,dword ptr [0x005f2afc]      ; 0042f2f2 | DAT_005f2afc
    PUSH EDI                            ; 0042f2f8 | DAT_01bdd7e4
    JMP 0x0042f2a2                      ; 0042f2f9
        ;   XREF to: 0042f2a2 (UNCONDITIONAL_JUMP)  ; LAB_0042f2a2
    MOV EAX,0x5f11b4                    ; 0042f2fb | DAT_005f11b4
        ;   Label: LAB_0042f2fb
    ADD EAX,EBX                         ; 0042f300
    PUSH EAX                            ; 0042f302 | DAT_005f11cc
    MOV ECX,dword ptr [0x005f2afc]      ; 0042f303 | DAT_005f2afc
    PUSH ECX                            ; 0042f309 | DAT_01bdd7e4
    JMP 0x0042f2a2                      ; 0042f30a
        ;   XREF to: 0042f2a2 (UNCONDITIONAL_JUMP)  ; LAB_0042f2a2

