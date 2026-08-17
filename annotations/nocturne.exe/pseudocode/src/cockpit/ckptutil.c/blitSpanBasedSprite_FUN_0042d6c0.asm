; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_0042d6c0(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)
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
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d6c0
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042d6c0
    PUSH ESI                            ; 0042d6c1
    PUSH EDI                            ; 0042d6c2
    PUSH EBP                            ; 0042d6c3
    SUB ESP,0x34                        ; 0042d6c4
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042d6c7
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0042d6cb | g_ScreenBufferArray
    MOV EAX,[0x01bd2fa4]                ; 0042d6d1 | g_ScreenBufferArray[1]
    SUB EAX,EDX                         ; 0042d6d6
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d6d8
    MOV EAX,[0x005b761c]                ; 0042d6dc | g_WindowWidth
    MOV EDX,EAX                         ; 0042d6e1
    SAR EDX,0x1f                        ; 0042d6e3
    SUB EAX,EDX                         ; 0042d6e6
    SAR EAX,0x1                         ; 0042d6e8
    MOV EBX,dword ptr [ESP + 0x58]      ; 0042d6ea
    ADD EBX,EAX                         ; 0042d6ee
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042d6f0
    LEA ESI,[EBX + 0x1]                 ; 0042d6f4
    TEST ECX,ECX                        ; 0042d6f7
    JNZ 0x0042d703                      ; 0042d6f9
        ;   XREF to: 0042d703 (CONDITIONAL_JUMP)  ; LAB_0042d703
    ADD ESP,0x34                        ; 0042d6fb
        ;   Label: LAB_0042d6fb
    POP EBP                             ; 0042d6fe
    POP EDI                             ; 0042d6ff
    POP ESI                             ; 0042d700
    POP EBX                             ; 0042d701
    RET                                 ; 0042d702
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042d703
        ;   Label: LAB_0042d703
    IMUL EAX,EDI                        ; 0042d707
    ADD EAX,dword ptr [ESP + 0x50]      ; 0042d70a
    LEA EDX,[ECX + EAX*0x1]             ; 0042d70e
    MOV EBP,EDI                         ; 0042d711
    MOV dword ptr [ESP + 0x48],EDX      ; 0042d713
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130 ; 0042d717
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130()
    SHL EBP,0x5                         ; 0042d71c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042d71f
    MOV dword ptr [ESP + 0x30],EAX      ; 0042d723
    MOV EAX,EDX                         ; 0042d727
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0042d729
    SHL EAX,0x5                         ; 0042d72d
    ADD EBP,EDI                         ; 0042d730
    ADD EAX,EDX                         ; 0042d732
    SHL EBP,0x2                         ; 0042d734
    SHL EAX,0x2                         ; 0042d737
    ADD ECX,EDI                         ; 0042d73a
    MOV dword ptr [ESP],EAX             ; 0042d73c
    MOV EAX,[0x005b7624]                ; 0042d73f | g_BitsPerPixel
    SHL ECX,0x2                         ; 0042d744
    CMP EAX,0x8                         ; 0042d747
    JNZ 0x0042d80b                      ; 0042d74a
        ;   XREF to: 0042d80b (CONDITIONAL_JUMP)  ; LAB_0042d80b
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042d750
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0042d754 | g_ScreenBufferArray
    ADD EDX,EAX                         ; 0042d75a
    MOV ECX,dword ptr [ESP + 0x64]      ; 0042d75c
    MOV dword ptr [ESP + 0x28],EDX      ; 0042d760
    CMP EDI,ECX                         ; 0042d764
    JGE 0x0042d6fb                      ; 0042d766
        ;   XREF to: 0042d6fb (CONDITIONAL_JUMP)  ; LAB_0042d6fb
    MOV EAX,dword ptr [ESP]             ; 0042d768
    MOV dword ptr [ESP + 0x14],EBP      ; 0042d76b
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d76f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d773
        ;   Label: LAB_0042d773
    XOR EBP,EBP                         ; 0042d777
    XOR EDI,EDI                         ; 0042d779
    MOV dword ptr [ESP + 0x20],EAX      ; 0042d77b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d77f
        ;   Label: LAB_0042d77f
    ADD EAX,dword ptr [ESP + 0x20]      ; 0042d783
    CMP EDI,dword ptr [EAX]             ; 0042d787
    JGE 0x0042d7a5                      ; 0042d789
        ;   XREF to: 0042d7a5 (CONDITIONAL_JUMP)  ; LAB_0042d7a5
    LEA EDX,[EAX + EBP*0x1]             ; 0042d78b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d78e
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042d791
    ADD EDX,EAX                         ; 0042d794
    DEC EDX                             ; 0042d796
    CMP EAX,EBX                         ; 0042d797
    JGE 0x0042d7e1                      ; 0042d799
        ;   XREF to: 0042d7e1 (CONDITIONAL_JUMP)  ; LAB_0042d7e1
    CMP EDX,EBX                         ; 0042d79b
    JGE 0x0042d7df                      ; 0042d79d
        ;   XREF to: 0042d7df (CONDITIONAL_JUMP)  ; LAB_0042d7df
    INC EDI                             ; 0042d79f
        ;   Label: LAB_0042d79f
    ADD EBP,0x4                         ; 0042d7a0
    JMP 0x0042d77f                      ; 0042d7a3
        ;   XREF to: 0042d77f (UNCONDITIONAL_JUMP)  ; LAB_0042d77f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042d7a5
        ;   Label: LAB_0042d7a5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d7a9
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042d7ad
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042d7b1
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042d7b5
    DEC EBX                             ; 0042d7b9
    INC ESI                             ; 0042d7ba
    ADD EDI,0x84                        ; 0042d7bb
    ADD EBP,EAX                         ; 0042d7c1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042d7c3
    MOV dword ptr [ESP + 0x14],EDI      ; 0042d7c7
    ADD EDX,EAX                         ; 0042d7cb
    MOV dword ptr [ESP + 0x28],EBP      ; 0042d7cd
    MOV dword ptr [ESP + 0x48],EDX      ; 0042d7d1
    CMP EDI,ECX                         ; 0042d7d5
    JGE 0x0042d6fb                      ; 0042d7d7
        ;   XREF to: 0042d6fb (CONDITIONAL_JUMP)  ; LAB_0042d6fb
    JMP 0x0042d773                      ; 0042d7dd
        ;   XREF to: 0042d773 (UNCONDITIONAL_JUMP)  ; LAB_0042d773
    MOV EAX,EBX                         ; 0042d7df
        ;   Label: LAB_0042d7df
    CMP EDX,ESI                         ; 0042d7e1
        ;   Label: LAB_0042d7e1
    JLE 0x0042d7eb                      ; 0042d7e3
        ;   XREF to: 0042d7eb (CONDITIONAL_JUMP)  ; LAB_0042d7eb
    CMP EAX,ESI                         ; 0042d7e5
    JG 0x0042d79f                       ; 0042d7e7
        ;   XREF to: 0042d79f (CONDITIONAL_JUMP)  ; LAB_0042d79f
    MOV EDX,ESI                         ; 0042d7e9
    SUB EDX,EAX                         ; 0042d7eb
        ;   Label: LAB_0042d7eb
    INC EDX                             ; 0042d7ed
    PUSH EDX                            ; 0042d7ee
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042d7ef
    ADD EDX,EAX                         ; 0042d7f3
    PUSH EDX                            ; 0042d7f5
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042d7f6
    PUSH EAX                            ; 0042d7fa
    CALL dword ptr [ESP + 0x3c]         ; 0042d7fb
    ADD ESP,0xc                         ; 0042d7ff
    INC EDI                             ; 0042d802
    ADD EBP,0x4                         ; 0042d803
    JMP 0x0042d77f                      ; 0042d806
        ;   XREF to: 0042d77f (UNCONDITIONAL_JUMP)  ; LAB_0042d77f
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042d80b
        ;   Label: LAB_0042d80b
    MOV EDX,dword ptr [ECX + 0x1bd2fa0] ; 0042d80f | g_ScreenBufferArray
    ADD EAX,EAX                         ; 0042d815
    ADD EDX,EAX                         ; 0042d817
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d819
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042d81d
    MOV EDX,EAX                         ; 0042d821
    SAR EDX,0x1f                        ; 0042d823
    SUB EAX,EDX                         ; 0042d826
    SAR EAX,0x1                         ; 0042d828
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042d82a
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d82e
    CMP EDI,EDX                         ; 0042d832
    JGE 0x0042d6fb                      ; 0042d834
        ;   XREF to: 0042d6fb (CONDITIONAL_JUMP)  ; LAB_0042d6fb
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042d83a
    ADD EAX,EAX                         ; 0042d83e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d840
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d844
    ADD EAX,EAX                         ; 0042d848
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d84a
    MOV EAX,dword ptr [ESP]             ; 0042d84e
    MOV dword ptr [ESP + 0x18],EBP      ; 0042d851
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d855
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042d859
        ;   Label: LAB_0042d859
    XOR EBP,EBP                         ; 0042d85d
    XOR EDI,EDI                         ; 0042d85f
    MOV dword ptr [ESP + 0x24],EAX      ; 0042d861
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d865
        ;   Label: LAB_0042d865
    ADD EAX,dword ptr [ESP + 0x24]      ; 0042d869
    CMP EDI,dword ptr [EAX]             ; 0042d86d
    JGE 0x0042d88b                      ; 0042d86f
        ;   XREF to: 0042d88b (CONDITIONAL_JUMP)  ; LAB_0042d88b
    LEA EDX,[EAX + EBP*0x1]             ; 0042d871
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042d874
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042d877
    ADD EDX,EAX                         ; 0042d87a
    DEC EDX                             ; 0042d87c
    CMP EAX,EBX                         ; 0042d87d
    JGE 0x0042d8c7                      ; 0042d87f
        ;   XREF to: 0042d8c7 (CONDITIONAL_JUMP)  ; LAB_0042d8c7
    CMP EDX,EBX                         ; 0042d881
    JGE 0x0042d8c5                      ; 0042d883
        ;   XREF to: 0042d8c5 (CONDITIONAL_JUMP)  ; LAB_0042d8c5
    INC EDI                             ; 0042d885
        ;   Label: LAB_0042d885
    ADD EBP,0x4                         ; 0042d886
    JMP 0x0042d865                      ; 0042d889
        ;   XREF to: 0042d865 (UNCONDITIONAL_JUMP)  ; LAB_0042d865
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042d88b
        ;   Label: LAB_0042d88b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d88f
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042d893
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042d897
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d89b
    DEC EBX                             ; 0042d89f
    INC ESI                             ; 0042d8a0
    ADD EDI,0x84                        ; 0042d8a1
    ADD EBP,EAX                         ; 0042d8a7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042d8a9
    MOV dword ptr [ESP + 0x18],EDI      ; 0042d8ad
    ADD EDX,EAX                         ; 0042d8b1
    MOV dword ptr [ESP + 0x2c],EBP      ; 0042d8b3
    MOV dword ptr [ESP + 0x48],EDX      ; 0042d8b7
    CMP EDI,ECX                         ; 0042d8bb
    JGE 0x0042d6fb                      ; 0042d8bd
        ;   XREF to: 0042d6fb (CONDITIONAL_JUMP)  ; LAB_0042d6fb
    JMP 0x0042d859                      ; 0042d8c3
        ;   XREF to: 0042d859 (UNCONDITIONAL_JUMP)  ; LAB_0042d859
    MOV EAX,EBX                         ; 0042d8c5
        ;   Label: LAB_0042d8c5
    CMP EDX,ESI                         ; 0042d8c7
        ;   Label: LAB_0042d8c7
    JLE 0x0042d8d1                      ; 0042d8c9
        ;   XREF to: 0042d8d1 (CONDITIONAL_JUMP)  ; LAB_0042d8d1
    CMP EAX,ESI                         ; 0042d8cb
    JG 0x0042d885                       ; 0042d8cd
        ;   XREF to: 0042d885 (CONDITIONAL_JUMP)  ; LAB_0042d885
    MOV EDX,ESI                         ; 0042d8cf
    SUB EDX,EAX                         ; 0042d8d1
        ;   Label: LAB_0042d8d1
    INC EDX                             ; 0042d8d3
    PUSH EDX                            ; 0042d8d4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042d8d5
    ADD EDX,EAX                         ; 0042d8d9
    PUSH EDX                            ; 0042d8db
    ADD EAX,EAX                         ; 0042d8dc
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042d8de
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042d8e2
    ADD EAX,EDX                         ; 0042d8e6
    SUB EAX,ECX                         ; 0042d8e8
    PUSH EAX                            ; 0042d8ea
    CALL dword ptr [ESP + 0x3c]         ; 0042d8eb
    ADD ESP,0xc                         ; 0042d8ef
    INC EDI                             ; 0042d8f2
    ADD EBP,0x4                         ; 0042d8f3
    JMP 0x0042d865                      ; 0042d8f6
        ;   XREF to: 0042d865 (UNCONDITIONAL_JUMP)  ; LAB_0042d865

