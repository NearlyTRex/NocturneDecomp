; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042d5c0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   max_height
; int              Stack[0x18]:4   unused_param
; int              Stack[0x1c]:4   src_y_offset
; int              Stack[0x20]:4   src_stride
;
; Referenced Globals:
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141c0 = 0x8
;   void*[1200] g_ARRAY_PTR_01c2a38c
;   undefined4 g_ARRAY_PTR_01c2a38c[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d5c0
        ;   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042d5c0
    PUSH ESI                            ; 0042d5c1
    PUSH EDI                            ; 0042d5c2
    PUSH EBP                            ; 0042d5c3
    SUB ESP,0x18                        ; 0042d5c4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042d5c7
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042d5cb
    MOV EDI,dword ptr [ESP + 0x44]      ; 0042d5cf
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042d5d3
    SUB EAX,ESI                         ; 0042d5d7
    INC EAX                             ; 0042d5d9
    MOV EDX,dword ptr [0x01c2a38c]      ; 0042d5da | g_ARRAY_PTR_01c2a38c
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d5e0
    MOV EAX,[0x01c2a390]                ; 0042d5e4 | g_ARRAY_PTR_01c2a38c[1]
    SUB EAX,EDX                         ; 0042d5e9
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d5eb
    TEST EBX,EBX                        ; 0042d5ef
    JNZ 0x0042d608                      ; 0042d5f1
        ;   XREF to: 0042d608 (CONDITIONAL_JUMP)  ; LAB_0042d608
    LEA EAX,[EAX]                       ; 0042d5f3
    LEA EDX,[EDX]                       ; 0042d5f9
    NOP                                 ; 0042d5ff
    ADD ESP,0x18                        ; 0042d600
        ;   Label: LAB_0042d600
    POP EBP                             ; 0042d603
    POP EDI                             ; 0042d604
    POP ESI                             ; 0042d605
    POP EBX                             ; 0042d606
    RET                                 ; 0042d607
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410 ; 0042d608
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410()
        ;   Label: LAB_0042d608
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042d60d
    MOV EBP,EAX                         ; 0042d611
    IMUL ECX,dword ptr [ESP + 0x48]     ; 0042d613
    MOV EAX,[0x006141b8]                ; 0042d618 | g_INT_006141b8
    MOV EDX,EAX                         ; 0042d61d
    SAR EDX,0x1f                        ; 0042d61f
    SUB EAX,EDX                         ; 0042d622
    SAR EAX,0x1                         ; 0042d624
    ADD ECX,EBX                         ; 0042d626
    ADD EAX,ECX                         ; 0042d628
    LEA EBX,[EAX + ESI*0x1]             ; 0042d62a
    MOV EDX,dword ptr [0x006141c0]      ; 0042d62d | g_INT_006141c0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042d633
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042d637
    ADD EAX,EDI                         ; 0042d63b
    SUB ECX,EDI                         ; 0042d63d
    SHL EAX,0x2                         ; 0042d63f
    CMP EDX,0x8                         ; 0042d642
    JNZ 0x0042d68c                      ; 0042d645
        ;   XREF to: 0042d68c (CONDITIONAL_JUMP)  ; LAB_0042d68c
    MOV EDI,dword ptr [EAX + 0x1c2a38c] ; 0042d647
    ADD EDI,ESI                         ; 0042d64d
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042d64f
    MOV dword ptr [ESP + 0x8],ECX       ; 0042d653
    CMP ECX,ESI                         ; 0042d657
    JLE 0x0042d600                      ; 0042d659
        ;   XREF to: 0042d600 (CONDITIONAL_JUMP)  ; LAB_0042d600
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042d65b
        ;   Label: LAB_0042d65b
    PUSH ECX                            ; 0042d65f
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d660
    MOV EAX,EDI                         ; 0042d664
    PUSH EBX                            ; 0042d666
    SUB EAX,EDX                         ; 0042d667
    PUSH EAX                            ; 0042d669
    CALL EBP                            ; 0042d66a
    ADD ESP,0xc                         ; 0042d66c
    INC ESI                             ; 0042d66f
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042d670
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042d674
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042d678
    ADD EDI,ECX                         ; 0042d67c
    ADD EBX,EAX                         ; 0042d67e
    CMP ESI,EDX                         ; 0042d680
    JL 0x0042d65b                       ; 0042d682
        ;   XREF to: 0042d65b (CONDITIONAL_JUMP)  ; LAB_0042d65b
    ADD ESP,0x18                        ; 0042d684
    POP EBP                             ; 0042d687
    POP EDI                             ; 0042d688
    POP ESI                             ; 0042d689
    POP EBX                             ; 0042d68a
    RET                                 ; 0042d68b
    MOV EDI,dword ptr [EAX + 0x1c2a38c] ; 0042d68c
        ;   Label: LAB_0042d68c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d692
    MOV EDX,EAX                         ; 0042d696
    SAR EDX,0x1f                        ; 0042d698
    SUB EAX,EDX                         ; 0042d69b
    SAR EAX,0x1                         ; 0042d69d
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d69f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042d6a3
    MOV dword ptr [ESP + 0xc],ECX       ; 0042d6a7
    ADD EAX,EAX                         ; 0042d6ab
    ADD ESI,ESI                         ; 0042d6ad
    MOV dword ptr [ESP],EAX             ; 0042d6af
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d6b2
    ADD EDI,ESI                         ; 0042d6b6
    ADD EAX,EAX                         ; 0042d6b8
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042d6ba
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d6be
    CMP ECX,ESI                         ; 0042d6c2
    JLE 0x0042d600                      ; 0042d6c4
        ;   XREF to: 0042d600 (CONDITIONAL_JUMP)  ; LAB_0042d600
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042d6ca
        ;   Label: LAB_0042d6ca
    PUSH ECX                            ; 0042d6ce
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042d6cf
    MOV EAX,EDI                         ; 0042d6d3
    PUSH EBX                            ; 0042d6d5
    SUB EAX,EDX                         ; 0042d6d6
    PUSH EAX                            ; 0042d6d8
    CALL EBP                            ; 0042d6d9
    ADD ESP,0xc                         ; 0042d6db
    INC ESI                             ; 0042d6de
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042d6df
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042d6e3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d6e7
    ADD EDI,ECX                         ; 0042d6eb
    ADD EBX,EAX                         ; 0042d6ed
    CMP ESI,EDX                         ; 0042d6ef
    JL 0x0042d6ca                       ; 0042d6f1
        ;   XREF to: 0042d6ca (CONDITIONAL_JUMP)  ; LAB_0042d6ca
    ADD ESP,0x18                        ; 0042d6f3
    POP EBP                             ; 0042d6f6
    POP EDI                             ; 0042d6f7
    POP ESI                             ; 0042d6f8
    POP EBX                             ; 0042d6f9
    RET                                 ; 0042d6fa

