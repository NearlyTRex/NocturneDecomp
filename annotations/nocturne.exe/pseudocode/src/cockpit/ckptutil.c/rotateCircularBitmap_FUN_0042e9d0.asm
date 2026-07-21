; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_rotateCircularBitmap_FUN_0042e9d0(int param_1,int param_2,uint param_3,uint param_4)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e9d0
        ;   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_0042e9d0
    PUSH ESI                            ; 0042e9d1
    PUSH EDI                            ; 0042e9d2
    PUSH EBP                            ; 0042e9d3
    SUB ESP,0x18                        ; 0042e9d4
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042e9d7
    MOV EBX,dword ptr [ESP + 0x38]      ; 0042e9db
    MOV EAX,EDX                         ; 0042e9df
    IMUL EAX,EBX                        ; 0042e9e1
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e9e4
    MOV EAX,EDX                         ; 0042e9e8
    SAR EDX,0x1f                        ; 0042e9ea
    SUB EAX,EDX                         ; 0042e9ed
    SAR EAX,0x1                         ; 0042e9ef
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e9f1
    CMP EBX,0x1                         ; 0042e9f5
    JNZ 0x0042ea54                      ; 0042e9f8
        ;   XREF to: 0042ea54 (CONDITIONAL_JUMP)  ; LAB_0042ea54
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042e9fa
    XOR EDI,EDI                         ; 0042e9fe
    TEST ESI,ESI                        ; 0042ea00
    JBE 0x0042ea4c                      ; 0042ea02
        ;   XREF to: 0042ea4c (CONDITIONAL_JUMP)  ; LAB_0042ea4c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ea04
    MOV dword ptr [ESP + 0x4],EAX       ; 0042ea08
    IMUL ESI,EAX,0x0                    ; 0042ea0c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042ea0f
        ;   Label: LAB_0042ea0f
    MOV EBP,dword ptr [ESP + 0x8]       ; 0042ea13
    ADD EDX,ESI                         ; 0042ea17
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042ea19
    ADD EBP,EDX                         ; 0042ea1d
    XOR EAX,EAX                         ; 0042ea1f
    SUB EBP,EBX                         ; 0042ea21
    TEST ECX,ECX                        ; 0042ea23
    JBE 0x0042ea3d                      ; 0042ea25
        ;   XREF to: 0042ea3d (CONDITIONAL_JUMP)  ; LAB_0042ea3d
    MOV CL,byte ptr [EDX]               ; 0042ea27
        ;   Label: LAB_0042ea27
    INC EDX                             ; 0042ea29
    MOV CH,byte ptr [EBP]               ; 0042ea2a
    MOV byte ptr [EDX + -0x1],CH        ; 0042ea2d
    INC EAX                             ; 0042ea30
    MOV byte ptr [EBP],CL               ; 0042ea31
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042ea34
    DEC EBP                             ; 0042ea38
    CMP EAX,ECX                         ; 0042ea39
    JC 0x0042ea27                       ; 0042ea3b
        ;   XREF to: 0042ea27 (CONDITIONAL_JUMP)  ; LAB_0042ea27
    MOV EBP,dword ptr [ESP + 0x4]       ; 0042ea3d
        ;   Label: LAB_0042ea3d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042ea41
    INC EDI                             ; 0042ea45
    ADD ESI,EBP                         ; 0042ea46
    CMP EDI,EAX                         ; 0042ea48
    JC 0x0042ea0f                       ; 0042ea4a
        ;   XREF to: 0042ea0f (CONDITIONAL_JUMP)  ; LAB_0042ea0f
    ADD ESP,0x18                        ; 0042ea4c
        ;   Label: LAB_0042ea4c
    POP EBP                             ; 0042ea4f
    POP EDI                             ; 0042ea50
    POP ESI                             ; 0042ea51
    POP EBX                             ; 0042ea52
    RET                                 ; 0042ea53
    XOR EDX,EDX                         ; 0042ea54
        ;   Label: LAB_0042ea54
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042ea56
    MOV dword ptr [ESP + 0xc],EDX       ; 0042ea5a
    TEST ECX,ECX                        ; 0042ea5e
    JBE 0x0042ea4c                      ; 0042ea60
        ;   XREF to: 0042ea4c (CONDITIONAL_JUMP)  ; LAB_0042ea4c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042ea62
        ;   Label: LAB_0042ea62
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ea66
    IMUL EDX,EAX                        ; 0042ea6a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042ea6d
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042ea71
    ADD EDX,ECX                         ; 0042ea75
    XOR ESI,ESI                         ; 0042ea77
    LEA EBP,[EAX + EDX*0x1]             ; 0042ea79
    MOV dword ptr [ESP + 0x14],ESI      ; 0042ea7c
    SUB EBP,EBX                         ; 0042ea80
    TEST EDI,EDI                        ; 0042ea82
    JBE 0x0042eadd                      ; 0042ea84
        ;   XREF to: 0042eadd (CONDITIONAL_JUMP)  ; LAB_0042eadd
    MOV EDI,ESP                         ; 0042ea86
        ;   Label: LAB_0042ea86
    MOV ECX,EBX                         ; 0042ea88
    MOV ESI,EDX                         ; 0042ea8a
    PUSH EDI                            ; 0042ea8c
    MOV EAX,ECX                         ; 0042ea8d
    SHR ECX,0x2                         ; 0042ea8f
    MOVSD.REP ES:EDI,ESI                ; 0042ea92
    MOV CL,AL                           ; 0042ea94
    AND CL,0x3                          ; 0042ea96
    MOVSB.REP ES:EDI,ESI                ; 0042ea99
    POP EDI                             ; 0042ea9b
    MOV ECX,EBX                         ; 0042ea9c
    MOV ESI,EBP                         ; 0042ea9e
    MOV EDI,EDX                         ; 0042eaa0
    PUSH EDI                            ; 0042eaa2
    MOV EAX,ECX                         ; 0042eaa3
    SHR ECX,0x2                         ; 0042eaa5
    MOVSD.REP ES:EDI,ESI                ; 0042eaa8
    MOV CL,AL                           ; 0042eaaa
    AND CL,0x3                          ; 0042eaac
    MOVSB.REP ES:EDI,ESI                ; 0042eaaf
    POP EDI                             ; 0042eab1
    MOV ESI,ESP                         ; 0042eab2
    MOV ECX,EBX                         ; 0042eab4
    MOV EDI,EBP                         ; 0042eab6
    PUSH EDI                            ; 0042eab8
    MOV EAX,ECX                         ; 0042eab9
    SHR ECX,0x2                         ; 0042eabb
    MOVSD.REP ES:EDI,ESI                ; 0042eabe
    MOV CL,AL                           ; 0042eac0
    AND CL,0x3                          ; 0042eac2
    MOVSB.REP ES:EDI,ESI                ; 0042eac5
    POP EDI                             ; 0042eac7
    ADD EDX,EBX                         ; 0042eac8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042eaca
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042eace
    INC EAX                             ; 0042ead2
    SUB EBP,EBX                         ; 0042ead3
    MOV dword ptr [ESP + 0x14],EAX      ; 0042ead5
    CMP EAX,ECX                         ; 0042ead9
    JC 0x0042ea86                       ; 0042eadb
        ;   XREF to: 0042ea86 (CONDITIONAL_JUMP)  ; LAB_0042ea86
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042eadd
        ;   Label: LAB_0042eadd
    INC EDI                             ; 0042eae1
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042eae2
    MOV dword ptr [ESP + 0xc],EDI       ; 0042eae6
    CMP EDI,EBP                         ; 0042eaea
    JNC 0x0042ea4c                      ; 0042eaec
        ;   XREF to: 0042ea4c (CONDITIONAL_JUMP)  ; LAB_0042ea4c
    JMP 0x0042ea62                      ; 0042eaf2
        ;   XREF to: 0042ea62 (UNCONDITIONAL_JUMP)  ; LAB_0042ea62

