; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_FUN_004ec350(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   core_baron.cpp_FUN_0040fcf0 at 0040fd08
;   core_colonel.cpp_FUN_00444b4e at 00444c3a
;   core_gabriela.cpp_FUN_004c7aa0 at 004c7b9d
;   core_haystack.cpp_FUN_004e98b0 at 004e99af
;   core_icepick.cpp_FUN_004f1b50 at 004f1c99
;   core_scat.cpp_FUN_005415c0 at 005416a5
;   core_svetlana.cpp_FUN_005938c0 at 00593a09
;
; Referenced Globals:
;   undefined4 DAT_005e493d
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1380332_0x150fec
;   undefined4 g_CVehicleClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec350
        ;   Label: core_hero.cpp_FUN_004ec350
    PUSH ESI                            ; 004ec351
    PUSH EDI                            ; 004ec352
    PUSH EBP                            ; 004ec353
    MOV EBP,ESP                         ; 004ec354
    SUB ESP,0xac                        ; 004ec356
    AND ESP,0xfffffff8                  ; 004ec35c
    XOR EDX,EDX                         ; 004ec35f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ec361
    MOV dword ptr [ESP + 0xa0],EDX      ; 004ec364
    MOV dword ptr [EAX],0x461c3f9a      ; 004ec36b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec371
    MOV dword ptr [ESP + 0xa8],EDX      ; 004ec374
    ADD EAX,0x20                        ; 004ec37b
    MOV dword ptr [ESP + 0x98],EDX      ; 004ec37e
    MOV dword ptr [ESP + 0xa4],EAX      ; 004ec385
    MOV EAX,[0x00622c18]                ; 004ec38c | g_CDemonSetPtr
        ;   Label: LAB_004ec38c
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004ec391
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004ec398 | g_CDemonSetInstance.field1380332_0x150fec
    JL 0x004ec3bc                       ; 004ec39e
        ;   XREF to: 004ec3bc (CONDITIONAL_JUMP)  ; LAB_004ec3bc
    CMP dword ptr [ESP + 0x98],0x0      ; 004ec3a0
    JNZ 0x004ec51c                      ; 004ec3a8
        ;   XREF to: 004ec51c (CONDITIONAL_JUMP)  ; LAB_004ec51c
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ec3ae
    MOV ESP,EBP                         ; 004ec3b5
    POP EBP                             ; 004ec3b7
    POP EDI                             ; 004ec3b8
    POP ESI                             ; 004ec3b9
    POP EBX                             ; 004ec3ba
    RET                                 ; 004ec3bb
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004ec3bc
        ;   Label: LAB_004ec3bc
    MOV ECX,dword ptr [0x02c8af6c]      ; 004ec3c3 | g_CVehicleClassInfo.name_hash
    ADD EAX,EDX                         ; 004ec3c9
    PUSH ECX                            ; 004ec3cb
    MOV EBX,dword ptr [EAX + 0x150ff0]  ; 004ec3cc
    PUSH EBX                            ; 004ec3d2
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ec3d3
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004ec3d8
    TEST EAX,EAX                        ; 004ec3db
    JNZ 0x004ec4f7                      ; 004ec3dd
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    MOV ESI,dword ptr [0x01d33c68]      ; 004ec3e3 | g_CMobsterClassInfo.name_hash
    PUSH ESI                            ; 004ec3e9
    PUSH EBX                            ; 004ec3ea
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ec3eb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004ec3f0
    TEST EAX,EAX                        ; 004ec3f3
    JZ 0x004ec404                       ; 004ec3f5
        ;   XREF to: 004ec404 (CONDITIONAL_JUMP)  ; LAB_004ec404
    CMP dword ptr [EAX + 0xc28c],0x0    ; 004ec3f7
    JNZ 0x004ec4f7                      ; 004ec3fe
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    PUSH EBX                            ; 004ec404
        ;   Label: LAB_004ec404
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec405
    CALL dword ptr [EAX + 0x10c]        ; 004ec40b
    ADD ESP,0x4                         ; 004ec411
    TEST EAX,EAX                        ; 004ec414
    JNZ 0x004ec4f7                      ; 004ec416
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    PUSH EBX                            ; 004ec41c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec41d
    CALL dword ptr [EAX + 0x70]         ; 004ec423
    ADD ESP,0x4                         ; 004ec426
    TEST EAX,EAX                        ; 004ec429
    JNZ 0x004ec4f7                      ; 004ec42b
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    PUSH 0x5fb430                       ; 004ec431 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004ec436
    LEA EAX,[ESP + 0x8]                 ; 004ec438
    PUSH EAX                            ; 004ec43c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004ec43d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 004ec442
    MOV EDX,ESP                         ; 004ec445
    PUSH EDX                            ; 004ec447
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec448
    PUSH EBX                            ; 004ec44e
    CALL dword ptr [EAX + 0x54]         ; 004ec44f
    ADD ESP,0x8                         ; 004ec452
    TEST EAX,EAX                        ; 004ec455
    JLE 0x004ec4f7                      ; 004ec457
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004ec45d
    LEA EDI,[ESP + 0x84]                ; 004ec464
    LEA ESI,[ESP + 0x78]                ; 004ec46b
    LEA EAX,[EBX + 0x20]                ; 004ec46f
    FLD float ptr [EDX]                 ; 004ec472
    FLD float ptr [EDX + 0x4]           ; 004ec474
    FLD float ptr [EDX + 0x8]           ; 004ec477
    FXCH ST2                            ; 004ec47a
    FSUB float ptr [EAX]                ; 004ec47c
    FXCH                                ; 004ec47e
    FSUB float ptr [EAX + 0x4]          ; 004ec480
    FXCH ST2                            ; 004ec483
    FSUB float ptr [EAX + 0x8]          ; 004ec485
    FXCH                                ; 004ec488
    FSTP float ptr [ESP + 0x78]         ; 004ec48a
    FXCH                                ; 004ec48e
    FSTP float ptr [ESP + 0x7c]         ; 004ec490
    FSTP float ptr [ESP + 0x80]         ; 004ec494
    MOVSD ES:EDI,ESI                    ; 004ec49b
    MOVSD ES:EDI,ESI                    ; 004ec49c
    MOVSD ES:EDI,ESI                    ; 004ec49d
    FLD float ptr [ESP + 0x88]          ; 004ec49e
    FLD ST0                             ; 004ec4a5
    FMUL double ptr [0x005e493d]        ; 004ec4a7 | DAT_005e493d
    FSTP ST1                            ; 004ec4ad
    FST float ptr [ESP + 0x88]          ; 004ec4af
    FMUL float ptr [ESP + 0x88]         ; 004ec4b6
    FLD float ptr [ESP + 0x84]          ; 004ec4bd
    FMUL ST0                            ; 004ec4c4
    FADDP                               ; 004ec4c6
    FLD float ptr [ESP + 0x8c]          ; 004ec4c8
    FMUL ST0                            ; 004ec4cf
    FADDP                               ; 004ec4d1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ec4d3
    FST float ptr [ESP + 0x9c]          ; 004ec4d6
    FCOMP float ptr [EAX]               ; 004ec4dd
    FNSTSW AX                           ; 004ec4df
    SAHF                                ; 004ec4e1
    JNC 0x004ec4f7                      ; 004ec4e2
        ;   XREF to: 004ec4f7 (CONDITIONAL_JUMP)  ; LAB_004ec4f7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004ec4e4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ec4e7
    MOV dword ptr [ESP + 0x98],EBX      ; 004ec4ee
    MOV dword ptr [EDX],EAX             ; 004ec4f5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004ec4f7
        ;   Label: LAB_004ec4f7
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004ec4fe
    INC EDX                             ; 004ec505
    ADD EAX,0x4                         ; 004ec506
    MOV dword ptr [ESP + 0xa0],EDX      ; 004ec509
    MOV dword ptr [ESP + 0xa8],EAX      ; 004ec510
    JMP 0x004ec38c                      ; 004ec517
        ;   XREF to: 004ec38c (UNCONDITIONAL_JUMP)  ; LAB_004ec38c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ec51c
        ;   Label: LAB_004ec51c
    FLD float ptr [EAX]                 ; 004ec51f
    FSQRT                               ; 004ec521
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ec523
    FSTP float ptr [EAX]                ; 004ec526
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ec528
    MOV ESP,EBP                         ; 004ec52f
    POP EBP                             ; 004ec531
    POP EDI                             ; 004ec532
    POP ESI                             ; 004ec533
    POP EBX                             ; 004ec534
    RET                                 ; 004ec535

