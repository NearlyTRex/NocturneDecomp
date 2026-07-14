; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000f9a0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)
;
;
; XREF[2]:
;   FUN_1000e350 at 1000e52d
;   FUN_1000f6e0 at 1000f7f5
;
; Referenced Globals:
;   undefined4 DAT_10017770
;   undefined4 DAT_10018254
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;   void* PTR_GetLocaleInfoA_1024227c = 00242732
;   void* PTR_GetLocaleInfoW_10242280 = 00242744
;
; Called Functions:
;   FUN_10005b30
;   FUN_10008830
;   GetLocaleInfoA
;   GetLocaleInfoW
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000f9a0
        ;   Label: FUN_1000f9a0
    MOV EAX,[0x10018254]                ; 1000f9a1 | DAT_10018254
    PUSH ESI                            ; 1000f9a6
    TEST EAX,EAX                        ; 1000f9a7
    PUSH EDI                            ; 1000f9a9
    PUSH EBP                            ; 1000f9aa
    JNZ 0x1000f9e8                      ; 1000f9ab
        ;   XREF to: 1000f9e8 (CONDITIONAL_JUMP)  ; LAB_1000f9e8
    PUSH 0x0                            ; 1000f9ad
    MOV ESI,dword ptr [0x10242280]      ; 1000f9af | PTR_GetLocaleInfoW_10242280
    PUSH 0x0                            ; 1000f9b5
    PUSH 0x1                            ; 1000f9b7
    PUSH 0x0                            ; 1000f9b9
    CALL ESI                            ; 1000f9bb | int GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
    TEST EAX,EAX                        ; 1000f9bd
    JZ 0x1000f9c8                       ; 1000f9bf
        ;   XREF to: 1000f9c8 (CONDITIONAL_JUMP)  ; LAB_1000f9c8
    MOV EAX,0x1                         ; 1000f9c1
    JMP 0x1000f9ee                      ; 1000f9c6
        ;   XREF to: 1000f9ee (UNCONDITIONAL_JUMP)  ; LAB_1000f9ee
    PUSH 0x0                            ; 1000f9c8
        ;   Label: LAB_1000f9c8
    PUSH 0x0                            ; 1000f9ca
    PUSH 0x1                            ; 1000f9cc
    PUSH 0x0                            ; 1000f9ce
    CALL dword ptr [0x1024227c]         ; 1000f9d0 | PTR_GetLocaleInfoA_1024227c
    TEST EAX,EAX                        ; 1000f9d6
    JZ 0x1000f9e1                       ; 1000f9d8
        ;   XREF to: 1000f9e1 (CONDITIONAL_JUMP)  ; LAB_1000f9e1
    MOV EAX,0x2                         ; 1000f9da
    JMP 0x1000f9ee                      ; 1000f9df
        ;   XREF to: 1000f9ee (UNCONDITIONAL_JUMP)  ; LAB_1000f9ee
    XOR EAX,EAX                         ; 1000f9e1
        ;   Label: LAB_1000f9e1
    POP EBP                             ; 1000f9e3
    POP EDI                             ; 1000f9e4
    POP ESI                             ; 1000f9e5
    POP EBX                             ; 1000f9e6
    RET                                 ; 1000f9e7
    MOV ESI,dword ptr [0x10242280]      ; 1000f9e8 | PTR_GetLocaleInfoW_10242280
        ;   Label: LAB_1000f9e8
    MOV [0x10018254],EAX                ; 1000f9ee | DAT_10018254
        ;   Label: LAB_1000f9ee
    CMP EAX,0x1                         ; 1000f9f3
    JNZ 0x1000fa13                      ; 1000f9f6
        ;   XREF to: 1000fa13 (CONDITIONAL_JUMP)  ; LAB_1000fa13
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000f9f8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000f9fc
    MOV EDX,dword ptr [ESP + 0x18]      ; 1000fa00
    PUSH EAX                            ; 1000fa04
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000fa05
    PUSH ECX                            ; 1000fa09
    PUSH EDX                            ; 1000fa0a
    PUSH EBX                            ; 1000fa0b
    CALL ESI                            ; 1000fa0c | int GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
    POP EBP                             ; 1000fa0e
    POP EDI                             ; 1000fa0f
    POP ESI                             ; 1000fa10
    POP EBX                             ; 1000fa11
    RET                                 ; 1000fa12
    MOV [0x10018254],EAX                ; 1000fa13 | DAT_10018254
        ;   Label: LAB_1000fa13
    CMP EAX,0x2                         ; 1000fa18
    JNZ 0x1000faa1                      ; 1000fa1b
        ;   XREF to: 1000faa1 (CONDITIONAL_JUMP)  ; LAB_1000faa1
    MOV EDI,dword ptr [ESP + 0x24]      ; 1000fa21
    TEST EDI,EDI                        ; 1000fa25
    JNZ 0x1000fa2f                      ; 1000fa27
        ;   XREF to: 1000fa2f (CONDITIONAL_JUMP)  ; LAB_1000fa2f
    MOV EDI,dword ptr [0x10017770]      ; 1000fa29 | DAT_10017770
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000fa2f
        ;   Label: LAB_1000fa2f
    PUSH 0x0                            ; 1000fa33
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000fa35
    PUSH 0x0                            ; 1000fa39
    PUSH EAX                            ; 1000fa3b
    PUSH EBX                            ; 1000fa3c
    CALL dword ptr [0x1024227c]         ; 1000fa3d | PTR_GetLocaleInfoA_1024227c
    MOV EBP,EAX                         ; 1000fa43
    TEST EBP,EBP                        ; 1000fa45
    JNZ 0x1000fa50                      ; 1000fa47
        ;   XREF to: 1000fa50 (CONDITIONAL_JUMP)  ; LAB_1000fa50
    XOR EAX,EAX                         ; 1000fa49
    POP EBP                             ; 1000fa4b
    POP EDI                             ; 1000fa4c
    POP ESI                             ; 1000fa4d
    POP EBX                             ; 1000fa4e
    RET                                 ; 1000fa4f
    PUSH EBP                            ; 1000fa50
        ;   Label: LAB_1000fa50
    CALL FUN_10008830                   ; 1000fa51
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 1000fa56
    MOV ESI,EAX                         ; 1000fa59
    TEST ESI,ESI                        ; 1000fa5b
    JNZ 0x1000fa66                      ; 1000fa5d
        ;   XREF to: 1000fa66 (CONDITIONAL_JUMP)  ; LAB_1000fa66
    XOR EAX,EAX                         ; 1000fa5f
    POP EBP                             ; 1000fa61
    POP EDI                             ; 1000fa62
    POP ESI                             ; 1000fa63
    POP EBX                             ; 1000fa64
    RET                                 ; 1000fa65
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000fa66
        ;   Label: LAB_1000fa66
    PUSH EBP                            ; 1000fa6a
    PUSH ESI                            ; 1000fa6b
    PUSH EAX                            ; 1000fa6c
    PUSH EBX                            ; 1000fa6d
    CALL dword ptr [0x1024227c]         ; 1000fa6e | PTR_GetLocaleInfoA_1024227c
    TEST EAX,EAX                        ; 1000fa74
    JZ 0x1000fa96                       ; 1000fa76
        ;   XREF to: 1000fa96 (CONDITIONAL_JUMP)  ; LAB_1000fa96
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000fa78
    TEST EAX,EAX                        ; 1000fa7c
    JNZ 0x1000faa6                      ; 1000fa7e
        ;   XREF to: 1000faa6 (CONDITIONAL_JUMP)  ; LAB_1000faa6
    PUSH 0x0                            ; 1000fa80
    PUSH 0x0                            ; 1000fa82
    PUSH -0x1                           ; 1000fa84
    PUSH ESI                            ; 1000fa86
    PUSH 0x1                            ; 1000fa87
    PUSH EDI                            ; 1000fa89
    CALL dword ptr [0x10242220]         ; 1000fa8a | PTR_MultiByteToWideChar_10242220
    MOV EDI,EAX                         ; 1000fa90
    TEST EDI,EDI                        ; 1000fa92
    JNZ 0x1000fabe                      ; 1000fa94
        ;   XREF to: 1000fabe (CONDITIONAL_JUMP)  ; LAB_1000fabe
    PUSH ESI                            ; 1000fa96
        ;   Label: LAB_1000fa96
    CALL FUN_10005b30                   ; 1000fa97
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000fa9c
    XOR EAX,EAX                         ; 1000fa9f
    POP EBP                             ; 1000faa1
        ;   Label: LAB_1000faa1
    POP EDI                             ; 1000faa2
    POP ESI                             ; 1000faa3
    POP EBX                             ; 1000faa4
    RET                                 ; 1000faa5
    PUSH EAX                            ; 1000faa6
        ;   Label: LAB_1000faa6
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000faa7
    PUSH EAX                            ; 1000faab
    PUSH -0x1                           ; 1000faac
    PUSH ESI                            ; 1000faae
    PUSH 0x1                            ; 1000faaf
    PUSH EDI                            ; 1000fab1
    CALL dword ptr [0x10242220]         ; 1000fab2 | PTR_MultiByteToWideChar_10242220
    MOV EDI,EAX                         ; 1000fab8
    TEST EDI,EDI                        ; 1000faba
    JZ 0x1000fa96                       ; 1000fabc
        ;   XREF to: 1000fa96 (CONDITIONAL_JUMP)  ; LAB_1000fa96
    PUSH ESI                            ; 1000fabe
        ;   Label: LAB_1000fabe
    CALL FUN_10005b30                   ; 1000fabf
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 1000fac4
    MOV EAX,EDI                         ; 1000fac7
    POP EBP                             ; 1000fac9
    POP EDI                             ; 1000faca
    POP ESI                             ; 1000facb
    POP EBX                             ; 1000facc
    RET                                 ; 1000facd

