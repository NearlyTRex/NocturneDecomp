; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053c940(int *param_1,char *param_2,int param_3,int param_4,int param_5)
;
;
; Called Functions:
;   FUN_0053bed0
;   FUN_005c0f80
;   FUN_005c12b0
;   FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c940
        ;   Label: FUN_0053c940
    PUSH ESI                            ; 0053c941
    PUSH EDI                            ; 0053c942
    PUSH EBP                            ; 0053c943
    SUB ESP,0x40                        ; 0053c944
    MOV ESI,dword ptr [ESP + 0x58]      ; 0053c947
    MOV EDI,ESI                         ; 0053c94b
    SUB ECX,ECX                         ; 0053c94d
    DEC ECX                             ; 0053c94f
    XOR EAX,EAX                         ; 0053c950
    SCASB.REPNE ES:EDI                  ; 0053c952
    NOT ECX                             ; 0053c954
    DEC ECX                             ; 0053c956
    XOR EDX,EDX                         ; 0053c957
    XOR EBX,EBX                         ; 0053c959
    MOV dword ptr [ESP + 0x2c],ECX      ; 0053c95b
    MOV dword ptr [ESP + 0x3c],EDX      ; 0053c95f
    TEST ECX,ECX                        ; 0053c963
    JLE 0x0053c990                      ; 0053c965
        ;   XREF to: 0053c990 (CONDITIONAL_JUMP)  ; LAB_0053c990
    XOR EAX,EAX                         ; 0053c967
        ;   Label: LAB_0053c967
    MOV AL,byte ptr [ESI]               ; 0053c969
    PUSH EAX                            ; 0053c96b
    INC EBX                             ; 0053c96c
    CALL FUN_005c12b0                   ; 0053c96d
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    ADD ESP,0x4                         ; 0053c972
    INC ESI                             ; 0053c975
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053c976
    MOV byte ptr [ESP + EBX*0x1 + 0xb],AL ; 0053c97a
    CMP EBX,ECX                         ; 0053c97e
    JL 0x0053c967                       ; 0053c980
        ;   XREF to: 0053c967 (CONDITIONAL_JUMP)  ; LAB_0053c967
    LEA EAX,[EAX]                       ; 0053c982
    LEA EDX,[EDX]                       ; 0053c988
    MOV EAX,EAX                         ; 0053c98e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053c990
        ;   Label: LAB_0053c990
    XOR DL,DL                           ; 0053c994
    MOV byte ptr [ESP + EAX*0x1 + 0xc],DL ; 0053c996
    MOV EAX,dword ptr [ESP + 0x54]      ; 0053c99a
    XOR EBX,EBX                         ; 0053c99e
    MOV ESI,dword ptr [EAX]             ; 0053c9a0
    MOV dword ptr [ESP + 0x18],EBX      ; 0053c9a2
    TEST ESI,ESI                        ; 0053c9a6
    JLE 0x0053ca1b                      ; 0053c9a8
        ;   XREF to: 0053ca1b (CONDITIONAL_JUMP)  ; LAB_0053ca1b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053c9aa
    DEC EAX                             ; 0053c9ae
    MOV dword ptr [ESP + 0x1c],EBX      ; 0053c9af
    MOV dword ptr [ESP + 0x20],EAX      ; 0053c9b3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053c9b7
        ;   Label: LAB_0053c9b7
    MOV dword ptr [ESP + 0x24],EAX      ; 0053c9bb
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053c9bf
    MOV EDI,dword ptr [ESP + 0x64]      ; 0053c9c3
    MOV dword ptr [ESP + 0x28],EAX      ; 0053c9c7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053c9cb
    IMUL EAX,EDI                        ; 0053c9cf
    XOR EBX,EBX                         ; 0053c9d2
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0053c9d4
    MOV dword ptr [ESP + 0x30],EBX      ; 0053c9d8
    ADD EAX,EBP                         ; 0053c9dc
    MOV dword ptr [ESP + 0x38],EBX      ; 0053c9de
    MOV dword ptr [ESP + 0x34],EAX      ; 0053c9e2
    MOV EAX,dword ptr [ESP + 0x54]      ; 0053c9e6
        ;   Label: LAB_0053c9e6
    ADD EAX,dword ptr [ESP + 0x24]      ; 0053c9ea
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053c9ee
    MOV ECX,dword ptr [ESP + 0x38]      ; 0053c9f1
    CMP ECX,dword ptr [EAX + 0x410]     ; 0053c9f5
    JL 0x0053ca27                       ; 0053c9fb
        ;   XREF to: 0053ca27 (CONDITIONAL_JUMP)  ; LAB_0053ca27
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053c9fd
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053ca01
    MOV ECX,dword ptr [ESP + 0x54]      ; 0053ca05
    ADD EDI,0x4                         ; 0053ca09
    INC EBP                             ; 0053ca0c
    MOV EDX,dword ptr [ECX]             ; 0053ca0d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0053ca0f
    MOV dword ptr [ESP + 0x18],EBP      ; 0053ca13
    CMP EBP,EDX                         ; 0053ca17
    JL 0x0053c9b7                       ; 0053ca19
        ;   XREF to: 0053c9b7 (CONDITIONAL_JUMP)  ; LAB_0053c9b7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053ca1b
        ;   Label: LAB_0053ca1b
    ADD ESP,0x40                        ; 0053ca1f
    POP EBP                             ; 0053ca22
    POP EDI                             ; 0053ca23
    POP ESI                             ; 0053ca24
    POP EBX                             ; 0053ca25
    RET                                 ; 0053ca26
    MOV ESI,dword ptr [ESP + 0x30]      ; 0053ca27
        ;   Label: LAB_0053ca27
    MOV EAX,dword ptr [EAX + 0x414]     ; 0053ca2b
    ADD EAX,ESI                         ; 0053ca31
    MOV EBP,dword ptr [EAX]             ; 0053ca33
    MOV EDI,EBP                         ; 0053ca35
    SUB ECX,ECX                         ; 0053ca37
    DEC ECX                             ; 0053ca39
    XOR EAX,EAX                         ; 0053ca3a
    SCASB.REPNE ES:EDI                  ; 0053ca3c
    NOT ECX                             ; 0053ca3e
    DEC ECX                             ; 0053ca40
    SUB ECX,dword ptr [ESP + 0x2c]      ; 0053ca41
    MOV EDI,ESP                         ; 0053ca45
    LEA ESI,[ECX + EBP*0x1]             ; 0053ca47
    PUSH EDI                            ; 0053ca4a
    MOV AL,byte ptr [ESI]               ; 0053ca4b
        ;   Label: LAB_0053ca4b
    MOV byte ptr [EDI],AL               ; 0053ca4d
    CMP AL,0x0                          ; 0053ca4f
    JZ 0x0053ca63                       ; 0053ca51
        ;   XREF to: 0053ca63 (CONDITIONAL_JUMP)  ; LAB_0053ca63
    MOV AL,byte ptr [ESI + 0x1]         ; 0053ca53
    ADD ESI,0x2                         ; 0053ca56
    MOV byte ptr [EDI + 0x1],AL         ; 0053ca59
    ADD EDI,0x2                         ; 0053ca5c
    CMP AL,0x0                          ; 0053ca5f
    JNZ 0x0053ca4b                      ; 0053ca61
        ;   XREF to: 0053ca4b (CONDITIONAL_JUMP)  ; LAB_0053ca4b
    POP EDI                             ; 0053ca63
        ;   Label: LAB_0053ca63
    LEA EAX,[ESP + 0xc]                 ; 0053ca64
    PUSH EAX                            ; 0053ca68
    LEA EAX,[ESP + 0x4]                 ; 0053ca69
    PUSH EAX                            ; 0053ca6d
    CALL FUN_005c0f80                   ; 0053ca6e
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0053ca73
    TEST EAX,EAX                        ; 0053ca76
    JNZ 0x0053cad2                      ; 0053ca78
        ;   XREF to: 0053cad2 (CONDITIONAL_JUMP)  ; LAB_0053cad2
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053ca7a
    XOR EBX,EBX                         ; 0053ca7e
    TEST EAX,EAX                        ; 0053ca80
    JLE 0x0053ca99                      ; 0053ca82
        ;   XREF to: 0053ca99 (CONDITIONAL_JUMP)  ; LAB_0053ca99
    MOV ESI,dword ptr [ESP + 0x54]      ; 0053ca84
    PUSH EBP                            ; 0053ca88
        ;   Label: LAB_0053ca88
    MOV ECX,dword ptr [ESI + 0x4]       ; 0053ca89
    PUSH ECX                            ; 0053ca8c
    CALL FUN_0053bed0                   ; 0053ca8d
        ;   XREF to: 0053bed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053bed0()
    ADD ESP,0x8                         ; 0053ca92
    TEST EAX,EAX                        ; 0053ca95
    JL 0x0053caeb                       ; 0053ca97
        ;   XREF to: 0053caeb (CONDITIONAL_JUMP)  ; LAB_0053caeb
    CMP EBX,dword ptr [ESP + 0x18]      ; 0053ca99
        ;   Label: LAB_0053ca99
    JNZ 0x0053cad2                      ; 0053ca9d
        ;   XREF to: 0053cad2 (CONDITIONAL_JUMP)  ; LAB_0053cad2
    MOV EDI,dword ptr [ESP + 0x20]      ; 0053ca9f
    PUSH EDI                            ; 0053caa3
    PUSH EBP                            ; 0053caa4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0053caa5
    PUSH EBP                            ; 0053caa9
    CALL FUN_005c20d0                   ; 0053caaa
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    ADD ESP,0xc                         ; 0053caaf
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053cab2
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0053cab6
    MOV EBX,dword ptr [ESP + 0x60]      ; 0053caba
    LEA EDX,[EAX + EBP*0x1]             ; 0053cabe
    INC ECX                             ; 0053cac1
    MOV dword ptr [ESP + 0x34],EDX      ; 0053cac2
    MOV dword ptr [ESP + 0x3c],ECX      ; 0053cac6
    CMP ECX,EBX                         ; 0053caca
    JGE 0x0053ca1b                      ; 0053cacc
        ;   XREF to: 0053ca1b (CONDITIONAL_JUMP)  ; LAB_0053ca1b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0053cad2
        ;   Label: LAB_0053cad2
    MOV ESI,dword ptr [ESP + 0x30]      ; 0053cad6
    INC EDI                             ; 0053cada
    ADD ESI,0x14                        ; 0053cadb
    MOV dword ptr [ESP + 0x38],EDI      ; 0053cade
    MOV dword ptr [ESP + 0x30],ESI      ; 0053cae2
    JMP 0x0053c9e6                      ; 0053cae6
        ;   XREF to: 0053c9e6 (UNCONDITIONAL_JUMP)  ; LAB_0053c9e6
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053caeb
        ;   Label: LAB_0053caeb
    INC EBX                             ; 0053caef
    ADD ESI,0x4                         ; 0053caf0
    CMP EBX,EDX                         ; 0053caf3
    JL 0x0053ca88                       ; 0053caf5
        ;   XREF to: 0053ca88 (CONDITIONAL_JUMP)  ; LAB_0053ca88
    JMP 0x0053ca99                      ; 0053caf7
        ;   XREF to: 0053ca99 (UNCONDITIONAL_JUMP)  ; LAB_0053ca99

