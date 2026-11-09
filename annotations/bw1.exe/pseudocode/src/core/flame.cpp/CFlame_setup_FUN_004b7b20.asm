; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_setup_FUN_004b7b20(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_FUN_0041ab20 at 0041ab9e
;   core_vessel.cpp_FUN_005a8c60 at 005a8d9c
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061cdc0
;   undefined4 DAT_0061cdd8
;   undefined4 DAT_0061ce80
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7b20
        ;   Label: core_flame.cpp_CFlame_setup_FUN_004b7b20
    PUSH ESI                            ; 004b7b21
    PUSH EDI                            ; 004b7b22
    PUSH EBP                            ; 004b7b23
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b7b24
    PUSH EDX                            ; 004b7b28
    MOV EBP,0x61cdc0                    ; 004b7b29 | DAT_0061cdc0
    XOR EDI,EDI                         ; 004b7b2e
    CALL core_actor.cpp_FUN_00408850    ; 004b7b30
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD EBP,0xc0                        ; 004b7b35
    ADD ESP,0x4                         ; 004b7b3b
    IMUL EBX,EDI,0xc0                   ; 004b7b3e
        ;   Label: LAB_004b7b3e
    MOV ESI,EBP                         ; 004b7b44
    ADD EBX,0x61cdc0                    ; 004b7b46 | DAT_0061cdc0
    PUSH EBX                            ; 004b7b4c | DAT_0061cdc0 | DAT_0061cdd8 | DAT_0061ce80
        ;   Label: LAB_004b7b4c
    MOV ECX,dword ptr [0x00612560]      ; 004b7b4d | DAT_00612560
    PUSH ECX                            ; 004b7b53 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b7b54
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004b7b59
    ADD ESP,0x8                         ; 004b7b5c
    CMP EBX,ESI                         ; 004b7b5f
    JNZ 0x004b7b4c                      ; 004b7b61
        ;   XREF to: 004b7b4c (CONDITIONAL_JUMP)  ; LAB_004b7b4c
    INC EDI                             ; 004b7b63
    ADD EBP,0xc0                        ; 004b7b64
    CMP EDI,0x5                         ; 004b7b6a
    JL 0x004b7b3e                       ; 004b7b6d
        ;   XREF to: 004b7b3e (CONDITIONAL_JUMP)  ; LAB_004b7b3e
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b7b6f
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004b7b73
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0x1                         ; 004b7b78
    MOV dword ptr [EBX + 0x294],EAX     ; 004b7b7b
    POP EBP                             ; 004b7b81
    POP EDI                             ; 004b7b82
    POP ESI                             ; 004b7b83
    POP EBX                             ; 004b7b84
    RET                                 ; 004b7b85

