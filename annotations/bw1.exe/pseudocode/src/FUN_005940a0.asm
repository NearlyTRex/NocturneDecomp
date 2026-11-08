; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005940a0(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_00593150 at 00593228
;
; Referenced Globals:
;   undefined4 DAT_02c8374c
;   undefined4 DAT_02c83750
;
; Called Functions:
;   FUN_00434a80
;   FUN_00524270
;   FUN_00594140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005940a0
        ;   Label: FUN_005940a0
    PUSH ESI                            ; 005940a1
    PUSH EDI                            ; 005940a2
    PUSH EBP                            ; 005940a3
    MOV EBP,ESP                         ; 005940a4
    AND ESP,0xfffffff8                  ; 005940a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005940a9
    LEA ESI,[EBX + 0x158]               ; 005940ac
    LEA EAX,[EBP + 0x18]                ; 005940b2
        ;   Label: LAB_005940b2
    PUSH EAX                            ; 005940b5
    PUSH ESI                            ; 005940b6
    CALL FUN_00524270                   ; 005940b7
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 005940bc
    MOV EDX,EAX                         ; 005940bf
    CMP EAX,0x64                        ; 005940c1
    JC 0x0059411b                       ; 005940c4
        ;   XREF to: 0059411b (CONDITIONAL_JUMP)  ; LAB_0059411b
    JA 0x00594127                       ; 005940c6
        ;   XREF to: 00594127 (CONDITIONAL_JUMP)  ; LAB_00594127
    MOV EDI,dword ptr [0x02c8374c]      ; 005940c8 | DAT_02c8374c
    PUSH EDI                            ; 005940ce
    PUSH EBX                            ; 005940cf
    CALL FUN_00594140                   ; 005940d0
        ;   XREF to: 00594140 (UNCONDITIONAL_CALL)  ; undefined FUN_00594140()
    MOV EDX,dword ptr [EBX + 0x1ffb0]   ; 005940d5
    ADD ESP,0x8                         ; 005940db
    TEST EDX,EDX                        ; 005940de
    SETZ AL                             ; 005940e0
        ;   Label: LAB_005940e0
    AND EAX,0xff                        ; 005940e3
    MOV dword ptr [EBX + 0x1ffb0],EAX   ; 005940e8
    FLD float ptr [EBP + 0x18]          ; 005940ee
        ;   Label: LAB_005940ee
    FLDZ                                ; 005940f1
    FCOMPP                              ; 005940f3
    FNSTSW AX                           ; 005940f5
    SAHF                                ; 005940f7
    JC 0x005940b2                       ; 005940f8
        ;   XREF to: 005940b2 (CONDITIONAL_JUMP)  ; LAB_005940b2
    MOV ESP,EBP                         ; 005940fa
    POP EBP                             ; 005940fc
    POP EDI                             ; 005940fd
    POP ESI                             ; 005940fe
    POP EBX                             ; 005940ff
    RET                                 ; 00594100
    MOV EDX,dword ptr [0x02c83750]      ; 00594101 | DAT_02c83750
        ;   Label: LAB_00594101
    PUSH EDX                            ; 00594107
    PUSH EBX                            ; 00594108
    CALL FUN_00594140                   ; 00594109
        ;   XREF to: 00594140 (UNCONDITIONAL_CALL)  ; undefined FUN_00594140()
    MOV ECX,dword ptr [EBX + 0x1ffb0]   ; 0059410e
    ADD ESP,0x8                         ; 00594114
    TEST ECX,ECX                        ; 00594117
    JMP 0x005940e0                      ; 00594119
        ;   XREF to: 005940e0 (UNCONDITIONAL_JUMP)  ; LAB_005940e0
    PUSH EDX                            ; 0059411b
        ;   Label: LAB_0059411b
    PUSH EBX                            ; 0059411c
    CALL FUN_00434a80                   ; 0059411d
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 00594122
    JMP 0x005940ee                      ; 00594125
        ;   XREF to: 005940ee (UNCONDITIONAL_JUMP)  ; LAB_005940ee
    CMP EAX,0x65                        ; 00594127
        ;   Label: LAB_00594127
    JZ 0x00594101                       ; 0059412a
        ;   XREF to: 00594101 (CONDITIONAL_JUMP)  ; LAB_00594101
    PUSH EDX                            ; 0059412c
    PUSH EBX                            ; 0059412d
    CALL FUN_00434a80                   ; 0059412e
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 00594133
    JMP 0x005940ee                      ; 00594136
        ;   XREF to: 005940ee (UNCONDITIONAL_JUMP)  ; LAB_005940ee

