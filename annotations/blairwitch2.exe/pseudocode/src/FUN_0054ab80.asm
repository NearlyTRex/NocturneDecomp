; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054ab80(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02628610
;   undefined4 DAT_02628624
;   undefined4 DAT_02628628
;   undefined4 DAT_02628634
;   undefined4 DAT_0262863c
;
; Called Functions:
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0054ab80
        ;   Label: FUN_0054ab80
    SUB ESP,0x78                        ; 0054ab81
    MOV EBP,dword ptr [ESP + 0x84]      ; 0054ab84
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054ab8b
    CMP dword ptr [EAX + 0x10b38],0x3   ; 0054ab92
    JNZ 0x0054aba2                      ; 0054ab99
        ;   XREF to: 0054aba2 (CONDITIONAL_JUMP)  ; LAB_0054aba2
    XOR EAX,EAX                         ; 0054ab9b
    ADD ESP,0x78                        ; 0054ab9d
    POP EBP                             ; 0054aba0
    RET                                 ; 0054aba1
    PUSH EDI                            ; 0054aba2
        ;   Label: LAB_0054aba2
    PUSH ESI                            ; 0054aba3
    PUSH EBX                            ; 0054aba4
    MOV ECX,dword ptr [0x02628610]      ; 0054aba5 | DAT_02628610
    PUSH ECX                            ; 0054abab
    ADD EAX,0x2b4                       ; 0054abac
    MOV EBX,0x1                         ; 0054abb1
    PUSH EAX                            ; 0054abb6
    LEA ESI,[ESP + 0x2c]                ; 0054abb7
    LEA EDI,[ESP + 0x44]                ; 0054abbb
    CALL FUN_00546a90                   ; 0054abbf
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x2c]                ; 0054abc4
    ADD ESP,0x8                         ; 0054abc8
    LEA EAX,[ESP + 0x3c]                ; 0054abcb
    MOVSD ES:EDI,ESI                    ; 0054abcf
    MOVSD ES:EDI,ESI                    ; 0054abd0
    MOVSD ES:EDI,ESI                    ; 0054abd1
    CMP EBP,EAX                         ; 0054abd2
    JZ 0x0054abeb                       ; 0054abd4
        ;   XREF to: 0054abeb (CONDITIONAL_JUMP)  ; LAB_0054abeb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054abd6
    MOV dword ptr [EBP],EAX             ; 0054abda
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054abdd
    MOV dword ptr [EBP + 0x4],EAX       ; 0054abe1
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054abe4
    MOV dword ptr [EBP + 0x8],EAX       ; 0054abe8
    MOV ESI,dword ptr [0x02628624]      ; 0054abeb | DAT_02628624
        ;   Label: LAB_0054abeb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0054abf1
    PUSH ESI                            ; 0054abf8
    ADD EAX,0x2b4                       ; 0054abf9
    PUSH EAX                            ; 0054abfe
    LEA ESI,[ESP + 0x50]                ; 0054abff
    CALL FUN_00546a90                   ; 0054ac03
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054ac08
    LEA EDI,[ESP + 0x68]                ; 0054ac0f
    SUB EAX,EBX                         ; 0054ac13
    LEA ESI,[ESP + 0x50]                ; 0054ac15
    SHL EAX,0x2                         ; 0054ac19
    ADD ESP,0x8                         ; 0054ac1c
    LEA EDX,[EAX + EBP*0x1]             ; 0054ac1f
    LEA EAX,[ESP + 0x60]                ; 0054ac22
    MOVSD ES:EDI,ESI                    ; 0054ac26
    MOVSD ES:EDI,ESI                    ; 0054ac27
    MOVSD ES:EDI,ESI                    ; 0054ac28
    CMP EDX,EAX                         ; 0054ac29
    JZ 0x0054ac41                       ; 0054ac2b
        ;   XREF to: 0054ac41 (CONDITIONAL_JUMP)  ; LAB_0054ac41
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054ac2d
    MOV dword ptr [EDX],EAX             ; 0054ac31
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054ac33
    MOV dword ptr [EDX + 0x4],EAX       ; 0054ac37
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054ac3a
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ac3e
    MOV EDI,dword ptr [0x02628628]      ; 0054ac41 | DAT_02628628
        ;   Label: LAB_0054ac41
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0054ac47
    PUSH EDI                            ; 0054ac4e
    ADD EAX,0x2b4                       ; 0054ac4f
    PUSH EAX                            ; 0054ac54
    LEA ESI,[ESP + 0x80]                ; 0054ac55
    INC EBX                             ; 0054ac5c
    CALL FUN_00546a90                   ; 0054ac5d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054ac62
    LEA EDI,[ESP + 0x20]                ; 0054ac69
    SUB EAX,EBX                         ; 0054ac6d
    LEA ESI,[ESP + 0x80]                ; 0054ac6f
    SHL EAX,0x2                         ; 0054ac76
    ADD ESP,0x8                         ; 0054ac79
    LEA EDX,[EAX + EBP*0x1]             ; 0054ac7c
    LEA EAX,[ESP + 0x18]                ; 0054ac7f
    MOVSD ES:EDI,ESI                    ; 0054ac83
    MOVSD ES:EDI,ESI                    ; 0054ac84
    MOVSD ES:EDI,ESI                    ; 0054ac85
    CMP EDX,EAX                         ; 0054ac86
    JZ 0x0054ac9e                       ; 0054ac88
        ;   XREF to: 0054ac9e (CONDITIONAL_JUMP)  ; LAB_0054ac9e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054ac8a
    MOV dword ptr [EDX],EAX             ; 0054ac8e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054ac90
    MOV dword ptr [EDX + 0x4],EAX       ; 0054ac94
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054ac97
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ac9b
    MOV EAX,[0x02628634]                ; 0054ac9e | DAT_02628634
        ;   Label: LAB_0054ac9e
    PUSH EAX                            ; 0054aca3
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054aca4
    ADD EAX,0x2b4                       ; 0054acab
    PUSH EAX                            ; 0054acb0
    LEA ESI,[ESP + 0x14]                ; 0054acb1
    INC EBX                             ; 0054acb5
    CALL FUN_00546a90                   ; 0054acb6
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054acbb
    LEA EDI,[ESP + 0x5c]                ; 0054acc2
    SUB EAX,EBX                         ; 0054acc6
    LEA ESI,[ESP + 0x14]                ; 0054acc8
    SHL EAX,0x2                         ; 0054accc
    ADD ESP,0x8                         ; 0054accf
    LEA EDX,[EAX + EBP*0x1]             ; 0054acd2
    LEA EAX,[ESP + 0x54]                ; 0054acd5
    MOVSD ES:EDI,ESI                    ; 0054acd9
    MOVSD ES:EDI,ESI                    ; 0054acda
    MOVSD ES:EDI,ESI                    ; 0054acdb
    CMP EDX,EAX                         ; 0054acdc
    JZ 0x0054acf4                       ; 0054acde
        ;   XREF to: 0054acf4 (CONDITIONAL_JUMP)  ; LAB_0054acf4
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054ace0
    MOV dword ptr [EDX],EAX             ; 0054ace4
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054ace6
    MOV dword ptr [EDX + 0x4],EAX       ; 0054acea
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054aced
    MOV dword ptr [EDX + 0x8],EAX       ; 0054acf1
    MOV EDX,dword ptr [0x0262863c]      ; 0054acf4 | DAT_0262863c
        ;   Label: LAB_0054acf4
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0054acfa
    PUSH EDX                            ; 0054ad01
    ADD EAX,0x2b4                       ; 0054ad02
    PUSH EAX                            ; 0054ad07
    LEA ESI,[ESP + 0x38]                ; 0054ad08
    INC EBX                             ; 0054ad0c
    CALL FUN_00546a90                   ; 0054ad0d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054ad12
    LEA EDI,[ESP + 0x74]                ; 0054ad19
    SUB EAX,EBX                         ; 0054ad1d
    LEA ESI,[ESP + 0x38]                ; 0054ad1f
    SHL EAX,0x2                         ; 0054ad23
    ADD ESP,0x8                         ; 0054ad26
    ADD EBP,EAX                         ; 0054ad29
    LEA EAX,[ESP + 0x6c]                ; 0054ad2b
    MOVSD ES:EDI,ESI                    ; 0054ad2f
    MOVSD ES:EDI,ESI                    ; 0054ad30
    MOVSD ES:EDI,ESI                    ; 0054ad31
    CMP EBP,EAX                         ; 0054ad32
    JZ 0x0054ad4b                       ; 0054ad34
        ;   XREF to: 0054ad4b (CONDITIONAL_JUMP)  ; LAB_0054ad4b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0054ad36
    MOV dword ptr [EBP],EAX             ; 0054ad3a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054ad3d
    MOV dword ptr [EBP + 0x4],EAX       ; 0054ad41
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054ad44
    MOV dword ptr [EBP + 0x8],EAX       ; 0054ad48
    LEA EAX,[EBX + 0x1]                 ; 0054ad4b
        ;   Label: LAB_0054ad4b
    POP EBX                             ; 0054ad4e
    POP ESI                             ; 0054ad4f
    POP EDI                             ; 0054ad50
    ADD ESP,0x78                        ; 0054ad51
    POP EBP                             ; 0054ad54
    RET                                 ; 0054ad55

