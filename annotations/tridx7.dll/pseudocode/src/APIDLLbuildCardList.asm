; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLbuildCardList(int *param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_101386b0
;   undefined4 DAT_101386b4
;   undefined4 DAT_10138ef0
;   undefined4 DAT_10138ef4
;   undefined4 DAT_101398d0
;   undefined4 DAT_10139ad0
;   undefined4 DAT_1020de34
;   undefined4 DAT_10236910
;   undefined4 DAT_10236b10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100052e0
        ;   Label: APIDLLbuildCardList
    PUSH EBX                            ; 100052e4
    PUSH ESI                            ; 100052e5
    MOV EBX,dword ptr [0x1020de34]      ; 100052e6 | DAT_1020de34
    PUSH EDI                            ; 100052ec
    MOV dword ptr [EAX],EBX             ; 100052ed
    PUSH EBP                            ; 100052ef
    TEST EBX,EBX                        ; 100052f0
    JLE 0x10005338                      ; 100052f2
        ;   XREF to: 10005338 (CONDITIONAL_JUMP)  ; LAB_10005338
    XOR EBP,EBP                         ; 100052f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 100052f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 100052fa
    MOV ESI,0x101386b0                  ; 100052fe | DAT_101386b0
    MOV EDI,dword ptr [ESP + 0x24]      ; 10005303
    MOV ECX,EBX                         ; 10005307
    MOVSD.REP ES:EDI,ESI                ; 10005309 | DAT_101386b0 | DAT_101386b4
    MOV ESI,0x10138ef0                  ; 1000530b | DAT_10138ef0
    MOV EDI,dword ptr [ESP + 0x20]      ; 10005310
    MOV ECX,EBX                         ; 10005314
    MOVSD.REP ES:EDI,ESI                ; 10005316 | DAT_10138ef0 | DAT_10138ef4
    LEA ECX,[EBP + 0x101398d0]          ; 10005318 | DAT_101398d0
        ;   Label: LAB_10005318
    ADD EBP,0x200                       ; 1000531e
    MOV dword ptr [EAX],ECX             ; 10005324 | DAT_101398d0 | DAT_10139ad0
    ADD EDX,0x4                         ; 10005326
    LEA ECX,[EBP + 0x10236710]          ; 10005329 | DAT_10236910
    ADD EAX,0x4                         ; 1000532f
    DEC EBX                             ; 10005332
    MOV dword ptr [EDX + -0x4],ECX      ; 10005333 | DAT_10236910 | DAT_10236b10
    JNZ 0x10005318                      ; 10005336
        ;   XREF to: 10005318 (CONDITIONAL_JUMP)  ; LAB_10005318
    MOV EAX,0x1                         ; 10005338
        ;   Label: LAB_10005338
    POP EBP                             ; 1000533d
    POP EDI                             ; 1000533e
    POP ESI                             ; 1000533f
    POP EBX                             ; 10005340
    RET                                 ; 10005341

