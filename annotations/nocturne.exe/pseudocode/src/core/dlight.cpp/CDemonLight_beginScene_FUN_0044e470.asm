; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(int param_1,int param_2)
;
;
; XREF[4]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 0050861b
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 00509862
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508fbe
;   core_set.cpp_FUN_0050a260 at 0050a3af
;
; Referenced Globals:
;   string s_..\\core\\dlight.cpp_0057c616
;   string s_CDemonLight::beginScene_-_Scene_a_0057c629
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d1fc
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
;   crt_watcom.c__memset_FUN_00481980
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e470
        ;   Label: core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
    PUSH ESI                            ; 0044e471
    PUSH EDI                            ; 0044e472
    PUSH EBP                            ; 0044e473
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044e474
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044e478
    JNZ 0x0044e601                      ; 0044e47f
        ;   XREF to: 0044e601 (CONDITIONAL_JUMP)  ; LAB_0044e601
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044e485
        ;   Label: LAB_0044e485
    PUSH EDI                            ; 0044e489
    PUSH EBX                            ; 0044e48a
    MOV dword ptr [EBX + 0x11e4],0x1    ; 0044e48b
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240 ; 0044e495
        ;   XREF to: 00440240 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240()
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044e49a
    ADD ESP,0x8                         ; 0044e4a0
    DEC EAX                             ; 0044e4a3
    PUSH EAX                            ; 0044e4a4
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044e4a5
    DEC EAX                             ; 0044e4ab
    PUSH EAX                            ; 0044e4ac
    PUSH 0x0                            ; 0044e4ad
    PUSH 0x0                            ; 0044e4af
    MOV EBP,dword ptr [0x005ae704]      ; 0044e4b1 | DAT_005ae704
    PUSH EBP                            ; 0044e4b7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 0044e4b8
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40()
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044e4bd
    DEC EAX                             ; 0044e4c3
    MOV dword ptr [EBX + 0x11dc],EAX    ; 0044e4c4
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044e4ca
    MOV dword ptr [EBX + 0x11d4],0x0    ; 0044e4d0
    DEC EAX                             ; 0044e4da
    ADD ESP,0x14                        ; 0044e4db
    MOV dword ptr [EBX + 0x11e0],EAX    ; 0044e4de
    LEA EAX,[EBX + 0x104]               ; 0044e4e4
    MOV dword ptr [EBX + 0x11d8],0x0    ; 0044e4ea
    PUSH EAX                            ; 0044e4f4
    MOV EAX,[0x005ae704]                ; 0044e4f5 | DAT_005ae704
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0044e4fa
    PUSH EAX                            ; 0044e504 | DAT_01b4d738
    MOV dword ptr [EBX + 0x168],EDI     ; 0044e505
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 0044e50b
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 0044e510
    MOV EDX,dword ptr [0x005ae704]      ; 0044e513 | DAT_005ae704
    PUSH dword ptr [EBX + 0x138]        ; 0044e519
    PUSH EDX                            ; 0044e51f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 0044e520
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 0044e525
    LEA EAX,[EBX + 0x110]               ; 0044e528
    PUSH EAX                            ; 0044e52e
    MOV ECX,dword ptr [0x005ae704]      ; 0044e52f | DAT_005ae704
    PUSH ECX                            ; 0044e535 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0 ; 0044e536
        ;   XREF to: 004607b0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0()
    ADD ESP,0x8                         ; 0044e53b
    MOV EDX,dword ptr [0x01c039ec]      ; 0044e53e | DAT_01c039ec
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044e544
    IMUL EDX                            ; 0044e54a
    SHRD EAX,EDX,0x10                   ; 0044e54c
    MOV EDX,dword ptr [0x01c039f8]      ; 0044e550 | DAT_01c039f8
    MOV [0x01c039ec],EAX                ; 0044e556 | DAT_01c039ec
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044e55b
    IMUL EDX                            ; 0044e561
    SHRD EAX,EDX,0x10                   ; 0044e563
    MOV EDX,dword ptr [0x01c03a04]      ; 0044e567 | DAT_01c03a04
    MOV [0x01c039f8],EAX                ; 0044e56d | DAT_01c039f8
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044e572
    IMUL EDX                            ; 0044e578
    SHRD EAX,EDX,0x10                   ; 0044e57a
    MOV [0x01c03a04],EAX                ; 0044e57e | DAT_01c03a04
    TEST EDI,EDI                        ; 0044e583
    JZ 0x0044e629                       ; 0044e585
        ;   XREF to: 0044e629 (CONDITIONAL_JUMP)  ; LAB_0044e629
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 0044e58b
        ;   Label: LAB_0044e58b
    XOR EAX,EAX                         ; 0044e591
    TEST EBP,EBP                        ; 0044e593
    JLE 0x0044e5d0                      ; 0044e595
        ;   XREF to: 0044e5d0 (CONDITIONAL_JUMP)  ; LAB_0044e5d0
    MOV EDX,EBX                         ; 0044e597
    MOV ESI,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 0044e599 | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_0044e599
    MOV dword ptr [EDX + 0x1cd4],ESI    ; 0044e5a0
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0044e5a6
    IMUL ESI,EAX                        ; 0044e5ac
    MOV EDI,dword ptr [EBX + 0x2f94]    ; 0044e5af
    ADD ESI,ESI                         ; 0044e5b5
    ADD ESI,EDI                         ; 0044e5b7
    MOV dword ptr [EAX*0x4 + 0x1bd2fa0],ESI ; 0044e5b9 | DAT_01bd2fa0 | DAT_01bd2fa4
    INC EAX                             ; 0044e5c0
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0044e5c1
    ADD EDX,0x4                         ; 0044e5c7
    CMP EAX,ECX                         ; 0044e5ca
    JL 0x0044e599                       ; 0044e5cc
        ;   XREF to: 0044e599 (CONDITIONAL_JUMP)  ; LAB_0044e599
    MOV EAX,EAX                         ; 0044e5ce
    PUSH EBX                            ; 0044e5d0
        ;   Label: LAB_0044e5d0
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0 ; 0044e5d1
        ;   XREF to: 00440fe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0()
    ADD ESP,0x4                         ; 0044e5d6
    PUSH 0x1                            ; 0044e5d9
    MOV EBX,dword ptr [0x005ae704]      ; 0044e5db | DAT_005ae704
    PUSH EBX                            ; 0044e5e1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0044e5e2
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070()
    ADD ESP,0x8                         ; 0044e5e7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044e5ea
    TEST ESI,ESI                        ; 0044e5ee
    JZ 0x0044e64e                       ; 0044e5f0
        ;   XREF to: 0044e64e (CONDITIONAL_JUMP)  ; LAB_0044e64e
    MOV dword ptr [0x01b4d1fc],0x8000   ; 0044e5f2 | DAT_01b4d1fc
    POP EBP                             ; 0044e5fc
    POP EDI                             ; 0044e5fd
    POP ESI                             ; 0044e5fe
    POP EBX                             ; 0044e5ff
    RET                                 ; 0044e600
    MOV ECX,0x57c616                    ; 0044e601 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044e601
    MOV ESI,0xf3                        ; 0044e606
    PUSH 0x57c629                       ; 0044e60b | = "CDemonLight::beginScene - Scene alrea..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044e610 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044e616 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044e61c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044e621
    JMP 0x0044e485                      ; 0044e624
        ;   XREF to: 0044e485 (UNCONDITIONAL_JUMP)  ; LAB_0044e485
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044e629
        ;   Label: LAB_0044e629
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 0044e62f
    ADD EAX,EAX                         ; 0044e636
    PUSH EAX                            ; 0044e638
    MOV EDX,0xff                        ; 0044e639
    MOV ECX,dword ptr [EBX + 0x2f94]    ; 0044e63e
    CALL crt_watcom.c__memset_FUN_00481980 ; 0044e644
        ;   XREF to: 00481980 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00481980()
    JMP 0x0044e58b                      ; 0044e649
        ;   XREF to: 0044e58b (UNCONDITIONAL_JUMP)  ; LAB_0044e58b
    MOV dword ptr [0x01b4d1fc],ESI      ; 0044e64e | DAT_01b4d1fc
        ;   Label: LAB_0044e64e
    POP EBP                             ; 0044e654
    POP EDI                             ; 0044e655
    POP ESI                             ; 0044e656
    POP EBX                             ; 0044e657
    RET                                 ; 0044e658

