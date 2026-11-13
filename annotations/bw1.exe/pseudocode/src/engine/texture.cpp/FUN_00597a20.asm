; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00597a20(int param_1)
;
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 004300ff
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 00441897
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60 at 0045ed59
;   core_flies.cpp_CFlies_renderOpaque_FUN_004c0080 at 004c023c
;   core_inv.cpp_FUN_004f70e0 at 004f7413
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407820 at 00407922
;   engine_3d.c_updateAnimatedTexture_FUN_00404f10 at 00404f7d
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 at 00484f07
;   engine_mini3d.cpp_useTexture_FUN_005121b0 at 005121bf
;   engine_texture.cpp_FUN_00597c90 at 00597c96
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;   undefined4 DAT_02c8a67c
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0
;   engine_texture.cpp_FUN_005970b0
;   engine_texture.cpp_FUN_00597140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597a20
        ;   Label: engine_texture.cpp_FUN_00597a20
    PUSH EDI                            ; 00597a21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597a22
    MOV EDX,dword ptr [0x00713a74]      ; 00597a26 | DAT_00713a74
    LEA EAX,[EBX + 0x18]                ; 00597a2c
    XOR EDI,EDI                         ; 00597a2f
    TEST EDX,EDX                        ; 00597a31
    JNZ 0x00597a3b                      ; 00597a33
        ;   XREF to: 00597a3b (CONDITIONAL_JUMP)  ; LAB_00597a3b
    CMP byte ptr [EBX + 0x8],0x0        ; 00597a35
    JNZ 0x00597a3e                      ; 00597a39
        ;   XREF to: 00597a3e (CONDITIONAL_JUMP)  ; LAB_00597a3e
    POP EDI                             ; 00597a3b
        ;   Label: LAB_00597a3b
    POP EBX                             ; 00597a3c
    RET                                 ; 00597a3d
    PUSH ESI                            ; 00597a3e
        ;   Label: LAB_00597a3e
    LEA ESI,[EBX + 0x8]                 ; 00597a3f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00597a42
    PUSH ESI                            ; 00597a45
    AND EAX,0xffff                      ; 00597a46
    PUSH EAX                            ; 00597a4b
    MOV ECX,dword ptr [0x02c8a680]      ; 00597a4c | DAT_02c8a680
    PUSH ECX                            ; 00597a52
    CALL engine_texture.cpp_FUN_005970b0 ; 00597a53
        ;   XREF to: 005970b0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005970b0()
    MOV EDX,EAX                         ; 00597a58
    ADD ESP,0xc                         ; 00597a5a
    CMP EAX,-0x1                        ; 00597a5d
    JNZ 0x00597a77                      ; 00597a60
        ;   XREF to: 00597a77 (CONDITIONAL_JUMP)  ; LAB_00597a77
    PUSH ESI                            ; 00597a62
    MOV ESI,dword ptr [0x02c8a680]      ; 00597a63 | DAT_02c8a680
    PUSH ESI                            ; 00597a69
    MOV EDI,0x1                         ; 00597a6a
    CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0 ; 00597a6f
        ;   XREF to: 005967a0 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0(CTextureCache * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 00597a74
    MOV dword ptr [EBX + 0x4],EAX       ; 00597a77
        ;   Label: LAB_00597a77
    PUSH EDI                            ; 00597a7a
    PUSH EBX                            ; 00597a7b
    MOV EDI,dword ptr [0x02c8a680]      ; 00597a7c | DAT_02c8a680
    PUSH EDI                            ; 00597a82
    MOV [0x02c8a67c],EAX                ; 00597a83 | DAT_02c8a67c
    CALL engine_texture.cpp_FUN_00597140 ; 00597a88
        ;   XREF to: 00597140 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597140()
    ADD ESP,0xc                         ; 00597a8d
    LEA EAX,[EBX + 0x18]                ; 00597a90
    POP ESI                             ; 00597a93
    POP EDI                             ; 00597a94
    POP EBX                             ; 00597a95
    RET                                 ; 00597a96

