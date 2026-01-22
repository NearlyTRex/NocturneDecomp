; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void * sprite_data, void * span_data)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_ClipTop
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432b60
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
    PUSH ESI                            ; 00432b61
    PUSH EDI                            ; 00432b62
    PUSH EBP                            ; 00432b63
    SUB ESP,0x30                        ; 00432b64
    MOV EBP,dword ptr [ESP + 0x48]      ; 00432b67
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00432b6b
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
    MOV EDX,dword ptr [0x0067939c]      ; 00432b70 | g_BitsPerPixel
    MOV EDI,EAX                         ; 00432b76
    CMP EDX,0x8                         ; 00432b78
    JNZ 0x00432c41                      ; 00432b7b
        ;   XREF to: 00432c41 (CONDITIONAL_JUMP)  ; LAB_00432c41
    MOV EAX,[0x02d0255c]                ; 00432b81 | g_ClipTop
    MOV EBX,dword ptr [0x02d02564]      ; 00432b86 | g_ClipBottom
    MOV dword ptr [ESP + 0x14],EAX      ; 00432b8c
    CMP EAX,EBX                         ; 00432b90
    JG 0x00432c16                       ; 00432b92
        ;   XREF to: 00432c16 (CONDITIONAL_JUMP)  ; LAB_00432c16
    MOV EDX,EAX                         ; 00432b98
    SHL EAX,0x5                         ; 00432b9a
    ADD EAX,EDX                         ; 00432b9d
    SHL EAX,0x2                         ; 00432b9f
    MOV dword ptr [ESP + 0xc],EAX       ; 00432ba2
    MOV EAX,EDX                         ; 00432ba6
    SHL EAX,0x2                         ; 00432ba8
    MOV dword ptr [ESP + 0x8],EAX       ; 00432bab
    MOV EAX,dword ptr [ESP + 0x8]       ; 00432baf
        ;   Label: LAB_00432baf
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00432bb3 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ECX,dword ptr [0x00679394]      ; 00432bb9 | g_WindowWidth
    MOV dword ptr [ESP + 0x18],EAX      ; 00432bbf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432bc3
    IMUL EAX,ECX                        ; 00432bc7
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432bca
    XOR EBX,EBX                         ; 00432bce
    XOR ESI,ESI                         ; 00432bd0
    ADD EDX,EAX                         ; 00432bd2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00432bd4
    MOV dword ptr [ESP + 0x24],EDX      ; 00432bd8
    MOV dword ptr [ESP + 0x1c],EAX      ; 00432bdc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00432be0
        ;   Label: LAB_00432be0
    ADD EAX,EBP                         ; 00432be4
    CMP EBX,dword ptr [EAX]             ; 00432be6
    JL 0x00432c1e                       ; 00432be8
        ;   XREF to: 00432c1e (CONDITIONAL_JUMP)  ; LAB_00432c1e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00432bea
    MOV EBX,dword ptr [ESP + 0x8]       ; 00432bee
    MOV ESI,dword ptr [ESP + 0x14]      ; 00432bf2
    MOV EDX,dword ptr [0x02d02564]      ; 00432bf6 | g_ClipBottom
    ADD ECX,0x84                        ; 00432bfc
    ADD EBX,0x4                         ; 00432c02
    INC ESI                             ; 00432c05
    MOV dword ptr [ESP + 0xc],ECX       ; 00432c06
    MOV dword ptr [ESP + 0x8],EBX       ; 00432c0a
    MOV dword ptr [ESP + 0x14],ESI      ; 00432c0e
    CMP ESI,EDX                         ; 00432c12
    JLE 0x00432baf                      ; 00432c14
        ;   XREF to: 00432baf (CONDITIONAL_JUMP)  ; LAB_00432baf
    ADD ESP,0x30                        ; 00432c16
        ;   Label: LAB_00432c16
    POP EBP                             ; 00432c19
    POP EDI                             ; 00432c1a
    POP ESI                             ; 00432c1b
    POP EBX                             ; 00432c1c
    RET                                 ; 00432c1d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44] ; 00432c1e
        ;   Label: LAB_00432c1e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00432c22
    PUSH ECX                            ; 00432c26
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00432c27
    ADD EDX,ECX                         ; 00432c2b
    PUSH EDX                            ; 00432c2d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00432c2e
    LEA EAX,[EDX + ECX*0x1]             ; 00432c32
    PUSH EAX                            ; 00432c35
    ADD ESI,0x4                         ; 00432c36
    INC EBX                             ; 00432c39
    CALL EDI                            ; 00432c3a
    ADD ESP,0xc                         ; 00432c3c
    JMP 0x00432be0                      ; 00432c3f
        ;   XREF to: 00432be0 (UNCONDITIONAL_JUMP)  ; LAB_00432be0
    MOV EAX,[0x02d0255c]                ; 00432c41 | g_ClipTop
        ;   Label: LAB_00432c41
    MOV ECX,dword ptr [0x02d02564]      ; 00432c46 | g_ClipBottom
    MOV dword ptr [ESP + 0x10],EAX      ; 00432c4c
    CMP EAX,ECX                         ; 00432c50
    JG 0x00432c16                       ; 00432c52
        ;   XREF to: 00432c16 (CONDITIONAL_JUMP)  ; LAB_00432c16
    MOV EDX,EAX                         ; 00432c54
    SHL EAX,0x5                         ; 00432c56
    ADD EAX,EDX                         ; 00432c59
    SHL EAX,0x2                         ; 00432c5b
    MOV dword ptr [ESP + 0x4],EAX       ; 00432c5e
    MOV EAX,EDX                         ; 00432c62
    SHL EAX,0x2                         ; 00432c64
    MOV dword ptr [ESP],EAX             ; 00432c67
    MOV EAX,dword ptr [ESP]             ; 00432c6a
        ;   Label: LAB_00432c6a
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00432c6d | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [0x00679394]      ; 00432c73 | g_WindowWidth
    MOV dword ptr [ESP + 0x28],EAX      ; 00432c79
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432c7d
    IMUL EAX,EBX                        ; 00432c81
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432c84
    XOR ESI,ESI                         ; 00432c88
    ADD EDX,EAX                         ; 00432c8a
    XOR EBX,EBX                         ; 00432c8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00432c8e
    MOV dword ptr [ESP + 0x2c],EDX      ; 00432c92
    MOV dword ptr [ESP + 0x20],EAX      ; 00432c96
    MOV EAX,dword ptr [ESP + 0x20]      ; 00432c9a
        ;   Label: LAB_00432c9a
    ADD EAX,EBP                         ; 00432c9e
    CMP ESI,dword ptr [EAX]             ; 00432ca0
    JL 0x00432cd4                       ; 00432ca2
        ;   XREF to: 00432cd4 (CONDITIONAL_JUMP)  ; LAB_00432cd4
    MOV ESI,dword ptr [ESP + 0x4]       ; 00432ca4
    MOV EAX,dword ptr [ESP]             ; 00432ca8
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432cab
    MOV ECX,dword ptr [0x02d02564]      ; 00432caf | g_ClipBottom
    ADD ESI,0x84                        ; 00432cb5
    ADD EAX,0x4                         ; 00432cbb
    INC EDX                             ; 00432cbe
    MOV dword ptr [ESP + 0x4],ESI       ; 00432cbf
    MOV dword ptr [ESP],EAX             ; 00432cc3
    MOV dword ptr [ESP + 0x10],EDX      ; 00432cc6
    CMP EDX,ECX                         ; 00432cca
    JG 0x00432c16                       ; 00432ccc
        ;   XREF to: 00432c16 (CONDITIONAL_JUMP)  ; LAB_00432c16
    JMP 0x00432c6a                      ; 00432cd2
        ;   XREF to: 00432c6a (UNCONDITIONAL_JUMP)  ; LAB_00432c6a
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44] ; 00432cd4
        ;   Label: LAB_00432cd4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00432cd8
    PUSH ECX                            ; 00432cdc
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00432cdd
    ADD EDX,ECX                         ; 00432ce1
    PUSH EDX                            ; 00432ce3
    LEA EAX,[ECX + ECX*0x1]             ; 00432ce4
    ADD EAX,dword ptr [ESP + 0x30]      ; 00432ce7
    PUSH EAX                            ; 00432ceb
    ADD EBX,0x4                         ; 00432cec
    INC ESI                             ; 00432cef
    CALL EDI                            ; 00432cf0
    ADD ESP,0xc                         ; 00432cf2
    JMP 0x00432c9a                      ; 00432cf5
        ;   XREF to: 00432c9a (UNCONDITIONAL_JUMP)  ; LAB_00432c9a

