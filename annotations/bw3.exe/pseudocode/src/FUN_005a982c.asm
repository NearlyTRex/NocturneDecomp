; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005a982c(uint *param_1)
;
;
; XREF[1]:
;   FUN_005a9768 at 005a978e
;
; Referenced Globals:
;   undefined4 DAT_00607e14
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a982c
        ;   Label: FUN_005a982c
    MOV EAX,dword ptr [EDX]             ; 005a9830
    ADD EAX,0x7                         ; 005a9832
    AND AL,0xf8                         ; 005a9835
    TEST EAX,EAX                        ; 005a9837
    JNZ 0x005a983c                      ; 005a9839
        ;   XREF to: 005a983c (CONDITIONAL_JUMP)  ; LAB_005a983c
    RET                                 ; 005a983b
    MOV dword ptr [EDX],EAX             ; 005a983c
        ;   Label: LAB_005a983c
    ADD EAX,0x3c                        ; 005a983e
    CMP EAX,dword ptr [EDX]             ; 005a9841
    JNC 0x005a9848                      ; 005a9843
        ;   XREF to: 005a9848 (CONDITIONAL_JUMP)  ; LAB_005a9848
    XOR EAX,EAX                         ; 005a9845
    RET                                 ; 005a9847
    MOV ECX,dword ptr [0x00607e14]      ; 005a9848 | DAT_00607e14
        ;   Label: LAB_005a9848
    CMP EAX,ECX                         ; 005a984e
    JNC 0x005a9856                      ; 005a9850
        ;   XREF to: 005a9856 (CONDITIONAL_JUMP)  ; LAB_005a9856
    MOV EAX,ECX                         ; 005a9852
    AND AL,0xfe                         ; 005a9854
    MOV dword ptr [EDX],EAX             ; 005a9856
        ;   Label: LAB_005a9856
    ADD EAX,0xfff                       ; 005a9858
    CMP EAX,dword ptr [EDX]             ; 005a985d
    JNC 0x005a9864                      ; 005a985f
        ;   XREF to: 005a9864 (CONDITIONAL_JUMP)  ; LAB_005a9864
    XOR EAX,EAX                         ; 005a9861
    RET                                 ; 005a9863
    XOR AL,AL                           ; 005a9864
        ;   Label: LAB_005a9864
    AND AH,0xf0                         ; 005a9866
    MOV dword ptr [EDX],EAX             ; 005a9869
    TEST EAX,EAX                        ; 005a986b
    SETNZ AL                            ; 005a986d
    AND EAX,0xff                        ; 005a9870
    RET                                 ; 005a9875

