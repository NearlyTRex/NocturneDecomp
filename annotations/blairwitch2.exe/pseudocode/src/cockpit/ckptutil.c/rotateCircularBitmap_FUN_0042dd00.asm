; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_0042dd00(void *bitmap_data,int width,int height,int num_iterations)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   num_iterations
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dd00
        ;   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_0042dd00
    PUSH ESI                            ; 0042dd01
    PUSH EDI                            ; 0042dd02
    PUSH EBP                            ; 0042dd03
    SUB ESP,0x18                        ; 0042dd04
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042dd07
    MOV EBX,dword ptr [ESP + 0x38]      ; 0042dd0b
    MOV EAX,EDX                         ; 0042dd0f
    IMUL EAX,EBX                        ; 0042dd11
    MOV dword ptr [ESP + 0x8],EAX       ; 0042dd14
    MOV EAX,EDX                         ; 0042dd18
    SAR EDX,0x1f                        ; 0042dd1a
    SUB EAX,EDX                         ; 0042dd1d
    SAR EAX,0x1                         ; 0042dd1f
    MOV dword ptr [ESP + 0x10],EAX      ; 0042dd21
    CMP EBX,0x1                         ; 0042dd25
    JNZ 0x0042dd84                      ; 0042dd28
        ;   XREF to: 0042dd84 (CONDITIONAL_JUMP)  ; LAB_0042dd84
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042dd2a
    XOR EDI,EDI                         ; 0042dd2e
    TEST ESI,ESI                        ; 0042dd30
    JBE 0x0042dd7c                      ; 0042dd32
        ;   XREF to: 0042dd7c (CONDITIONAL_JUMP)  ; LAB_0042dd7c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042dd34
    MOV dword ptr [ESP + 0x4],EAX       ; 0042dd38
    IMUL ESI,EAX,0x0                    ; 0042dd3c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042dd3f
        ;   Label: LAB_0042dd3f
    MOV EBP,dword ptr [ESP + 0x8]       ; 0042dd43
    ADD EDX,ESI                         ; 0042dd47
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042dd49
    ADD EBP,EDX                         ; 0042dd4d
    XOR EAX,EAX                         ; 0042dd4f
    SUB EBP,EBX                         ; 0042dd51
    TEST ECX,ECX                        ; 0042dd53
    JBE 0x0042dd6d                      ; 0042dd55
        ;   XREF to: 0042dd6d (CONDITIONAL_JUMP)  ; LAB_0042dd6d
    MOV CL,byte ptr [EDX]               ; 0042dd57
        ;   Label: LAB_0042dd57
    INC EDX                             ; 0042dd59
    MOV CH,byte ptr [EBP]               ; 0042dd5a
    MOV byte ptr [EDX + -0x1],CH        ; 0042dd5d
    INC EAX                             ; 0042dd60
    MOV byte ptr [EBP],CL               ; 0042dd61
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042dd64
    DEC EBP                             ; 0042dd68
    CMP EAX,ECX                         ; 0042dd69
    JC 0x0042dd57                       ; 0042dd6b
        ;   XREF to: 0042dd57 (CONDITIONAL_JUMP)  ; LAB_0042dd57
    MOV EBP,dword ptr [ESP + 0x4]       ; 0042dd6d
        ;   Label: LAB_0042dd6d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042dd71
    INC EDI                             ; 0042dd75
    ADD ESI,EBP                         ; 0042dd76
    CMP EDI,EAX                         ; 0042dd78
    JC 0x0042dd3f                       ; 0042dd7a
        ;   XREF to: 0042dd3f (CONDITIONAL_JUMP)  ; LAB_0042dd3f
    ADD ESP,0x18                        ; 0042dd7c
        ;   Label: LAB_0042dd7c
    POP EBP                             ; 0042dd7f
    POP EDI                             ; 0042dd80
    POP ESI                             ; 0042dd81
    POP EBX                             ; 0042dd82
    RET                                 ; 0042dd83
    XOR EDX,EDX                         ; 0042dd84
        ;   Label: LAB_0042dd84
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042dd86
    MOV dword ptr [ESP + 0xc],EDX       ; 0042dd8a
    TEST ECX,ECX                        ; 0042dd8e
    JBE 0x0042dd7c                      ; 0042dd90
        ;   XREF to: 0042dd7c (CONDITIONAL_JUMP)  ; LAB_0042dd7c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042dd92
        ;   Label: LAB_0042dd92
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042dd96
    IMUL EDX,EAX                        ; 0042dd9a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042dd9d
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042dda1
    ADD EDX,ECX                         ; 0042dda5
    XOR ESI,ESI                         ; 0042dda7
    LEA EBP,[EAX + EDX*0x1]             ; 0042dda9
    MOV dword ptr [ESP + 0x14],ESI      ; 0042ddac
    SUB EBP,EBX                         ; 0042ddb0
    TEST EDI,EDI                        ; 0042ddb2
    JBE 0x0042de0d                      ; 0042ddb4
        ;   XREF to: 0042de0d (CONDITIONAL_JUMP)  ; LAB_0042de0d
    MOV EDI,ESP                         ; 0042ddb6
        ;   Label: LAB_0042ddb6
    MOV ECX,EBX                         ; 0042ddb8
    MOV ESI,EDX                         ; 0042ddba
    PUSH EDI                            ; 0042ddbc
    MOV EAX,ECX                         ; 0042ddbd
    SHR ECX,0x2                         ; 0042ddbf
    MOVSD.REP ES:EDI,ESI                ; 0042ddc2
    MOV CL,AL                           ; 0042ddc4
    AND CL,0x3                          ; 0042ddc6
    MOVSB.REP ES:EDI,ESI                ; 0042ddc9
    POP EDI                             ; 0042ddcb
    MOV ECX,EBX                         ; 0042ddcc
    MOV ESI,EBP                         ; 0042ddce
    MOV EDI,EDX                         ; 0042ddd0
    PUSH EDI                            ; 0042ddd2
    MOV EAX,ECX                         ; 0042ddd3
    SHR ECX,0x2                         ; 0042ddd5
    MOVSD.REP ES:EDI,ESI                ; 0042ddd8
    MOV CL,AL                           ; 0042ddda
    AND CL,0x3                          ; 0042dddc
    MOVSB.REP ES:EDI,ESI                ; 0042dddf
    POP EDI                             ; 0042dde1
    MOV ESI,ESP                         ; 0042dde2
    MOV ECX,EBX                         ; 0042dde4
    MOV EDI,EBP                         ; 0042dde6
    PUSH EDI                            ; 0042dde8
    MOV EAX,ECX                         ; 0042dde9
    SHR ECX,0x2                         ; 0042ddeb
    MOVSD.REP ES:EDI,ESI                ; 0042ddee
    MOV CL,AL                           ; 0042ddf0
    AND CL,0x3                          ; 0042ddf2
    MOVSB.REP ES:EDI,ESI                ; 0042ddf5
    POP EDI                             ; 0042ddf7
    ADD EDX,EBX                         ; 0042ddf8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ddfa
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042ddfe
    INC EAX                             ; 0042de02
    SUB EBP,EBX                         ; 0042de03
    MOV dword ptr [ESP + 0x14],EAX      ; 0042de05
    CMP EAX,ECX                         ; 0042de09
    JC 0x0042ddb6                       ; 0042de0b
        ;   XREF to: 0042ddb6 (CONDITIONAL_JUMP)  ; LAB_0042ddb6
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042de0d
        ;   Label: LAB_0042de0d
    INC EDI                             ; 0042de11
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042de12
    MOV dword ptr [ESP + 0xc],EDI       ; 0042de16
    CMP EDI,EBP                         ; 0042de1a
    JNC 0x0042dd7c                      ; 0042de1c
        ;   XREF to: 0042dd7c (CONDITIONAL_JUMP)  ; LAB_0042dd7c
    JMP 0x0042dd92                      ; 0042de22
        ;   XREF to: 0042dd92 (UNCONDITIONAL_JUMP)  ; LAB_0042dd92

