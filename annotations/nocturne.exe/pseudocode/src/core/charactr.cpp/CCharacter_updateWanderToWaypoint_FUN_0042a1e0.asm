; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter *this_ptr,float delta_time,char *pattern)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; char *           Stack[0xc]:4   pattern
; Local Variables:
; undefined4       Stack[-0x1f80]:4  local_1f80
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 at 0047a062
;
; Referenced Globals:
;   double DOUBLE_0057a37a = 4
;   float FLOAT_0057a382 = 20
;   undefined4 DAT_005be368
;   undefined4 DAT_01fabd00
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a1e0
        ;   Label: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
    PUSH ESI                            ; 0042a1e1
    PUSH EDI                            ; 0042a1e2
    PUSH EBP                            ; 0042a1e3
    SUB ESP,0x1f70                      ; 0042a1e4
    MOV EDI,dword ptr [ESP + 0x1f84]    ; 0042a1ea
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 0042a1f1
    TEST EDX,EDX                        ; 0042a1f8
    JZ 0x0042a310                       ; 0042a1fa
        ;   XREF to: 0042a310 (CONDITIONAL_JUMP)  ; LAB_0042a310
    CMP byte ptr [EDX],0x0              ; 0042a200
    JZ 0x0042a310                       ; 0042a203
        ;   XREF to: 0042a310 (CONDITIONAL_JUMP)  ; LAB_0042a310
    FLD float ptr [EDI + 0x25ec]        ; 0042a209
    FSUB float ptr [ESP + 0x1f88]       ; 0042a20f
    FST float ptr [EDI + 0x25ec]        ; 0042a216
    FLDZ                                ; 0042a21c
    FCOMPP                              ; 0042a21e
    FNSTSW AX                           ; 0042a220
    SAHF                                ; 0042a222
    JC 0x0042a39c                       ; 0042a223
        ;   XREF to: 0042a39c (CONDITIONAL_JUMP)  ; LAB_0042a39c
    MOV ECX,dword ptr [EDI + 0x25e4]    ; 0042a229
    TEST ECX,ECX                        ; 0042a22f
    JZ 0x0042a33b                       ; 0042a231
        ;   XREF to: 0042a33b (CONDITIONAL_JUMP)  ; LAB_0042a33b
    MOV EAX,ECX                         ; 0042a237
    LEA EBX,[EDI + 0x20]                ; 0042a239
    FLD float ptr [EAX + 0x20]          ; 0042a23c
    FSUB float ptr [EBX]                ; 0042a23f
    FMUL ST0                            ; 0042a241
    FLD float ptr [EAX + 0x24]          ; 0042a243
    FSUB float ptr [EBX + 0x4]          ; 0042a246
    FMUL ST0                            ; 0042a249
    FLD float ptr [EAX + 0x28]          ; 0042a24b
    FXCH                                ; 0042a24e
    FADDP ST2,ST0                       ; 0042a250
    FSUB float ptr [EBX + 0x8]          ; 0042a252
    FMUL ST0                            ; 0042a255
    FADDP                               ; 0042a257
    FSQRT                               ; 0042a259
    FCOMP double ptr [0x0057a37a]       ; 0042a25b | DOUBLE_0057a37a
    FNSTSW AX                           ; 0042a261
    SAHF                                ; 0042a263
    JNC 0x0042a33b                      ; 0042a264
        ;   XREF to: 0042a33b (CONDITIONAL_JUMP)  ; LAB_0042a33b
    MOV dword ptr [EDI + 0x25e8],0x0    ; 0042a26a
    MOV dword ptr [EDI + 0x25e4],0x0    ; 0042a274
        ;   Label: LAB_0042a274
    MOV dword ptr [EDI + 0x25e8],0x0    ; 0042a27e
        ;   Label: LAB_0042a27e
    XOR EAX,EAX                         ; 0042a288
    XOR ECX,ECX                         ; 0042a28a
    XOR EBP,EBP                         ; 0042a28c
    MOV dword ptr [ESP + 0x1f58],EAX    ; 0042a28e
    MOV dword ptr [ESP + 0x1f60],EAX    ; 0042a295
    LEA EAX,[EDI + 0x20]                ; 0042a29c
    MOV dword ptr [ESP + 0x1f5c],ECX    ; 0042a29f
    MOV dword ptr [ESP + 0x1f64],EAX    ; 0042a2a6
    MOV ESI,dword ptr [0x005be368]      ; 0042a2ad | DAT_005be368
        ;   Label: LAB_0042a2ad
    MOV EAX,dword ptr [ESP + 0x1f60]    ; 0042a2b3
    CMP EAX,dword ptr [ESI + 0x154a7c]  ; 0042a2ba | DAT_01fabd00
    JGE 0x0042a409                      ; 0042a2c0
        ;   XREF to: 0042a409 (CONDITIONAL_JUMP)  ; LAB_0042a409
    ADD ESI,dword ptr [ESP + 0x1f5c]    ; 0042a2c6
    PUSH 0x0                            ; 0042a2cd
    MOV ESI,dword ptr [ESI + 0x154a80]  ; 0042a2cf
    PUSH ESI                            ; 0042a2d5
    MOV EDX,dword ptr [ESP + 0x1f94]    ; 0042a2d6
    PUSH EDX                            ; 0042a2dd
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 0042a2de
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0042a2e3
    TEST EAX,EAX                        ; 0042a2e6
    JNZ 0x0042a3b7                      ; 0042a2e8
        ;   XREF to: 0042a3b7 (CONDITIONAL_JUMP)  ; LAB_0042a3b7
    MOV ESI,dword ptr [ESP + 0x1f60]    ; 0042a2ee
        ;   Label: LAB_0042a2ee
    MOV EBX,dword ptr [ESP + 0x1f5c]    ; 0042a2f5
    INC ESI                             ; 0042a2fc
    ADD EBX,0x4                         ; 0042a2fd
    MOV dword ptr [ESP + 0x1f60],ESI    ; 0042a300
    MOV dword ptr [ESP + 0x1f5c],EBX    ; 0042a307
    JMP 0x0042a2ad                      ; 0042a30e
        ;   XREF to: 0042a2ad (UNCONDITIONAL_JUMP)  ; LAB_0042a2ad
    MOV dword ptr [EDI + 0x25e8],0x0    ; 0042a310
        ;   Label: LAB_0042a310
    MOV dword ptr [EDI + 0x25ec],0x0    ; 0042a31a
    MOV dword ptr [EDI + 0x25e4],0x0    ; 0042a324
    XOR EAX,EAX                         ; 0042a32e
    ADD ESP,0x1f70                      ; 0042a330
    POP EBP                             ; 0042a336
    POP EDI                             ; 0042a337
    POP ESI                             ; 0042a338
    POP EBX                             ; 0042a339
    RET                                 ; 0042a33a
    CMP dword ptr [EDI + 0x25e8],0x0    ; 0042a33b
        ;   Label: LAB_0042a33b
    JZ 0x0042a274                       ; 0042a342
        ;   XREF to: 0042a274 (CONDITIONAL_JUMP)  ; LAB_0042a274
    MOV ESI,dword ptr [EDI + 0x25e4]    ; 0042a348
    TEST ESI,ESI                        ; 0042a34e
    JZ 0x0042a27e                       ; 0042a350
        ;   XREF to: 0042a27e (CONDITIONAL_JUMP)  ; LAB_0042a27e
    PUSH ESI                            ; 0042a356
    LEA EAX,[EDI + 0x20]                ; 0042a357
    PUSH EAX                            ; 0042a35a
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 ; 0042a35b
        ;   XREF to: 00552680 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 0042a360
    MOV dword ptr [EDI + 0x25e8],EAX    ; 0042a363
    CMP dword ptr [EDI + 0x25e8],0x0    ; 0042a369
        ;   Label: LAB_0042a369
    JZ 0x0042a486                       ; 0042a370
        ;   XREF to: 0042a486 (CONDITIONAL_JUMP)  ; LAB_0042a486
    PUSH 0x40000000                     ; 0042a376
    PUSH 0x3f800000                     ; 0042a37b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0042a380
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
        ;   Label: LAB_0042a380
    MOV dword ptr [ESP + 0x1f74],EAX    ; 0042a385
    MOV EAX,dword ptr [ESP + 0x1f74]    ; 0042a38c
    MOV dword ptr [EDI + 0x25ec],EAX    ; 0042a393
    ADD ESP,0x8                         ; 0042a399
    MOV EBX,dword ptr [EDI + 0x25e8]    ; 0042a39c
        ;   Label: LAB_0042a39c
    TEST EBX,EBX                        ; 0042a3a2
    JNZ 0x0042a495                      ; 0042a3a4
        ;   XREF to: 0042a495 (CONDITIONAL_JUMP)  ; LAB_0042a495
    XOR EAX,EAX                         ; 0042a3aa
    ADD ESP,0x1f70                      ; 0042a3ac
    POP EBP                             ; 0042a3b2
    POP EDI                             ; 0042a3b3
    POP ESI                             ; 0042a3b4
    POP EBX                             ; 0042a3b5
    RET                                 ; 0042a3b6
    MOV EAX,dword ptr [ESP + 0x1f64]    ; 0042a3b7
        ;   Label: LAB_0042a3b7
    LEA EBX,[ESI + 0x20]                ; 0042a3be
    FLD float ptr [EAX]                 ; 0042a3c1
    FSUB float ptr [EBX]                ; 0042a3c3
    FMUL ST0                            ; 0042a3c5
    FLD float ptr [EAX + 0x4]           ; 0042a3c7
    FSUB float ptr [EBX + 0x4]          ; 0042a3ca
    FMUL ST0                            ; 0042a3cd
    FLD float ptr [EAX + 0x8]           ; 0042a3cf
    FXCH                                ; 0042a3d2
    FADDP ST2,ST0                       ; 0042a3d4
    FSUB float ptr [EBX + 0x8]          ; 0042a3d6
    FMUL ST0                            ; 0042a3d9
    FADDP                               ; 0042a3db
    FSQRT                               ; 0042a3dd
    FCOMP float ptr [0x0057a382]        ; 0042a3df | FLOAT_0057a382
    FNSTSW AX                           ; 0042a3e5
    SAHF                                ; 0042a3e7
    JC 0x0042a2ee                       ; 0042a3e8
        ;   XREF to: 0042a2ee (CONDITIONAL_JUMP)  ; LAB_0042a2ee
    MOV ECX,dword ptr [ESP + 0x1f58]    ; 0042a3ee
    ADD EBP,0x4                         ; 0042a3f5
    INC ECX                             ; 0042a3f8
    MOV dword ptr [ESP + EBP*0x1 + -0x4],ESI ; 0042a3f9
    MOV dword ptr [ESP + 0x1f58],ECX    ; 0042a3fd
    JMP 0x0042a2ee                      ; 0042a404
        ;   XREF to: 0042a2ee (UNCONDITIONAL_JUMP)  ; LAB_0042a2ee
    CMP dword ptr [ESP + 0x1f58],0x0    ; 0042a409
        ;   Label: LAB_0042a409
    JLE 0x0042a369                      ; 0042a411
        ;   XREF to: 0042a369 (CONDITIONAL_JUMP)  ; LAB_0042a369
    MOV EAX,dword ptr [ESP + 0x1f58]    ; 0042a417
    LEA EBP,[EDI + 0x20]                ; 0042a41e
    DEC EAX                             ; 0042a421
    XOR ESI,ESI                         ; 0042a422
    MOV dword ptr [ESP + 0x1f54],EAX    ; 0042a424
    MOV EAX,dword ptr [ESP + 0x1f54]    ; 0042a42b
        ;   Label: LAB_0042a42b
    PUSH EAX                            ; 0042a432
    PUSH 0x0                            ; 0042a433
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0042a435
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    LEA EBX,[EAX*0x4 + 0x0]             ; 0042a43a
    ADD ESP,0x8                         ; 0042a441
    MOV EDX,dword ptr [ESP + EBX*0x1]   ; 0042a444
    TEST EDX,EDX                        ; 0042a447
    JNZ 0x0042a456                      ; 0042a449
        ;   XREF to: 0042a456 (CONDITIONAL_JUMP)  ; LAB_0042a456
    INC ESI                             ; 0042a44b
    CMP ESI,0xa                         ; 0042a44c
    JL 0x0042a42b                       ; 0042a44f
        ;   XREF to: 0042a42b (CONDITIONAL_JUMP)  ; LAB_0042a42b
    JMP 0x0042a369                      ; 0042a451
        ;   XREF to: 0042a369 (UNCONDITIONAL_JUMP)  ; LAB_0042a369
    PUSH EDX                            ; 0042a456
        ;   Label: LAB_0042a456
    PUSH EBP                            ; 0042a457
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 ; 0042a458
        ;   XREF to: 00552680 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 0042a45d
    MOV dword ptr [EDI + 0x25e8],EAX    ; 0042a460
    TEST EAX,EAX                        ; 0042a466
    JZ 0x0042a478                       ; 0042a468
        ;   XREF to: 0042a478 (CONDITIONAL_JUMP)  ; LAB_0042a478
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 0042a46a
    MOV dword ptr [EDI + 0x25e4],EAX    ; 0042a46d
    JMP 0x0042a369                      ; 0042a473
        ;   XREF to: 0042a369 (UNCONDITIONAL_JUMP)  ; LAB_0042a369
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 0042a478
        ;   Label: LAB_0042a478
    INC ESI                             ; 0042a47b
    CMP ESI,0xa                         ; 0042a47c
    JL 0x0042a42b                       ; 0042a47f
        ;   XREF to: 0042a42b (CONDITIONAL_JUMP)  ; LAB_0042a42b
    JMP 0x0042a369                      ; 0042a481
        ;   XREF to: 0042a369 (UNCONDITIONAL_JUMP)  ; LAB_0042a369
    PUSH 0x41200000                     ; 0042a486
        ;   Label: LAB_0042a486
    PUSH 0x40800000                     ; 0042a48b
    JMP 0x0042a380                      ; 0042a490
        ;   XREF to: 0042a380 (UNCONDITIONAL_JUMP)  ; LAB_0042a380
    PUSH 0x0                            ; 0042a495
        ;   Label: LAB_0042a495
    PUSH 0x0                            ; 0042a497
    PUSH 0x2dd1184                      ; 0042a499 | DAT_02dd1184
    MOV EAX,EBX                         ; 0042a49e
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0042a4a0
    PUSH EAX                            ; 0042a4a6
    CALL dword ptr [EBX + 0xbc]         ; 0042a4a7
    ADD ESP,0x4                         ; 0042a4ad
    PUSH EAX                            ; 0042a4b0
    MOV EAX,dword ptr [EDI + 0x25e8]    ; 0042a4b1
    ADD EAX,0x20                        ; 0042a4b7
    PUSH EAX                            ; 0042a4ba
    PUSH EDI                            ; 0042a4bb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0042a4bc
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042a4c1
    TEST EAX,EAX                        ; 0042a4c4
    JZ 0x0042a4d7                       ; 0042a4c6
        ;   XREF to: 0042a4d7 (CONDITIONAL_JUMP)  ; LAB_0042a4d7
    JL 0x0042a4e7                       ; 0042a4c8
        ;   XREF to: 0042a4e7 (CONDITIONAL_JUMP)  ; LAB_0042a4e7
    XOR EAX,EAX                         ; 0042a4ca
    ADD ESP,0x1f70                      ; 0042a4cc
    POP EBP                             ; 0042a4d2
    POP EDI                             ; 0042a4d3
    POP ESI                             ; 0042a4d4
    POP EBX                             ; 0042a4d5
    RET                                 ; 0042a4d6
    MOV EAX,0x1                         ; 0042a4d7
        ;   Label: LAB_0042a4d7
    ADD ESP,0x1f70                      ; 0042a4dc
    POP EBP                             ; 0042a4e2
    POP EDI                             ; 0042a4e3
    POP ESI                             ; 0042a4e4
    POP EBX                             ; 0042a4e5
    RET                                 ; 0042a4e6
    MOV dword ptr [EDI + 0x25e8],0x0    ; 0042a4e7
        ;   Label: LAB_0042a4e7
    XOR EAX,EAX                         ; 0042a4f1
    ADD ESP,0x1f70                      ; 0042a4f3
    POP EBP                             ; 0042a4f9
    POP EDI                             ; 0042a4fa
    POP ESI                             ; 0042a4fb
    POP EBX                             ; 0042a4fc
    RET                                 ; 0042a4fd

