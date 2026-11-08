; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d11c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8690
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00511d10
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d11c0
        ;   Label: FUN_004d11c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d11c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d11c5
    JNZ 0x004d123d                      ; 004d11ca
        ;   XREF to: 004d123d (CONDITIONAL_JUMP)  ; LAB_004d123d
    PUSH 0x0                            ; 004d11cc
    ADD EBX,0x10a60                     ; 004d11ce
    PUSH EBX                            ; 004d11d4
    CALL FUN_00511d10                   ; 004d11d5
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511d10()
    ADD ESP,0x8                         ; 004d11da
    PUSH 0x0                            ; 004d11dd
    SUB EAX,0xd040                      ; 004d11df
    PUSH EAX                            ; 004d11e4
    CALL FUN_0040f2b0                   ; 004d11e5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d11ea
    PUSH 0x0                            ; 004d11ed
    SUB EAX,0x9c8                       ; 004d11ef
    PUSH EAX                            ; 004d11f4
    CALL FUN_0059df70                   ; 004d11f5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004d11fa
    PUSH 0x0                            ; 004d11fd
    SUB EAX,0x34c                       ; 004d11ff
    PUSH EAX                            ; 004d1204
    CALL FUN_005b1480                   ; 004d1205
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004d120a
    PUSH 0x0                            ; 004d120d
    SUB EAX,0x2a58                      ; 004d120f
    PUSH EAX                            ; 004d1214
    CALL FUN_00544d50                   ; 004d1215
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004d121a
    PUSH 0x1                            ; 004d121d
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d121f
    PUSH EBX                            ; 004d1225
    CALL FUN_00408930                   ; 004d1226
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004d122b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d122e
    MOV EBX,EAX                         ; 004d1232
    TEST DL,0x2                         ; 004d1234
    JNZ 0x004d1258                      ; 004d1237
        ;   XREF to: 004d1258 (CONDITIONAL_JUMP)  ; LAB_004d1258
    MOV EAX,EBX                         ; 004d1239
    POP EBX                             ; 004d123b
    RET                                 ; 004d123c
    PUSH 0x5f8690                       ; 004d123d | DAT_005f8690
        ;   Label: LAB_004d123d
    PUSH EBX                            ; 004d1242
    CALL FUN_005b7fa7                   ; 004d1243
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d1248
    PUSH EAX                            ; 004d124b
    CALL FUN_005b7fce                   ; 004d124c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d1251
    MOV EAX,EBX                         ; 004d1254
    POP EBX                             ; 004d1256
    RET                                 ; 004d1257
    PUSH EAX                            ; 004d1258
        ;   Label: LAB_004d1258
    CALL FUN_005b7fdc                   ; 004d1259
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d125e
    MOV EAX,EBX                         ; 004d1261
    POP EBX                             ; 004d1263
    RET                                 ; 004d1264

