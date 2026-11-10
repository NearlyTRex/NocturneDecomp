; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_004b2af0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0 at 004b5b16
;
; Referenced Globals:
;   TerminatedCString s_fr46_03d_raw_005df4e4
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2af0
        ;   Label: core_fire.cpp_loadGunFlameAssets_FUN_004b2af0
    PUSH ESI                            ; 004b2af1
    PUSH EDI                            ; 004b2af2
    PUSH EBP                            ; 004b2af3
    MOV EDI,0x1c58588                   ; 004b2af4
    MOV ESI,0xbe                        ; 004b2af9
    XOR EBX,EBX                         ; 004b2afe
    ADD EDI,0x8                         ; 004b2b00
    IMUL EAX,EBX,0x18                   ; 004b2b03
        ;   Label: LAB_004b2b03
    PUSH ESI                            ; 004b2b06
    PUSH 0x5df4e4                       ; 004b2b07 | = "fr46%03d.raw"
    MOV EBP,0x1c58588                   ; 004b2b0c
    PUSH EDI                            ; 004b2b11
    ADD EBP,EAX                         ; 004b2b12
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b2b14
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b2b19
    PUSH EBP                            ; 004b2b1c
    MOV EDX,dword ptr [0x00612560]      ; 004b2b1d | DAT_00612560
    INC ESI                             ; 004b2b23
    PUSH EDX                            ; 004b2b24 | DAT_01bc120c
    ADD EDI,0x18                        ; 004b2b25
    INC EBX                             ; 004b2b28
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b2b29
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b2b2e
    CMP EBX,0x14                        ; 004b2b31
    JL 0x004b2b03                       ; 004b2b34
        ;   XREF to: 004b2b03 (CONDITIONAL_JUMP)  ; LAB_004b2b03
    POP EBP                             ; 004b2b36
    POP EDI                             ; 004b2b37
    POP ESI                             ; 004b2b38
    POP EBX                             ; 004b2b39
    RET                                 ; 004b2b3a

