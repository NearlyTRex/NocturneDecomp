; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00414f60(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414f60
        ;   Label: core_bodypart.cpp_CBodyPart_setup_FUN_00414f60
    PUSH EDI                            ; 00414f61
    PUSH EBP                            ; 00414f62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00414f63
    PUSH EDI                            ; 00414f67
    CALL core_actor.cpp_FUN_00408890    ; 00414f68
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    XOR EBX,EBX                         ; 00414f6d
    MOV EDX,dword ptr [EDI + 0x18c]     ; 00414f6f
    ADD ESP,0x4                         ; 00414f75
    TEST EDX,EDX                        ; 00414f78
    JLE 0x00414fa2                      ; 00414f7a
        ;   XREF to: 00414fa2 (CONDITIONAL_JUMP)  ; LAB_00414fa2
    PUSH ESI                            ; 00414f7c
    LEA ESI,[EDI + 0x190]               ; 00414f7d
    PUSH ESI                            ; 00414f83
        ;   Label: LAB_00414f83
    MOV ECX,dword ptr [0x005f2afc]      ; 00414f84 | DAT_005f2afc
    PUSH ECX                            ; 00414f8a | DAT_01bdd7e4
    INC EBX                             ; 00414f8b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00414f8c
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 00414f91
    MOV EBP,dword ptr [EDI + 0x18c]     ; 00414f94
    ADD ESP,0x8                         ; 00414f9a
    CMP EBX,EBP                         ; 00414f9d
    JL 0x00414f83                       ; 00414f9f
        ;   XREF to: 00414f83 (CONDITIONAL_JUMP)  ; LAB_00414f83
    POP ESI                             ; 00414fa1
    CMP dword ptr [EDI + 0xcb4],0x0     ; 00414fa2
        ;   Label: LAB_00414fa2
    JNZ 0x00414fb8                      ; 00414fa9
        ;   XREF to: 00414fb8 (CONDITIONAL_JUMP)  ; LAB_00414fb8
    CMP dword ptr [EDI + 0x74c],0x0     ; 00414fab
    JNZ 0x00414fb8                      ; 00414fb2
        ;   XREF to: 00414fb8 (CONDITIONAL_JUMP)  ; LAB_00414fb8
    POP EBP                             ; 00414fb4
    POP EDI                             ; 00414fb5
    POP EBX                             ; 00414fb6
    RET                                 ; 00414fb7
    MOV dword ptr [EDI + 0xfc],0x1      ; 00414fb8
        ;   Label: LAB_00414fb8
    POP EBP                             ; 00414fc2
    POP EDI                             ; 00414fc3
    POP EBX                             ; 00414fc4
    RET                                 ; 00414fc5

