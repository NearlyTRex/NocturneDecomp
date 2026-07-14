; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000fe60(byte *param_1)
;
;
; XREF[2]:
;   FUN_1000ff10 at 1000ff15
;   FUN_10010050 at 1001024f
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_10017690
;
; Called Functions:
;   __isctype
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000fe60
        ;   Label: FUN_1000fe60
    PUSH ESI                            ; 1000fe61
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000fe62
    PUSH EDI                            ; 1000fe66
    PUSH EBP                            ; 1000fe67
    MOV EDI,0x1                         ; 1000fe68
    CMP dword ptr [0x10017690],EDI      ; 1000fe6d | DAT_10017690
        ;   Label: LAB_1000fe6d
    JLE 0x1000fe86                      ; 1000fe73
        ;   XREF to: 1000fe86 (CONDITIONAL_JUMP)  ; LAB_1000fe86
    PUSH 0x8                            ; 1000fe75
    XOR EAX,EAX                         ; 1000fe77
    MOV AL,byte ptr [ESI]               ; 1000fe79
    PUSH EAX                            ; 1000fe7b
    CALL __isctype                      ; 1000fe7c
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000fe81
    JMP 0x1000fe99                      ; 1000fe84
        ;   XREF to: 1000fe99 (UNCONDITIONAL_JUMP)  ; LAB_1000fe99
    XOR EDX,EDX                         ; 1000fe86
        ;   Label: LAB_1000fe86
    MOV ECX,dword ptr [0x10017480]      ; 1000fe88 | PTR_DAT_10017480
    MOV DL,byte ptr [ESI]               ; 1000fe8e
    XOR EAX,EAX                         ; 1000fe90
    MOV AX,word ptr [ECX + EDX*0x2]     ; 1000fe92 | DAT_1001748a
    AND EAX,0x8                         ; 1000fe96
    TEST EAX,EAX                        ; 1000fe99
        ;   Label: LAB_1000fe99
    JZ 0x1000fea0                       ; 1000fe9b
        ;   XREF to: 1000fea0 (CONDITIONAL_JUMP)  ; LAB_1000fea0
    INC ESI                             ; 1000fe9d
    JMP 0x1000fe6d                      ; 1000fe9e
        ;   XREF to: 1000fe6d (UNCONDITIONAL_JUMP)  ; LAB_1000fe6d
    XOR EBX,EBX                         ; 1000fea0
        ;   Label: LAB_1000fea0
    MOV BL,byte ptr [ESI]               ; 1000fea2
    INC ESI                             ; 1000fea4
    MOV EDI,EBX                         ; 1000fea5
    CMP EBX,0x2d                        ; 1000fea7
    JZ 0x1000feb1                       ; 1000feaa
        ;   XREF to: 1000feb1 (CONDITIONAL_JUMP)  ; LAB_1000feb1
    CMP EBX,0x2b                        ; 1000feac
    JNZ 0x1000feb6                      ; 1000feaf
        ;   XREF to: 1000feb6 (CONDITIONAL_JUMP)  ; LAB_1000feb6
    XOR EBX,EBX                         ; 1000feb1
        ;   Label: LAB_1000feb1
    MOV BL,byte ptr [ESI]               ; 1000feb3
    INC ESI                             ; 1000feb5
    XOR EBP,EBP                         ; 1000feb6
        ;   Label: LAB_1000feb6
    CMP dword ptr [0x10017690],0x1      ; 1000feb8 | DAT_10017690
        ;   Label: LAB_1000feb8
    JLE 0x1000fece                      ; 1000febf
        ;   XREF to: 1000fece (CONDITIONAL_JUMP)  ; LAB_1000fece
    PUSH 0x4                            ; 1000fec1
    PUSH EBX                            ; 1000fec3
    CALL __isctype                      ; 1000fec4
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000fec9
    JMP 0x1000fedd                      ; 1000fecc
        ;   XREF to: 1000fedd (UNCONDITIONAL_JUMP)  ; LAB_1000fedd
    MOV ECX,dword ptr [0x10017480]      ; 1000fece | PTR_DAT_10017480
        ;   Label: LAB_1000fece
    XOR EAX,EAX                         ; 1000fed4
    MOV AX,word ptr [ECX + EBX*0x2]     ; 1000fed6 | DAT_1001748a
    AND EAX,0x4                         ; 1000feda
    TEST EAX,EAX                        ; 1000fedd
        ;   Label: LAB_1000fedd
    JZ 0x1000fef1                       ; 1000fedf
        ;   XREF to: 1000fef1 (CONDITIONAL_JUMP)  ; LAB_1000fef1
    LEA EAX,[EBP + EBP*0x4]             ; 1000fee1
    INC ESI                             ; 1000fee5
    LEA EBP,[EBX + EAX*0x2 + -0x30]     ; 1000fee6
    XOR EBX,EBX                         ; 1000feea
    MOV BL,byte ptr [ESI + -0x1]        ; 1000feec
    JMP 0x1000feb8                      ; 1000feef
        ;   XREF to: 1000feb8 (UNCONDITIONAL_JUMP)  ; LAB_1000feb8
    MOV EAX,EBP                         ; 1000fef1
        ;   Label: LAB_1000fef1
    CMP EDI,0x2d                        ; 1000fef3
    JNZ 0x1000feff                      ; 1000fef6
        ;   XREF to: 1000feff (CONDITIONAL_JUMP)  ; LAB_1000feff
    NEG EAX                             ; 1000fef8
    POP EBP                             ; 1000fefa
    POP EDI                             ; 1000fefb
    POP ESI                             ; 1000fefc
    POP EBX                             ; 1000fefd
    RET                                 ; 1000fefe
    POP EBP                             ; 1000feff
        ;   Label: LAB_1000feff
    POP EDI                             ; 1000ff00
    POP ESI                             ; 1000ff01
    POP EBX                             ; 1000ff02
    RET                                 ; 1000ff03

