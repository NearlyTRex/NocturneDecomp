; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005902a0(int param_1)
;
;
; XREF[2]:
;   unkafter_winrun.cpp_FUN_0059064e at 00590654
;   unkafter_winrun.cpp_FUN_00590910 at 00590915
;
; Referenced Globals:
;   undefined4 DAT_005eeafd
;   undefined4 DAT_026656bc
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   unkafter_winrun.cpp_FUN_005901c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005902a0
        ;   Label: unkafter_winrun.cpp_FUN_005902a0
    PUSH ESI                            ; 005902a1
    PUSH EDI                            ; 005902a2
    PUSH EBP                            ; 005902a3
    MOV EBP,ESP                         ; 005902a4
    SUB ESP,0x48                        ; 005902a6
    AND ESP,0xfffffff8                  ; 005902a9
    IMUL EBX,dword ptr [EBP + 0x14],0xac ; 005902ac
    ADD EBX,0x26656c4                   ; 005902b3
    MOV ECX,dword ptr [EBX]             ; 005902b9
    TEST ECX,ECX                        ; 005902bb
    JZ 0x005902c4                       ; 005902bd
        ;   XREF to: 005902c4 (CONDITIONAL_JUMP)  ; LAB_005902c4
    CMP ECX,0x4                         ; 005902bf
    JNZ 0x005902d1                      ; 005902c2
        ;   XREF to: 005902d1 (CONDITIONAL_JUMP)  ; LAB_005902d1
    MOV ESP,EBP                         ; 005902c4
        ;   Label: LAB_005902c4
    POP EBP                             ; 005902c6
    POP EDI                             ; 005902c7
    POP ESI                             ; 005902c8
    POP EBX                             ; 005902c9
    LEA EAX,[EAX]                       ; 005902ca
    RET                                 ; 005902d0
    MOV EAX,dword ptr [EBX + 0x58]      ; 005902d1
        ;   Label: LAB_005902d1
    MOV ECX,0x20                        ; 005902d4
    MOV dword ptr [EBX + 0x5c],EAX      ; 005902d9
    LEA ESI,[EBX + 0x68]                ; 005902dc
    MOV EAX,dword ptr [EBX + 0x60]      ; 005902df
    LEA EDI,[EBX + 0x88]                ; 005902e2
    MOV dword ptr [EBX + 0x64],EAX      ; 005902e8
    PUSH EDI                            ; 005902eb
    MOV EAX,ECX                         ; 005902ec
    SHR ECX,0x2                         ; 005902ee
    MOVSD.REP ES:EDI,ESI                ; 005902f1
    MOV CL,AL                           ; 005902f3
    AND CL,0x3                          ; 005902f5
    MOVSB.REP ES:EDI,ESI                ; 005902f8
    POP EDI                             ; 005902fa
    MOV EDI,dword ptr [0x026656bc]      ; 005902fb | DAT_026656bc
    TEST EDI,EDI                        ; 00590301
    JZ 0x0059050a                       ; 00590303
        ;   XREF to: 0059050a (CONDITIONAL_JUMP)  ; LAB_0059050a
    PUSH 0x34                           ; 00590309
    PUSH 0x0                            ; 0059030b
    LEA EAX,[ESP + 0x8]                 ; 0059030d
    PUSH EAX                            ; 00590311
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00590312
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,0x34                        ; 00590317
    ADD ESP,0xc                         ; 0059031c
    MOV ESI,0x183                       ; 0059031f
    MOV dword ptr [ESP],ECX             ; 00590324
    MOV dword ptr [ESP + 0x4],ESI       ; 00590327
    CMP dword ptr [EBX + 0x14],0x0      ; 0059032b
    JZ 0x00590339                       ; 0059032f
        ;   XREF to: 00590339 (CONDITIONAL_JUMP)  ; LAB_00590339
    MOV dword ptr [ESP + 0x4],0x187     ; 00590331
    CMP dword ptr [EBX + 0x18],0x0      ; 00590339
        ;   Label: LAB_00590339
    JZ 0x00590344                       ; 0059033d
        ;   XREF to: 00590344 (CONDITIONAL_JUMP)  ; LAB_00590344
    OR byte ptr [ESP + 0x4],0x8         ; 0059033f
    CMP dword ptr [EBX + 0x1c],0x0      ; 00590344
        ;   Label: LAB_00590344
    JZ 0x0059034f                       ; 00590348
        ;   XREF to: 0059034f (CONDITIONAL_JUMP)  ; LAB_0059034f
    OR byte ptr [ESP + 0x4],0x40        ; 0059034a
    MOV EAX,ESP                         ; 0059034f
        ;   Label: LAB_0059034f
    PUSH EAX                            ; 00590351
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590352
    MOV ESI,dword ptr [EAX*0x4 + 0x2665974] ; 00590355
    PUSH ESI                            ; 0059035c
    CALL dword ptr [0x026656bc]         ; 0059035d | DAT_026656bc
    TEST EAX,EAX                        ; 00590363
    JNZ 0x005904fe                      ; 00590365
        ;   XREF to: 005904fe (CONDITIONAL_JUMP)  ; LAB_005904fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059036b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059036e
    PUSH 0x3f800000                     ; 00590375
    SUB EAX,EDX                         ; 0059037a
    MOV ESI,0x2665984                   ; 0059037c
    SHL EAX,0x4                         ; 00590381
    PUSH 0xbf800000                     ; 00590384
    ADD ESI,EAX                         ; 00590389
    MOV dword ptr [EBX + 0x4],0x1       ; 0059038b
    PUSH ESI                            ; 00590392
    MOV EDI,dword ptr [ESP + 0x14]      ; 00590393
    PUSH EDI                            ; 00590397
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 00590398
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 0059039d
    FLD float ptr [ESP + 0x54]          ; 005903a1
    ADD ESP,0x10                        ; 005903a5
    PUSH 0x3f800000                     ; 005903a8
    LEA EAX,[ESI + 0xc]                 ; 005903ad
    PUSH 0xbf800000                     ; 005903b0
    PUSH EAX                            ; 005903b5
    FSTP float ptr [EBX + 0x20]         ; 005903b6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005903b9
    PUSH EAX                            ; 005903bd
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 005903be
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 005903c3
    MOV EDX,dword ptr [EBX + 0x14]      ; 005903c7
    MOV EAX,dword ptr [ESP + 0x54]      ; 005903ca
    MOV dword ptr [EBX + 0x24],EAX      ; 005903ce
    ADD ESP,0x10                        ; 005903d1
    TEST EDX,EDX                        ; 005903d4
    JZ 0x005903fb                       ; 005903d6
        ;   XREF to: 005903fb (CONDITIONAL_JUMP)  ; LAB_005903fb
    PUSH 0x3f800000                     ; 005903d8
    ADD ESI,0x18                        ; 005903dd
    PUSH 0x0                            ; 005903e0
    PUSH ESI                            ; 005903e2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005903e3
    PUSH ECX                            ; 005903e7
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 005903e8
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 005903ed
    MOV EAX,dword ptr [ESP + 0x54]      ; 005903f1
    MOV dword ptr [EBX + 0x28],EAX      ; 005903f5
    ADD ESP,0x10                        ; 005903f8
    CMP dword ptr [EBX + 0x18],0x0      ; 005903fb
        ;   Label: LAB_005903fb
    JNZ 0x005904bf                      ; 005903ff
        ;   XREF to: 005904bf (CONDITIONAL_JUMP)  ; LAB_005904bf
    MOV EDX,EBX                         ; 00590405
        ;   Label: LAB_00590405
    XOR EAX,EAX                         ; 00590407
    MOV ESI,0x1                         ; 00590409
        ;   Label: LAB_00590409
    MOV CL,AL                           ; 0059040e
    MOV EDI,dword ptr [ESP + 0x20]      ; 00590410
    SHL ESI,CL                          ; 00590414
    TEST ESI,EDI                        ; 00590416
    SETNZ CL                            ; 00590418
    ADD EDX,0x4                         ; 0059041b
    AND ECX,0xff                        ; 0059041e
    INC EAX                             ; 00590424
    MOV dword ptr [EDX + 0x64],ECX      ; 00590425
    CMP EAX,0x8                         ; 00590428
    JL 0x00590409                       ; 0059042b
        ;   XREF to: 00590409 (CONDITIONAL_JUMP)  ; LAB_00590409
    LEA EAX,[EAX]                       ; 0059042d
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00590430
        ;   Label: LAB_00590430
    MOV EAX,dword ptr [EBX + 0x58]      ; 00590433
    CMP EAX,EDX                         ; 00590436
    JZ 0x0059043d                       ; 00590438
        ;   XREF to: 0059043d (CONDITIONAL_JUMP)  ; LAB_0059043d
    MOV dword ptr [EBX + 0x30],EAX      ; 0059043a
    MOV ECX,dword ptr [EBX + 0x64]      ; 0059043d
        ;   Label: LAB_0059043d
    MOV EAX,dword ptr [EBX + 0x60]      ; 00590440
    CMP EAX,ECX                         ; 00590443
    JNZ 0x00590600                      ; 00590445
        ;   XREF to: 00590600 (CONDITIONAL_JUMP)  ; LAB_00590600
    MOV EAX,EBX                         ; 0059044b
        ;   Label: LAB_0059044b
    LEA ECX,[EBX + 0x20]                ; 0059044d
    MOV ESI,dword ptr [EAX + 0x88]      ; 00590450
        ;   Label: LAB_00590450
    MOV EDX,dword ptr [EAX + 0x68]      ; 00590456
    CMP EDX,ESI                         ; 00590459
    JZ 0x00590460                       ; 0059045b
        ;   XREF to: 00590460 (CONDITIONAL_JUMP)  ; LAB_00590460
    MOV dword ptr [EAX + 0x38],EDX      ; 0059045d
    ADD EAX,0x4                         ; 00590460
        ;   Label: LAB_00590460
    CMP EAX,ECX                         ; 00590463
    JNZ 0x00590450                      ; 00590465
        ;   XREF to: 00590450 (CONDITIONAL_JUMP)  ; LAB_00590450
    CMP dword ptr [EBX + 0x58],0x0      ; 00590467
    JNZ 0x00590608                      ; 0059046b
        ;   XREF to: 00590608 (CONDITIONAL_JUMP)  ; LAB_00590608
    CMP dword ptr [EBX + 0x60],0x0      ; 00590471
    JNZ 0x00590608                      ; 00590475
        ;   XREF to: 00590608 (CONDITIONAL_JUMP)  ; LAB_00590608
    MOV EAX,EBX                         ; 0059047b
    MOV ECX,dword ptr [EBX + 0x68]      ; 0059047d
    XOR EDX,EDX                         ; 00590480
    TEST ECX,ECX                        ; 00590482
    JNZ 0x00590623                      ; 00590484
        ;   XREF to: 00590623 (CONDITIONAL_JUMP)  ; LAB_00590623
    INC EDX                             ; 0059048a
        ;   Label: LAB_0059048a
    ADD EAX,0x4                         ; 0059048b
    CMP EDX,0x8                         ; 0059048e
    JL 0x00590619                       ; 00590491
        ;   XREF to: 00590619 (CONDITIONAL_JUMP)  ; LAB_00590619
    MOV ECX,EBX                         ; 00590497
        ;   Label: LAB_00590497
    XOR EDX,EDX                         ; 00590499
    FLD float ptr [ECX + 0x20]          ; 0059049b
        ;   Label: LAB_0059049b
    FABS                                ; 0059049e
    FCOMP double ptr [0x005eeafd]       ; 005904a0 | DAT_005eeafd
    FNSTSW AX                           ; 005904a6
    SAHF                                ; 005904a8
    JA 0x00590608                       ; 005904a9
        ;   XREF to: 00590608 (CONDITIONAL_JUMP)  ; LAB_00590608
    INC EDX                             ; 005904af
    ADD ECX,0x4                         ; 005904b0
    CMP EDX,0x4                         ; 005904b3
    JL 0x0059049b                       ; 005904b6
        ;   XREF to: 0059049b (CONDITIONAL_JUMP)  ; LAB_0059049b
    MOV ESP,EBP                         ; 005904b8
    POP EBP                             ; 005904ba
    POP EDI                             ; 005904bb
    POP ESI                             ; 005904bc
    POP EBX                             ; 005904bd
    RET                                 ; 005904be
    MOV EDX,dword ptr [EBP + 0x14]      ; 005904bf
        ;   Label: LAB_005904bf
    LEA EAX,[EDX*0x4 + 0x0]             ; 005904c2
    SUB EAX,EDX                         ; 005904c9
    SHL EAX,0x4                         ; 005904cb
    ADD EAX,0x2665984                   ; 005904ce
    PUSH 0x3f800000                     ; 005904d3
    ADD EAX,0x24                        ; 005904d8
    PUSH 0xbf800000                     ; 005904db
    PUSH EAX                            ; 005904e0
    MOV EDI,dword ptr [ESP + 0x20]      ; 005904e1
    PUSH EDI                            ; 005904e5
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 005904e6
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 005904eb
    MOV EAX,dword ptr [ESP + 0x54]      ; 005904ef
    MOV dword ptr [EBX + 0x2c],EAX      ; 005904f3
    ADD ESP,0x10                        ; 005904f6
    JMP 0x00590405                      ; 005904f9
        ;   XREF to: 00590405 (UNCONDITIONAL_JUMP)  ; LAB_00590405
    MOV dword ptr [EBX + 0x4],0x0       ; 005904fe
        ;   Label: LAB_005904fe
    JMP 0x00590430                      ; 00590505
        ;   XREF to: 00590430 (UNCONDITIONAL_JUMP)  ; LAB_00590430
    PUSH 0x10                           ; 0059050a
        ;   Label: LAB_0059050a
    PUSH EDI                            ; 0059050c
    LEA EAX,[ESP + 0x3c]                ; 0059050d
    PUSH EAX                            ; 00590511
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00590512
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00590517
    LEA EAX,[ESP + 0x34]                ; 0059051a
    PUSH EAX                            ; 0059051e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059051f
    MOV EDX,dword ptr [EAX*0x4 + 0x2665974] ; 00590522
    PUSH EDX                            ; 00590529
    CALL dword ptr CS:[0x5c8434]        ; 0059052a
    TEST EAX,EAX                        ; 00590531
    JNZ 0x005905f8                      ; 00590533
        ;   XREF to: 005905f8 (CONDITIONAL_JUMP)  ; LAB_005905f8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00590539
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059053c
    PUSH 0x3f800000                     ; 00590543
    SUB EAX,EDX                         ; 00590548
    MOV ESI,0x2665984                   ; 0059054a
    SHL EAX,0x4                         ; 0059054f
    PUSH 0xbf800000                     ; 00590552
    ADD ESI,EAX                         ; 00590557
    MOV dword ptr [EBX + 0x4],0x1       ; 00590559
    PUSH ESI                            ; 00590560
    MOV ECX,dword ptr [ESP + 0x40]      ; 00590561
    PUSH ECX                            ; 00590565
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 00590566
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 0059056b
    FLD float ptr [ESP + 0x54]          ; 0059056f
    ADD ESP,0x10                        ; 00590573
    PUSH 0x3f800000                     ; 00590576
    LEA EAX,[ESI + 0xc]                 ; 0059057b
    PUSH 0xbf800000                     ; 0059057e
    PUSH EAX                            ; 00590583
    FSTP float ptr [EBX + 0x20]         ; 00590584
    MOV EDI,dword ptr [ESP + 0x44]      ; 00590587
    PUSH EDI                            ; 0059058b
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 0059058c
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 00590591
    FLD float ptr [ESP + 0x54]          ; 00590595
    MOV EAX,dword ptr [EBX + 0x14]      ; 00590599
    FSTP float ptr [EBX + 0x24]         ; 0059059c
    ADD ESP,0x10                        ; 0059059f
    TEST EAX,EAX                        ; 005905a2
    JNZ 0x005905d3                      ; 005905a4
        ;   XREF to: 005905d3 (CONDITIONAL_JUMP)  ; LAB_005905d3
    MOV EDX,EBX                         ; 005905a6
        ;   Label: LAB_005905a6
    XOR EAX,EAX                         ; 005905a8
    MOV ESI,0x1                         ; 005905aa
        ;   Label: LAB_005905aa
    MOV CL,AL                           ; 005905af
    SHL ESI,CL                          ; 005905b1
    MOV ECX,ESI                         ; 005905b3
    TEST dword ptr [ESP + 0x40],ECX     ; 005905b5
    SETNZ CL                            ; 005905b9
    ADD EDX,0x4                         ; 005905bc
    AND ECX,0xff                        ; 005905bf
    INC EAX                             ; 005905c5
    MOV dword ptr [EDX + 0x64],ECX      ; 005905c6
    CMP EAX,0x8                         ; 005905c9
    JL 0x005905aa                       ; 005905cc
        ;   XREF to: 005905aa (CONDITIONAL_JUMP)  ; LAB_005905aa
    JMP 0x00590430                      ; 005905ce
        ;   XREF to: 00590430 (UNCONDITIONAL_JUMP)  ; LAB_00590430
    PUSH 0x3f800000                     ; 005905d3
        ;   Label: LAB_005905d3
    ADD ESI,0x18                        ; 005905d8
    PUSH 0x0                            ; 005905db
    PUSH ESI                            ; 005905dd
    MOV EDX,dword ptr [ESP + 0x48]      ; 005905de
    PUSH EDX                            ; 005905e2
    CALL unkafter_winrun.cpp_FUN_005901c0 ; 005905e3
        ;   XREF to: 005901c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_005901c0()
    MOV dword ptr [ESP + 0x54],EAX      ; 005905e8
    MOV EAX,dword ptr [ESP + 0x54]      ; 005905ec
    MOV dword ptr [EBX + 0x28],EAX      ; 005905f0
    ADD ESP,0x10                        ; 005905f3
    JMP 0x005905a6                      ; 005905f6
        ;   XREF to: 005905a6 (UNCONDITIONAL_JUMP)  ; LAB_005905a6
    MOV dword ptr [EBX + 0x4],EDI       ; 005905f8
        ;   Label: LAB_005905f8
    JMP 0x00590430                      ; 005905fb
        ;   XREF to: 00590430 (UNCONDITIONAL_JUMP)  ; LAB_00590430
    MOV dword ptr [EBX + 0x34],EAX      ; 00590600
        ;   Label: LAB_00590600
    JMP 0x0059044b                      ; 00590603
        ;   XREF to: 0059044b (UNCONDITIONAL_JUMP)  ; LAB_0059044b
    MOV dword ptr [EBX + 0xa8],0x0      ; 00590608
        ;   Label: LAB_00590608
    MOV ESP,EBP                         ; 00590612
    POP EBP                             ; 00590614
    POP EDI                             ; 00590615
    POP ESI                             ; 00590616
    POP EBX                             ; 00590617
    RET                                 ; 00590618
    CMP dword ptr [EAX + 0x68],0x0      ; 00590619
        ;   Label: LAB_00590619
    JZ 0x0059048a                       ; 0059061d
        ;   XREF to: 0059048a (CONDITIONAL_JUMP)  ; LAB_0059048a
    MOV dword ptr [EBX + 0xa8],0x0      ; 00590623
        ;   Label: LAB_00590623
    JMP 0x00590497                      ; 0059062d
        ;   XREF to: 00590497 (UNCONDITIONAL_JUMP)  ; LAB_00590497

