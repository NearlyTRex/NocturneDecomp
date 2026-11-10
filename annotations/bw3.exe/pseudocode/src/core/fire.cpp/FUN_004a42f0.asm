; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a42f0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   core_fire.cpp_FUN_004a4340 at 004a446d
;   core_fire.cpp_loadDebrisAssets_FUN_0049c680 at 0049c724
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fcb14
;   undefined4 DAT_005fcb2c
;   undefined4 DAT_005fd084
;   undefined4 DAT_005fd09c
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a42f0
        ;   Label: core_fire.cpp_FUN_004a42f0
    PUSH ESI                            ; 004a42f1
    PUSH EDI                            ; 004a42f2
    PUSH EBP                            ; 004a42f3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a42f4
    MOV EBX,0x5fcb14                    ; 004a42f8 | DAT_005fcb14
    MOV ESI,0x5fd084                    ; 004a42fd | DAT_005fd084
    LEA EBP,[EBX + 0x570]               ; 004a4302 | DAT_005fd084
    TEST EDI,EDI                        ; 004a4308
        ;   Label: LAB_004a4308
    JZ 0x004a4311                       ; 004a430a
        ;   XREF to: 004a4311 (CONDITIONAL_JUMP)  ; LAB_004a4311
    CMP EDI,0x2                         ; 004a430c
    JNZ 0x004a4330                      ; 004a430f
        ;   XREF to: 004a4330 (CONDITIONAL_JUMP)  ; LAB_004a4330
    PUSH EBX                            ; 004a4311 | DAT_005fcb14 | DAT_005fcb2c
        ;   Label: LAB_004a4311
    MOV ECX,dword ptr [0x005f2afc]      ; 004a4312 | DAT_005f2afc
    PUSH ECX                            ; 004a4318 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a4319
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004a4319
    ADD ESP,0x8                         ; 004a431e
    ADD EBX,0x18                        ; 004a4321
        ;   Label: LAB_004a4321
    ADD ESI,0x18                        ; 004a4324
    CMP EBX,EBP                         ; 004a4327
    JNZ 0x004a4308                      ; 004a4329
        ;   XREF to: 004a4308 (CONDITIONAL_JUMP)  ; LAB_004a4308
    POP EBP                             ; 004a432b
    POP EDI                             ; 004a432c
    POP ESI                             ; 004a432d
    POP EBX                             ; 004a432e
    RET                                 ; 004a432f
    CMP EDI,0x3                         ; 004a4330
        ;   Label: LAB_004a4330
    JNZ 0x004a4321                      ; 004a4333
        ;   XREF to: 004a4321 (CONDITIONAL_JUMP)  ; LAB_004a4321
    PUSH ESI                            ; 004a4335 | DAT_005fd09c
    MOV EDX,dword ptr [0x005f2afc]      ; 004a4336 | DAT_005f2afc
    PUSH EDX                            ; 004a433c | DAT_01bdd7e4
    JMP 0x004a4319                      ; 004a433d
        ;   XREF to: 004a4319 (UNCONDITIONAL_JUMP)  ; LAB_004a4319

