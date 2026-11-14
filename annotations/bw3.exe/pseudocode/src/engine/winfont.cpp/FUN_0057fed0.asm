; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_winfont_cpp_FUN_0057fed0(int param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_0057fe80 at 0057febd
;
; Referenced Globals:
;   void* PTR_SetTextColor_005b3430 = 001b389e
;   void* PTR_TextOutA_005b3434 = 001b38ae
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;
; Called Functions:
;   SetTextColor
;   TextOutA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fed0
        ;   Label: engine_winfont.cpp_FUN_0057fed0
    PUSH ESI                            ; 0057fed1
    PUSH EDI                            ; 0057fed2
    PUSH EBP                            ; 0057fed3
    SUB ESP,0x1c                        ; 0057fed4
    MOV EBX,dword ptr [ESP + 0x30]      ; 0057fed7
    MOV ESI,dword ptr [ESP + 0x38]      ; 0057fedb
    LEA EDI,[EBX + 0x6a5c]              ; 0057fedf
    MOV EDX,dword ptr [ESP + 0x38]      ; 0057fee5
    PUSH EDI                            ; 0057fee9
    MOV AL,byte ptr [ESI]               ; 0057feea
        ;   Label: LAB_0057feea
    MOV byte ptr [EDI],AL               ; 0057feec
    CMP AL,0x0                          ; 0057feee
    JZ 0x0057ff02                       ; 0057fef0
        ;   XREF to: 0057ff02 (CONDITIONAL_JUMP)  ; LAB_0057ff02
    MOV AL,byte ptr [ESI + 0x1]         ; 0057fef2
    ADD ESI,0x2                         ; 0057fef5
    MOV byte ptr [EDI + 0x1],AL         ; 0057fef8
    ADD EDI,0x2                         ; 0057fefb
    CMP AL,0x0                          ; 0057fefe
    JNZ 0x0057feea                      ; 0057ff00
        ;   XREF to: 0057feea (CONDITIONAL_JUMP)  ; LAB_0057feea
    POP EDI                             ; 0057ff02
        ;   Label: LAB_0057ff02
    PUSH EDX                            ; 0057ff03
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 0057ff04
    PUSH EBX                            ; 0057ff0a
    CALL dword ptr [EAX + 0x8]          ; 0057ff0b
    ADD ESP,0x8                         ; 0057ff0e
    MOV ECX,dword ptr [ESP + 0x38]      ; 0057ff11
    MOV dword ptr [EBX + 0x6b5c],EAX    ; 0057ff15
    PUSH ECX                            ; 0057ff1b
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 0057ff1c
    PUSH EBX                            ; 0057ff22
    CALL dword ptr [EAX + 0xc]          ; 0057ff23
    ADD ESP,0x8                         ; 0057ff26
    MOV dword ptr [EBX + 0x6b60],EAX    ; 0057ff29
    SUB ECX,ECX                         ; 0057ff2f
    DEC ECX                             ; 0057ff31
    XOR EAX,EAX                         ; 0057ff32
    SCASB.REPNE ES:EDI                  ; 0057ff34
    NOT ECX                             ; 0057ff36
    DEC ECX                             ; 0057ff38
    PUSH 0x0                            ; 0057ff39
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 0057ff3b
    PUSH EDI                            ; 0057ff41
    MOV ESI,ECX                         ; 0057ff42
    CALL dword ptr CS:[0x5b3430]        ; 0057ff44 | PTR_SetTextColor_005b3430
    PUSH ESI                            ; 0057ff4b
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0057ff4c
    PUSH EBP                            ; 0057ff50
    PUSH 0x0                            ; 0057ff51
    PUSH 0x0                            ; 0057ff53
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0057ff55
    PUSH EAX                            ; 0057ff5b
    CALL dword ptr CS:[0x5b3434]        ; 0057ff5c | PTR_TextOutA_005b3434
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0057ff63
    MOV EAX,dword ptr [EBX + 0x6b64]    ; 0057ff67
    MOV ECX,dword ptr [0x005fba18]      ; 0057ff6d | DAT_005fba18
    ADD EAX,EDX                         ; 0057ff73
    CMP EAX,ECX                         ; 0057ff75
    JL 0x0058001d                       ; 0057ff77
        ;   XREF to: 0058001d (CONDITIONAL_JUMP)  ; LAB_0058001d
    SUB ECX,EDX                         ; 0057ff7d
    MOV EDI,dword ptr [ESP + 0x40]      ; 0057ff7f
        ;   Label: LAB_0057ff7f
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 0057ff83
    MOV EBP,dword ptr [0x005fba1c]      ; 0057ff89 | DAT_005fba1c
    ADD EAX,EDI                         ; 0057ff8f
    CMP EAX,EBP                         ; 0057ff91
    JL 0x00580028                       ; 0057ff93
        ;   XREF to: 00580028 (CONDITIONAL_JUMP)  ; LAB_00580028
    MOV EAX,EBP                         ; 0057ff99
    SUB EAX,EDI                         ; 0057ff9b
    MOV ESI,dword ptr [EBX + 0x6b5c]    ; 0057ff9d
        ;   Label: LAB_0057ff9d
    MOV dword ptr [ESP],EAX             ; 0057ffa3
    CMP ECX,ESI                         ; 0057ffa6
    JLE 0x0057ffac                      ; 0057ffa8
        ;   XREF to: 0057ffac (CONDITIONAL_JUMP)  ; LAB_0057ffac
    MOV ECX,ESI                         ; 0057ffaa
    MOV EAX,dword ptr [ESP]             ; 0057ffac
        ;   Label: LAB_0057ffac
    MOV EDI,dword ptr [EBX + 0x6b60]    ; 0057ffaf
    CMP EAX,EDI                         ; 0057ffb5
    JLE 0x0057ffbc                      ; 0057ffb7
        ;   XREF to: 0057ffbc (CONDITIONAL_JUMP)  ; LAB_0057ffbc
    MOV dword ptr [ESP],EDI             ; 0057ffb9
    CMP dword ptr [0x005fba20],0x10     ; 0057ffbc | DAT_005fba20
        ;   Label: LAB_0057ffbc
    JNZ 0x00580077                      ; 0057ffc3
        ;   XREF to: 00580077 (CONDITIONAL_JUMP)  ; LAB_00580077
    MOV EAX,dword ptr [ESP + 0x44]      ; 0057ffc9
    XOR ESI,ESI                         ; 0057ffcd
    MOV EDI,dword ptr [ESP]             ; 0057ffcf
    MOV dword ptr [ESP + 0x14],ESI      ; 0057ffd2
    MOV dword ptr [ESP + 0x18],EAX      ; 0057ffd6
    TEST EDI,EDI                        ; 0057ffda
    JLE 0x00580015                      ; 0057ffdc
        ;   XREF to: 00580015 (CONDITIONAL_JUMP)  ; LAB_00580015
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057ffde
    MOV dword ptr [ESP + 0x8],EAX       ; 0057ffe2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057ffe6
        ;   Label: LAB_0057ffe6
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 0057ffea
    TEST EAX,EAX                        ; 0057fff0
    JL 0x0057fffc                       ; 0057fff2
        ;   XREF to: 0057fffc (CONDITIONAL_JUMP)  ; LAB_0057fffc
    CMP EAX,dword ptr [0x005fba1c]      ; 0057fff4 | DAT_005fba1c
    JL 0x00580033                       ; 0057fffa
        ;   XREF to: 00580033 (CONDITIONAL_JUMP)  ; LAB_00580033
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057fffc
        ;   Label: LAB_0057fffc
    MOV EDX,dword ptr [ESP + 0x14]      ; 00580000
    MOV ESI,dword ptr [ESP]             ; 00580004
    INC EAX                             ; 00580007
    INC EDX                             ; 00580008
    MOV dword ptr [ESP + 0x8],EAX       ; 00580009
    MOV dword ptr [ESP + 0x14],EDX      ; 0058000d
    CMP EDX,ESI                         ; 00580011
    JL 0x0057ffe6                       ; 00580013
        ;   XREF to: 0057ffe6 (CONDITIONAL_JUMP)  ; LAB_0057ffe6
    ADD ESP,0x1c                        ; 00580015
        ;   Label: LAB_00580015
    POP EBP                             ; 00580018
    POP EDI                             ; 00580019
    POP ESI                             ; 0058001a
    POP EBX                             ; 0058001b
    RET                                 ; 0058001c
    MOV ECX,dword ptr [EBX + 0x6b64]    ; 0058001d
        ;   Label: LAB_0058001d
    JMP 0x0057ff7f                      ; 00580023
        ;   XREF to: 0057ff7f (UNCONDITIONAL_JUMP)  ; LAB_0057ff7f
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 00580028
        ;   Label: LAB_00580028
    JMP 0x0057ff9d                      ; 0058002e
        ;   XREF to: 0057ff9d (UNCONDITIONAL_JUMP)  ; LAB_0057ff9d
    MOV ESI,dword ptr [EAX*0x4 + 0x1c5faec] ; 00580033 | DAT_01c5faec
        ;   Label: LAB_00580033
    XOR EAX,EAX                         ; 0058003a
    TEST ECX,ECX                        ; 0058003c
    JLE 0x0057fffc                      ; 0058003e
        ;   XREF to: 0057fffc (CONDITIONAL_JUMP)  ; LAB_0057fffc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00580040
    ADD EDX,EDX                         ; 00580044
    ADD EDX,ESI                         ; 00580046
    MOV ESI,dword ptr [ESP + 0x14]      ; 00580048
        ;   Label: LAB_00580048
    IMUL ESI,dword ptr [EBX + 0x6b64]   ; 0058004c
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 00580053
    ADD ESI,EAX                         ; 00580059
    MOV SI,word ptr [EDI + ESI*0x2]     ; 0058005b
    CMP SI,0x7c1f                       ; 0058005f
    JZ 0x0058006d                       ; 00580064
        ;   XREF to: 0058006d (CONDITIONAL_JUMP)  ; LAB_0058006d
    MOV ESI,dword ptr [ESP + 0x18]      ; 00580066
    MOV word ptr [EDX],SI               ; 0058006a
    INC EAX                             ; 0058006d
        ;   Label: LAB_0058006d
    ADD EDX,0x2                         ; 0058006e
    CMP EAX,ECX                         ; 00580071
    JGE 0x0057fffc                      ; 00580073
        ;   XREF to: 0057fffc (CONDITIONAL_JUMP)  ; LAB_0057fffc
    JMP 0x00580048                      ; 00580075
        ;   XREF to: 00580048 (UNCONDITIONAL_JUMP)  ; LAB_00580048
    MOV EAX,dword ptr [ESP + 0x44]      ; 00580077
        ;   Label: LAB_00580077
    MOV dword ptr [ESP + 0xc],EAX       ; 0058007b
    XOR EAX,EAX                         ; 0058007f
    MOV EDX,dword ptr [ESP]             ; 00580081
    MOV dword ptr [ESP + 0x10],EAX      ; 00580084
    TEST EDX,EDX                        ; 00580088
    JLE 0x00580015                      ; 0058008a
        ;   XREF to: 00580015 (CONDITIONAL_JUMP)  ; LAB_00580015
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058008c
    MOV dword ptr [ESP + 0x4],EAX       ; 00580090
    MOV EAX,dword ptr [ESP + 0x4]       ; 00580094
        ;   Label: LAB_00580094
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 00580098
    TEST EAX,EAX                        ; 0058009e
    JL 0x005800aa                       ; 005800a0
        ;   XREF to: 005800aa (CONDITIONAL_JUMP)  ; LAB_005800aa
    CMP EAX,dword ptr [0x005fba1c]      ; 005800a2 | DAT_005fba1c
    JL 0x005800c9                       ; 005800a8
        ;   XREF to: 005800c9 (CONDITIONAL_JUMP)  ; LAB_005800c9
    MOV EBP,dword ptr [ESP + 0x4]       ; 005800aa
        ;   Label: LAB_005800aa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005800ae
    MOV EDX,dword ptr [ESP]             ; 005800b2
    INC EBP                             ; 005800b5
    INC EAX                             ; 005800b6
    MOV dword ptr [ESP + 0x4],EBP       ; 005800b7
    MOV dword ptr [ESP + 0x10],EAX      ; 005800bb
    CMP EAX,EDX                         ; 005800bf
    JGE 0x00580015                      ; 005800c1
        ;   XREF to: 00580015 (CONDITIONAL_JUMP)  ; LAB_00580015
    JMP 0x00580094                      ; 005800c7
        ;   XREF to: 00580094 (UNCONDITIONAL_JUMP)  ; LAB_00580094
    MOV EDX,dword ptr [EAX*0x4 + 0x1c5faec] ; 005800c9 | DAT_01c5faec
        ;   Label: LAB_005800c9
    XOR EAX,EAX                         ; 005800d0
    TEST ECX,ECX                        ; 005800d2
    JLE 0x005800aa                      ; 005800d4
        ;   XREF to: 005800aa (CONDITIONAL_JUMP)  ; LAB_005800aa
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005800d6
    SHL ESI,0x2                         ; 005800da
    ADD EDX,ESI                         ; 005800dd
    MOV ESI,dword ptr [ESP + 0x10]      ; 005800df
        ;   Label: LAB_005800df
    IMUL ESI,dword ptr [EBX + 0x6b64]   ; 005800e3
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 005800ea
    ADD ESI,EAX                         ; 005800f0
    MOV ESI,dword ptr [EDI + ESI*0x4]   ; 005800f2
    CMP ESI,0xff00ff                    ; 005800f5
    JZ 0x00580103                       ; 005800fb
        ;   XREF to: 00580103 (CONDITIONAL_JUMP)  ; LAB_00580103
    MOV ESI,dword ptr [ESP + 0xc]       ; 005800fd
    MOV dword ptr [EDX],ESI             ; 00580101
    INC EAX                             ; 00580103
        ;   Label: LAB_00580103
    ADD EDX,0x4                         ; 00580104
    CMP EAX,ECX                         ; 00580107
    JGE 0x005800aa                      ; 00580109
        ;   XREF to: 005800aa (CONDITIONAL_JUMP)  ; LAB_005800aa
    JMP 0x005800df                      ; 0058010b
        ;   XREF to: 005800df (UNCONDITIONAL_JUMP)  ; LAB_005800df

