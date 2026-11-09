; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00437f40(void *sprite_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437f40
        ;   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_00437f40
    PUSH ESI                            ; 00437f41
    PUSH EDI                            ; 00437f42
    PUSH EBP                            ; 00437f43
    SUB ESP,0x1c                        ; 00437f44
    MOV EBX,dword ptr [ESP + 0x30]      ; 00437f47
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00437f4b
    MOV EDI,dword ptr [ESP + 0x40]      ; 00437f4f
    MOV EDX,dword ptr [0x01c4354c]      ; 00437f53 | DAT_01c4354c
    MOV EBP,dword ptr [0x01c43550]      ; 00437f59 | DAT_01c43550
    SUB EBP,EDX                         ; 00437f5f
    MOV dword ptr [ESP + 0x8],EBP       ; 00437f61
    TEST EBX,EBX                        ; 00437f65
    JNZ 0x00437f78                      ; 00437f67
        ;   XREF to: 00437f78 (CONDITIONAL_JUMP)  ; LAB_00437f78
    LEA EAX,[EAX]                       ; 00437f69
    NOP                                 ; 00437f6f
    ADD ESP,0x1c                        ; 00437f70
        ;   Label: LAB_00437f70
    POP EBP                             ; 00437f73
    POP EDI                             ; 00437f74
    POP ESI                             ; 00437f75
    POP EBX                             ; 00437f76
    RET                                 ; 00437f77
    CALL cockpit_ckptutil.c_FUN_00437270 ; 00437f78
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
        ;   Label: LAB_00437f78
    MOV dword ptr [ESP + 0xc],EAX       ; 00437f7d
    MOV EAX,dword ptr [ESP + 0x38]      ; 00437f81
    MOV ECX,dword ptr [0x0061b4a0]      ; 00437f85 | DAT_0061b4a0
    SHL EAX,0x2                         ; 00437f8b
    CMP ECX,0x8                         ; 00437f8e
    JNZ 0x00437fd0                      ; 00437f91
        ;   XREF to: 00437fd0 (CONDITIONAL_JUMP)  ; LAB_00437fd0
    MOV ECX,dword ptr [ESP + 0x34]      ; 00437f93
    MOV EBP,dword ptr [EAX + 0x1c4354c] ; 00437f97
    XOR EAX,EAX                         ; 00437f9d
    ADD EBP,ECX                         ; 00437f9f
    MOV dword ptr [ESP + 0x14],EAX      ; 00437fa1
    TEST EDI,EDI                        ; 00437fa5
    JLE 0x00437f70                      ; 00437fa7
        ;   XREF to: 00437f70 (CONDITIONAL_JUMP)  ; LAB_00437f70
    PUSH ESI                            ; 00437fa9
        ;   Label: LAB_00437fa9
    PUSH EBX                            ; 00437faa
    PUSH EBP                            ; 00437fab
    CALL dword ptr [ESP + 0x18]         ; 00437fac
    ADD ESP,0xc                         ; 00437fb0
    ADD EBX,ESI                         ; 00437fb3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00437fb5
    MOV ECX,dword ptr [ESP + 0x8]       ; 00437fb9
    INC EDX                             ; 00437fbd
    ADD EBP,ECX                         ; 00437fbe
    MOV dword ptr [ESP + 0x14],EDX      ; 00437fc0
    CMP EDI,EDX                         ; 00437fc4
    JG 0x00437fa9                       ; 00437fc6
        ;   XREF to: 00437fa9 (CONDITIONAL_JUMP)  ; LAB_00437fa9
    ADD ESP,0x1c                        ; 00437fc8
    POP EBP                             ; 00437fcb
    POP EDI                             ; 00437fcc
    POP ESI                             ; 00437fcd
    POP EBX                             ; 00437fce
    RET                                 ; 00437fcf
    CMP ECX,0x10                        ; 00437fd0
        ;   Label: LAB_00437fd0
    JNZ 0x0043802d                      ; 00437fd3
        ;   XREF to: 0043802d (CONDITIONAL_JUMP)  ; LAB_0043802d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00437fd5
    MOV EBP,dword ptr [EAX + 0x1c4354c] ; 00437fd9
    ADD EDX,EDX                         ; 00437fdf
    MOV EAX,dword ptr [ESP + 0x8]       ; 00437fe1
    ADD EBP,EDX                         ; 00437fe5
    MOV EDX,EAX                         ; 00437fe7
    SAR EDX,0x1f                        ; 00437fe9
    SUB EAX,EDX                         ; 00437fec
    SAR EAX,0x1                         ; 00437fee
    XOR EDX,EDX                         ; 00437ff0
    MOV dword ptr [ESP + 0x8],EAX       ; 00437ff2
    MOV dword ptr [ESP + 0x18],EDX      ; 00437ff6
    TEST EDI,EDI                        ; 00437ffa
    JLE 0x00437f70                      ; 00437ffc
        ;   XREF to: 00437f70 (CONDITIONAL_JUMP)  ; LAB_00437f70
    ADD EAX,EAX                         ; 00438002
    MOV dword ptr [ESP],EAX             ; 00438004
    PUSH ESI                            ; 00438007
        ;   Label: LAB_00438007
    PUSH EBX                            ; 00438008
    PUSH EBP                            ; 00438009
    CALL dword ptr [ESP + 0x18]         ; 0043800a
    ADD ESP,0xc                         ; 0043800e
    ADD EBX,ESI                         ; 00438011
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438013
    MOV ECX,dword ptr [ESP]             ; 00438017
    INC EDX                             ; 0043801a
    ADD EBP,ECX                         ; 0043801b
    MOV dword ptr [ESP + 0x18],EDX      ; 0043801d
    CMP EDI,EDX                         ; 00438021
    JG 0x00438007                       ; 00438023
        ;   XREF to: 00438007 (CONDITIONAL_JUMP)  ; LAB_00438007
    ADD ESP,0x1c                        ; 00438025
    POP EBP                             ; 00438028
    POP EDI                             ; 00438029
    POP ESI                             ; 0043802a
    POP EBX                             ; 0043802b
    RET                                 ; 0043802c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043802d
        ;   Label: LAB_0043802d
    MOV EBP,dword ptr [EAX + 0x1c4354c] ; 00438031
    SHL EDX,0x2                         ; 00438037
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043803a
    ADD EBP,EDX                         ; 0043803e
    MOV EDX,EAX                         ; 00438040
    SAR EDX,0x1f                        ; 00438042
    SHL EDX,0x2                         ; 00438045
    SBB EAX,EDX                         ; 00438048
    SAR EAX,0x2                         ; 0043804a
    MOV dword ptr [ESP + 0x8],EAX       ; 0043804d
    XOR EAX,EAX                         ; 00438051
    MOV dword ptr [ESP + 0x10],EAX      ; 00438053
    TEST EDI,EDI                        ; 00438057
    JLE 0x00437f70                      ; 00438059
        ;   XREF to: 00437f70 (CONDITIONAL_JUMP)  ; LAB_00437f70
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043805f
    SHL EAX,0x2                         ; 00438063
    MOV dword ptr [ESP + 0x4],EAX       ; 00438066
    PUSH ESI                            ; 0043806a
        ;   Label: LAB_0043806a
    PUSH EBX                            ; 0043806b
    PUSH EBP                            ; 0043806c
    CALL dword ptr [ESP + 0x18]         ; 0043806d
    ADD ESP,0xc                         ; 00438071
    ADD EBX,ESI                         ; 00438074
    MOV EDX,dword ptr [ESP + 0x10]      ; 00438076
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043807a
    INC EDX                             ; 0043807e
    ADD EBP,ECX                         ; 0043807f
    MOV dword ptr [ESP + 0x10],EDX      ; 00438081
    CMP EDI,EDX                         ; 00438085
    JG 0x0043806a                       ; 00438087
        ;   XREF to: 0043806a (CONDITIONAL_JUMP)  ; LAB_0043806a
    ADD ESP,0x1c                        ; 00438089
    POP EBP                             ; 0043808c
    POP EDI                             ; 0043808d
    POP ESI                             ; 0043808e
    POP EBX                             ; 0043808f
    RET                                 ; 00438090

