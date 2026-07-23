; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ea78(char *param_1,char *param_2,uint param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdef_005c1f74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ea78
        ;   Label: FUN_0056ea78
    PUSH ESI                            ; 0056ea79
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056ea7a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056ea7e
    MOV CL,byte ptr [EAX]               ; 0056ea82
    XOR EBX,EBX                         ; 0056ea84
    TEST CL,CL                          ; 0056ea86
    JZ 0x0056ea92                       ; 0056ea88
        ;   XREF to: 0056ea92 (CONDITIONAL_JUMP)  ; LAB_0056ea92
    MOV CH,byte ptr [EAX + 0x1]         ; 0056ea8a
        ;   Label: LAB_0056ea8a
    INC EAX                             ; 0056ea8d
    TEST CH,CH                          ; 0056ea8e
    JNZ 0x0056ea8a                      ; 0056ea90
        ;   XREF to: 0056ea8a (CONDITIONAL_JUMP)  ; LAB_0056ea8a
    LEA ESI,[EAX + 0x9]                 ; 0056ea92
        ;   Label: LAB_0056ea92
    MOV CL,byte ptr [EDX]               ; 0056ea95
        ;   Label: LAB_0056ea95
    MOV byte ptr [EAX],CL               ; 0056ea97
    TEST CL,CL                          ; 0056ea99
    JZ 0x0056eaaf                       ; 0056ea9b
        ;   XREF to: 0056eaaf (CONDITIONAL_JUMP)  ; LAB_0056eaaf
    CMP CL,0x30                         ; 0056ea9d
    JNZ 0x0056eaaa                      ; 0056eaa0
        ;   XREF to: 0056eaaa (CONDITIONAL_JUMP)  ; LAB_0056eaaa
    CMP byte ptr [EDX + 0x1],0x78       ; 0056eaa2
    JNZ 0x0056eaaa                      ; 0056eaa6
        ;   XREF to: 0056eaaa (CONDITIONAL_JUMP)  ; LAB_0056eaaa
    MOV EBX,ESI                         ; 0056eaa8
    INC ESI                             ; 0056eaaa
        ;   Label: LAB_0056eaaa
    INC EAX                             ; 0056eaab
    INC EDX                             ; 0056eaac
    JMP 0x0056ea95                      ; 0056eaad
        ;   XREF to: 0056ea95 (UNCONDITIONAL_JUMP)  ; LAB_0056ea95
    TEST EBX,EBX                        ; 0056eaaf
        ;   Label: LAB_0056eaaf
    JZ 0x0056ead1                       ; 0056eab1
        ;   XREF to: 0056ead1 (CONDITIONAL_JUMP)  ; LAB_0056ead1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056eab3
    TEST EAX,EAX                        ; 0056eab7
    JZ 0x0056ead1                       ; 0056eab9
        ;   XREF to: 0056ead1 (CONDITIONAL_JUMP)  ; LAB_0056ead1
    MOV EDX,EAX                         ; 0056eabb
        ;   Label: LAB_0056eabb
    AND EDX,0xf                         ; 0056eabd
    DEC EBX                             ; 0056eac0
    MOV DL,byte ptr [EDX + 0x5c1f74]    ; 0056eac1 | = "0123456789abcdef"
    SHR EAX,0x4                         ; 0056eac7
    MOV byte ptr [EBX + 0x1],DL         ; 0056eaca
    TEST EAX,EAX                        ; 0056eacd
    JNZ 0x0056eabb                      ; 0056eacf
        ;   XREF to: 0056eabb (CONDITIONAL_JUMP)  ; LAB_0056eabb
    POP ESI                             ; 0056ead1
        ;   Label: LAB_0056ead1
    POP EBX                             ; 0056ead2
    RET                                 ; 0056ead3

