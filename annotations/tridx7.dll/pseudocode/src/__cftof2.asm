; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * __cftof2(undefined1 *param_1,uint param_2,int *param_3,char param_4)
;
;
; XREF[2]:
;   __cftof at 100071f8
;   __cftog at 1000734d
;
; Referenced Globals:
;   undefined1 DAT_10017694
;
; Called Functions:
;   __shift
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10007210
        ;   Label: __cftof2
    PUSH ESI                            ; 10007211
    MOV ESI,dword ptr [ESP + 0x14]      ; 10007212
    PUSH EDI                            ; 10007216
    PUSH EBP                            ; 10007217
    MOV ECX,dword ptr [ESI + 0x4]       ; 10007218
    DEC ECX                             ; 1000721b
    CMP byte ptr [ESP + 0x20],0x0       ; 1000721c
    JZ 0x10007248                       ; 10007221
        ;   XREF to: 10007248 (CONDITIONAL_JUMP)  ; LAB_10007248
    MOV EAX,dword ptr [ESI]             ; 10007223
    MOV EBX,dword ptr [ESP + 0x14]      ; 10007225
    SUB EAX,0x2d                        ; 10007229
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000722c
    CMP EAX,0x1                         ; 10007230
    SBB EAX,EAX                         ; 10007233
    NEG EAX                             ; 10007235
    ADD EAX,EBX                         ; 10007237
    CMP EBP,ECX                         ; 10007239
    JNZ 0x10007250                      ; 1000723b
        ;   XREF to: 10007250 (CONDITIONAL_JUMP)  ; LAB_10007250
    ADD EAX,ECX                         ; 1000723d
    MOV byte ptr [EAX],0x30             ; 1000723f
    MOV byte ptr [EAX + 0x1],0x0        ; 10007242
    JMP 0x10007250                      ; 10007246
        ;   XREF to: 10007250 (UNCONDITIONAL_JUMP)  ; LAB_10007250
    MOV EBX,dword ptr [ESP + 0x14]      ; 10007248
        ;   Label: LAB_10007248
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000724c
    MOV EDI,EBX                         ; 10007250
        ;   Label: LAB_10007250
    CMP dword ptr [ESI],0x2d            ; 10007252
    JNZ 0x1000725d                      ; 10007255
        ;   XREF to: 1000725d (CONDITIONAL_JUMP)  ; LAB_1000725d
    LEA EDI,[EBX + 0x1]                 ; 10007257
    MOV byte ptr [EBX],0x2d             ; 1000725a
    MOV EAX,dword ptr [ESI + 0x4]       ; 1000725d
        ;   Label: LAB_1000725d
    TEST EAX,EAX                        ; 10007260
    JG 0x10007276                       ; 10007262
        ;   XREF to: 10007276 (CONDITIONAL_JUMP)  ; LAB_10007276
    PUSH 0x1                            ; 10007264
    PUSH EDI                            ; 10007266
    INC EDI                             ; 10007267
    CALL __shift                        ; 10007268
        ;   XREF to: 100073f0 (UNCONDITIONAL_CALL)  ; undefined __shift()
    ADD ESP,0x8                         ; 1000726d
    MOV byte ptr [EDI + -0x1],0x30      ; 10007270
    JMP 0x10007278                      ; 10007274
        ;   XREF to: 10007278 (UNCONDITIONAL_JUMP)  ; LAB_10007278
    ADD EDI,EAX                         ; 10007276
        ;   Label: LAB_10007276
    TEST EBP,EBP                        ; 10007278
        ;   Label: LAB_10007278
    JLE 0x100072c7                      ; 1000727a
        ;   XREF to: 100072c7 (CONDITIONAL_JUMP)  ; LAB_100072c7
    PUSH 0x1                            ; 1000727c
    PUSH EDI                            ; 1000727e
    INC EDI                             ; 1000727f
    CALL __shift                        ; 10007280
        ;   XREF to: 100073f0 (UNCONDITIONAL_CALL)  ; undefined __shift()
    ADD ESP,0x8                         ; 10007285
    MOV AL,[0x10017694]                 ; 10007288 | DAT_10017694
    MOV byte ptr [EDI + -0x1],AL        ; 1000728d
    MOV ESI,dword ptr [ESI + 0x4]       ; 10007290
    TEST ESI,ESI                        ; 10007293
    JGE 0x100072c7                      ; 10007295
        ;   XREF to: 100072c7 (CONDITIONAL_JUMP)  ; LAB_100072c7
    CMP byte ptr [ESP + 0x20],0x0       ; 10007297
    JZ 0x100072a2                       ; 1000729c
        ;   XREF to: 100072a2 (CONDITIONAL_JUMP)  ; LAB_100072a2
    NEG ESI                             ; 1000729e
    JMP 0x100072aa                      ; 100072a0
        ;   XREF to: 100072aa (UNCONDITIONAL_JUMP)  ; LAB_100072aa
    NEG ESI                             ; 100072a2
        ;   Label: LAB_100072a2
    CMP ESI,EBP                         ; 100072a4
    JL 0x100072aa                       ; 100072a6
        ;   XREF to: 100072aa (CONDITIONAL_JUMP)  ; LAB_100072aa
    MOV ESI,EBP                         ; 100072a8
    PUSH ESI                            ; 100072aa
        ;   Label: LAB_100072aa
    PUSH EDI                            ; 100072ab
    CALL __shift                        ; 100072ac
        ;   XREF to: 100073f0 (UNCONDITIONAL_CALL)  ; undefined __shift()
    ADD ESP,0x8                         ; 100072b1
    MOV EAX,0x30303030                  ; 100072b4
    MOV ECX,ESI                         ; 100072b9
    SHR ECX,0x2                         ; 100072bb
    STOSD.REP ES:EDI                    ; 100072be
    MOV ECX,ESI                         ; 100072c0
    AND ECX,0x3                         ; 100072c2
    STOSB.REP ES:EDI                    ; 100072c5
    MOV EAX,EBX                         ; 100072c7
        ;   Label: LAB_100072c7
    POP EBP                             ; 100072c9
    POP EDI                             ; 100072ca
    POP ESI                             ; 100072cb
    POP EBX                             ; 100072cc
    RET                                 ; 100072cd

