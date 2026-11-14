; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_0056aa10(int param_1)
;
;
; XREF[12]:
;   core_charactr.cpp_FUN_0042f310 at 0042f49a
;   core_cloth.cpp_CCloth_render_FUN_0043f460 at 0043f4f7
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0 at 0045aec9
;   core_flies.cpp_CFlies_renderOpaque_FUN_004addd0 at 004adf8c
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407860 at 00407962
;   engine_3d.c_updateAnimatedTexture_FUN_00404f10 at 00404f7d
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 at 0046e5e7
;   engine_mini3d.cpp_useTexture_FUN_004ed980 at 004ed98f
;   engine_texture.cpp_FUN_0056ac80 at 0056ac86
;   engine_texture.cpp_FUN_0056ad60 at 0056b205
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;   undefined4 DAT_02cfd0cc
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790
;   engine_texture.cpp_FUN_0056a0a0
;   engine_texture.cpp_FUN_0056a130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aa10
        ;   Label: engine_texture.cpp_FUN_0056aa10
    PUSH EDI                            ; 0056aa11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056aa12
    MOV EDX,dword ptr [0x007303f4]      ; 0056aa16 | DAT_007303f4
    LEA EAX,[EBX + 0x18]                ; 0056aa1c
    XOR EDI,EDI                         ; 0056aa1f
    TEST EDX,EDX                        ; 0056aa21
    JNZ 0x0056aa2b                      ; 0056aa23
        ;   XREF to: 0056aa2b (CONDITIONAL_JUMP)  ; LAB_0056aa2b
    CMP byte ptr [EBX + 0x8],0x0        ; 0056aa25
    JNZ 0x0056aa2e                      ; 0056aa29
        ;   XREF to: 0056aa2e (CONDITIONAL_JUMP)  ; LAB_0056aa2e
    POP EDI                             ; 0056aa2b
        ;   Label: LAB_0056aa2b
    POP EBX                             ; 0056aa2c
    RET                                 ; 0056aa2d
    PUSH ESI                            ; 0056aa2e
        ;   Label: LAB_0056aa2e
    LEA ESI,[EBX + 0x8]                 ; 0056aa2f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056aa32
    PUSH ESI                            ; 0056aa35
    AND EAX,0xffff                      ; 0056aa36
    PUSH EAX                            ; 0056aa3b
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056aa3c | DAT_02cfd0d0
    PUSH ECX                            ; 0056aa42
    CALL engine_texture.cpp_FUN_0056a0a0 ; 0056aa43
        ;   XREF to: 0056a0a0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a0a0()
    MOV EDX,EAX                         ; 0056aa48
    ADD ESP,0xc                         ; 0056aa4a
    CMP EAX,-0x1                        ; 0056aa4d
    JNZ 0x0056aa67                      ; 0056aa50
        ;   XREF to: 0056aa67 (CONDITIONAL_JUMP)  ; LAB_0056aa67
    PUSH ESI                            ; 0056aa52
    MOV ESI,dword ptr [0x02cfd0d0]      ; 0056aa53 | DAT_02cfd0d0
    PUSH ESI                            ; 0056aa59
    MOV EDI,0x1                         ; 0056aa5a
    CALL engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790 ; 0056aa5f
        ;   XREF to: 00569790 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790(CTextureCache * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 0056aa64
    MOV dword ptr [EBX + 0x4],EAX       ; 0056aa67
        ;   Label: LAB_0056aa67
    PUSH EDI                            ; 0056aa6a
    PUSH EBX                            ; 0056aa6b
    MOV EDI,dword ptr [0x02cfd0d0]      ; 0056aa6c | DAT_02cfd0d0
    PUSH EDI                            ; 0056aa72
    MOV [0x02cfd0cc],EAX                ; 0056aa73 | DAT_02cfd0cc
    CALL engine_texture.cpp_FUN_0056a130 ; 0056aa78
        ;   XREF to: 0056a130 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a130()
    ADD ESP,0xc                         ; 0056aa7d
    LEA EAX,[EBX + 0x18]                ; 0056aa80
    POP ESI                             ; 0056aa83
    POP EDI                             ; 0056aa84
    POP EBX                             ; 0056aa85
    RET                                 ; 0056aa86

