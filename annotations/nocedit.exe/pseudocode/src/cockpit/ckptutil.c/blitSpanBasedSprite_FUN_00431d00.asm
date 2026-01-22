; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; int              Stack[0x14]:4   src_x
; int              Stack[0x18]:4   src_y
; int              Stack[0x1c]:4   width
; int              Stack[0x20]:4   height
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
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
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431d00
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
    PUSH ESI                            ; 00431d01
    PUSH EDI                            ; 00431d02
    PUSH EBP                            ; 00431d03
    SUB ESP,0x34                        ; 00431d04
    MOV EDI,dword ptr [ESP + 0x54]      ; 00431d07
    MOV EDX,dword ptr [0x02cf6a9c]      ; 00431d0b | g_ScreenBufferArray
    MOV EAX,[0x02cf6aa0]                ; 00431d11 | g_ScreenBufferArray[1]
    SUB EAX,EDX                         ; 00431d16
    MOV dword ptr [ESP + 0x10],EAX      ; 00431d18
    MOV EAX,[0x00679394]                ; 00431d1c | g_WindowWidth
    MOV EDX,EAX                         ; 00431d21
    SAR EDX,0x1f                        ; 00431d23
    SUB EAX,EDX                         ; 00431d26
    SAR EAX,0x1                         ; 00431d28
    MOV EBX,dword ptr [ESP + 0x58]      ; 00431d2a
    ADD EBX,EAX                         ; 00431d2e
    MOV ECX,dword ptr [ESP + 0x48]      ; 00431d30
    LEA ESI,[EBX + 0x1]                 ; 00431d34
    TEST ECX,ECX                        ; 00431d37
    JNZ 0x00431d43                      ; 00431d39
        ;   XREF to: 00431d43 (CONDITIONAL_JUMP)  ; LAB_00431d43
    ADD ESP,0x34                        ; 00431d3b
        ;   Label: LAB_00431d3b
    POP EBP                             ; 00431d3e
    POP EDI                             ; 00431d3f
    POP ESI                             ; 00431d40
    POP EBX                             ; 00431d41
    RET                                 ; 00431d42
    MOV EAX,dword ptr [ESP + 0x60]      ; 00431d43
        ;   Label: LAB_00431d43
    IMUL EAX,EDI                        ; 00431d47
    ADD EAX,dword ptr [ESP + 0x50]      ; 00431d4a
    LEA EDX,[ECX + EAX*0x1]             ; 00431d4e
    MOV EBP,EDI                         ; 00431d51
    MOV dword ptr [ESP + 0x48],EDX      ; 00431d53
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00431d57
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
    SHL EBP,0x5                         ; 00431d5c
    MOV EDX,dword ptr [ESP + 0x64]      ; 00431d5f
    MOV dword ptr [ESP + 0x30],EAX      ; 00431d63
    MOV EAX,EDX                         ; 00431d67
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00431d69
    SHL EAX,0x5                         ; 00431d6d
    ADD EBP,EDI                         ; 00431d70
    ADD EAX,EDX                         ; 00431d72
    SHL EBP,0x2                         ; 00431d74
    SHL EAX,0x2                         ; 00431d77
    ADD ECX,EDI                         ; 00431d7a
    MOV dword ptr [ESP],EAX             ; 00431d7c
    MOV EAX,[0x0067939c]                ; 00431d7f | g_BitsPerPixel
    SHL ECX,0x2                         ; 00431d84
    CMP EAX,0x8                         ; 00431d87
    JNZ 0x00431e4b                      ; 00431d8a
        ;   XREF to: 00431e4b (CONDITIONAL_JUMP)  ; LAB_00431e4b
    MOV EDX,dword ptr [ESP + 0x50]      ; 00431d90
    MOV EAX,dword ptr [ECX + 0x2cf6a9c] ; 00431d94 | g_ScreenBufferArray
    ADD EDX,EAX                         ; 00431d9a
    MOV ECX,dword ptr [ESP + 0x64]      ; 00431d9c
    MOV dword ptr [ESP + 0x28],EDX      ; 00431da0
    CMP EDI,ECX                         ; 00431da4
    JGE 0x00431d3b                      ; 00431da6
        ;   XREF to: 00431d3b (CONDITIONAL_JUMP)  ; LAB_00431d3b
    MOV EAX,dword ptr [ESP]             ; 00431da8
    MOV dword ptr [ESP + 0x14],EBP      ; 00431dab
    MOV dword ptr [ESP + 0xc],EAX       ; 00431daf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00431db3
        ;   Label: LAB_00431db3
    XOR EBP,EBP                         ; 00431db7
    XOR EDI,EDI                         ; 00431db9
    MOV dword ptr [ESP + 0x20],EAX      ; 00431dbb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00431dbf
        ;   Label: LAB_00431dbf
    ADD EAX,dword ptr [ESP + 0x20]      ; 00431dc3
    CMP EDI,dword ptr [EAX]             ; 00431dc7
    JGE 0x00431de5                      ; 00431dc9
        ;   XREF to: 00431de5 (CONDITIONAL_JUMP)  ; LAB_00431de5
    LEA EDX,[EAX + EBP*0x1]             ; 00431dcb
    MOV EAX,dword ptr [EDX + 0x4]       ; 00431dce
    MOV EDX,dword ptr [EDX + 0x44]      ; 00431dd1
    ADD EDX,EAX                         ; 00431dd4
    DEC EDX                             ; 00431dd6
    CMP EAX,EBX                         ; 00431dd7
    JGE 0x00431e21                      ; 00431dd9
        ;   XREF to: 00431e21 (CONDITIONAL_JUMP)  ; LAB_00431e21
    CMP EDX,EBX                         ; 00431ddb
    JGE 0x00431e1f                      ; 00431ddd
        ;   XREF to: 00431e1f (CONDITIONAL_JUMP)  ; LAB_00431e1f
    INC EDI                             ; 00431ddf
        ;   Label: LAB_00431ddf
    ADD EBP,0x4                         ; 00431de0
    JMP 0x00431dbf                      ; 00431de3
        ;   XREF to: 00431dbf (UNCONDITIONAL_JUMP)  ; LAB_00431dbf
    MOV EDI,dword ptr [ESP + 0x14]      ; 00431de5
        ;   Label: LAB_00431de5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00431de9
    MOV EBP,dword ptr [ESP + 0x28]      ; 00431ded
    MOV EDX,dword ptr [ESP + 0x48]      ; 00431df1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00431df5
    DEC EBX                             ; 00431df9
    INC ESI                             ; 00431dfa
    ADD EDI,0x84                        ; 00431dfb
    ADD EBP,EAX                         ; 00431e01
    MOV EAX,dword ptr [ESP + 0x60]      ; 00431e03
    MOV dword ptr [ESP + 0x14],EDI      ; 00431e07
    ADD EDX,EAX                         ; 00431e0b
    MOV dword ptr [ESP + 0x28],EBP      ; 00431e0d
    MOV dword ptr [ESP + 0x48],EDX      ; 00431e11
    CMP EDI,ECX                         ; 00431e15
    JGE 0x00431d3b                      ; 00431e17
        ;   XREF to: 00431d3b (CONDITIONAL_JUMP)  ; LAB_00431d3b
    JMP 0x00431db3                      ; 00431e1d
        ;   XREF to: 00431db3 (UNCONDITIONAL_JUMP)  ; LAB_00431db3
    MOV EAX,EBX                         ; 00431e1f
        ;   Label: LAB_00431e1f
    CMP EDX,ESI                         ; 00431e21
        ;   Label: LAB_00431e21
    JLE 0x00431e2b                      ; 00431e23
        ;   XREF to: 00431e2b (CONDITIONAL_JUMP)  ; LAB_00431e2b
    CMP EAX,ESI                         ; 00431e25
    JG 0x00431ddf                       ; 00431e27
        ;   XREF to: 00431ddf (CONDITIONAL_JUMP)  ; LAB_00431ddf
    MOV EDX,ESI                         ; 00431e29
    SUB EDX,EAX                         ; 00431e2b
        ;   Label: LAB_00431e2b
    INC EDX                             ; 00431e2d
    PUSH EDX                            ; 00431e2e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00431e2f
    ADD EDX,EAX                         ; 00431e33
    PUSH EDX                            ; 00431e35
    ADD EAX,dword ptr [ESP + 0x30]      ; 00431e36
    PUSH EAX                            ; 00431e3a
    CALL dword ptr [ESP + 0x3c]         ; 00431e3b
    ADD ESP,0xc                         ; 00431e3f
    INC EDI                             ; 00431e42
    ADD EBP,0x4                         ; 00431e43
    JMP 0x00431dbf                      ; 00431e46
        ;   XREF to: 00431dbf (UNCONDITIONAL_JUMP)  ; LAB_00431dbf
    MOV EAX,dword ptr [ESP + 0x50]      ; 00431e4b
        ;   Label: LAB_00431e4b
    MOV EDX,dword ptr [ECX + 0x2cf6a9c] ; 00431e4f | g_ScreenBufferArray
    ADD EAX,EAX                         ; 00431e55
    ADD EDX,EAX                         ; 00431e57
    MOV EAX,dword ptr [ESP + 0x10]      ; 00431e59
    MOV dword ptr [ESP + 0x2c],EDX      ; 00431e5d
    MOV EDX,EAX                         ; 00431e61
    SAR EDX,0x1f                        ; 00431e63
    SUB EAX,EDX                         ; 00431e66
    SAR EAX,0x1                         ; 00431e68
    MOV EDX,dword ptr [ESP + 0x64]      ; 00431e6a
    MOV dword ptr [ESP + 0x10],EAX      ; 00431e6e
    CMP EDI,EDX                         ; 00431e72
    JGE 0x00431d3b                      ; 00431e74
        ;   XREF to: 00431d3b (CONDITIONAL_JUMP)  ; LAB_00431d3b
    MOV EAX,dword ptr [ESP + 0x58]      ; 00431e7a
    ADD EAX,EAX                         ; 00431e7e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00431e80
    MOV EAX,dword ptr [ESP + 0x10]      ; 00431e84
    ADD EAX,EAX                         ; 00431e88
    MOV dword ptr [ESP + 0x4],EAX       ; 00431e8a
    MOV EAX,dword ptr [ESP]             ; 00431e8e
    MOV dword ptr [ESP + 0x18],EBP      ; 00431e91
    MOV dword ptr [ESP + 0x8],EAX       ; 00431e95
    MOV EAX,dword ptr [ESP + 0x18]      ; 00431e99
        ;   Label: LAB_00431e99
    XOR EBP,EBP                         ; 00431e9d
    XOR EDI,EDI                         ; 00431e9f
    MOV dword ptr [ESP + 0x24],EAX      ; 00431ea1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00431ea5
        ;   Label: LAB_00431ea5
    ADD EAX,dword ptr [ESP + 0x24]      ; 00431ea9
    CMP EDI,dword ptr [EAX]             ; 00431ead
    JGE 0x00431ecb                      ; 00431eaf
        ;   XREF to: 00431ecb (CONDITIONAL_JUMP)  ; LAB_00431ecb
    LEA EDX,[EAX + EBP*0x1]             ; 00431eb1
    MOV EAX,dword ptr [EDX + 0x4]       ; 00431eb4
    MOV EDX,dword ptr [EDX + 0x44]      ; 00431eb7
    ADD EDX,EAX                         ; 00431eba
    DEC EDX                             ; 00431ebc
    CMP EAX,EBX                         ; 00431ebd
    JGE 0x00431f07                      ; 00431ebf
        ;   XREF to: 00431f07 (CONDITIONAL_JUMP)  ; LAB_00431f07
    CMP EDX,EBX                         ; 00431ec1
    JGE 0x00431f05                      ; 00431ec3
        ;   XREF to: 00431f05 (CONDITIONAL_JUMP)  ; LAB_00431f05
    INC EDI                             ; 00431ec5
        ;   Label: LAB_00431ec5
    ADD EBP,0x4                         ; 00431ec6
    JMP 0x00431ea5                      ; 00431ec9
        ;   XREF to: 00431ea5 (UNCONDITIONAL_JUMP)  ; LAB_00431ea5
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431ecb
        ;   Label: LAB_00431ecb
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431ecf
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00431ed3
    MOV EDX,dword ptr [ESP + 0x48]      ; 00431ed7
    MOV ECX,dword ptr [ESP + 0x8]       ; 00431edb
    DEC EBX                             ; 00431edf
    INC ESI                             ; 00431ee0
    ADD EDI,0x84                        ; 00431ee1
    ADD EBP,EAX                         ; 00431ee7
    MOV EAX,dword ptr [ESP + 0x60]      ; 00431ee9
    MOV dword ptr [ESP + 0x18],EDI      ; 00431eed
    ADD EDX,EAX                         ; 00431ef1
    MOV dword ptr [ESP + 0x2c],EBP      ; 00431ef3
    MOV dword ptr [ESP + 0x48],EDX      ; 00431ef7
    CMP EDI,ECX                         ; 00431efb
    JGE 0x00431d3b                      ; 00431efd
        ;   XREF to: 00431d3b (CONDITIONAL_JUMP)  ; LAB_00431d3b
    JMP 0x00431e99                      ; 00431f03
        ;   XREF to: 00431e99 (UNCONDITIONAL_JUMP)  ; LAB_00431e99
    MOV EAX,EBX                         ; 00431f05
        ;   Label: LAB_00431f05
    CMP EDX,ESI                         ; 00431f07
        ;   Label: LAB_00431f07
    JLE 0x00431f11                      ; 00431f09
        ;   XREF to: 00431f11 (CONDITIONAL_JUMP)  ; LAB_00431f11
    CMP EAX,ESI                         ; 00431f0b
    JG 0x00431ec5                       ; 00431f0d
        ;   XREF to: 00431ec5 (CONDITIONAL_JUMP)  ; LAB_00431ec5
    MOV EDX,ESI                         ; 00431f0f
    SUB EDX,EAX                         ; 00431f11
        ;   Label: LAB_00431f11
    INC EDX                             ; 00431f13
    PUSH EDX                            ; 00431f14
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00431f15
    ADD EDX,EAX                         ; 00431f19
    PUSH EDX                            ; 00431f1b
    ADD EAX,EAX                         ; 00431f1c
    MOV EDX,dword ptr [ESP + 0x34]      ; 00431f1e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431f22
    ADD EAX,EDX                         ; 00431f26
    SUB EAX,ECX                         ; 00431f28
    PUSH EAX                            ; 00431f2a
    CALL dword ptr [ESP + 0x3c]         ; 00431f2b
    ADD ESP,0xc                         ; 00431f2f
    INC EDI                             ; 00431f32
    ADD EBP,0x4                         ; 00431f33
    JMP 0x00431ea5                      ; 00431f36
        ;   XREF to: 00431ea5 (UNCONDITIONAL_JUMP)  ; LAB_00431ea5

