; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_0042dcc0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c60
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dcc0
        ;   Label: cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042dcc0
    PUSH ESI                            ; 0042dcc1
    PUSH EDI                            ; 0042dcc2
    PUSH EBP                            ; 0042dcc3
    SUB ESP,0x2c                        ; 0042dcc4
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042dcc7
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042dccb
    MOV EBX,dword ptr [0x01c00c60]      ; 0042dccf | DAT_01c00c60
    MOV EAX,[0x01bd2fa4]                ; 0042dcd5 | DAT_01bd2fa4
    MOV EDI,dword ptr [0x01bd2fa0]      ; 0042dcda | DAT_01bd2fa0
    MOV ESI,dword ptr [0x01c00c58]      ; 0042dce0 | DAT_01c00c58
    SUB EBX,EDX                         ; 0042dce6
    SUB EAX,EDI                         ; 0042dce8
    SUB ESI,EDX                         ; 0042dcea
    MOV dword ptr [ESP + 0xc],EAX       ; 0042dcec
    TEST EBP,EBP                        ; 0042dcf0
    JNZ 0x0042dcfc                      ; 0042dcf2
        ;   XREF to: 0042dcfc (CONDITIONAL_JUMP)  ; LAB_0042dcfc
    ADD ESP,0x2c                        ; 0042dcf4
        ;   Label: LAB_0042dcf4
    POP EBP                             ; 0042dcf7
    POP EDI                             ; 0042dcf8
    POP ESI                             ; 0042dcf9
    POP EBX                             ; 0042dcfa
    RET                                 ; 0042dcfb
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 0042dcfc
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_0042dcfc
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042dd01
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0042dd05
    MOV EDI,EDX                         ; 0042dd09
    MOV dword ptr [ESP + 0x28],EAX      ; 0042dd0b
    SHL EDI,0x5                         ; 0042dd0f
    MOV EAX,[0x005b7624]                ; 0042dd12 | DAT_005b7624
    ADD EDI,EDX                         ; 0042dd17
    SHL EBP,0x2                         ; 0042dd19
    SHL EDI,0x2                         ; 0042dd1c
    CMP EAX,0x8                         ; 0042dd1f
    JNZ 0x0042ddfe                      ; 0042dd22
        ;   XREF to: 0042ddfe (CONDITIONAL_JUMP)  ; LAB_0042ddfe
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042dd28
    MOV EAX,dword ptr [EBP + 0x1bd2fa0] ; 0042dd2c | DAT_01bd2fa0
    ADD EDX,EAX                         ; 0042dd32
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042dd34
    MOV dword ptr [ESP + 0x24],EDX      ; 0042dd38
    TEST ECX,ECX                        ; 0042dd3c
    JLE 0x0042dcf4                      ; 0042dd3e
        ;   XREF to: 0042dcf4 (CONDITIONAL_JUMP)  ; LAB_0042dcf4
    XOR ECX,ECX                         ; 0042dd40
    MOV dword ptr [ESP + 0x8],EDI       ; 0042dd42
    MOV dword ptr [ESP + 0x14],ECX      ; 0042dd46
    CMP dword ptr [ESP + 0x44],0x0      ; 0042dd4a
        ;   Label: LAB_0042dd4a
    JZ 0x0042ddba                       ; 0042dd4f
        ;   XREF to: 0042ddba (CONDITIONAL_JUMP)  ; LAB_0042ddba
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042dd51
    XOR EBP,EBP                         ; 0042dd55
    XOR EDI,EDI                         ; 0042dd57
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042dd59
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042dd5d
        ;   Label: LAB_0042dd5d
    ADD EDX,dword ptr [ESP + 0x1c]      ; 0042dd61
    CMP EDI,dword ptr [EDX]             ; 0042dd65
    JGE 0x0042dd82                      ; 0042dd67
        ;   XREF to: 0042dd82 (CONDITIONAL_JUMP)  ; LAB_0042dd82
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 0042dd69
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 0042dd6d
    ADD EDX,EAX                         ; 0042dd71
    DEC EDX                             ; 0042dd73
    CMP EAX,ESI                         ; 0042dd74
    JGE 0x0042ddd4                      ; 0042dd76
        ;   XREF to: 0042ddd4 (CONDITIONAL_JUMP)  ; LAB_0042ddd4
    CMP EDX,ESI                         ; 0042dd78
    JGE 0x0042ddd2                      ; 0042dd7a
        ;   XREF to: 0042ddd2 (CONDITIONAL_JUMP)  ; LAB_0042ddd2
    INC EDI                             ; 0042dd7c
        ;   Label: LAB_0042dd7c
    ADD EBP,0x4                         ; 0042dd7d
    JMP 0x0042dd5d                      ; 0042dd80
        ;   XREF to: 0042dd5d (UNCONDITIONAL_JUMP)  ; LAB_0042dd5d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042dd82
        ;   Label: LAB_0042dd82
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042dd86
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042dd8a
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042dd8e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042dd92
    ADD ECX,0x84                        ; 0042dd96
    ADD EDI,EAX                         ; 0042dd9c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042dd9e
    MOV dword ptr [ESP + 0x14],ECX      ; 0042dda2
    ADD EBP,EAX                         ; 0042dda6
    MOV dword ptr [ESP + 0x24],EDI      ; 0042dda8
    MOV dword ptr [ESP + 0x40],EBP      ; 0042ddac
    CMP ECX,EDX                         ; 0042ddb0
    JGE 0x0042dcf4                      ; 0042ddb2
        ;   XREF to: 0042dcf4 (CONDITIONAL_JUMP)  ; LAB_0042dcf4
    JMP 0x0042dd4a                      ; 0042ddb8
        ;   XREF to: 0042dd4a (UNCONDITIONAL_JUMP)  ; LAB_0042dd4a
    MOV EBP,dword ptr [ESP + 0x50]      ; 0042ddba
        ;   Label: LAB_0042ddba
    PUSH EBP                            ; 0042ddbe
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042ddbf
    PUSH EAX                            ; 0042ddc3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042ddc4
    PUSH EDX                            ; 0042ddc8
    CALL dword ptr [ESP + 0x34]         ; 0042ddc9
    ADD ESP,0xc                         ; 0042ddcd
    JMP 0x0042dd82                      ; 0042ddd0
        ;   XREF to: 0042dd82 (UNCONDITIONAL_JUMP)  ; LAB_0042dd82
    MOV EAX,ESI                         ; 0042ddd2
        ;   Label: LAB_0042ddd2
    CMP EDX,EBX                         ; 0042ddd4
        ;   Label: LAB_0042ddd4
    JLE 0x0042ddde                      ; 0042ddd6
        ;   XREF to: 0042ddde (CONDITIONAL_JUMP)  ; LAB_0042ddde
    CMP EAX,EBX                         ; 0042ddd8
    JG 0x0042dd7c                       ; 0042ddda
        ;   XREF to: 0042dd7c (CONDITIONAL_JUMP)  ; LAB_0042dd7c
    MOV EDX,EBX                         ; 0042dddc
    SUB EDX,EAX                         ; 0042ddde
        ;   Label: LAB_0042ddde
    INC EDX                             ; 0042dde0
    PUSH EDX                            ; 0042dde1
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042dde2
    ADD EDX,EAX                         ; 0042dde6
    PUSH EDX                            ; 0042dde8
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0042dde9
    PUSH EAX                            ; 0042dded
    CALL dword ptr [ESP + 0x34]         ; 0042ddee
    ADD ESP,0xc                         ; 0042ddf2
    INC EDI                             ; 0042ddf5
    ADD EBP,0x4                         ; 0042ddf6
    JMP 0x0042dd5d                      ; 0042ddf9
        ;   XREF to: 0042dd5d (UNCONDITIONAL_JUMP)  ; LAB_0042dd5d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042ddfe
        ;   Label: LAB_0042ddfe
    MOV EDX,dword ptr [EBP + 0x1bd2fa0] ; 0042de02 | DAT_01bd2fa0
    ADD EAX,EAX                         ; 0042de08
    ADD EDX,EAX                         ; 0042de0a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042de0c
    MOV dword ptr [ESP + 0x20],EDX      ; 0042de10
    MOV EDX,EAX                         ; 0042de14
    SAR EDX,0x1f                        ; 0042de16
    SUB EAX,EDX                         ; 0042de19
    SAR EAX,0x1                         ; 0042de1b
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042de1d
    MOV dword ptr [ESP + 0xc],EAX       ; 0042de21
    TEST EDX,EDX                        ; 0042de25
    JLE 0x0042dcf4                      ; 0042de27
        ;   XREF to: 0042dcf4 (CONDITIONAL_JUMP)  ; LAB_0042dcf4
    MOV dword ptr [ESP + 0x4],EDI       ; 0042de2d
    XOR EBP,EBP                         ; 0042de31
    ADD EAX,EAX                         ; 0042de33
    MOV dword ptr [ESP + 0x10],EBP      ; 0042de35
    MOV dword ptr [ESP],EAX             ; 0042de39
    CMP dword ptr [ESP + 0x44],0x0      ; 0042de3c
        ;   Label: LAB_0042de3c
    JZ 0x0042deab                       ; 0042de41
        ;   XREF to: 0042deab (CONDITIONAL_JUMP)  ; LAB_0042deab
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042de43
    XOR EBP,EBP                         ; 0042de47
    XOR EDI,EDI                         ; 0042de49
    MOV dword ptr [ESP + 0x18],EAX      ; 0042de4b
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042de4f
        ;   Label: LAB_0042de4f
    ADD EDX,dword ptr [ESP + 0x18]      ; 0042de53
    CMP EDI,dword ptr [EDX]             ; 0042de57
    JGE 0x0042de74                      ; 0042de59
        ;   XREF to: 0042de74 (CONDITIONAL_JUMP)  ; LAB_0042de74
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 0042de5b
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 0042de5f
    ADD EDX,EAX                         ; 0042de63
    DEC EDX                             ; 0042de65
    CMP EAX,ESI                         ; 0042de66
    JGE 0x0042dec5                      ; 0042de68
        ;   XREF to: 0042dec5 (CONDITIONAL_JUMP)  ; LAB_0042dec5
    CMP EDX,ESI                         ; 0042de6a
    JGE 0x0042dec3                      ; 0042de6c
        ;   XREF to: 0042dec3 (CONDITIONAL_JUMP)  ; LAB_0042dec3
    INC EDI                             ; 0042de6e
        ;   Label: LAB_0042de6e
    ADD EBP,0x4                         ; 0042de6f
    JMP 0x0042de4f                      ; 0042de72
        ;   XREF to: 0042de4f (UNCONDITIONAL_JUMP)  ; LAB_0042de4f
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042de74
        ;   Label: LAB_0042de74
    MOV EAX,dword ptr [ESP]             ; 0042de78
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042de7b
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042de7f
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042de83
    ADD EDI,0x84                        ; 0042de87
    ADD EBP,EAX                         ; 0042de8d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042de8f
    MOV dword ptr [ESP + 0x10],EDI      ; 0042de93
    ADD EDX,EAX                         ; 0042de97
    MOV dword ptr [ESP + 0x20],EBP      ; 0042de99
    MOV dword ptr [ESP + 0x40],EDX      ; 0042de9d
    CMP EDI,ECX                         ; 0042dea1
    JGE 0x0042dcf4                      ; 0042dea3
        ;   XREF to: 0042dcf4 (CONDITIONAL_JUMP)  ; LAB_0042dcf4
    JMP 0x0042de3c                      ; 0042dea9
        ;   XREF to: 0042de3c (UNCONDITIONAL_JUMP)  ; LAB_0042de3c
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042deab
        ;   Label: LAB_0042deab
    PUSH EDX                            ; 0042deaf
    MOV ECX,dword ptr [ESP + 0x44]      ; 0042deb0
    PUSH ECX                            ; 0042deb4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0042deb5
    PUSH EDI                            ; 0042deb9
    CALL dword ptr [ESP + 0x34]         ; 0042deba
    ADD ESP,0xc                         ; 0042debe
    JMP 0x0042de74                      ; 0042dec1
        ;   XREF to: 0042de74 (UNCONDITIONAL_JUMP)  ; LAB_0042de74
    MOV EAX,ESI                         ; 0042dec3
        ;   Label: LAB_0042dec3
    CMP EDX,EBX                         ; 0042dec5
        ;   Label: LAB_0042dec5
    JLE 0x0042decf                      ; 0042dec7
        ;   XREF to: 0042decf (CONDITIONAL_JUMP)  ; LAB_0042decf
    CMP EAX,EBX                         ; 0042dec9
    JG 0x0042de6e                       ; 0042decb
        ;   XREF to: 0042de6e (CONDITIONAL_JUMP)  ; LAB_0042de6e
    MOV EDX,EBX                         ; 0042decd
    SUB EDX,EAX                         ; 0042decf
        ;   Label: LAB_0042decf
    INC EDX                             ; 0042ded1
    PUSH EDX                            ; 0042ded2
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042ded3
    ADD EDX,EAX                         ; 0042ded7
    PUSH EDX                            ; 0042ded9
    ADD EAX,EAX                         ; 0042deda
    ADD EAX,dword ptr [ESP + 0x28]      ; 0042dedc
    PUSH EAX                            ; 0042dee0
    CALL dword ptr [ESP + 0x34]         ; 0042dee1
    ADD ESP,0xc                         ; 0042dee5
    INC EDI                             ; 0042dee8
    ADD EBP,0x4                         ; 0042dee9
    JMP 0x0042de4f                      ; 0042deec
        ;   XREF to: 0042de4f (UNCONDITIONAL_JUMP)  ; LAB_0042de4f

