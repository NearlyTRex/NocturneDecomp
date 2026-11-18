; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_0042d700(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   unused_param
; int              Stack[0xc]:4   start_x
; int              Stack[0x10]:4   start_y
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_y
;
; Referenced Globals:
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141c0 = 0x8
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d700
        ;   Label: cockpit_ckptutil.c_blitVerticalColumn_FUN_0042d700
    PUSH ESI                            ; 0042d701
    PUSH EDI                            ; 0042d702
    PUSH EBP                            ; 0042d703
    SUB ESP,0xc                         ; 0042d704
    MOV EDI,dword ptr [ESP + 0x28]      ; 0042d707
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0042d70b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042d70f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042d713
    SUB EAX,EDI                         ; 0042d717
    INC EAX                             ; 0042d719
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042d71a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d71e
    TEST EDX,EDX                        ; 0042d722
    JNZ 0x0042d738                      ; 0042d724
        ;   XREF to: 0042d738 (CONDITIONAL_JUMP)  ; LAB_0042d738
    LEA EAX,[EAX]                       ; 0042d726
    LEA EDX,[EDX]                       ; 0042d72c
    ADD ESP,0xc                         ; 0042d730
        ;   Label: LAB_0042d730
    POP EBP                             ; 0042d733
    POP EDI                             ; 0042d734
    POP ESI                             ; 0042d735
    POP EBX                             ; 0042d736
    RET                                 ; 0042d737
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410 ; 0042d738
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410()
        ;   Label: LAB_0042d738
    MOV ECX,dword ptr [0x006141c0]      ; 0042d73d | g_INT_006141c0
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d743
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042d747
    CMP ECX,0x8                         ; 0042d74e
    JNZ 0x0042d791                      ; 0042d751
        ;   XREF to: 0042d791 (CONDITIONAL_JUMP)  ; LAB_0042d791
    MOV EBX,ESI                         ; 0042d753
    CMP ESI,EBP                         ; 0042d755
    JGE 0x0042d730                      ; 0042d757
        ;   XREF to: 0042d730 (CONDITIONAL_JUMP)  ; LAB_0042d730
    MOV ESI,EAX                         ; 0042d759
    MOV EAX,[0x006141b8]                ; 0042d75b | g_INT_006141b8
        ;   Label: LAB_0042d75b
    IMUL EAX,EBX                        ; 0042d760
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042d763
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042d767
    ADD EAX,EDI                         ; 0042d76b
    PUSH ECX                            ; 0042d76d
    ADD EDX,EAX                         ; 0042d76e
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 0042d770
    PUSH EDX                            ; 0042d776
    ADD EAX,EDI                         ; 0042d777
    PUSH EAX                            ; 0042d779
    ADD ESI,0x4                         ; 0042d77a
    INC EBX                             ; 0042d77d
    CALL dword ptr [ESP + 0x14]         ; 0042d77e
    ADD ESP,0xc                         ; 0042d782
    CMP EBX,EBP                         ; 0042d785
    JL 0x0042d75b                       ; 0042d787
        ;   XREF to: 0042d75b (CONDITIONAL_JUMP)  ; LAB_0042d75b
    ADD ESP,0xc                         ; 0042d789
    POP EBP                             ; 0042d78c
    POP EDI                             ; 0042d78d
    POP ESI                             ; 0042d78e
    POP EBX                             ; 0042d78f
    RET                                 ; 0042d790
    MOV EBX,ESI                         ; 0042d791
        ;   Label: LAB_0042d791
    CMP ESI,EBP                         ; 0042d793
    JGE 0x0042d730                      ; 0042d795
        ;   XREF to: 0042d730 (CONDITIONAL_JUMP)  ; LAB_0042d730
    LEA EDX,[EDI + EDI*0x1]             ; 0042d797
    MOV ESI,EAX                         ; 0042d79a
    MOV dword ptr [ESP],EDX             ; 0042d79c
    MOV EAX,[0x006141b8]                ; 0042d79f | g_INT_006141b8
        ;   Label: LAB_0042d79f
    IMUL EAX,EBX                        ; 0042d7a4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042d7a7
    ADD EAX,EDI                         ; 0042d7ab
    MOV ECX,dword ptr [ESP]             ; 0042d7ad
    ADD EAX,EDX                         ; 0042d7b0
    MOV EDX,dword ptr [ESI + 0x1c2a38c] ; 0042d7b2
    ADD EDX,ECX                         ; 0042d7b8
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042d7ba
    PUSH ECX                            ; 0042d7be
    PUSH EAX                            ; 0042d7bf
    PUSH EDX                            ; 0042d7c0
    ADD ESI,0x4                         ; 0042d7c1
    INC EBX                             ; 0042d7c4
    CALL dword ptr [ESP + 0x14]         ; 0042d7c5
    ADD ESP,0xc                         ; 0042d7c9
    CMP EBX,EBP                         ; 0042d7cc
    JL 0x0042d79f                       ; 0042d7ce
        ;   XREF to: 0042d79f (CONDITIONAL_JUMP)  ; LAB_0042d79f
    ADD ESP,0xc                         ; 0042d7d0
    POP EBP                             ; 0042d7d3
    POP EDI                             ; 0042d7d4
    POP ESI                             ; 0042d7d5
    POP EBX                             ; 0042d7d6
    RET                                 ; 0042d7d7

