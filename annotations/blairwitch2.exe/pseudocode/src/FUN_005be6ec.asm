; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005be6ec(uint *param_1)
;
;
; XREF[1]:
;   FUN_005be628 at 005be64e
;
; Referenced Globals:
;   undefined4 DAT_0061f6f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005be6ec
        ;   Label: FUN_005be6ec
    MOV EAX,dword ptr [EDX]             ; 005be6f0
    ADD EAX,0x7                         ; 005be6f2
    AND AL,0xf8                         ; 005be6f5
    TEST EAX,EAX                        ; 005be6f7
    JNZ 0x005be6fc                      ; 005be6f9
        ;   XREF to: 005be6fc (CONDITIONAL_JUMP)  ; LAB_005be6fc
    RET                                 ; 005be6fb
    MOV dword ptr [EDX],EAX             ; 005be6fc
        ;   Label: LAB_005be6fc
    ADD EAX,0x3c                        ; 005be6fe
    CMP EAX,dword ptr [EDX]             ; 005be701
    JNC 0x005be708                      ; 005be703
        ;   XREF to: 005be708 (CONDITIONAL_JUMP)  ; LAB_005be708
    XOR EAX,EAX                         ; 005be705
    RET                                 ; 005be707
    MOV ECX,dword ptr [0x0061f6f0]      ; 005be708 | DAT_0061f6f0
        ;   Label: LAB_005be708
    CMP EAX,ECX                         ; 005be70e
    JNC 0x005be716                      ; 005be710
        ;   XREF to: 005be716 (CONDITIONAL_JUMP)  ; LAB_005be716
    MOV EAX,ECX                         ; 005be712
    AND AL,0xfe                         ; 005be714
    MOV dword ptr [EDX],EAX             ; 005be716
        ;   Label: LAB_005be716
    ADD EAX,0xfff                       ; 005be718
    CMP EAX,dword ptr [EDX]             ; 005be71d
    JNC 0x005be724                      ; 005be71f
        ;   XREF to: 005be724 (CONDITIONAL_JUMP)  ; LAB_005be724
    XOR EAX,EAX                         ; 005be721
    RET                                 ; 005be723
    XOR AL,AL                           ; 005be724
        ;   Label: LAB_005be724
    AND AH,0xf0                         ; 005be726
    MOV dword ptr [EDX],EAX             ; 005be729
    TEST EAX,EAX                        ; 005be72b
    SETNZ AL                            ; 005be72d
    AND EAX,0xff                        ; 005be730
    RET                                 ; 005be735

