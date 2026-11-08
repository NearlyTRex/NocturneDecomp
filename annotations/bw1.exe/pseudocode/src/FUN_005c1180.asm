; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c1180(char *param_1,int param_2,int param_3)
;
;
; XREF[19]:
;   FUN_00420140 at 00420162
;   FUN_0043e6d0 at 0043e71f
;   FUN_00454ab0 at 00454ad1
;   FUN_004aa610 at 004aa63c
;   FUN_004b7370 at 004b73a4
;   FUN_004bcba0 at 004bccad
;   FUN_004d6990 at 004d6d97
;   FUN_004d8e50 at 004d8efc
;   FUN_004e6680 at 004e669c
;   FUN_004f4370 at 004f442b
;   ... and 9 more
;
; Referenced Globals:
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;
; Called Functions:
;   FUN_005c0530
;   FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1180
        ;   Label: FUN_005c1180
    PUSH ESI                            ; 005c1181
    PUSH EDI                            ; 005c1182
    PUSH EBP                            ; 005c1183
    SUB ESP,0x8                         ; 005c1184
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005c1187
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c118b
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c118f
    MOV EDX,dword ptr [EDI + 0x10]      ; 005c1193
    PUSH EDX                            ; 005c1196
    CALL dword ptr [0x00626600]         ; 005c1197 | PTR_FUN_00626600
    MOV EAX,dword ptr [EDI + 0xc]       ; 005c119d
    ADD ESP,0x4                         ; 005c11a0
    AND EAX,0x30                        ; 005c11a3
    MOV dword ptr [ESP + 0x4],EAX       ; 005c11a6
    MOV AH,byte ptr [EDI + 0xc]         ; 005c11aa
    AND AH,0xcf                         ; 005c11ad
    MOV EBX,EBP                         ; 005c11b0
    MOV byte ptr [EDI + 0xc],AH         ; 005c11b2
    DEC ESI                             ; 005c11b5
        ;   Label: LAB_005c11b5
    TEST ESI,ESI                        ; 005c11b6
    JLE 0x005c11d6                      ; 005c11b8
        ;   XREF to: 005c11d6 (CONDITIONAL_JUMP)  ; LAB_005c11d6
    PUSH EDI                            ; 005c11ba
    CALL FUN_005c0530                   ; 005c11bb
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 005c11c0
    MOV dword ptr [ESP],EAX             ; 005c11c3
    CMP EAX,-0x1                        ; 005c11c6
    JZ 0x005c11d6                       ; 005c11c9
        ;   XREF to: 005c11d6 (CONDITIONAL_JUMP)  ; LAB_005c11d6
    INC EBX                             ; 005c11cb
    MOV AL,byte ptr [ESP]               ; 005c11cc
    MOV byte ptr [EBX + -0x1],AL        ; 005c11cf
    CMP AL,0xa                          ; 005c11d2
    JNZ 0x005c11b5                      ; 005c11d4
        ;   XREF to: 005c11b5 (CONDITIONAL_JUMP)  ; LAB_005c11b5
    CMP dword ptr [ESP],-0x1            ; 005c11d6
        ;   Label: LAB_005c11d6
    JNZ 0x005c11ea                      ; 005c11da
        ;   XREF to: 005c11ea (CONDITIONAL_JUMP)  ; LAB_005c11ea
    CMP EBX,EBP                         ; 005c11dc
    JZ 0x005c11e6                       ; 005c11de
        ;   XREF to: 005c11e6 (CONDITIONAL_JUMP)  ; LAB_005c11e6
    TEST byte ptr [EDI + 0xc],0x20      ; 005c11e0
    JZ 0x005c11ea                       ; 005c11e4
        ;   XREF to: 005c11ea (CONDITIONAL_JUMP)  ; LAB_005c11ea
    XOR EBP,EBP                         ; 005c11e6
        ;   Label: LAB_005c11e6
    JMP 0x005c11ed                      ; 005c11e8
        ;   XREF to: 005c11ed (UNCONDITIONAL_JUMP)  ; LAB_005c11ed
    MOV byte ptr [EBX],0x0              ; 005c11ea
        ;   Label: LAB_005c11ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c11ed
        ;   Label: LAB_005c11ed
    MOV ESI,dword ptr [EDI + 0xc]       ; 005c11f1
    OR ESI,EAX                          ; 005c11f4
    MOV EAX,dword ptr [EDI + 0x10]      ; 005c11f6
    PUSH EAX                            ; 005c11f9
    MOV dword ptr [EDI + 0xc],ESI       ; 005c11fa
    CALL dword ptr [0x00626604]         ; 005c11fd | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c1203
    MOV EAX,EBP                         ; 005c1206
    ADD ESP,0x8                         ; 005c1208
    POP EBP                             ; 005c120b
    POP EDI                             ; 005c120c
    POP ESI                             ; 005c120d
    POP EBX                             ; 005c120e
    RET                                 ; 005c120f

