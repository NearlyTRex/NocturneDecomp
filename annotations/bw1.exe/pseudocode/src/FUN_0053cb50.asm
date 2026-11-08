; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053cb50(int *param_1,char *param_2)
;
;
; XREF[3]:
;   FUN_00499ed0 at 00499fef
;   FUN_0049a0d0 at 0049a1df
;   FUN_0053cb00 at 0053cb44
;
; Called Functions:
;   FUN_0049dea0
;   FUN_0053bf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cb50
        ;   Label: FUN_0053cb50
    PUSH ESI                            ; 0053cb51
    PUSH EDI                            ; 0053cb52
    PUSH EBP                            ; 0053cb53
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053cb54
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053cb58
    MOV EAX,dword ptr [EBX + 0x314]     ; 0053cb5c
    CMP EAX,dword ptr [ESI]             ; 0053cb62
    JGE 0x0053cbc5                      ; 0053cb64
        ;   XREF to: 0053cbc5 (CONDITIONAL_JUMP)  ; LAB_0053cbc5
    LEA EDI,[EBX + 0x214]               ; 0053cb66
    CMP dword ptr [EBX + 0x314],0x0     ; 0053cb6c
        ;   Label: LAB_0053cb6c
    JL 0x0053cbcf                       ; 0053cb73
        ;   XREF to: 0053cbcf (CONDITIONAL_JUMP)  ; LAB_0053cbcf
    MOV EAX,dword ptr [EBX + 0x314]     ; 0053cb75
        ;   Label: LAB_0053cb75
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053cb7b
    SHL EAX,0x2                         ; 0053cb7f
    ADD EAX,EDX                         ; 0053cb82
    MOV EBP,dword ptr [EAX + 0x4]       ; 0053cb84
    CMP dword ptr [EBX + 0x318],0x0     ; 0053cb87
        ;   Label: LAB_0053cb87
    JL 0x0053cbdb                       ; 0053cb8e
        ;   XREF to: 0053cbdb (CONDITIONAL_JUMP)  ; LAB_0053cbdb
    MOV ESI,dword ptr [EBP + 0x410]     ; 0053cb90
        ;   Label: LAB_0053cb90
    MOV EAX,dword ptr [EBX + 0x318]     ; 0053cb96
    CMP EAX,ESI                         ; 0053cb9c
    JL 0x0053cbe7                       ; 0053cb9e
        ;   XREF to: 0053cbe7 (CONDITIONAL_JUMP)  ; LAB_0053cbe7
    MOV ECX,dword ptr [EBX + 0x314]     ; 0053cba0
    MOV dword ptr [EBX + 0x318],0x0     ; 0053cba6
    INC ECX                             ; 0053cbb0
    MOV dword ptr [EBX + 0x314],ECX     ; 0053cbb1
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053cbb7
    MOV EAX,dword ptr [EBX + 0x314]     ; 0053cbbb
    CMP EAX,dword ptr [ESI]             ; 0053cbc1
    JL 0x0053cb6c                       ; 0053cbc3
        ;   XREF to: 0053cb6c (CONDITIONAL_JUMP)  ; LAB_0053cb6c
    MOV byte ptr [EBX],0x0              ; 0053cbc5
        ;   Label: LAB_0053cbc5
    XOR EAX,EAX                         ; 0053cbc8
    POP EBP                             ; 0053cbca
    POP EDI                             ; 0053cbcb
    POP ESI                             ; 0053cbcc
    POP EBX                             ; 0053cbcd
    RET                                 ; 0053cbce
    MOV dword ptr [EBX + 0x314],0x0     ; 0053cbcf
        ;   Label: LAB_0053cbcf
    JMP 0x0053cb75                      ; 0053cbd9
        ;   XREF to: 0053cb75 (UNCONDITIONAL_JUMP)  ; LAB_0053cb75
    MOV dword ptr [EBX + 0x318],0x0     ; 0053cbdb
        ;   Label: LAB_0053cbdb
    JMP 0x0053cb90                      ; 0053cbe5
        ;   XREF to: 0053cb90 (UNCONDITIONAL_JUMP)  ; LAB_0053cb90
    IMUL EAX,EAX,0x14                   ; 0053cbe7
        ;   Label: LAB_0053cbe7
    MOV ESI,dword ptr [EBP + 0x414]     ; 0053cbea
    ADD ESI,EAX                         ; 0053cbf0
    PUSH 0x0                            ; 0053cbf2
    MOV ECX,dword ptr [ESI]             ; 0053cbf4
    PUSH ECX                            ; 0053cbf6
    PUSH EDI                            ; 0053cbf7
    CALL FUN_0049dea0                   ; 0053cbf8
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dea0()
    ADD ESP,0xc                         ; 0053cbfd
    TEST EAX,EAX                        ; 0053cc00
    JNZ 0x0053cc0f                      ; 0053cc02
        ;   XREF to: 0053cc0f (CONDITIONAL_JUMP)  ; LAB_0053cc0f
    INC dword ptr [EBX + 0x318]         ; 0053cc04
    JMP 0x0053cb87                      ; 0053cc0a
        ;   XREF to: 0053cb87 (UNCONDITIONAL_JUMP)  ; LAB_0053cb87
    MOV EDI,EBX                         ; 0053cc0f
        ;   Label: LAB_0053cc0f
    MOV ESI,dword ptr [ESI]             ; 0053cc11
    PUSH EDI                            ; 0053cc13
    MOV AL,byte ptr [ESI]               ; 0053cc14
        ;   Label: LAB_0053cc14
    MOV byte ptr [EDI],AL               ; 0053cc16
    CMP AL,0x0                          ; 0053cc18
    JZ 0x0053cc2c                       ; 0053cc1a
        ;   XREF to: 0053cc2c (CONDITIONAL_JUMP)  ; LAB_0053cc2c
    MOV AL,byte ptr [ESI + 0x1]         ; 0053cc1c
    ADD ESI,0x2                         ; 0053cc1f
    MOV byte ptr [EDI + 0x1],AL         ; 0053cc22
    ADD EDI,0x2                         ; 0053cc25
    CMP AL,0x0                          ; 0053cc28
    JNZ 0x0053cc14                      ; 0053cc2a
        ;   XREF to: 0053cc14 (CONDITIONAL_JUMP)  ; LAB_0053cc14
    POP EDI                             ; 0053cc2c
        ;   Label: LAB_0053cc2c
    PUSH EBX                            ; 0053cc2d
    MOV EDI,dword ptr [EBX + 0x318]     ; 0053cc2e
    PUSH EDI                            ; 0053cc34
    PUSH EBP                            ; 0053cc35
    CALL FUN_0053bf40                   ; 0053cc36
        ;   XREF to: 0053bf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0053bf40()
    MOV EAX,0x1                         ; 0053cc3b
    MOV EBP,dword ptr [EBX + 0x318]     ; 0053cc40
    ADD EBP,EAX                         ; 0053cc46
    ADD ESP,0xc                         ; 0053cc48
    MOV dword ptr [EBX + 0x318],EBP     ; 0053cc4b
    POP EBP                             ; 0053cc51
    POP EDI                             ; 0053cc52
    POP ESI                             ; 0053cc53
    POP EBX                             ; 0053cc54
    RET                                 ; 0053cc55

