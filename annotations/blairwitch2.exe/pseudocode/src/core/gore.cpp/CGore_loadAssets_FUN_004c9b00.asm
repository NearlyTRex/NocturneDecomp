; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004c9b00(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bb050 at 004bb076
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006167f0
;   undefined4 DAT_00616808
;   undefined4 DAT_00616820
;   undefined4 DAT_00616868
;   undefined4 DAT_00616880
;   undefined4 DAT_006169e8
;   undefined4 DAT_00616e68
;   undefined4 DAT_00616e80
;   undefined4 DAT_00617120
;   undefined4 DAT_00617968
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9b00
        ;   Label: core_gore.cpp_CGore_loadAssets_FUN_004c9b00
    PUSH ESI                            ; 004c9b01
    PUSH EDI                            ; 004c9b02
    PUSH EBP                            ; 004c9b03
    PUSH 0x6167f0                       ; 004c9b04 | DAT_006167f0
    MOV EDX,dword ptr [0x0060b280]      ; 004c9b09 | DAT_0060b280
    PUSH EDX                            ; 004c9b0f | DAT_01ba5c50
    MOV EBX,0x616808                    ; 004c9b10 | DAT_00616808
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c9b15
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ESI,[EBX + 0x60]                ; 004c9b1a | DAT_00616868
    ADD ESP,0x8                         ; 004c9b1d
    PUSH EBX                            ; 004c9b20 | DAT_00616808 | DAT_00616820
        ;   Label: LAB_004c9b20
    MOV ECX,dword ptr [0x0060b280]      ; 004c9b21 | DAT_0060b280
    PUSH ECX                            ; 004c9b27 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c9b28
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004c9b2d
    ADD ESP,0x8                         ; 004c9b30
    CMP EBX,ESI                         ; 004c9b33
    JNZ 0x004c9b20                      ; 004c9b35
        ;   XREF to: 004c9b20 (CONDITIONAL_JUMP)  ; LAB_004c9b20
    MOV EBP,0x616868                    ; 004c9b37 | DAT_00616868
    XOR EDI,EDI                         ; 004c9b3c
    ADD EBP,0x180                       ; 004c9b3e
    IMUL EBX,EDI,0x180                  ; 004c9b44
        ;   Label: LAB_004c9b44
    MOV ESI,EBP                         ; 004c9b4a
    ADD EBX,0x616868                    ; 004c9b4c | DAT_00616868
    PUSH EBX                            ; 004c9b52 | DAT_00616868 | DAT_00616880 | DAT_006169e8
        ;   Label: LAB_004c9b52
    MOV EAX,[0x0060b280]                ; 004c9b53 | DAT_0060b280
    PUSH EAX                            ; 004c9b58 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c9b59
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004c9b5e
    ADD ESP,0x8                         ; 004c9b61
    CMP EBX,ESI                         ; 004c9b64
    JNZ 0x004c9b52                      ; 004c9b66
        ;   XREF to: 004c9b52 (CONDITIONAL_JUMP)  ; LAB_004c9b52
    INC EDI                             ; 004c9b68
    ADD EBP,0x180                       ; 004c9b69
    CMP EDI,0x4                         ; 004c9b6f
    JL 0x004c9b44                       ; 004c9b72
        ;   XREF to: 004c9b44 (CONDITIONAL_JUMP)  ; LAB_004c9b44
    MOV EBP,0x616e68                    ; 004c9b74 | DAT_00616e68
    XOR EDI,EDI                         ; 004c9b79
    ADD EBP,0x2b8                       ; 004c9b7b
    IMUL EBX,EDI,0x2b8                  ; 004c9b81
        ;   Label: LAB_004c9b81
    MOV ESI,EBP                         ; 004c9b87
    ADD EBX,0x616e68                    ; 004c9b89 | DAT_00616e68
    PUSH EBX                            ; 004c9b8f | DAT_00616e68 | DAT_00616e80 | DAT_00617120
        ;   Label: LAB_004c9b8f
    MOV EDX,dword ptr [0x0060b280]      ; 004c9b90 | DAT_0060b280
    PUSH EDX                            ; 004c9b96 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c9b97
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004c9b9c
    ADD ESP,0x8                         ; 004c9b9f
    CMP EBX,ESI                         ; 004c9ba2
    JNZ 0x004c9b8f                      ; 004c9ba4
        ;   XREF to: 004c9b8f (CONDITIONAL_JUMP)  ; LAB_004c9b8f
    INC EDI                             ; 004c9ba6
    ADD EBP,0x2b8                       ; 004c9ba7
    CMP EDI,0x4                         ; 004c9bad
    JL 0x004c9b81                       ; 004c9bb0
        ;   XREF to: 004c9b81 (CONDITIONAL_JUMP)  ; LAB_004c9b81
    PUSH 0x617968                       ; 004c9bb2 | DAT_00617968
    MOV ECX,dword ptr [0x0060b280]      ; 004c9bb7 | DAT_0060b280
    PUSH ECX                            ; 004c9bbd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c9bbe
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c9bc3
    POP EBP                             ; 004c9bc6
    POP EDI                             ; 004c9bc7
    POP ESI                             ; 004c9bc8
    POP EBX                             ; 004c9bc9
    RET                                 ; 004c9bca

