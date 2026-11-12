; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_00404f10(SMRGLAnimatedTexture *texture)
;
; Parameters:
; SMRGLAnimatedTexture * Stack[0x4]:4   texture
;
; Referenced Globals:
;   undefined4 DAT_01c43530
;
; Called Functions:
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404f10
        ;   Label: engine_3d.c_updateAnimatedTexture_FUN_00404f10
    PUSH ESI                            ; 00404f11
    PUSH EDI                            ; 00404f12
    PUSH EBP                            ; 00404f13
    SUB ESP,0x18                        ; 00404f14
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00404f17
    MOV EAX,[0x01c43530]                ; 00404f1b | DAT_01c43530
    MOV EDX,dword ptr [EBX + 0x14]      ; 00404f20
    ADD EDX,EAX                         ; 00404f23
    MOV ECX,dword ptr [EBX + 0x10]      ; 00404f25
    MOV EAX,EDX                         ; 00404f28
    MOV dword ptr [EBX + 0x14],EDX      ; 00404f2a
    SAR EDX,0x1f                        ; 00404f2d
    IDIV ECX                            ; 00404f30
    MOV EDX,EAX                         ; 00404f32
    MOV ESI,dword ptr [EBX + 0x8]       ; 00404f34
    SAR EDX,0x1f                        ; 00404f37
    IDIV ESI                            ; 00404f3a
    CMP EDX,dword ptr [EBX + 0xc]       ; 00404f3c
    JZ 0x00404f4b                       ; 00404f3f
        ;   XREF to: 00404f4b (CONDITIONAL_JUMP)  ; LAB_00404f4b
    MOV dword ptr [EBX + 0x18],0x1      ; 00404f41
    MOV dword ptr [EBX + 0xc],EDX       ; 00404f48
    XOR EBP,EBP                         ; 00404f4b
        ;   Label: LAB_00404f4b
    MOV dword ptr [ESP + 0x4],EBP       ; 00404f4d
    MOV ESI,dword ptr [EBX + 0xc]       ; 00404f51
    LEA EAX,[EBX + 0x1c]                ; 00404f54
    SHL ESI,0x5                         ; 00404f57
    LEA EDI,[ESP + 0x8]                 ; 00404f5a
    ADD ESI,EAX                         ; 00404f5e
    PUSH EDI                            ; 00404f60
    MOV AL,byte ptr [ESI]               ; 00404f61
        ;   Label: LAB_00404f61
    MOV byte ptr [EDI],AL               ; 00404f63
    CMP AL,0x0                          ; 00404f65
    JZ 0x00404f79                       ; 00404f67
        ;   XREF to: 00404f79 (CONDITIONAL_JUMP)  ; LAB_00404f79
    MOV AL,byte ptr [ESI + 0x1]         ; 00404f69
    ADD ESI,0x2                         ; 00404f6c
    MOV byte ptr [EDI + 0x1],AL         ; 00404f6f
    ADD EDI,0x2                         ; 00404f72
    CMP AL,0x0                          ; 00404f75
    JNZ 0x00404f61                      ; 00404f77
        ;   XREF to: 00404f61 (CONDITIONAL_JUMP)  ; LAB_00404f61
    POP EDI                             ; 00404f79
        ;   Label: LAB_00404f79
    MOV EAX,ESP                         ; 00404f7a
    PUSH EAX                            ; 00404f7c
    CALL engine_texture.cpp_FUN_00597a20 ; 00404f7d
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    MOV EAX,dword ptr [EBX + 0x18]      ; 00404f82
    ADD ESP,0x4                         ; 00404f85
    TEST EAX,EAX                        ; 00404f88
    JNZ 0x00404f9f                      ; 00404f8a
        ;   XREF to: 00404f9f (CONDITIONAL_JUMP)  ; LAB_00404f9f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00404f8c
    SHL EAX,0x5                         ; 00404f8f
    ADD EAX,EBX                         ; 00404f92
    ADD EAX,0x1c                        ; 00404f94
    ADD ESP,0x18                        ; 00404f97
    POP EBP                             ; 00404f9a
    POP EDI                             ; 00404f9b
    POP ESI                             ; 00404f9c
    POP EBX                             ; 00404f9d
    RET                                 ; 00404f9e
    MOV dword ptr [EBX + 0x18],EBP      ; 00404f9f
        ;   Label: LAB_00404f9f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00404fa2
    SHL EAX,0x5                         ; 00404fa5
    ADD EAX,EBX                         ; 00404fa8
    ADD EAX,0x1c                        ; 00404faa
    ADD ESP,0x18                        ; 00404fad
    POP EBP                             ; 00404fb0
    POP EDI                             ; 00404fb1
    POP ESI                             ; 00404fb2
    POP EBX                             ; 00404fb3
    RET                                 ; 00404fb4

