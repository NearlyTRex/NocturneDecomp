; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_putPixel_FUN_004345c0(int x,int y,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color
;
; XREF[2]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 at 00433a83
;   cockpit_ckptutil.c_drawLineAA_FUN_00433c90 at 00433da3
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uint[256] g_Hardware32BitPalette
;   ushort[256] g_Hardware16BitPalette
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004345c0
        ;   Label: cockpit_ckptutil.c_putPixel_FUN_004345c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004345c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004345c5
    MOV EBX,dword ptr [ESP + 0x10]      ; 004345c9
    CMP ECX,dword ptr [0x02d02558]      ; 004345cd | g_ClipLeft
    JL 0x004345ff                       ; 004345d3
        ;   XREF to: 004345ff (CONDITIONAL_JUMP)  ; LAB_004345ff
    CMP ECX,dword ptr [0x02d02560]      ; 004345d5 | g_ClipRight
    JG 0x004345ff                       ; 004345db
        ;   XREF to: 004345ff (CONDITIONAL_JUMP)  ; LAB_004345ff
    CMP EDX,dword ptr [0x02d0255c]      ; 004345dd | g_ClipTop
    JL 0x004345ff                       ; 004345e3
        ;   XREF to: 004345ff (CONDITIONAL_JUMP)  ; LAB_004345ff
    CMP EDX,dword ptr [0x02d02564]      ; 004345e5 | g_ClipBottom
    JG 0x004345ff                       ; 004345eb
        ;   XREF to: 004345ff (CONDITIONAL_JUMP)  ; LAB_004345ff
    MOV EAX,[0x0067939c]                ; 004345ed | g_BitsPerPixel
    SHL EDX,0x2                         ; 004345f2
    CMP EAX,0x10                        ; 004345f5
    JNC 0x00434639                      ; 004345f8
        ;   XREF to: 00434639 (CONDITIONAL_JUMP)  ; LAB_00434639
    CMP EAX,0x8                         ; 004345fa
    JZ 0x00434601                       ; 004345fd
        ;   XREF to: 00434601 (CONDITIONAL_JUMP)  ; LAB_00434601
    POP EBX                             ; 004345ff
        ;   Label: LAB_004345ff
    RET                                 ; 00434600
    MOV EAX,dword ptr [EDX + 0x2cf6a9c] ; 00434601 | g_ScreenBufferArray
        ;   Label: LAB_00434601
    MOV byte ptr [ECX + EAX*0x1],BL     ; 00434607
    POP EBX                             ; 0043460a
    RET                                 ; 0043460b
    MOV EAX,dword ptr [EDX + 0x2cf6a9c] ; 0043460c | g_ScreenBufferArray
        ;   Label: LAB_0043460c
    ADD ECX,ECX                         ; 00434612
    ADD ECX,EAX                         ; 00434614
    MOV AX,word ptr [EBX*0x2 + 0x2d01d24] ; 00434616 | g_Hardware16BitPalette
    MOV word ptr [ECX],AX               ; 0043461e
    POP EBX                             ; 00434621
    RET                                 ; 00434622
    SHL ECX,0x2                         ; 00434623
        ;   Label: LAB_00434623
    MOV EAX,dword ptr [EDX + 0x2cf6a9c] ; 00434626 | g_ScreenBufferArray
    ADD ECX,EAX                         ; 0043462c
    MOV EAX,dword ptr [EBX*0x4 + 0x2d01924] ; 0043462e | g_Hardware32BitPalette
    MOV dword ptr [ECX],EAX             ; 00434635
    POP EBX                             ; 00434637
    RET                                 ; 00434638
    JBE 0x0043460c                      ; 00434639
        ;   XREF to: 0043460c (CONDITIONAL_JUMP)  ; LAB_0043460c
        ;   Label: LAB_00434639
    CMP EAX,0x20                        ; 0043463b
    JZ 0x00434623                       ; 0043463e
        ;   XREF to: 00434623 (CONDITIONAL_JUMP)  ; LAB_00434623
    POP EBX                             ; 00434640
    RET                                 ; 00434641

