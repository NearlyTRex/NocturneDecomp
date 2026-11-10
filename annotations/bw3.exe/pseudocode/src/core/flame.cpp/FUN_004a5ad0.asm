; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_FUN_004a5ad0(int param_1)
;
;
; XREF[3]:
;   core_burncrss.cpp_CBurncross_setup_FUN_004253d0 at 00425417
;   core_firestff.cpp_CFirestaff_setup_FUN_004a5870 at 004a58b7
;   core_flame.cpp_CFlame_setup_FUN_004a5aa0 at 004a5ab5
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fde88
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5ad0
        ;   Label: core_flame.cpp_FUN_004a5ad0
    PUSH ESI                            ; 004a5ad1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a5ad2
    LEA EBX,[ESI*0x4 + 0x0]             ; 004a5ad6
    SUB EBX,ESI                         ; 004a5add
    MOV ESI,0x5fde88                    ; 004a5adf | DAT_005fde88
    SHL EBX,0x6                         ; 004a5ae4
    ADD ESI,EBX                         ; 004a5ae7
    MOV EBX,ESI                         ; 004a5ae9
    ADD ESI,0xc0                        ; 004a5aeb
    PUSH EBX                            ; 004a5af1
        ;   Label: LAB_004a5af1
    MOV EDX,dword ptr [0x005f2afc]      ; 004a5af2 | DAT_005f2afc
    PUSH EDX                            ; 004a5af8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a5af9
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004a5afe
    ADD ESP,0x8                         ; 004a5b01
    CMP EBX,ESI                         ; 004a5b04
    JNZ 0x004a5af1                      ; 004a5b06
        ;   XREF to: 004a5af1 (CONDITIONAL_JUMP)  ; LAB_004a5af1
    POP ESI                             ; 004a5b08
    POP EBX                             ; 004a5b09
    RET                                 ; 004a5b0a

