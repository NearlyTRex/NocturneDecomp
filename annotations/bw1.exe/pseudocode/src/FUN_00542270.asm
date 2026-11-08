; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542270(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00542090 at 00542256
;
; Referenced Globals:
;   undefined4 DAT_006081e0
;   undefined4 DAT_01e7e020
;   undefined4 DAT_01e7e024
;   undefined4 DAT_01e7e028
;   undefined4 DAT_01e7e02c
;
; Called Functions:
;   FUN_00568d60
;   FUN_005b77b0
;   FUN_005b7940
;   FUN_005b7af0
;   FUN_005b7b30
;   FUN_005b7b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542270
        ;   Label: FUN_00542270
    PUSH ESI                            ; 00542271
    PUSH EDI                            ; 00542272
    PUSH EBP                            ; 00542273
    MOV EBP,ESP                         ; 00542274
    SUB ESP,0x14c                       ; 00542276
    AND ESP,0xfffffff8                  ; 0054227c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054227f
    CMP dword ptr [EBP + 0x18],0x0      ; 00542282
    JZ 0x00542308                       ; 00542286
        ;   XREF to: 00542308 (CONDITIONAL_JUMP)  ; LAB_00542308
    MOV ESI,dword ptr [0x01e7e024]      ; 0054228c | DAT_01e7e024
    MOV dword ptr [ESP + 0x144],ESI     ; 00542292
    MOV ESI,dword ptr [0x01e7e02c]      ; 00542299 | DAT_01e7e02c
    PUSH 0xbfc90fdb                     ; 0054229f
    MOV dword ptr [ESP + 0x14c],ESI     ; 005422a4
    LEA ESI,[ESP + 0xb8]                ; 005422ab
    LEA EDI,[ESP + 0x68]                ; 005422b2
    CALL FUN_005b7b30                   ; 005422b6
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0xb8]                ; 005422bb
    ADD ESP,0x4                         ; 005422c2
    MOVSD ES:EDI,ESI                    ; 005422c5
    MOVSD ES:EDI,ESI                    ; 005422c6
    MOVSD ES:EDI,ESI                    ; 005422c7
    MOVSD ES:EDI,ESI                    ; 005422c8
    PUSH 0xbfc90fdb                     ; 005422c9
    LEA ESI,[ESP + 0xc8]                ; 005422ce
    LEA EDI,[ESP + 0x28]                ; 005422d5
    CALL FUN_005b7b70                   ; 005422d9
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b70()
    LEA ESI,[ESP + 0xc8]                ; 005422de
    ADD ESP,0x4                         ; 005422e5
        ;   Label: LAB_005422e5
    MOVSD ES:EDI,ESI                    ; 005422e8
    MOVSD ES:EDI,ESI                    ; 005422e9
    MOVSD ES:EDI,ESI                    ; 005422ea
    MOVSD ES:EDI,ESI                    ; 005422eb
    MOV ESI,dword ptr [EBX + 0x2c9c]    ; 005422ec
    MOV dword ptr [ESP],ESI             ; 005422f2
    FLD float ptr [ESP]                 ; 005422f5
    FLDZ                                ; 005422f8
    FCOMPP                              ; 005422fa
    FNSTSW AX                           ; 005422fc
    SAHF                                ; 005422fe
    JC 0x00542363                       ; 005422ff
        ;   XREF to: 00542363 (CONDITIONAL_JUMP)  ; LAB_00542363
    MOV ESP,EBP                         ; 00542301
    POP EBP                             ; 00542303
    POP EDI                             ; 00542304
    POP ESI                             ; 00542305
    POP EBX                             ; 00542306
    RET                                 ; 00542307
    MOV ESI,dword ptr [0x01e7e020]      ; 00542308 | DAT_01e7e020
        ;   Label: LAB_00542308
    MOV dword ptr [ESP + 0x144],ESI     ; 0054230e
    MOV ESI,dword ptr [0x01e7e028]      ; 00542315 | DAT_01e7e028
    PUSH 0x3fc90fdb                     ; 0054231b
    MOV dword ptr [ESP + 0x14c],ESI     ; 00542320
    LEA ESI,[ESP + 0x98]                ; 00542327
    LEA EDI,[ESP + 0x68]                ; 0054232e
    CALL FUN_005b7b30                   ; 00542332
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0x98]                ; 00542337
    ADD ESP,0x4                         ; 0054233e
    MOVSD ES:EDI,ESI                    ; 00542341
    MOVSD ES:EDI,ESI                    ; 00542342
    MOVSD ES:EDI,ESI                    ; 00542343
    MOVSD ES:EDI,ESI                    ; 00542344
    PUSH 0x3fc90fdb                     ; 00542345
    LEA ESI,[ESP + 0xa8]                ; 0054234a
    LEA EDI,[ESP + 0x28]                ; 00542351
    CALL FUN_005b7b70                   ; 00542355
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b70()
    LEA ESI,[ESP + 0xa8]                ; 0054235a
    JMP 0x005422e5                      ; 00542361
        ;   XREF to: 005422e5 (UNCONDITIONAL_JUMP)  ; LAB_005422e5
    PUSH dword ptr [EBX + 0x1ffc8]      ; 00542363
        ;   Label: LAB_00542363
    LEA ESI,[ESP + 0xe8]                ; 00542369
    LEA EDI,[ESP + 0x58]                ; 00542370
    CALL FUN_005b7b30                   ; 00542374
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0xe8]                ; 00542379
    ADD ESP,0x4                         ; 00542380
    MOVSD ES:EDI,ESI                    ; 00542383
    MOVSD ES:EDI,ESI                    ; 00542384
    MOVSD ES:EDI,ESI                    ; 00542385
    MOVSD ES:EDI,ESI                    ; 00542386
    LEA ESI,[ESP + 0x54]                ; 00542387
    PUSH ESI                            ; 0054238b
    PUSH dword ptr [EBX + 0x1ffc4]      ; 0054238c
    LEA ESI,[ESP + 0x1c]                ; 00542392
    LEA EDI,[ESP + 0x4c]                ; 00542396
    CALL FUN_005b7af0                   ; 0054239a
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7af0()
    LEA ESI,[ESP + 0x1c]                ; 0054239f
    ADD ESP,0x4                         ; 005423a3
    MOVSD ES:EDI,ESI                    ; 005423a6
    MOVSD ES:EDI,ESI                    ; 005423a7
    MOVSD ES:EDI,ESI                    ; 005423a8
    MOVSD ES:EDI,ESI                    ; 005423a9
    LEA ESI,[ESP + 0x48]                ; 005423aa
    PUSH ESI                            ; 005423ae
    LEA ESI,[ESP + 0xc]                 ; 005423af
    LEA EDI,[ESP + 0x3c]                ; 005423b3
    CALL FUN_005b77b0                   ; 005423b7
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0xc]                 ; 005423bc
    ADD ESP,0x8                         ; 005423c0
    MOVSD ES:EDI,ESI                    ; 005423c3
    MOVSD ES:EDI,ESI                    ; 005423c4
    MOVSD ES:EDI,ESI                    ; 005423c5
    MOVSD ES:EDI,ESI                    ; 005423c6
    LEA ESI,[ESP + 0x34]                ; 005423c7
    PUSH ESI                            ; 005423cb
    LEA ESI,[ESP + 0x68]                ; 005423cc
    PUSH 0x3f733333                     ; 005423d0
    PUSH ESI                            ; 005423d5
    PUSH 0x6081e0                       ; 005423d6 | DAT_006081e0
    LEA ESI,[ESP + 0x124]               ; 005423db
    LEA EDI,[ESP + 0x84]                ; 005423e2
    CALL FUN_005b7940                   ; 005423e9
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    LEA ESI,[ESP + 0x124]               ; 005423ee
    ADD ESP,0xc                         ; 005423f5
    MOVSD ES:EDI,ESI                    ; 005423f8
    MOVSD ES:EDI,ESI                    ; 005423f9
    MOVSD ES:EDI,ESI                    ; 005423fa
    MOVSD ES:EDI,ESI                    ; 005423fb
    LEA ESI,[ESP + 0x78]                ; 005423fc
    PUSH ESI                            ; 00542400
    LEA ESI,[ESP + 0x12c]               ; 00542401
    LEA EDI,[ESP + 0x13c]               ; 00542408
    CALL FUN_005b77b0                   ; 0054240f
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x12c]               ; 00542414
    ADD ESP,0x8                         ; 0054241b
    MOVSD ES:EDI,ESI                    ; 0054241e
    MOVSD ES:EDI,ESI                    ; 0054241f
    MOVSD ES:EDI,ESI                    ; 00542420
    MOVSD ES:EDI,ESI                    ; 00542421
    PUSH dword ptr [ESP]                ; 00542422
    LEA ESI,[ESP + 0x138]               ; 00542425
    MOV EDI,dword ptr [ESP + 0x148]     ; 0054242c
    PUSH ESI                            ; 00542433
    SHL EDI,0x4                         ; 00542434
    LEA ESI,[EBX + 0x808]               ; 00542437
    ADD ESI,EDI                         ; 0054243d
    PUSH ESI                            ; 0054243f
    LEA ESI,[ESP + 0xe0]                ; 00542440
    CALL FUN_005b7940                   ; 00542447
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    LEA ESI,[ESP + 0xe0]                ; 0054244c
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 00542453
    ADD ESP,0xc                         ; 0054245a
    MOVSD ES:EDI,ESI                    ; 0054245d
    MOVSD ES:EDI,ESI                    ; 0054245e
    MOVSD ES:EDI,ESI                    ; 0054245f
    MOVSD ES:EDI,ESI                    ; 00542460
    LEA ESI,[ESP + 0x34]                ; 00542461
    PUSH ESI                            ; 00542465
    LEA ESI,[ESP + 0x28]                ; 00542466
    PUSH ESI                            ; 0054246a
    LEA ESI,[ESP + 0x6c]                ; 0054246b
    PUSH ESI                            ; 0054246f
    LEA ESI,[ESP + 0x110]               ; 00542470
    LEA EDI,[ESP + 0x90]                ; 00542477
    CALL FUN_005b77b0                   ; 0054247e
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x110]               ; 00542483
    ADD ESP,0x8                         ; 0054248a
    MOVSD ES:EDI,ESI                    ; 0054248d
    MOVSD ES:EDI,ESI                    ; 0054248e
    MOVSD ES:EDI,ESI                    ; 0054248f
    MOVSD ES:EDI,ESI                    ; 00542490
    LEA ESI,[ESP + 0x88]                ; 00542491
    PUSH ESI                            ; 00542498
    LEA ESI,[ESP + 0xfc]                ; 00542499
    CALL FUN_005b77b0                   ; 005424a0
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    ADD ESP,0x8                         ; 005424a5
    LEA EDI,[ESP + 0x134]               ; 005424a8
    LEA ESI,[ESP + 0xf4]                ; 005424af
    PUSH 0x567360                       ; 005424b6 | LAB_00567360
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005424bb
    MOVSD ES:EDI,ESI                    ; 005424c2
    MOVSD ES:EDI,ESI                    ; 005424c3
    MOVSD ES:EDI,ESI                    ; 005424c4
    MOVSD ES:EDI,ESI                    ; 005424c5
    PUSH ECX                            ; 005424c6
    LEA ESI,[ESP + 0x13c]               ; 005424c7
    PUSH dword ptr [ESP + 0x8]          ; 005424ce
    PUSH ESI                            ; 005424d2
    ADD EBX,0x158                       ; 005424d3
    PUSH EBX                            ; 005424d9
    CALL FUN_00568d60                   ; 005424da
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00568d60()
    ADD ESP,0x14                        ; 005424df
    MOV ESP,EBP                         ; 005424e2
    POP EBP                             ; 005424e4
    POP EDI                             ; 005424e5
    POP ESI                             ; 005424e6
    POP EBX                             ; 005424e7
    RET                                 ; 005424e8

