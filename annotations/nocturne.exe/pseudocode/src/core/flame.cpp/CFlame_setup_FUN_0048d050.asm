; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_setup_FUN_0048d050(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40 at 00417bc0
;   core_vessel.cpp_CCryptVessel_setup_FUN_0054fa80 at 0054fba4
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b8e00
;   undefined4 DAT_005b8e18
;   undefined4 DAT_005b8ec0
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d050
        ;   Label: core_flame.cpp_CFlame_setup_FUN_0048d050
    PUSH ESI                            ; 0048d051
    PUSH EDI                            ; 0048d052
    PUSH EBP                            ; 0048d053
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048d054
    PUSH EDX                            ; 0048d058
    MOV EBP,0x5b8e00                    ; 0048d059 | DAT_005b8e00
    XOR EDI,EDI                         ; 0048d05e
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0048d060
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD EBP,0xc0                        ; 0048d065
    ADD ESP,0x4                         ; 0048d06b
    IMUL EBX,EDI,0xc0                   ; 0048d06e
        ;   Label: LAB_0048d06e
    MOV ESI,EBP                         ; 0048d074
    ADD EBX,0x5b8e00                    ; 0048d076 | DAT_005b8e00
    PUSH EBX                            ; 0048d07c | DAT_005b8e00 | DAT_005b8e18 | DAT_005b8ec0
        ;   Label: LAB_0048d07c
    MOV ECX,dword ptr [0x005ae704]      ; 0048d07d | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0048d083 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0048d084
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 0048d089
    ADD ESP,0x8                         ; 0048d08c
    CMP EBX,ESI                         ; 0048d08f
    JNZ 0x0048d07c                      ; 0048d091
        ;   XREF to: 0048d07c (CONDITIONAL_JUMP)  ; LAB_0048d07c
    INC EDI                             ; 0048d093
    ADD EBP,0xc0                        ; 0048d094
    CMP EDI,0x5                         ; 0048d09a
    JL 0x0048d06e                       ; 0048d09d
        ;   XREF to: 0048d06e (CONDITIONAL_JUMP)  ; LAB_0048d06e
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048d09f
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0048d0a3
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0x1                         ; 0048d0a8
    MOV dword ptr [EBX + 0x28c],EAX     ; 0048d0ab
    POP EBP                             ; 0048d0b1
    POP EDI                             ; 0048d0b2
    POP ESI                             ; 0048d0b3
    POP EBX                             ; 0048d0b4
    RET                                 ; 0048d0b5

