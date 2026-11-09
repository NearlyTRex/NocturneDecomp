; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00438700(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)
;
; Parameters:
; void *           Stack[0x4]:4   src_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; void *           Stack[0x10]:4   background_base
; int              Stack[0x14]:4   dest_x
; int              Stack[0x18]:4   dest_y
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438700
        ;   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00438700
    PUSH ESI                            ; 00438701
    PUSH EDI                            ; 00438702
    PUSH EBP                            ; 00438703
    SUB ESP,0x10                        ; 00438704
    MOV ESI,dword ptr [ESP + 0x28]      ; 00438707
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043870b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043870f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00438713
    TEST ECX,ECX                        ; 00438717
    JLE 0x00438780                      ; 00438719
        ;   XREF to: 00438780 (CONDITIONAL_JUMP)  ; LAB_00438780
    MOV dword ptr [ESP + 0x4],ESI       ; 0043871b
    IMUL EAX,ESI,0x0                    ; 0043871f
    MOV dword ptr [ESP + 0xc],EDX       ; 00438722
    ADD EDX,ECX                         ; 00438726
    MOV dword ptr [ESP],EDX             ; 00438728
    MOV dword ptr [ESP + 0x8],EAX       ; 0043872b
    XOR EAX,EAX                         ; 0043872f
        ;   Label: LAB_0043872f
    TEST ESI,ESI                        ; 00438731
    JLE 0x00438762                      ; 00438733
        ;   XREF to: 00438762 (CONDITIONAL_JUMP)  ; LAB_00438762
    MOV EDX,dword ptr [ESP + 0x24]      ; 00438735
    MOV ECX,dword ptr [ESP + 0x8]       ; 00438739
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043873d
    ADD EDX,ECX                         ; 00438741
    MOV ECX,dword ptr [0x0061b498]      ; 00438743 | DAT_0061b498
        ;   Label: LAB_00438743
    IMUL ECX,EDI                        ; 00438749
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043874c
    ADD ECX,EAX                         ; 00438750
    ADD ECX,EBX                         ; 00438752
    MOV BL,byte ptr [EDX]               ; 00438754
    ADD ECX,EBP                         ; 00438756
    TEST BL,BL                          ; 00438758
    JZ 0x00438788                       ; 0043875a
        ;   XREF to: 00438788 (CONDITIONAL_JUMP)  ; LAB_00438788
    INC EAX                             ; 0043875c
        ;   Label: LAB_0043875c
    INC EDX                             ; 0043875d
    CMP EAX,ESI                         ; 0043875e
    JL 0x00438743                       ; 00438760
        ;   XREF to: 00438743 (CONDITIONAL_JUMP)  ; LAB_00438743
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438762
        ;   Label: LAB_00438762
    MOV EAX,dword ptr [ESP + 0x4]       ; 00438766
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043876a
    MOV EBX,dword ptr [ESP]             ; 0043876e
    INC EDX                             ; 00438771
    ADD ECX,EAX                         ; 00438772
    MOV dword ptr [ESP + 0xc],EDX       ; 00438774
    MOV dword ptr [ESP + 0x8],ECX       ; 00438778
    CMP EDX,EBX                         ; 0043877c
    JL 0x0043872f                       ; 0043877e
        ;   XREF to: 0043872f (CONDITIONAL_JUMP)  ; LAB_0043872f
    ADD ESP,0x10                        ; 00438780
        ;   Label: LAB_00438780
    POP EBP                             ; 00438783
    POP EDI                             ; 00438784
    POP ESI                             ; 00438785
    POP EBX                             ; 00438786
    RET                                 ; 00438787
    MOV CL,byte ptr [ECX]               ; 00438788
        ;   Label: LAB_00438788
    MOV byte ptr [EDX],CL               ; 0043878a
    JMP 0x0043875c                      ; 0043878c
        ;   XREF to: 0043875c (UNCONDITIONAL_JUMP)  ; LAB_0043875c

