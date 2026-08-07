; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(void *sprite_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042df00
        ;   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00
    PUSH ESI                            ; 0042df01
    PUSH EDI                            ; 0042df02
    PUSH EBP                            ; 0042df03
    SUB ESP,0x1c                        ; 0042df04
    MOV EBX,dword ptr [ESP + 0x30]      ; 0042df07
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0042df0b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0042df0f
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0042df13 | g_ScreenBufferArray
    MOV EBP,dword ptr [0x01bd2fa4]      ; 0042df19 | g_ScreenBufferArray[1]
    SUB EBP,EDX                         ; 0042df1f
    MOV dword ptr [ESP + 0x8],EBP       ; 0042df21
    TEST EBX,EBX                        ; 0042df25
    JNZ 0x0042df38                      ; 0042df27
        ;   XREF to: 0042df38 (CONDITIONAL_JUMP)  ; LAB_0042df38
    LEA EAX,[EAX]                       ; 0042df29
    NOP                                 ; 0042df2f
    ADD ESP,0x1c                        ; 0042df30
        ;   Label: LAB_0042df30
    POP EBP                             ; 0042df33
    POP EDI                             ; 0042df34
    POP ESI                             ; 0042df35
    POP EBX                             ; 0042df36
    RET                                 ; 0042df37
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 0042df38
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_0042df38
    MOV dword ptr [ESP + 0xc],EAX       ; 0042df3d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042df41
    MOV ECX,dword ptr [0x005b7624]      ; 0042df45 | g_BitsPerPixel
    SHL EAX,0x2                         ; 0042df4b
    CMP ECX,0x8                         ; 0042df4e
    JNZ 0x0042df90                      ; 0042df51
        ;   XREF to: 0042df90 (CONDITIONAL_JUMP)  ; LAB_0042df90
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042df53
    MOV EBP,dword ptr [EAX + 0x1bd2fa0] ; 0042df57 | g_ScreenBufferArray
    XOR EAX,EAX                         ; 0042df5d
    ADD EBP,ECX                         ; 0042df5f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042df61
    TEST EDI,EDI                        ; 0042df65
    JLE 0x0042df30                      ; 0042df67
        ;   XREF to: 0042df30 (CONDITIONAL_JUMP)  ; LAB_0042df30
    PUSH ESI                            ; 0042df69
        ;   Label: LAB_0042df69
    PUSH EBX                            ; 0042df6a
    PUSH EBP                            ; 0042df6b
    CALL dword ptr [ESP + 0x18]         ; 0042df6c
    ADD ESP,0xc                         ; 0042df70
    ADD EBX,ESI                         ; 0042df73
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042df75
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042df79
    INC EDX                             ; 0042df7d
    ADD EBP,ECX                         ; 0042df7e
    MOV dword ptr [ESP + 0x14],EDX      ; 0042df80
    CMP EDI,EDX                         ; 0042df84
    JG 0x0042df69                       ; 0042df86
        ;   XREF to: 0042df69 (CONDITIONAL_JUMP)  ; LAB_0042df69
    ADD ESP,0x1c                        ; 0042df88
    POP EBP                             ; 0042df8b
    POP EDI                             ; 0042df8c
    POP ESI                             ; 0042df8d
    POP EBX                             ; 0042df8e
    RET                                 ; 0042df8f
    CMP ECX,0x10                        ; 0042df90
        ;   Label: LAB_0042df90
    JNZ 0x0042dfed                      ; 0042df93
        ;   XREF to: 0042dfed (CONDITIONAL_JUMP)  ; LAB_0042dfed
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042df95
    MOV EBP,dword ptr [EAX + 0x1bd2fa0] ; 0042df99 | g_ScreenBufferArray
    ADD EDX,EDX                         ; 0042df9f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042dfa1
    ADD EBP,EDX                         ; 0042dfa5
    MOV EDX,EAX                         ; 0042dfa7
    SAR EDX,0x1f                        ; 0042dfa9
    SUB EAX,EDX                         ; 0042dfac
    SAR EAX,0x1                         ; 0042dfae
    XOR EDX,EDX                         ; 0042dfb0
    MOV dword ptr [ESP + 0x8],EAX       ; 0042dfb2
    MOV dword ptr [ESP + 0x18],EDX      ; 0042dfb6
    TEST EDI,EDI                        ; 0042dfba
    JLE 0x0042df30                      ; 0042dfbc
        ;   XREF to: 0042df30 (CONDITIONAL_JUMP)  ; LAB_0042df30
    ADD EAX,EAX                         ; 0042dfc2
    MOV dword ptr [ESP],EAX             ; 0042dfc4
    PUSH ESI                            ; 0042dfc7
        ;   Label: LAB_0042dfc7
    PUSH EBX                            ; 0042dfc8
    PUSH EBP                            ; 0042dfc9
    CALL dword ptr [ESP + 0x18]         ; 0042dfca
    ADD ESP,0xc                         ; 0042dfce
    ADD EBX,ESI                         ; 0042dfd1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042dfd3
    MOV ECX,dword ptr [ESP]             ; 0042dfd7
    INC EDX                             ; 0042dfda
    ADD EBP,ECX                         ; 0042dfdb
    MOV dword ptr [ESP + 0x18],EDX      ; 0042dfdd
    CMP EDI,EDX                         ; 0042dfe1
    JG 0x0042dfc7                       ; 0042dfe3
        ;   XREF to: 0042dfc7 (CONDITIONAL_JUMP)  ; LAB_0042dfc7
    ADD ESP,0x1c                        ; 0042dfe5
    POP EBP                             ; 0042dfe8
    POP EDI                             ; 0042dfe9
    POP ESI                             ; 0042dfea
    POP EBX                             ; 0042dfeb
    RET                                 ; 0042dfec
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042dfed
        ;   Label: LAB_0042dfed
    MOV EBP,dword ptr [EAX + 0x1bd2fa0] ; 0042dff1 | g_ScreenBufferArray
    SHL EDX,0x2                         ; 0042dff7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042dffa
    ADD EBP,EDX                         ; 0042dffe
    MOV EDX,EAX                         ; 0042e000
    SAR EDX,0x1f                        ; 0042e002
    SHL EDX,0x2                         ; 0042e005
    SBB EAX,EDX                         ; 0042e008
    SAR EAX,0x2                         ; 0042e00a
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e00d
    XOR EAX,EAX                         ; 0042e011
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e013
    TEST EDI,EDI                        ; 0042e017
    JLE 0x0042df30                      ; 0042e019
        ;   XREF to: 0042df30 (CONDITIONAL_JUMP)  ; LAB_0042df30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042e01f
    SHL EAX,0x2                         ; 0042e023
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e026
    PUSH ESI                            ; 0042e02a
        ;   Label: LAB_0042e02a
    PUSH EBX                            ; 0042e02b
    PUSH EBP                            ; 0042e02c
    CALL dword ptr [ESP + 0x18]         ; 0042e02d
    ADD ESP,0xc                         ; 0042e031
    ADD EBX,ESI                         ; 0042e034
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042e036
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042e03a
    INC EDX                             ; 0042e03e
    ADD EBP,ECX                         ; 0042e03f
    MOV dword ptr [ESP + 0x10],EDX      ; 0042e041
    CMP EDI,EDX                         ; 0042e045
    JG 0x0042e02a                       ; 0042e047
        ;   XREF to: 0042e02a (CONDITIONAL_JUMP)  ; LAB_0042e02a
    ADD ESP,0x1c                        ; 0042e049
    POP EBP                             ; 0042e04c
    POP EDI                             ; 0042e04d
    POP ESI                             ; 0042e04e
    POP EBX                             ; 0042e04f
    RET                                 ; 0042e050

