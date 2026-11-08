; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1180(int param_1)
;
;
; XREF[1]:
;   FUN_005a0b20 at 005a0bb9
;
; Referenced Globals:
;   undefined4 s_BChasing_005efcc2+1
;   undefined4 DAT_005efccf
;   undefined4 DAT_005fedb4
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_00503e60
;   FUN_0059d8e0
;   FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1180
        ;   Label: FUN_005a1180
    PUSH ESI                            ; 005a1181
    PUSH EDI                            ; 005a1182
    SUB ESP,0xc                         ; 005a1183
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a1186
    PUSH EBX                            ; 005a118a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a118b
    CALL dword ptr [EAX + 0x17c]        ; 005a1191
    ADD ESP,0x4                         ; 005a1197
    TEST EAX,EAX                        ; 005a119a
    JZ 0x005a125a                       ; 005a119c
        ;   XREF to: 005a125a (CONDITIONAL_JUMP)  ; LAB_005a125a
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a11a2
    LEA EAX,[EBX + 0x20]                ; 005a11a8
    FLD float ptr [ESI + 0x20]          ; 005a11ab
    FSUB float ptr [EAX]                ; 005a11ae
    FMUL ST0                            ; 005a11b0
    FLD float ptr [ESI + 0x28]          ; 005a11b2
    FSUB float ptr [EAX + 0x8]          ; 005a11b5
    FMUL ST0                            ; 005a11b8
    FADDP                               ; 005a11ba
    FSQRT                               ; 005a11bc
    ADD ESI,0x20                        ; 005a11be
    FCOMP float ptr [0x005fedb4]        ; 005a11c1 | DAT_005fedb4
    FNSTSW AX                           ; 005a11c7
    SAHF                                ; 005a11c9
    JA 0x005a1261                       ; 005a11ca
        ;   XREF to: 005a1261 (CONDITIONAL_JUMP)  ; LAB_005a1261
    PUSH ESI                            ; 005a11d0
    PUSH EBX                            ; 005a11d1
    CALL FUN_00423850                   ; 005a11d2
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    MOV ESI,dword ptr [EBX + 0x11864]   ; 005a11d7
    ADD ESP,0x8                         ; 005a11dd
    TEST ESI,ESI                        ; 005a11e0
    JBE 0x005a1285                      ; 005a11e2
        ;   XREF to: 005a1285 (CONDITIONAL_JUMP)  ; LAB_005a1285
    CMP ESI,0x1                         ; 005a11e8
    JNZ 0x005a11f2                      ; 005a11eb
        ;   XREF to: 005a11f2 (CONDITIONAL_JUMP)  ; LAB_005a11f2
    MOV EDI,0x9                         ; 005a11ed
    PUSH 0x1                            ; 005a11f2
        ;   Label: LAB_005a11f2
    PUSH EDI                            ; 005a11f4
    LEA ESI,[EBX + 0x2b4]               ; 005a11f5
    PUSH ESI                            ; 005a11fb
    CALL FUN_00503620                   ; 005a11fc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a1201
    PUSH ESI                            ; 005a1204
    CALL FUN_005035c0                   ; 005a1205
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a120a
    ADD ESP,0x4                         ; 005a120d
    CMP EAX,0x5                         ; 005a1210
    JNZ 0x005a1243                      ; 005a1213
        ;   XREF to: 005a1243 (CONDITIONAL_JUMP)  ; LAB_005a1243
    PUSH ESI                            ; 005a1215
    CALL FUN_00503e60                   ; 005a1216
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a121b
    FLD float ptr [ESP + 0xc]           ; 005a121f
    ADD ESP,0x4                         ; 005a1223
    FCOMP double ptr [0x005efccf]       ; 005a1226 | DAT_005efccf
    FNSTSW AX                           ; 005a122c
    SAHF                                ; 005a122e
    JBE 0x005a1243                      ; 005a122f
        ;   XREF to: 005a1243 (CONDITIONAL_JUMP)  ; LAB_005a1243
    PUSH 0x1                            ; 005a1231
    PUSH 0x0                            ; 005a1233
    CALL FUN_0040cfc0                   ; 005a1235
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 005a123a
    MOV dword ptr [EBX + 0x11864],EAX   ; 005a123d
    LEA ESI,[EBX + 0x2b4]               ; 005a1243
        ;   Label: LAB_005a1243
    PUSH ESI                            ; 005a1249
    CALL FUN_005035c0                   ; 005a124a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a124f
    ADD ESP,0x4                         ; 005a1252
    CMP EAX,0x9                         ; 005a1255
    JZ 0x005a128f                       ; 005a1258
        ;   XREF to: 005a128f (CONDITIONAL_JUMP)  ; LAB_005a128f
    ADD ESP,0xc                         ; 005a125a
        ;   Label: LAB_005a125a
    POP EDI                             ; 005a125d
    POP ESI                             ; 005a125e
    POP EBX                             ; 005a125f
    RET                                 ; 005a1260
    ADD EBX,0x10af8                     ; 005a1261
        ;   Label: LAB_005a1261
    PUSH 0x3f800000                     ; 005a1267
    PUSH EBX                            ; 005a126c
    CALL FUN_0059dcb0                   ; 005a126d
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a1272
    PUSH 0x5efcc3                       ; 005a1275 | s_BChasing_005efcc2+1
    PUSH EBX                            ; 005a127a
    CALL FUN_0059d8e0                   ; 005a127b
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a1280
    JMP 0x005a125a                      ; 005a1283
        ;   XREF to: 005a125a (UNCONDITIONAL_JUMP)  ; LAB_005a125a
    MOV EDI,0x5                         ; 005a1285
        ;   Label: LAB_005a1285
    JMP 0x005a11f2                      ; 005a128a
        ;   XREF to: 005a11f2 (UNCONDITIONAL_JUMP)  ; LAB_005a11f2
    PUSH ESI                            ; 005a128f
        ;   Label: LAB_005a128f
    CALL FUN_00503e60                   ; 005a1290
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a1295
    FLD float ptr [ESP + 0xc]           ; 005a1299
    ADD ESP,0x4                         ; 005a129d
    FCOMP double ptr [0x005efccf]       ; 005a12a0 | DAT_005efccf
    FNSTSW AX                           ; 005a12a6
    SAHF                                ; 005a12a8
    JBE 0x005a125a                      ; 005a12a9
        ;   XREF to: 005a125a (CONDITIONAL_JUMP)  ; LAB_005a125a
    PUSH 0x1                            ; 005a12ab
    PUSH 0x0                            ; 005a12ad
    CALL FUN_0040cfc0                   ; 005a12af
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 005a12b4
    MOV dword ptr [EBX + 0x11864],EAX   ; 005a12b7
    ADD ESP,0xc                         ; 005a12bd
    POP EDI                             ; 005a12c0
    POP ESI                             ; 005a12c1
    POP EBX                             ; 005a12c2
    RET                                 ; 005a12c3

