; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_updateAnimatedTexture_FUN_004050c0(SMRGLAnimatedTexture *texture)
;
; Parameters:
; SMRGLAnimatedTexture * Stack[0x4]:4   texture
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined1       Stack[-0x1f]:1  local_1f
;
; Referenced Globals:
;   int g_GlobalDeltaTimeInt
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004050c0
        ;   Label: engine_3d.c_updateAnimatedTexture_FUN_004050c0
    PUSH ESI                            ; 004050c1
    PUSH EDI                            ; 004050c2
    PUSH EBP                            ; 004050c3
    SUB ESP,0x18                        ; 004050c4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004050c7
    MOV EAX,[0x02cf6a80]                ; 004050cb | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [EBX + 0x14]      ; 004050d0
    ADD EDX,EAX                         ; 004050d3
    MOV ECX,dword ptr [EBX + 0x10]      ; 004050d5
    MOV EAX,EDX                         ; 004050d8
    MOV dword ptr [EBX + 0x14],EDX      ; 004050da
    SAR EDX,0x1f                        ; 004050dd
    IDIV ECX                            ; 004050e0
    MOV EDX,EAX                         ; 004050e2
    MOV ESI,dword ptr [EBX + 0x8]       ; 004050e4
    SAR EDX,0x1f                        ; 004050e7
    IDIV ESI                            ; 004050ea
    CMP EDX,dword ptr [EBX + 0xc]       ; 004050ec
    JZ 0x004050fb                       ; 004050ef
        ;   XREF to: 004050fb (CONDITIONAL_JUMP)  ; LAB_004050fb
    MOV dword ptr [EBX + 0x18],0x1      ; 004050f1
    MOV dword ptr [EBX + 0xc],EDX       ; 004050f8
    XOR EBP,EBP                         ; 004050fb
        ;   Label: LAB_004050fb
    MOV dword ptr [ESP + 0x4],EBP       ; 004050fd
    MOV ESI,dword ptr [EBX + 0xc]       ; 00405101
    LEA EAX,[EBX + 0x1c]                ; 00405104
    SHL ESI,0x5                         ; 00405107
    LEA EDI,[ESP + 0x8]                 ; 0040510a
    ADD ESI,EAX                         ; 0040510e
    PUSH EDI                            ; 00405110
    MOV AL,byte ptr [ESI]               ; 00405111
        ;   Label: LAB_00405111
    MOV byte ptr [EDI],AL               ; 00405113
    CMP AL,0x0                          ; 00405115
    JZ 0x00405129                       ; 00405117
        ;   XREF to: 00405129 (CONDITIONAL_JUMP)  ; LAB_00405129
    MOV AL,byte ptr [ESI + 0x1]         ; 00405119
    ADD ESI,0x2                         ; 0040511c
    MOV byte ptr [EDI + 0x1],AL         ; 0040511f
    ADD EDI,0x2                         ; 00405122
    CMP AL,0x0                          ; 00405125
    JNZ 0x00405111                      ; 00405127
        ;   XREF to: 00405111 (CONDITIONAL_JUMP)  ; LAB_00405111
    POP EDI                             ; 00405129
        ;   Label: LAB_00405129
    MOV EAX,ESP                         ; 0040512a
    PUSH EAX                            ; 0040512c
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0040512d
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [EBX + 0x18]      ; 00405132
    ADD ESP,0x4                         ; 00405135
    TEST EAX,EAX                        ; 00405138
    JNZ 0x0040514f                      ; 0040513a
        ;   XREF to: 0040514f (CONDITIONAL_JUMP)  ; LAB_0040514f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040513c
    SHL EAX,0x5                         ; 0040513f
    ADD EAX,EBX                         ; 00405142
    ADD EAX,0x1c                        ; 00405144
    ADD ESP,0x18                        ; 00405147
    POP EBP                             ; 0040514a
    POP EDI                             ; 0040514b
    POP ESI                             ; 0040514c
    POP EBX                             ; 0040514d
    RET                                 ; 0040514e
    MOV dword ptr [EBX + 0x18],EBP      ; 0040514f
        ;   Label: LAB_0040514f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00405152
    SHL EAX,0x5                         ; 00405155
    ADD EAX,EBX                         ; 00405158
    ADD EAX,0x1c                        ; 0040515a
    ADD ESP,0x18                        ; 0040515d
    POP EBP                             ; 00405160
    POP EDI                             ; 00405161
    POP ESI                             ; 00405162
    POP EBX                             ; 00405163
    RET                                 ; 00405164

