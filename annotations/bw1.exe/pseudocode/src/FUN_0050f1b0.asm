; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050f1b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_006039e4 = 0050f290
;   undefined4 DAT_00603b30
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_0043e620
;   FUN_00441ca0
;   FUN_00522fc0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1b0
        ;   Label: FUN_0050f1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f1b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0050f1b5
    JNZ 0x0050f261                      ; 0050f1ba
        ;   XREF to: 0050f261 (CONDITIONAL_JUMP)  ; LAB_0050f261
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f1c0
    MOV dword ptr [EBX + 0x154],0x6039e4 ; 0050f1c6 | PTR_FUN_006039e4
    TEST EAX,EAX                        ; 0050f1d0
    JZ 0x0050f1e6                       ; 0050f1d2
        ;   XREF to: 0050f1e6 (CONDITIONAL_JUMP)  ; LAB_0050f1e6
    PUSH 0x2                            ; 0050f1d4
    MOV EDX,dword ptr [EAX + 0x154]     ; 0050f1d6
    PUSH EAX                            ; 0050f1dc
    CALL dword ptr [EDX + 0xd0]         ; 0050f1dd
    ADD ESP,0x8                         ; 0050f1e3
    PUSH 0x0                            ; 0050f1e6
        ;   Label: LAB_0050f1e6
    ADD EBX,0x46e90                     ; 0050f1e8
    PUSH EBX                            ; 0050f1ee
    MOV dword ptr [EBX + 0xc30],0x0     ; 0050f1ef
    CALL FUN_00522fc0                   ; 0050f1f9
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fc0()
    ADD ESP,0x8                         ; 0050f1fe
    PUSH 0x0                            ; 0050f201
    SUB EAX,0x3ab60                     ; 0050f203
    PUSH EAX                            ; 0050f208
    CALL FUN_0043e620                   ; 0050f209
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e620()
    ADD ESP,0x8                         ; 0050f20e
    PUSH 0x0                            ; 0050f211
    SUB EAX,0x8d54                      ; 0050f213
    PUSH EAX                            ; 0050f218
    CALL FUN_0040ee30                   ; 0050f219
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0050f21e
    PUSH 0x0                            ; 0050f221
    SUB EAX,0x93c                       ; 0050f223
    PUSH EAX                            ; 0050f228
    CALL FUN_00441ca0                   ; 0050f229
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0050f22e
    PUSH 0x0                            ; 0050f231
    SUB EAX,0x2b48                      ; 0050f233
    PUSH EAX                            ; 0050f238
    CALL FUN_005673f0                   ; 0050f239
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0050f23e
    PUSH 0x1                            ; 0050f241
    LEA EBX,[EAX + 0xfffffea8]          ; 0050f243
    PUSH EBX                            ; 0050f249
    CALL FUN_00408730                   ; 0050f24a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0050f24f
    MOV DL,byte ptr [ESP + 0xc]         ; 0050f252
    MOV EBX,EAX                         ; 0050f256
    TEST DL,0x2                         ; 0050f258
    JNZ 0x0050f27c                      ; 0050f25b
        ;   XREF to: 0050f27c (CONDITIONAL_JUMP)  ; LAB_0050f27c
    MOV EAX,EBX                         ; 0050f25d
    POP EBX                             ; 0050f25f
    RET                                 ; 0050f260
    PUSH 0x603b30                       ; 0050f261 | DAT_00603b30
        ;   Label: LAB_0050f261
    PUSH EBX                            ; 0050f266
    CALL FUN_005c030f                   ; 0050f267
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0050f26c
    PUSH EAX                            ; 0050f26f
    CALL FUN_005c0336                   ; 0050f270
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0050f275
    MOV EAX,EBX                         ; 0050f278
    POP EBX                             ; 0050f27a
    RET                                 ; 0050f27b
    PUSH EAX                            ; 0050f27c
        ;   Label: LAB_0050f27c
    CALL FUN_005c0344                   ; 0050f27d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0050f282
    MOV EAX,EBX                         ; 0050f285
    POP EBX                             ; 0050f287
    RET                                 ; 0050f288

