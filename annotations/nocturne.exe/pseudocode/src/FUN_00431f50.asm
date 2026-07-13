; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431f50(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00431f40 = 00432050
;   undefined1* PTR_caseD_1_00431f44 = 004320ac
;   undefined1* PTR_caseD_3_00431f4c = 00432095
;   string caseD_0
;   string caseD_2
;   undefined4 DAT_005ad284
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_007672f4
;   undefined4 DAT_007672f8
;   undefined4 DAT_00767300
;
; Called Functions:
;   FUN_00431930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431f50
        ;   Label: FUN_00431f50
    PUSH ESI                            ; 00431f51
    PUSH EDI                            ; 00431f52
    PUSH EBP                            ; 00431f53
    SUB ESP,0x4                         ; 00431f54
    MOV EDX,dword ptr [0x005ad284]      ; 00431f57 | DAT_005ad284
    XOR EBX,EBX                         ; 00431f5d
    TEST EDX,EDX                        ; 00431f5f
    JZ 0x00431f96                       ; 00431f61
        ;   XREF to: 00431f96 (CONDITIONAL_JUMP)  ; LAB_00431f96
    MOV ECX,dword ptr [0x00766c70]      ; 00431f63 | DAT_00766c70
    TEST ECX,ECX                        ; 00431f69
    JLE 0x00431f8e                      ; 00431f6b
        ;   XREF to: 00431f8e (CONDITIONAL_JUMP)  ; LAB_00431f8e
    LEA EDI,[ECX*0x4 + 0x0]             ; 00431f6d
    SUB EDI,ECX                         ; 00431f74
    XOR EAX,EAX                         ; 00431f76
    SHL EDI,0x4                         ; 00431f78
    MOV EDX,dword ptr [EAX + 0x766c7c]  ; 00431f7b
        ;   Label: LAB_00431f7b
    CMP EBX,EDX                         ; 00431f81
    JGE 0x00431f87                      ; 00431f83
        ;   XREF to: 00431f87 (CONDITIONAL_JUMP)  ; LAB_00431f87
    MOV EBX,EDX                         ; 00431f85
    ADD EAX,0x30                        ; 00431f87
        ;   Label: LAB_00431f87
    CMP EAX,EDI                         ; 00431f8a
    JL 0x00431f7b                       ; 00431f8c
        ;   XREF to: 00431f7b (CONDITIONAL_JUMP)  ; LAB_00431f7b
    CMP EBX,dword ptr [0x005ad284]      ; 00431f8e | DAT_005ad284
        ;   Label: LAB_00431f8e
    JGE 0x00431f9e                      ; 00431f94
        ;   XREF to: 00431f9e (CONDITIONAL_JUMP)  ; LAB_00431f9e
    ADD ESP,0x4                         ; 00431f96
        ;   Label: LAB_00431f96
    POP EBP                             ; 00431f99
    POP EDI                             ; 00431f9a
    POP ESI                             ; 00431f9b
    POP EBX                             ; 00431f9c
    RET                                 ; 00431f9d
    MOV EAX,[0x00766c70]                ; 00431f9e | DAT_00766c70
        ;   Label: LAB_00431f9e
    MOV [0x007672f4],EAX                ; 00431fa3 | DAT_007672f4
    LEA ECX,[EAX*0x4 + 0x0]             ; 00431fa8
    MOV ESI,0x766c74                    ; 00431faf
    SUB ECX,EAX                         ; 00431fb4
    MOV EDI,0x7672f8                    ; 00431fb6
    SHL ECX,0x4                         ; 00431fbb
    XOR EBX,EBX                         ; 00431fbe
    TEST EDI,0x7                        ; 00431fc0
    JZ 0x00431fce                       ; 00431fc6
        ;   XREF to: 00431fce (CONDITIONAL_JUMP)  ; LAB_00431fce
    MOVSD ES:EDI,ESI                    ; 00431fc8
    SUB ECX,0x4                         ; 00431fc9
    JLE 0x00431feb                      ; 00431fcc
        ;   XREF to: 00431feb (CONDITIONAL_JUMP)  ; LAB_00431feb
    SUB ECX,0x8                         ; 00431fce
        ;   Label: LAB_00431fce
    JL 0x00431fdf                       ; 00431fd1
        ;   XREF to: 00431fdf (CONDITIONAL_JUMP)  ; LAB_00431fdf
    FILD qword ptr [ESI]                ; 00431fd3
    ADD ESI,0x8                         ; 00431fd5
    FISTP qword ptr [EDI]               ; 00431fd8
    ADD EDI,0x8                         ; 00431fda
    JMP 0x00431fce                      ; 00431fdd
        ;   XREF to: 00431fce (UNCONDITIONAL_JUMP)  ; LAB_00431fce
    ADD ECX,0x8                         ; 00431fdf
        ;   Label: LAB_00431fdf
    JLE 0x00431feb                      ; 00431fe2
        ;   XREF to: 00431feb (CONDITIONAL_JUMP)  ; LAB_00431feb
    MOVSD ES:EDI,ESI                    ; 00431fe4
    SUB ECX,0x4                         ; 00431fe5
    JLE 0x00431feb                      ; 00431fe8
        ;   XREF to: 00431feb (CONDITIONAL_JUMP)  ; LAB_00431feb
    MOVSD ES:EDI,ESI                    ; 00431fea
    XOR EDI,EDI                         ; 00431feb
        ;   Label: LAB_00431feb
    MOV EBP,dword ptr [0x007672f4]      ; 00431fed | DAT_007672f4
    MOV dword ptr [0x00766c70],EDI      ; 00431ff3 | DAT_00766c70
    TEST EBP,EBP                        ; 00431ff9
    JLE 0x00431f96                      ; 00431ffb
        ;   XREF to: 00431f96 (CONDITIONAL_JUMP)  ; LAB_00431f96
    MOV EBP,0x7672f8                    ; 00431ffd
    MOV ESI,dword ptr [0x007672f4]      ; 00432002 | DAT_007672f4
        ;   Label: LAB_00432002
    LEA EAX,[EBX + 0x1]                 ; 00432008
    CMP EAX,ESI                         ; 0043200b
    JNZ 0x00432011                      ; 0043200d
        ;   XREF to: 00432011 (CONDITIONAL_JUMP)  ; LAB_00432011
    XOR EAX,ESI                         ; 0043200f
    IMUL EAX,EAX,0x30                   ; 00432011
        ;   Label: LAB_00432011
    MOV EDI,0x7672f8                    ; 00432014 | DAT_007672f8
    MOV ECX,dword ptr [0x005ad284]      ; 00432019 | DAT_005ad284
    ADD EDI,EAX                         ; 0043201f
    MOV EDX,EBP                         ; 00432021
    MOV dword ptr [ESP],EDI             ; 00432023
    MOV EDI,dword ptr [EBP + 0x8]       ; 00432026
    XOR EAX,EAX                         ; 00432029
    CMP EDI,ECX                         ; 0043202b
    JL 0x00432034                       ; 0043202d
        ;   XREF to: 00432034 (CONDITIONAL_JUMP)  ; LAB_00432034
    MOV EAX,0x1                         ; 0043202f
    MOV EDI,dword ptr [ESP]             ; 00432034
        ;   Label: LAB_00432034
    MOV ESI,dword ptr [0x005ad284]      ; 00432037 | DAT_005ad284
    CMP ESI,dword ptr [EDI + 0x8]       ; 0043203d | DAT_00767300
    JG 0x00432044                       ; 00432040
        ;   XREF to: 00432044 (CONDITIONAL_JUMP)  ; LAB_00432044
    OR AL,0x2                           ; 00432042
    CMP EAX,0x3                         ; 00432044
        ;   Label: LAB_00432044
    JA 0x00432095                       ; 00432047
        ;   XREF to: 00432095 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431f40]  ; 00432049 | = "k=plv" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [0x007672f4]      ; 00432095 | DAT_007672f4
        ;   Label: caseD_3
    INC EBX                             ; 0043209b
    ADD EBP,0x30                        ; 0043209c
    CMP EBX,ECX                         ; 0043209f
    JGE 0x00431f96                      ; 004320a1
        ;   XREF to: 00431f96 (CONDITIONAL_JUMP)  ; LAB_00431f96
    JMP 0x00432002                      ; 004320a7
        ;   XREF to: 00432002 (UNCONDITIONAL_JUMP)  ; LAB_00432002
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 004320ac | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004320b3 | DAT_00766c74
    PUSH EAX                            ; 004320b8
    PUSH EDX                            ; 004320b9
    MOV ESI,dword ptr [ESP + 0x8]       ; 004320ba
    PUSH ESI                            ; 004320be
    CALL FUN_00431930                   ; 004320bf
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; undefined FUN_00431930()
    MOV EDI,dword ptr [0x00766c70]      ; 004320c4 | DAT_00766c70
    INC EDI                             ; 004320ca
    ADD ESP,0xc                         ; 004320cb
    MOV dword ptr [0x00766c70],EDI      ; 004320ce | DAT_00766c70
    JMP 0x00432095                      ; 004320d4
        ;   XREF to: 00432095 (UNCONDITIONAL_JUMP)  ; caseD_3

