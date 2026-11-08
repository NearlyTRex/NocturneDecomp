; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005af1d0(undefined4 *param_1,short *param_2,uint param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_005ac558 at 005ac500
;
; Called Functions:
;   FUN_005ad320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af1d0
        ;   Label: FUN_005af1d0
    PUSH ESI                            ; 005af1d1
    PUSH EDI                            ; 005af1d2
    PUSH EBP                            ; 005af1d3
    SUB ESP,0x4                         ; 005af1d4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005af1d7
    MOV EDX,dword ptr [ESP + 0x18]      ; 005af1db
    XOR EBP,EBP                         ; 005af1df
    TEST EDX,EDX                        ; 005af1e1
    JZ 0x005af260                       ; 005af1e3
        ;   XREF to: 005af260 (CONDITIONAL_JUMP)  ; LAB_005af260
    CMP dword ptr [ESP + 0x20],0x0      ; 005af1e9
        ;   Label: LAB_005af1e9
    JBE 0x005af287                      ; 005af1ee
        ;   XREF to: 005af287 (CONDITIONAL_JUMP)  ; LAB_005af287
    MOV CX,word ptr [EBX]               ; 005af1f4
    TEST CX,CX                          ; 005af1f7
    JZ 0x005af222                       ; 005af1fa
        ;   XREF to: 005af222 (CONDITIONAL_JUMP)  ; LAB_005af222
    XOR EAX,EAX                         ; 005af1fc
    MOV AX,CX                           ; 005af1fe
    PUSH EAX                            ; 005af201
    LEA EAX,[ESP + 0x4]                 ; 005af202
    PUSH EAX                            ; 005af206
    CALL FUN_005ad320                   ; 005af207
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad320()
    MOV EDX,EAX                         ; 005af20c
    ADD ESP,0x8                         ; 005af20e
    CMP EAX,-0x1                        ; 005af211
    JZ 0x005af289                       ; 005af214
        ;   XREF to: 005af289 (CONDITIONAL_JUMP)  ; LAB_005af289
    CMP EAX,dword ptr [ESP + 0x20]      ; 005af21a
    JA 0x005af287                       ; 005af21e
        ;   XREF to: 005af287 (CONDITIONAL_JUMP)  ; LAB_005af287
    JMP 0x005af22b                      ; 005af220
        ;   XREF to: 005af22b (UNCONDITIONAL_JUMP)  ; LAB_005af22b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005af222
        ;   Label: LAB_005af222
    MOV byte ptr [EAX],0x0              ; 005af226
    JMP 0x005af287                      ; 005af229
        ;   XREF to: 005af287 (UNCONDITIONAL_JUMP)  ; LAB_005af287
    MOV ESI,ESP                         ; 005af22b
        ;   Label: LAB_005af22b
    MOV EDI,dword ptr [ESP + 0x18]      ; 005af22d
    MOV ECX,EAX                         ; 005af231
    PUSH ES                             ; 005af233
    MOV AX,DS                           ; 005af234
    MOV ES,AX                           ; 005af236
    PUSH EDI                            ; 005af238
    MOV EAX,ECX                         ; 005af239
    SHR ECX,0x2                         ; 005af23b
    MOVSD.REP ES:EDI,ESI                ; 005af23e
    MOV CL,AL                           ; 005af240
    AND CL,0x3                          ; 005af242
    MOVSB.REP ES:EDI,ESI                ; 005af245
    POP EDI                             ; 005af247
    POP ES                              ; 005af248
    ADD EBX,0x2                         ; 005af249
    ADD EBP,EDX                         ; 005af24c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005af24e
    ADD EDI,EDX                         ; 005af252
    SUB EAX,EDX                         ; 005af254
    MOV dword ptr [ESP + 0x18],EDI      ; 005af256
    MOV dword ptr [ESP + 0x20],EAX      ; 005af25a
    JMP 0x005af1e9                      ; 005af25e
        ;   XREF to: 005af1e9 (UNCONDITIONAL_JUMP)  ; LAB_005af1e9
    MOV DX,word ptr [EBX]               ; 005af260
        ;   Label: LAB_005af260
    TEST DX,DX                          ; 005af263
    JZ 0x005af287                       ; 005af266
        ;   XREF to: 005af287 (CONDITIONAL_JUMP)  ; LAB_005af287
    XOR EAX,EAX                         ; 005af268
    MOV AX,DX                           ; 005af26a
    PUSH EAX                            ; 005af26d
    LEA EAX,[ESP + 0x4]                 ; 005af26e
    PUSH EAX                            ; 005af272
    CALL FUN_005ad320                   ; 005af273
        ;   XREF to: 005ad320 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad320()
    ADD ESP,0x8                         ; 005af278
    CMP EAX,-0x1                        ; 005af27b
    JZ 0x005af289                       ; 005af27e
        ;   XREF to: 005af289 (CONDITIONAL_JUMP)  ; LAB_005af289
    ADD EBX,0x2                         ; 005af280
    ADD EBP,EAX                         ; 005af283
    JMP 0x005af260                      ; 005af285
        ;   XREF to: 005af260 (UNCONDITIONAL_JUMP)  ; LAB_005af260
    MOV EAX,EBP                         ; 005af287
        ;   Label: LAB_005af287
    ADD ESP,0x4                         ; 005af289
        ;   Label: LAB_005af289
    POP EBP                             ; 005af28c
    POP EDI                             ; 005af28d
    POP ESI                             ; 005af28e
    POP EBX                             ; 005af28f
    RET                                 ; 005af290

