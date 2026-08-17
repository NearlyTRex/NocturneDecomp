; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042d900(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)
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
; undefined4       Stack[-0x34]:4  local_34
;
; XREF[1]:
;   cockpit_ckptutil.c_blitSolidSprite_FUN_0042e4b0 at 0042e4d9
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_ClipLeft
;   int g_ClipRight
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d900
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900
    PUSH ESI                            ; 0042d901
    PUSH EDI                            ; 0042d902
    PUSH EBP                            ; 0042d903
    SUB ESP,0x34                        ; 0042d904
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042d907
    MOV ESI,dword ptr [ESP + 0x58]      ; 0042d90b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0042d90f
    MOV ECX,dword ptr [0x01c00c60]      ; 0042d913 | g_ClipRight
    MOV EAX,[0x01bd2fa4]                ; 0042d919 | g_ScreenBufferArray[1]
    MOV EBP,dword ptr [0x01bd2fa0]      ; 0042d91e | g_ScreenBufferArray
    MOV EDX,dword ptr [0x01c00c58]      ; 0042d924 | g_ClipLeft
    SUB EAX,EBP                         ; 0042d92a
    ADD ESI,ECX                         ; 0042d92c
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d92e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042d932
    ADD EBX,EDX                         ; 0042d936
    TEST EAX,EAX                        ; 0042d938
    JNZ 0x0042d944                      ; 0042d93a
        ;   XREF to: 0042d944 (CONDITIONAL_JUMP)  ; LAB_0042d944
    ADD ESP,0x34                        ; 0042d93c
        ;   Label: LAB_0042d93c
    POP EBP                             ; 0042d93f
    POP EDI                             ; 0042d940
    POP ESI                             ; 0042d941
    POP EBX                             ; 0042d942
    RET                                 ; 0042d943
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042d944
        ;   Label: LAB_0042d944
    IMUL EAX,EDI                        ; 0042d948
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042d94b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042d94f
    ADD EAX,EDX                         ; 0042d953
    ADD ECX,EAX                         ; 0042d955
    MOV EBP,dword ptr [ESP + 0x64]      ; 0042d957
    MOV dword ptr [ESP + 0x48],ECX      ; 0042d95b
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130 ; 0042d95f
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130()
    MOV dword ptr [ESP + 0x30],EAX      ; 0042d964
    MOV EAX,EBP                         ; 0042d968
    SHL EAX,0x5                         ; 0042d96a
    ADD EAX,EBP                         ; 0042d96d
    SHL EAX,0x2                         ; 0042d96f
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0042d972
    MOV dword ptr [ESP],EAX             ; 0042d976
    MOV EAX,EDI                         ; 0042d979
    ADD EDX,EDI                         ; 0042d97b
    SHL EAX,0x5                         ; 0042d97d
    SHL EDX,0x2                         ; 0042d980
    LEA EBP,[EDI + EAX*0x1]             ; 0042d983
    MOV EAX,[0x005b7624]                ; 0042d986 | g_BitsPerPixel
    SHL EBP,0x2                         ; 0042d98b
    CMP EAX,0x8                         ; 0042d98e
    JNZ 0x0042da58                      ; 0042d991
        ;   XREF to: 0042da58 (CONDITIONAL_JUMP)  ; LAB_0042da58
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 0042d997 | g_ScreenBufferArray
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042d99d
    ADD EDX,EAX                         ; 0042d9a1
    MOV ECX,dword ptr [ESP + 0x64]      ; 0042d9a3
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042d9a7
    CMP EDI,ECX                         ; 0042d9ab
    JGE 0x0042d93c                      ; 0042d9ad
        ;   XREF to: 0042d93c (CONDITIONAL_JUMP)  ; LAB_0042d93c
    MOV EAX,dword ptr [ESP]             ; 0042d9af
    MOV dword ptr [ESP + 0x14],EBP      ; 0042d9b2
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d9b6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d9ba
        ;   Label: LAB_0042d9ba
    XOR EBP,EBP                         ; 0042d9be
    XOR EDI,EDI                         ; 0042d9c0
    MOV dword ptr [ESP + 0x24],EAX      ; 0042d9c2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d9c6
        ;   Label: LAB_0042d9c6
    ADD EAX,dword ptr [ESP + 0x24]      ; 0042d9ca
    CMP EDI,dword ptr [EAX]             ; 0042d9ce
    JGE 0x0042d9ec                      ; 0042d9d0
        ;   XREF to: 0042d9ec (CONDITIONAL_JUMP)  ; LAB_0042d9ec
    LEA EDX,[EAX + EBP*0x1]             ; 0042d9d2
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d9d5
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042d9d8
    ADD EDX,EAX                         ; 0042d9db
    DEC EDX                             ; 0042d9dd
    CMP EAX,EBX                         ; 0042d9de
    JGE 0x0042da26                      ; 0042d9e0
        ;   XREF to: 0042da26 (CONDITIONAL_JUMP)  ; LAB_0042da26
    CMP EDX,EBX                         ; 0042d9e2
    JGE 0x0042da24                      ; 0042d9e4
        ;   XREF to: 0042da24 (CONDITIONAL_JUMP)  ; LAB_0042da24
    INC EDI                             ; 0042d9e6
        ;   Label: LAB_0042d9e6
    ADD EBP,0x4                         ; 0042d9e7
    JMP 0x0042d9c6                      ; 0042d9ea
        ;   XREF to: 0042d9c6 (UNCONDITIONAL_JUMP)  ; LAB_0042d9c6
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042d9ec
        ;   Label: LAB_0042d9ec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d9f0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042d9f4
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042d9f8
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d9fc
    ADD EDI,0x84                        ; 0042da00
    ADD EBP,EAX                         ; 0042da06
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042da08
    MOV dword ptr [ESP + 0x14],EDI      ; 0042da0c
    ADD EDX,EAX                         ; 0042da10
    MOV dword ptr [ESP + 0x2c],EBP      ; 0042da12
    MOV dword ptr [ESP + 0x48],EDX      ; 0042da16
    CMP EDI,ECX                         ; 0042da1a
    JGE 0x0042d93c                      ; 0042da1c
        ;   XREF to: 0042d93c (CONDITIONAL_JUMP)  ; LAB_0042d93c
    JMP 0x0042d9ba                      ; 0042da22
        ;   XREF to: 0042d9ba (UNCONDITIONAL_JUMP)  ; LAB_0042d9ba
    MOV EAX,EBX                         ; 0042da24
        ;   Label: LAB_0042da24
    CMP EDX,ESI                         ; 0042da26
        ;   Label: LAB_0042da26
    JLE 0x0042da30                      ; 0042da28
        ;   XREF to: 0042da30 (CONDITIONAL_JUMP)  ; LAB_0042da30
    CMP EAX,ESI                         ; 0042da2a
    JG 0x0042d9e6                       ; 0042da2c
        ;   XREF to: 0042d9e6 (CONDITIONAL_JUMP)  ; LAB_0042d9e6
    MOV EDX,ESI                         ; 0042da2e
    SUB EDX,EAX                         ; 0042da30
        ;   Label: LAB_0042da30
    INC EDX                             ; 0042da32
    PUSH EDX                            ; 0042da33
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042da34
    ADD EDX,EAX                         ; 0042da38
    PUSH EDX                            ; 0042da3a
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042da3b
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042da3f
    ADD EAX,EDX                         ; 0042da43
    SUB EAX,ECX                         ; 0042da45
    PUSH EAX                            ; 0042da47
    CALL dword ptr [ESP + 0x3c]         ; 0042da48
    ADD ESP,0xc                         ; 0042da4c
    INC EDI                             ; 0042da4f
    ADD EBP,0x4                         ; 0042da50
    JMP 0x0042d9c6                      ; 0042da53
        ;   XREF to: 0042d9c6 (UNCONDITIONAL_JUMP)  ; LAB_0042d9c6
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042da58
        ;   Label: LAB_0042da58
    MOV EDX,dword ptr [EDX + 0x1bd2fa0] ; 0042da5c | g_ScreenBufferArray
    ADD EAX,EAX                         ; 0042da62
    ADD EDX,EAX                         ; 0042da64
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042da66
    MOV dword ptr [ESP + 0x28],EDX      ; 0042da6a
    MOV EDX,EAX                         ; 0042da6e
    SAR EDX,0x1f                        ; 0042da70
    SUB EAX,EDX                         ; 0042da73
    SAR EAX,0x1                         ; 0042da75
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042da77
    MOV dword ptr [ESP + 0x10],EAX      ; 0042da7b
    CMP EDI,EDX                         ; 0042da7f
    JGE 0x0042d93c                      ; 0042da81
        ;   XREF to: 0042d93c (CONDITIONAL_JUMP)  ; LAB_0042d93c
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042da87
    ADD EAX,EAX                         ; 0042da8b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042da8d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042da91
    ADD EAX,EAX                         ; 0042da95
    MOV dword ptr [ESP + 0x4],EAX       ; 0042da97
    MOV EAX,dword ptr [ESP]             ; 0042da9b
    MOV dword ptr [ESP + 0x18],EBP      ; 0042da9e
    MOV dword ptr [ESP + 0xc],EAX       ; 0042daa2
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042daa6
        ;   Label: LAB_0042daa6
    XOR EBP,EBP                         ; 0042daaa
    XOR EDI,EDI                         ; 0042daac
    MOV dword ptr [ESP + 0x20],EAX      ; 0042daae
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042dab2
        ;   Label: LAB_0042dab2
    ADD EAX,dword ptr [ESP + 0x20]      ; 0042dab6
    CMP EDI,dword ptr [EAX]             ; 0042daba
    JGE 0x0042dad8                      ; 0042dabc
        ;   XREF to: 0042dad8 (CONDITIONAL_JUMP)  ; LAB_0042dad8
    LEA EDX,[EAX + EBP*0x1]             ; 0042dabe
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042dac1
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042dac4
    ADD EDX,EAX                         ; 0042dac7
    DEC EDX                             ; 0042dac9
    CMP EAX,EBX                         ; 0042daca
    JGE 0x0042db12                      ; 0042dacc
        ;   XREF to: 0042db12 (CONDITIONAL_JUMP)  ; LAB_0042db12
    CMP EDX,EBX                         ; 0042dace
    JGE 0x0042db10                      ; 0042dad0
        ;   XREF to: 0042db10 (CONDITIONAL_JUMP)  ; LAB_0042db10
    INC EDI                             ; 0042dad2
        ;   Label: LAB_0042dad2
    ADD EBP,0x4                         ; 0042dad3
    JMP 0x0042dab2                      ; 0042dad6
        ;   XREF to: 0042dab2 (UNCONDITIONAL_JUMP)  ; LAB_0042dab2
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042dad8
        ;   Label: LAB_0042dad8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042dadc
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042dae0
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042dae4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042dae8
    ADD EDI,0x84                        ; 0042daec
    ADD EBP,EAX                         ; 0042daf2
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042daf4
    MOV dword ptr [ESP + 0x18],EDI      ; 0042daf8
    ADD EDX,EAX                         ; 0042dafc
    MOV dword ptr [ESP + 0x28],EBP      ; 0042dafe
    MOV dword ptr [ESP + 0x48],EDX      ; 0042db02
    CMP EDI,ECX                         ; 0042db06
    JGE 0x0042d93c                      ; 0042db08
        ;   XREF to: 0042d93c (CONDITIONAL_JUMP)  ; LAB_0042d93c
    JMP 0x0042daa6                      ; 0042db0e
        ;   XREF to: 0042daa6 (UNCONDITIONAL_JUMP)  ; LAB_0042daa6
    MOV EAX,EBX                         ; 0042db10
        ;   Label: LAB_0042db10
    CMP EDX,ESI                         ; 0042db12
        ;   Label: LAB_0042db12
    JLE 0x0042db1c                      ; 0042db14
        ;   XREF to: 0042db1c (CONDITIONAL_JUMP)  ; LAB_0042db1c
    CMP EAX,ESI                         ; 0042db16
    JG 0x0042dad2                       ; 0042db18
        ;   XREF to: 0042dad2 (CONDITIONAL_JUMP)  ; LAB_0042dad2
    MOV EDX,ESI                         ; 0042db1a
    SUB EDX,EAX                         ; 0042db1c
        ;   Label: LAB_0042db1c
    INC EDX                             ; 0042db1e
    PUSH EDX                            ; 0042db1f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042db20
    ADD EDX,EAX                         ; 0042db24
    PUSH EDX                            ; 0042db26
    ADD EAX,EAX                         ; 0042db27
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042db29
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042db2d
    ADD EAX,EDX                         ; 0042db31
    SUB EAX,ECX                         ; 0042db33
    PUSH EAX                            ; 0042db35
    CALL dword ptr [ESP + 0x3c]         ; 0042db36
    ADD ESP,0xc                         ; 0042db3a
    INC EDI                             ; 0042db3d
    ADD EBP,0x4                         ; 0042db3e
    JMP 0x0042dab2                      ; 0042db41
        ;   XREF to: 0042dab2 (UNCONDITIONAL_JUMP)  ; LAB_0042dab2

