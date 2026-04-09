; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_setup_FUN_004c9b90(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50 at 0041aebf
;   core_vessel.cpp_CCryptVessel_setup_FUN_005e8fc0 at 005e90e4
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[40] SMRGLTextureBasic_ARRAY_0067b100
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9b90
        ;   Label: core_flame.cpp_CFlame_setup_FUN_004c9b90
    PUSH ESI                            ; 004c9b91
    PUSH EDI                            ; 004c9b92
    PUSH EBP                            ; 004c9b93
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c9b94
    PUSH EDX                            ; 004c9b98
    MOV EBP,0x67b100                    ; 004c9b99 | SMRGLTextureBasic_ARRAY_0067b100
    XOR EDI,EDI                         ; 004c9b9e
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004c9ba0
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD EBP,0xc0                        ; 004c9ba5
    ADD ESP,0x4                         ; 004c9bab
    IMUL EBX,EDI,0xc0                   ; 004c9bae
        ;   Label: LAB_004c9bae
    MOV ESI,EBP                         ; 004c9bb4
    ADD EBX,0x67b100                    ; 004c9bb6 | SMRGLTextureBasic_ARRAY_0067b100
    PUSH EBX                            ; 004c9bbc
        ;   Label: LAB_004c9bbc
    MOV ECX,dword ptr [0x006703ec]      ; 004c9bbd | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c9bc3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c9bc4
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004c9bc9
    ADD ESP,0x8                         ; 004c9bcc
    CMP EBX,ESI                         ; 004c9bcf
    JNZ 0x004c9bbc                      ; 004c9bd1
        ;   XREF to: 004c9bbc (CONDITIONAL_JUMP)  ; LAB_004c9bbc
    INC EDI                             ; 004c9bd3
    ADD EBP,0xc0                        ; 004c9bd4
    CMP EDI,0x5                         ; 004c9bda
    JL 0x004c9bae                       ; 004c9bdd
        ;   XREF to: 004c9bae (CONDITIONAL_JUMP)  ; LAB_004c9bae
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c9bdf
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004c9be3
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x1                         ; 004c9be8
    MOV dword ptr [EBX + 0x294],EAX     ; 004c9beb
    POP EBP                             ; 004c9bf1
    POP EDI                             ; 004c9bf2
    POP ESI                             ; 004c9bf3
    POP EBX                             ; 004c9bf4
    RET                                 ; 004c9bf5

