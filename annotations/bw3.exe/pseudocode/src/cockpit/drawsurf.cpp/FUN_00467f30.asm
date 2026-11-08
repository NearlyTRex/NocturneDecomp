; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00467f30(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00468530 at 0046859c
;   FUN_00468620 at 004687a5
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01bdd7cc
;   undefined4 DAT_01bdd7dc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467f30
        ;   Label: FUN_00467f30
    PUSH ESI                            ; 00467f31
    PUSH EDI                            ; 00467f32
    PUSH EBP                            ; 00467f33
    MOV EDX,dword ptr [ESP + 0x14]      ; 00467f34
    MOV EAX,dword ptr [ESP + 0x18]      ; 00467f38
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00467f3c
    MOV EBX,dword ptr [EDX + 0x8]       ; 00467f40
    MOV ESI,dword ptr [EDX + 0xc]       ; 00467f43
    MOV EDI,dword ptr [EDX + 0x10]      ; 00467f46
    ADD EAX,EBX                         ; 00467f49
    ADD ECX,ESI                         ; 00467f4b
    CMP EAX,EDI                         ; 00467f4d
    JL 0x00467f9b                       ; 00467f4f
        ;   XREF to: 00467f9b (CONDITIONAL_JUMP)  ; LAB_00467f9b
    CMP EAX,dword ptr [EDX + 0x18]      ; 00467f51
    JG 0x00467f9b                       ; 00467f54
        ;   XREF to: 00467f9b (CONDITIONAL_JUMP)  ; LAB_00467f9b
    CMP ECX,dword ptr [EDX + 0x14]      ; 00467f56
    JL 0x00467f9b                       ; 00467f59
        ;   XREF to: 00467f9b (CONDITIONAL_JUMP)  ; LAB_00467f9b
    CMP ECX,dword ptr [EDX + 0x1c]      ; 00467f5b
    JG 0x00467f9b                       ; 00467f5e
        ;   XREF to: 00467f9b (CONDITIONAL_JUMP)  ; LAB_00467f9b
    MOV EDI,dword ptr [0x01bdd7c8]      ; 00467f60 | DAT_01bdd7c8
    LEA ESI,[EAX + EAX*0x1]             ; 00467f66
    SHL ECX,0x2                         ; 00467f69
    LEA EBX,[EAX*0x4 + 0x0]             ; 00467f6c
    TEST EDI,EDI                        ; 00467f73
    JNZ 0x00468042                      ; 00467f75
        ;   XREF to: 00468042 (CONDITIONAL_JUMP)  ; LAB_00468042
    MOV EDX,dword ptr [0x005fba20]      ; 00467f7b | DAT_005fba20
    CMP EDX,0x10                        ; 00467f81
    JNC 0x00467ff2                      ; 00467f84
        ;   XREF to: 00467ff2 (CONDITIONAL_JUMP)  ; LAB_00467ff2
    CMP EDX,0x8                         ; 00467f86
    JNZ 0x00467fca                      ; 00467f89
        ;   XREF to: 00467fca (CONDITIONAL_JUMP)  ; LAB_00467fca
    MOV EDX,dword ptr [ECX + 0x1c5faec] ; 00467f8b
    ADD EAX,EDX                         ; 00467f91
    MOV DL,byte ptr [0x01bdd7bc]        ; 00467f93 | DAT_01bdd7bc
    MOV byte ptr [EAX],DL               ; 00467f99
    POP EBP                             ; 00467f9b
        ;   Label: LAB_00467f9b
    POP EDI                             ; 00467f9c
    POP ESI                             ; 00467f9d
    POP EBX                             ; 00467f9e
    RET                                 ; 00467f9f
    MOV EAX,dword ptr [ECX + 0x1c5faec] ; 00467fa0
        ;   Label: LAB_00467fa0
    ADD ESI,EAX                         ; 00467fa6
    MOV AX,[0x01bdd7bc]                 ; 00467fa8 | DAT_01bdd7bc
    MOV word ptr [ESI],AX               ; 00467fae
    POP EBP                             ; 00467fb1
    POP EDI                             ; 00467fb2
    POP ESI                             ; 00467fb3
    POP EBX                             ; 00467fb4
    RET                                 ; 00467fb5
    MOV EAX,dword ptr [ECX + 0x1c5faec] ; 00467fb6
        ;   Label: LAB_00467fb6
    ADD EBX,EAX                         ; 00467fbc
    MOV EAX,[0x01bdd7bc]                ; 00467fbe | DAT_01bdd7bc
    MOV dword ptr [EBX],EAX             ; 00467fc3
    POP EBP                             ; 00467fc5
    POP EDI                             ; 00467fc6
    POP ESI                             ; 00467fc7
    POP EBX                             ; 00467fc8
    RET                                 ; 00467fc9
    MOV ECX,0x5bc212                    ; 00467fca
        ;   Label: LAB_00467fca
    MOV EBX,0x18e                       ; 00467fcf
    PUSH 0x5bc22a                       ; 00467fd4
    MOV dword ptr [0x01d71de0],ECX      ; 00467fd9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00467fdf | DAT_01d71de4
    CALL FUN_004e4330                   ; 00467fe5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00467fea
    POP EBP                             ; 00467fed
    POP EDI                             ; 00467fee
    POP ESI                             ; 00467fef
    POP EBX                             ; 00467ff0
    RET                                 ; 00467ff1
    JBE 0x00467fa0                      ; 00467ff2
        ;   XREF to: 00467fa0 (CONDITIONAL_JUMP)  ; LAB_00467fa0
        ;   Label: LAB_00467ff2
    CMP EDX,0x20                        ; 00467ff4
    JZ 0x00467fb6                       ; 00467ff7
        ;   XREF to: 00467fb6 (CONDITIONAL_JUMP)  ; LAB_00467fb6
    JMP 0x00467fca                      ; 00467ff9
        ;   XREF to: 00467fca (UNCONDITIONAL_JUMP)  ; LAB_00467fca
    MOV EAX,dword ptr [ECX + 0x1c5faec] ; 00467ffb
        ;   Label: LAB_00467ffb
    XOR EDX,EDX                         ; 00468001
    MOV CL,byte ptr [0x01bdd7cc]        ; 00468003 | DAT_01bdd7cc
    MOV DX,word ptr [ESI + EAX*0x1]     ; 00468009
    MOV EBP,dword ptr [0x01bdd7dc]      ; 0046800d | DAT_01bdd7dc
    SHR EDX,CL                          ; 00468013
    AND EDX,EBP                         ; 00468015
    MOV word ptr [ESI + EAX*0x1],DX     ; 00468017
    POP EBP                             ; 0046801b
    POP EDI                             ; 0046801c
    POP ESI                             ; 0046801d
    POP EBX                             ; 0046801e
    RET                                 ; 0046801f
    MOV EDX,dword ptr [ECX + 0x1c5faec] ; 00468020
        ;   Label: LAB_00468020
    MOV CL,byte ptr [0x01bdd7cc]        ; 00468026 | DAT_01bdd7cc
    MOV EAX,dword ptr [EDX + EBX*0x1]   ; 0046802c
    SHR EAX,CL                          ; 0046802f
    MOV ECX,EAX                         ; 00468031
    MOV EAX,[0x01bdd7dc]                ; 00468033 | DAT_01bdd7dc
    AND ECX,EAX                         ; 00468038
    MOV dword ptr [EDX + EBX*0x1],ECX   ; 0046803a
    POP EBP                             ; 0046803d
    POP EDI                             ; 0046803e
    POP ESI                             ; 0046803f
    POP EBX                             ; 00468040
    RET                                 ; 00468041
    MOV EAX,[0x005fba20]                ; 00468042 | DAT_005fba20
        ;   Label: LAB_00468042
    CMP EAX,0x10                        ; 00468047
    JNC 0x00468057                      ; 0046804a
        ;   XREF to: 00468057 (CONDITIONAL_JUMP)  ; LAB_00468057
    CMP EAX,0x8                         ; 0046804c
    JZ 0x00467f9b                       ; 0046804f
        ;   XREF to: 00467f9b (CONDITIONAL_JUMP)  ; LAB_00467f9b
    JMP 0x0046805e                      ; 00468055
        ;   XREF to: 0046805e (UNCONDITIONAL_JUMP)  ; LAB_0046805e
    JBE 0x00467ffb                      ; 00468057
        ;   XREF to: 00467ffb (CONDITIONAL_JUMP)  ; LAB_00467ffb
        ;   Label: LAB_00468057
    CMP EAX,0x20                        ; 00468059
    JZ 0x00468020                       ; 0046805c
        ;   XREF to: 00468020 (CONDITIONAL_JUMP)  ; LAB_00468020
    MOV EAX,0x5bc240                    ; 0046805e
        ;   Label: LAB_0046805e
    MOV EDX,0x19f                       ; 00468063
    PUSH 0x5bc258                       ; 00468068
    MOV [0x01d71de0],EAX                ; 0046806d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00468072 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00468078
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0046807d
    POP EBP                             ; 00468080
    POP EDI                             ; 00468081
    POP ESI                             ; 00468082
    POP EBX                             ; 00468083
    RET                                 ; 00468084

