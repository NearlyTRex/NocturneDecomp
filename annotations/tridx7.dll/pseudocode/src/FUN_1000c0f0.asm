; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t FUN_1000c0f0(LCID param_1,uint param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,size_t param_6,UINT param_7)
;
;
; XREF[1]:
;   FUN_100107d0 at 1001084e
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017770
;   undefined4 DAT_10017914
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;   void* PTR_LCMapStringA_10242250 = 002426da
;   void* PTR_LCMapStringW_1024226c = 002426ea
;
; Called Functions:
;   _strncpy
;   FUN_10005b30
;   FUN_10008830
;   FUN_1000c300
;   LCMapStringA
;   LCMapStringW
;   MultiByteToWideChar
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000c0f0
        ;   Label: FUN_1000c0f0
    MOV EAX,[0x10017914]                ; 1000c0f1 | DAT_10017914
    PUSH ESI                            ; 1000c0f6
    TEST EAX,EAX                        ; 1000c0f7
    PUSH EDI                            ; 1000c0f9
    PUSH EBP                            ; 1000c0fa
    JNZ 0x1000c14c                      ; 1000c0fb
        ;   XREF to: 1000c14c (CONDITIONAL_JUMP)  ; LAB_1000c14c
    PUSH 0x0                            ; 1000c0fd
    MOV ESI,dword ptr [0x1024226c]      ; 1000c0ff | PTR_LCMapStringW_1024226c
    PUSH 0x0                            ; 1000c105
    PUSH 0x1                            ; 1000c107
    PUSH 0x10012770                     ; 1000c109 | DAT_10012770
    PUSH 0x100                          ; 1000c10e
    PUSH 0x0                            ; 1000c113
    CALL ESI                            ; 1000c115 | int LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, ...)
    TEST EAX,EAX                        ; 1000c117
    JZ 0x1000c122                       ; 1000c119
        ;   XREF to: 1000c122 (CONDITIONAL_JUMP)  ; LAB_1000c122
    MOV EAX,0x1                         ; 1000c11b
    JMP 0x1000c152                      ; 1000c120
        ;   XREF to: 1000c152 (UNCONDITIONAL_JUMP)  ; LAB_1000c152
    PUSH 0x0                            ; 1000c122
        ;   Label: LAB_1000c122
    PUSH 0x0                            ; 1000c124
    PUSH 0x1                            ; 1000c126
    PUSH 0x1001276c                     ; 1000c128 | DAT_1001276c
    PUSH 0x100                          ; 1000c12d
    PUSH 0x0                            ; 1000c132
    CALL dword ptr [0x10242250]         ; 1000c134 | PTR_LCMapStringA_10242250
    TEST EAX,EAX                        ; 1000c13a
    JZ 0x1000c145                       ; 1000c13c
        ;   XREF to: 1000c145 (CONDITIONAL_JUMP)  ; LAB_1000c145
    MOV EAX,0x2                         ; 1000c13e
    JMP 0x1000c152                      ; 1000c143
        ;   XREF to: 1000c152 (UNCONDITIONAL_JUMP)  ; LAB_1000c152
    XOR EAX,EAX                         ; 1000c145
        ;   Label: LAB_1000c145
    POP EBP                             ; 1000c147
    POP EDI                             ; 1000c148
    POP ESI                             ; 1000c149
    POP EBX                             ; 1000c14a
    RET                                 ; 1000c14b
    MOV ESI,dword ptr [0x1024226c]      ; 1000c14c | PTR_LCMapStringW_1024226c
        ;   Label: LAB_1000c14c
    MOV EDI,dword ptr [ESP + 0x20]      ; 1000c152
        ;   Label: LAB_1000c152
    MOV [0x10017914],EAX                ; 1000c156 | DAT_10017914
    TEST EDI,EDI                        ; 1000c15b
    JLE 0x1000c174                      ; 1000c15d
        ;   XREF to: 1000c174 (CONDITIONAL_JUMP)  ; LAB_1000c174
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c15f
    PUSH EDI                            ; 1000c163
    PUSH EAX                            ; 1000c164
    CALL FUN_1000c300                   ; 1000c165
        ;   XREF to: 1000c300 (UNCONDITIONAL_CALL)  ; undefined FUN_1000c300()
    ADD ESP,0x8                         ; 1000c16a
    MOV EDI,EAX                         ; 1000c16d
    MOV EAX,[0x10017914]                ; 1000c16f | DAT_10017914
    MOV [0x10017914],EAX                ; 1000c174 | DAT_10017914
        ;   Label: LAB_1000c174
    CMP EAX,0x1                         ; 1000c179
    JNZ 0x1000c19f                      ; 1000c17c
        ;   XREF to: 1000c19f (CONDITIONAL_JUMP)  ; LAB_1000c19f
    MOV ECX,dword ptr [ESP + 0x28]      ; 1000c17e
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000c182
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000c186
    PUSH ECX                            ; 1000c18a
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000c18b
    PUSH EAX                            ; 1000c18f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c190
    PUSH EDI                            ; 1000c194
    PUSH EDX                            ; 1000c195
    PUSH ECX                            ; 1000c196
    PUSH EAX                            ; 1000c197
    CALL ESI                            ; 1000c198 | int LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, ...)
    POP EBP                             ; 1000c19a
    POP EDI                             ; 1000c19b
    POP ESI                             ; 1000c19c
    POP EBX                             ; 1000c19d
    RET                                 ; 1000c19e
    MOV [0x10017914],EAX                ; 1000c19f | DAT_10017914
        ;   Label: LAB_1000c19f
    CMP EAX,0x2                         ; 1000c1a4
    JNZ 0x1000c2c1                      ; 1000c1a7
        ;   XREF to: 1000c2c1 (CONDITIONAL_JUMP)  ; LAB_1000c2c1
    XOR ESI,ESI                         ; 1000c1ad
    CMP dword ptr [ESP + 0x2c],ESI      ; 1000c1af
    JNZ 0x1000c1be                      ; 1000c1b3
        ;   XREF to: 1000c1be (CONDITIONAL_JUMP)  ; LAB_1000c1be
    MOV EAX,[0x10017770]                ; 1000c1b5 | DAT_10017770
    MOV dword ptr [ESP + 0x2c],EAX      ; 1000c1ba
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c1be
        ;   Label: LAB_1000c1be
    PUSH 0x0                            ; 1000c1c2
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000c1c4
    PUSH 0x0                            ; 1000c1c8
    PUSH 0x0                            ; 1000c1ca
    PUSH 0x0                            ; 1000c1cc
    PUSH EDI                            ; 1000c1ce
    PUSH EAX                            ; 1000c1cf
    PUSH 0x220                          ; 1000c1d0
    PUSH ECX                            ; 1000c1d5
    CALL dword ptr [0x10242230]         ; 1000c1d6 | PTR_WideCharToMultiByte_10242230
    MOV EBP,EAX                         ; 1000c1dc
    TEST EBP,EBP                        ; 1000c1de
    JNZ 0x1000c1e9                      ; 1000c1e0
        ;   XREF to: 1000c1e9 (CONDITIONAL_JUMP)  ; LAB_1000c1e9
    XOR EAX,EAX                         ; 1000c1e2
    POP EBP                             ; 1000c1e4
    POP EDI                             ; 1000c1e5
    POP ESI                             ; 1000c1e6
    POP EBX                             ; 1000c1e7
    RET                                 ; 1000c1e8
    PUSH EBP                            ; 1000c1e9
        ;   Label: LAB_1000c1e9
    CALL FUN_10008830                   ; 1000c1ea
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 1000c1ef
    MOV EBX,EAX                         ; 1000c1f2
    TEST EBX,EBX                        ; 1000c1f4
    JNZ 0x1000c1ff                      ; 1000c1f6
        ;   XREF to: 1000c1ff (CONDITIONAL_JUMP)  ; LAB_1000c1ff
    XOR EAX,EAX                         ; 1000c1f8
    POP EBP                             ; 1000c1fa
    POP EDI                             ; 1000c1fb
    POP ESI                             ; 1000c1fc
    POP EBX                             ; 1000c1fd
    RET                                 ; 1000c1fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000c1ff
        ;   Label: LAB_1000c1ff
    PUSH 0x0                            ; 1000c203
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000c205
    PUSH 0x0                            ; 1000c209
    PUSH EBP                            ; 1000c20b
    PUSH EBX                            ; 1000c20c
    PUSH EDI                            ; 1000c20d
    PUSH EAX                            ; 1000c20e
    PUSH 0x220                          ; 1000c20f
    PUSH ECX                            ; 1000c214
    CALL dword ptr [0x10242230]         ; 1000c215 | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 1000c21b
    JZ 0x1000c2ad                       ; 1000c21d
        ;   XREF to: 1000c2ad (CONDITIONAL_JUMP)  ; LAB_1000c2ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000c223
    PUSH 0x0                            ; 1000c227
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000c229
    PUSH 0x0                            ; 1000c22d
    PUSH EBP                            ; 1000c22f
    PUSH EBX                            ; 1000c230
    PUSH EAX                            ; 1000c231
    PUSH ECX                            ; 1000c232
    CALL dword ptr [0x10242250]         ; 1000c233 | PTR_LCMapStringA_10242250
    MOV EDI,EAX                         ; 1000c239
    TEST EDI,EDI                        ; 1000c23b
    JZ 0x1000c2ad                       ; 1000c23d
        ;   XREF to: 1000c2ad (CONDITIONAL_JUMP)  ; LAB_1000c2ad
    PUSH EDI                            ; 1000c23f
    CALL FUN_10008830                   ; 1000c240
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 1000c245
    MOV ESI,EAX                         ; 1000c248
    TEST ESI,ESI                        ; 1000c24a
    JZ 0x1000c2ad                       ; 1000c24c
        ;   XREF to: 1000c2ad (CONDITIONAL_JUMP)  ; LAB_1000c2ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000c24e
    PUSH EDI                            ; 1000c252
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000c253
    PUSH ESI                            ; 1000c257
    PUSH EBP                            ; 1000c258
    PUSH EBX                            ; 1000c259
    PUSH EAX                            ; 1000c25a
    PUSH ECX                            ; 1000c25b
    CALL dword ptr [0x10242250]         ; 1000c25c | PTR_LCMapStringA_10242250
    TEST EAX,EAX                        ; 1000c262
    JZ 0x1000c2ad                       ; 1000c264
        ;   XREF to: 1000c2ad (CONDITIONAL_JUMP)  ; LAB_1000c2ad
    TEST byte ptr [ESP + 0x19],0x4      ; 1000c266
    MOV ECX,dword ptr [ESP + 0x28]      ; 1000c26b
    JZ 0x1000c28e                       ; 1000c26f
        ;   XREF to: 1000c28e (CONDITIONAL_JUMP)  ; LAB_1000c28e
    TEST ECX,ECX                        ; 1000c271
    JZ 0x1000c2e3                       ; 1000c273
        ;   XREF to: 1000c2e3 (CONDITIONAL_JUMP)  ; LAB_1000c2e3
    CMP ECX,EDI                         ; 1000c275
    MOV EDX,EDI                         ; 1000c277
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000c279
    JL 0x1000c281                       ; 1000c27d
        ;   XREF to: 1000c281 (CONDITIONAL_JUMP)  ; LAB_1000c281
    MOV ECX,EDX                         ; 1000c27f
    PUSH ECX                            ; 1000c281
        ;   Label: LAB_1000c281
    PUSH ESI                            ; 1000c282
    PUSH EAX                            ; 1000c283
    CALL _strncpy                       ; 1000c284
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * _strncpy(char * _Dest, char * _Source, size_t _Count)
    ADD ESP,0xc                         ; 1000c289
    JMP 0x1000c2e3                      ; 1000c28c
        ;   XREF to: 1000c2e3 (UNCONDITIONAL_JUMP)  ; LAB_1000c2e3
    TEST ECX,ECX                        ; 1000c28e
        ;   Label: LAB_1000c28e
    JNZ 0x1000c2c6                      ; 1000c290
        ;   XREF to: 1000c2c6 (CONDITIONAL_JUMP)  ; LAB_1000c2c6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 1000c292
    PUSH 0x0                            ; 1000c296
    PUSH 0x0                            ; 1000c298
    MOV EBP,dword ptr [0x10242220]      ; 1000c29a | PTR_MultiByteToWideChar_10242220
    PUSH EDI                            ; 1000c2a0
    PUSH ESI                            ; 1000c2a1
    PUSH 0x1                            ; 1000c2a2
    PUSH EAX                            ; 1000c2a4
    CALL EBP                            ; 1000c2a5 | int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, ...)
    MOV EDI,EAX                         ; 1000c2a7
    TEST EDI,EDI                        ; 1000c2a9
    JNZ 0x1000c2e3                      ; 1000c2ab
        ;   XREF to: 1000c2e3 (CONDITIONAL_JUMP)  ; LAB_1000c2e3
    PUSH EBX                            ; 1000c2ad
        ;   Label: LAB_1000c2ad
    CALL FUN_10005b30                   ; 1000c2ae
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000c2b3
    PUSH ESI                            ; 1000c2b6
    CALL FUN_10005b30                   ; 1000c2b7
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000c2bc
    XOR EAX,EAX                         ; 1000c2bf
    POP EBP                             ; 1000c2c1
        ;   Label: LAB_1000c2c1
    POP EDI                             ; 1000c2c2
    POP ESI                             ; 1000c2c3
    POP EBX                             ; 1000c2c4
    RET                                 ; 1000c2c5
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000c2c6
        ;   Label: LAB_1000c2c6
    PUSH ECX                            ; 1000c2ca
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000c2cb
    PUSH EAX                            ; 1000c2cf
    PUSH EDI                            ; 1000c2d0
    MOV EBP,dword ptr [0x10242220]      ; 1000c2d1 | PTR_MultiByteToWideChar_10242220
    PUSH ESI                            ; 1000c2d7
    PUSH 0x1                            ; 1000c2d8
    PUSH ECX                            ; 1000c2da
    CALL EBP                            ; 1000c2db | int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, ...)
    MOV EDI,EAX                         ; 1000c2dd
    TEST EDI,EDI                        ; 1000c2df
    JZ 0x1000c2ad                       ; 1000c2e1
        ;   XREF to: 1000c2ad (CONDITIONAL_JUMP)  ; LAB_1000c2ad
    PUSH EBX                            ; 1000c2e3
        ;   Label: LAB_1000c2e3
    CALL FUN_10005b30                   ; 1000c2e4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000c2e9
    PUSH ESI                            ; 1000c2ec
    CALL FUN_10005b30                   ; 1000c2ed
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000c2f2
    MOV EAX,EDI                         ; 1000c2f5
    POP EBP                             ; 1000c2f7
    POP EDI                             ; 1000c2f8
    POP ESI                             ; 1000c2f9
    POP EBX                             ; 1000c2fa
    RET                                 ; 1000c2fb

