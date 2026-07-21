; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_captureLightTextures_FUN_004504e0(void)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_0050d280 at 0050d280
;
; Referenced Globals:
;   undefined4 DAT_005ae470
;   undefined4 DAT_005ae488
;   undefined4 DAT_005ae4b8
;   undefined4 DAT_005ae638
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004504e0
        ;   Label: core_dlight.cpp_captureLightTextures_FUN_004504e0
    PUSH ESI                            ; 004504e1
    PUSH 0x5ae470                       ; 004504e2 | DAT_005ae470
    MOV EDX,dword ptr [0x005ae704]      ; 004504e7 | DAT_005ae704
    PUSH EDX                            ; 004504ed | DAT_01b4d738
    MOV EBX,0x5ae488                    ; 004504ee | DAT_005ae488
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004504f3
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    LEA ESI,[EBX + 0x1b0]               ; 004504f8 | DAT_005ae638
    ADD ESP,0x8                         ; 004504fe
    PUSH EBX                            ; 00450501 | DAT_005ae488 | DAT_005ae4b8
        ;   Label: LAB_00450501
    MOV ECX,dword ptr [0x005ae704]      ; 00450502 | DAT_005ae704
    PUSH ECX                            ; 00450508 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00450509
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD EBX,0x30                        ; 0045050e
    ADD ESP,0x8                         ; 00450511
    CMP EBX,ESI                         ; 00450514
    JNZ 0x00450501                      ; 00450516
        ;   XREF to: 00450501 (CONDITIONAL_JUMP)  ; LAB_00450501
    POP ESI                             ; 00450518
    POP EBX                             ; 00450519
    RET                                 ; 0045051a

