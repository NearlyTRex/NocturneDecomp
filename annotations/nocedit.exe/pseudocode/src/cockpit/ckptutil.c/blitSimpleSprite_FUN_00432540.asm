; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void *sprite_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432540
        ;   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
    PUSH ESI                            ; 00432541
    PUSH EDI                            ; 00432542
    PUSH EBP                            ; 00432543
    SUB ESP,0x1c                        ; 00432544
    MOV EBX,dword ptr [ESP + 0x30]      ; 00432547
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0043254b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0043254f
    MOV EDX,dword ptr [0x02cf6a9c]      ; 00432553 | g_ScreenBufferArray
    MOV EBP,dword ptr [0x02cf6aa0]      ; 00432559 | g_ScreenBufferArray[1]
    SUB EBP,EDX                         ; 0043255f
    MOV dword ptr [ESP + 0x8],EBP       ; 00432561
    TEST EBX,EBX                        ; 00432565
    JNZ 0x00432578                      ; 00432567
        ;   XREF to: 00432578 (CONDITIONAL_JUMP)  ; LAB_00432578
    LEA EAX,[EAX]                       ; 00432569
    NOP                                 ; 0043256f
    ADD ESP,0x1c                        ; 00432570
        ;   Label: LAB_00432570
    POP EBP                             ; 00432573
    POP EDI                             ; 00432574
    POP ESI                             ; 00432575
    POP EBX                             ; 00432576
    RET                                 ; 00432577
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00432578
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_00432578
    MOV dword ptr [ESP + 0xc],EAX       ; 0043257d
    MOV EAX,dword ptr [ESP + 0x38]      ; 00432581
    MOV ECX,dword ptr [0x0067939c]      ; 00432585 | g_BitsPerPixel
    SHL EAX,0x2                         ; 0043258b
    CMP ECX,0x8                         ; 0043258e
    JNZ 0x004325d0                      ; 00432591
        ;   XREF to: 004325d0 (CONDITIONAL_JUMP)  ; LAB_004325d0
    MOV ECX,dword ptr [ESP + 0x34]      ; 00432593
    MOV EBP,dword ptr [EAX + 0x2cf6a9c] ; 00432597 | g_ScreenBufferArray
    XOR EAX,EAX                         ; 0043259d
    ADD EBP,ECX                         ; 0043259f
    MOV dword ptr [ESP + 0x14],EAX      ; 004325a1
    TEST EDI,EDI                        ; 004325a5
    JLE 0x00432570                      ; 004325a7
        ;   XREF to: 00432570 (CONDITIONAL_JUMP)  ; LAB_00432570
    PUSH ESI                            ; 004325a9
        ;   Label: LAB_004325a9
    PUSH EBX                            ; 004325aa
    PUSH EBP                            ; 004325ab
    CALL dword ptr [ESP + 0x18]         ; 004325ac
    ADD ESP,0xc                         ; 004325b0
    ADD EBX,ESI                         ; 004325b3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004325b5
    MOV ECX,dword ptr [ESP + 0x8]       ; 004325b9
    INC EDX                             ; 004325bd
    ADD EBP,ECX                         ; 004325be
    MOV dword ptr [ESP + 0x14],EDX      ; 004325c0
    CMP EDI,EDX                         ; 004325c4
    JG 0x004325a9                       ; 004325c6
        ;   XREF to: 004325a9 (CONDITIONAL_JUMP)  ; LAB_004325a9
    ADD ESP,0x1c                        ; 004325c8
    POP EBP                             ; 004325cb
    POP EDI                             ; 004325cc
    POP ESI                             ; 004325cd
    POP EBX                             ; 004325ce
    RET                                 ; 004325cf
    CMP ECX,0x10                        ; 004325d0
        ;   Label: LAB_004325d0
    JNZ 0x0043262d                      ; 004325d3
        ;   XREF to: 0043262d (CONDITIONAL_JUMP)  ; LAB_0043262d
    MOV EDX,dword ptr [ESP + 0x34]      ; 004325d5
    MOV EBP,dword ptr [EAX + 0x2cf6a9c] ; 004325d9 | g_ScreenBufferArray
    ADD EDX,EDX                         ; 004325df
    MOV EAX,dword ptr [ESP + 0x8]       ; 004325e1
    ADD EBP,EDX                         ; 004325e5
    MOV EDX,EAX                         ; 004325e7
    SAR EDX,0x1f                        ; 004325e9
    SUB EAX,EDX                         ; 004325ec
    SAR EAX,0x1                         ; 004325ee
    XOR EDX,EDX                         ; 004325f0
    MOV dword ptr [ESP + 0x8],EAX       ; 004325f2
    MOV dword ptr [ESP + 0x18],EDX      ; 004325f6
    TEST EDI,EDI                        ; 004325fa
    JLE 0x00432570                      ; 004325fc
        ;   XREF to: 00432570 (CONDITIONAL_JUMP)  ; LAB_00432570
    ADD EAX,EAX                         ; 00432602
    MOV dword ptr [ESP],EAX             ; 00432604
    PUSH ESI                            ; 00432607
        ;   Label: LAB_00432607
    PUSH EBX                            ; 00432608
    PUSH EBP                            ; 00432609
    CALL dword ptr [ESP + 0x18]         ; 0043260a
    ADD ESP,0xc                         ; 0043260e
    ADD EBX,ESI                         ; 00432611
    MOV EDX,dword ptr [ESP + 0x18]      ; 00432613
    MOV ECX,dword ptr [ESP]             ; 00432617
    INC EDX                             ; 0043261a
    ADD EBP,ECX                         ; 0043261b
    MOV dword ptr [ESP + 0x18],EDX      ; 0043261d
    CMP EDI,EDX                         ; 00432621
    JG 0x00432607                       ; 00432623
        ;   XREF to: 00432607 (CONDITIONAL_JUMP)  ; LAB_00432607
    ADD ESP,0x1c                        ; 00432625
    POP EBP                             ; 00432628
    POP EDI                             ; 00432629
    POP ESI                             ; 0043262a
    POP EBX                             ; 0043262b
    RET                                 ; 0043262c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043262d
        ;   Label: LAB_0043262d
    MOV EBP,dword ptr [EAX + 0x2cf6a9c] ; 00432631 | g_ScreenBufferArray
    SHL EDX,0x2                         ; 00432637
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043263a
    ADD EBP,EDX                         ; 0043263e
    MOV EDX,EAX                         ; 00432640
    SAR EDX,0x1f                        ; 00432642
    SHL EDX,0x2                         ; 00432645
    SBB EAX,EDX                         ; 00432648
    SAR EAX,0x2                         ; 0043264a
    MOV dword ptr [ESP + 0x8],EAX       ; 0043264d
    XOR EAX,EAX                         ; 00432651
    MOV dword ptr [ESP + 0x10],EAX      ; 00432653
    TEST EDI,EDI                        ; 00432657
    JLE 0x00432570                      ; 00432659
        ;   XREF to: 00432570 (CONDITIONAL_JUMP)  ; LAB_00432570
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043265f
    SHL EAX,0x2                         ; 00432663
    MOV dword ptr [ESP + 0x4],EAX       ; 00432666
    PUSH ESI                            ; 0043266a
        ;   Label: LAB_0043266a
    PUSH EBX                            ; 0043266b
    PUSH EBP                            ; 0043266c
    CALL dword ptr [ESP + 0x18]         ; 0043266d
    ADD ESP,0xc                         ; 00432671
    ADD EBX,ESI                         ; 00432674
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432676
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043267a
    INC EDX                             ; 0043267e
    ADD EBP,ECX                         ; 0043267f
    MOV dword ptr [ESP + 0x10],EDX      ; 00432681
    CMP EDI,EDX                         ; 00432685
    JG 0x0043266a                       ; 00432687
        ;   XREF to: 0043266a (CONDITIONAL_JUMP)  ; LAB_0043266a
    ADD ESP,0x1c                        ; 00432689
    POP EBP                             ; 0043268c
    POP EDI                             ; 0043268d
    POP ESI                             ; 0043268e
    POP EBX                             ; 0043268f
    RET                                 ; 00432690

