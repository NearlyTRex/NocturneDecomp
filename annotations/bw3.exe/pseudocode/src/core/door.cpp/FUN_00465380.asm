; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465380(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004c07b0 at 004c47d3
;   FUN_004d3040 at 004d31af
;
; Referenced Globals:
;   void* switchdataD_0046536c = 004653c9
;   TerminatedCString s_The_door_is_locked_005bbf4d
;   TerminatedCString s_core_door_cpp_005bbf61
;   TerminatedCString s_CDoor_getMoveType_invali_005bbf72
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00408bf0
;   FUN_00465550
;   FUN_004b46b0
;   FUN_004e4330
;   FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465380
        ;   Label: FUN_00465380
    PUSH ESI                            ; 00465381
    PUSH EDI                            ; 00465382
    PUSH EBP                            ; 00465383
    MOV EBP,ESP                         ; 00465384
    SUB ESP,0x18                        ; 00465386
    AND ESP,0xfffffff8                  ; 00465389
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046538c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046538f
    ADD EAX,0x20                        ; 00465392
    PUSH EAX                            ; 00465395
    PUSH EBX                            ; 00465396
    LEA ESI,[ESP + 0x8]                 ; 00465397
    LEA EDI,[ESP + 0x14]                ; 0046539b
    CALL FUN_00408bf0                   ; 0046539f
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    ADD ESP,0x8                         ; 004653a4
    MOV ESI,ESP                         ; 004653a7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004653a9
    MOVSD ES:EDI,ESI                    ; 004653ac
    MOVSD ES:EDI,ESI                    ; 004653ad
    MOVSD ES:EDI,ESI                    ; 004653ae
    TEST EDX,EDX                        ; 004653af
    JZ 0x00465401                       ; 004653b1
        ;   XREF to: 00465401 (CONDITIONAL_JUMP)  ; LAB_00465401
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 004653b3
        ;   Label: LAB_004653b3
    CMP EAX,0x3                         ; 004653b9
    JA 0x00465523                       ; 004653bc
        ;   XREF to: 00465523 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x46536c]  ; 004653c2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2e4],0x0     ; 004653c9
        ;   Label: caseD_0
    JNZ 0x0046549d                      ; 004653d0
        ;   XREF to: 0046549d (CONDITIONAL_JUMP)  ; LAB_0046549d
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004653d6
        ;   Label: LAB_004653d6
    JZ 0x004653e4                       ; 004653dd
        ;   XREF to: 004653e4 (CONDITIONAL_JUMP)  ; LAB_004653e4
    XOR byte ptr [ESP + 0x17],0x80      ; 004653df
    FLD float ptr [ESP + 0x14]          ; 004653e4
        ;   Label: LAB_004653e4
    FLDZ                                ; 004653e8
    FCOMPP                              ; 004653ea
    FNSTSW AX                           ; 004653ec
    SAHF                                ; 004653ee
    JBE 0x004654a7                      ; 004653ef
        ;   XREF to: 004654a7 (CONDITIONAL_JUMP)  ; LAB_004654a7
    MOV EAX,0x3                         ; 004653f5
    MOV ESP,EBP                         ; 004653fa
    POP EBP                             ; 004653fc
    POP EDI                             ; 004653fd
    POP ESI                             ; 004653fe
    POP EBX                             ; 004653ff
    RET                                 ; 00465400
    PUSH 0x5bbf4d                       ; 00465401 | = "The door is locked."
        ;   Label: LAB_00465401
    CALL FUN_00508960                   ; 00465406
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 0046540b
    MOV ESI,EAX                         ; 0046540e
    FLD float ptr [ESP + 0x14]          ; 00465410
    FLDZ                                ; 00465414
    FCOMPP                              ; 00465416
    FNSTSW AX                           ; 00465418
    SAHF                                ; 0046541a
    JNC 0x00465457                      ; 0046541b
        ;   XREF to: 00465457 (CONDITIONAL_JUMP)  ; LAB_00465457
    TEST byte ptr [EBX + 0x9d8],0x1     ; 0046541d
    JNZ 0x004653b3                      ; 00465424
        ;   XREF to: 004653b3 (CONDITIONAL_JUMP)  ; LAB_004653b3
    CMP dword ptr [EBX + 0x9d8],0x0     ; 00465426
    JNZ 0x00465438                      ; 0046542d
        ;   XREF to: 00465438 (CONDITIONAL_JUMP)  ; LAB_00465438
    XOR EAX,EAX                         ; 0046542f
        ;   Label: LAB_0046542f
    MOV ESP,EBP                         ; 00465431
    POP EBP                             ; 00465433
    POP EDI                             ; 00465434
    POP ESI                             ; 00465435
    POP EBX                             ; 00465436
    RET                                 ; 00465437
    PUSH EBX                            ; 00465438
        ;   Label: LAB_00465438
    CALL FUN_00465550                   ; 00465439
        ;   XREF to: 00465550 (UNCONDITIONAL_CALL)  ; undefined FUN_00465550()
    ADD ESP,0x4                         ; 0046543e
    PUSH 0x40a00000                     ; 00465441
    PUSH ESI                            ; 00465446
    MOV EAX,[0x005fe9dc]                ; 00465447 | DAT_005fe9dc
    PUSH EAX                            ; 0046544c
    CALL FUN_004b46b0                   ; 0046544d
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 00465452
    JMP 0x0046542f                      ; 00465455
        ;   XREF to: 0046542f (UNCONDITIONAL_JUMP)  ; LAB_0046542f
    TEST byte ptr [EBX + 0x9d8],0x2     ; 00465457
        ;   Label: LAB_00465457
    JNZ 0x004653b3                      ; 0046545e
        ;   XREF to: 004653b3 (CONDITIONAL_JUMP)  ; LAB_004653b3
    CMP dword ptr [EBX + 0x9d8],0x0     ; 00465464
    JNZ 0x00465476                      ; 0046546b
        ;   XREF to: 00465476 (CONDITIONAL_JUMP)  ; LAB_00465476
    XOR EAX,EAX                         ; 0046546d
    MOV ESP,EBP                         ; 0046546f
    POP EBP                             ; 00465471
    POP EDI                             ; 00465472
    POP ESI                             ; 00465473
    POP EBX                             ; 00465474
    RET                                 ; 00465475
    PUSH EBX                            ; 00465476
        ;   Label: LAB_00465476
    CALL FUN_00465550                   ; 00465477
        ;   XREF to: 00465550 (UNCONDITIONAL_CALL)  ; undefined FUN_00465550()
    ADD ESP,0x4                         ; 0046547c
    PUSH 0x40a00000                     ; 0046547f
    PUSH ESI                            ; 00465484
    MOV EBX,dword ptr [0x005fe9dc]      ; 00465485 | DAT_005fe9dc
    PUSH EBX                            ; 0046548b
    CALL FUN_004b46b0                   ; 0046548c
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 00465491
    XOR EAX,EAX                         ; 00465494
    MOV ESP,EBP                         ; 00465496
    POP EBP                             ; 00465498
    POP EDI                             ; 00465499
    POP ESI                             ; 0046549a
    POP EBX                             ; 0046549b
    RET                                 ; 0046549c
    XOR byte ptr [ESP + 0x17],0x80      ; 0046549d
        ;   Label: LAB_0046549d
    JMP 0x004653d6                      ; 004654a2
        ;   XREF to: 004653d6 (UNCONDITIONAL_JUMP)  ; LAB_004653d6
    MOV EAX,0x2                         ; 004654a7
        ;   Label: LAB_004654a7
    MOV ESP,EBP                         ; 004654ac
    POP EBP                             ; 004654ae
    POP EDI                             ; 004654af
    POP ESI                             ; 004654b0
    POP EBX                             ; 004654b1
    RET                                 ; 004654b2
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004654b3
        ;   Label: caseD_1
    JZ 0x004654c8                       ; 004654ba
        ;   XREF to: 004654c8 (CONDITIONAL_JUMP)  ; LAB_004654c8
    MOV EAX,0x7                         ; 004654bc
    MOV ESP,EBP                         ; 004654c1
    POP EBP                             ; 004654c3
    POP EDI                             ; 004654c4
    POP ESI                             ; 004654c5
    POP EBX                             ; 004654c6
    RET                                 ; 004654c7
    MOV EAX,0x6                         ; 004654c8
        ;   Label: LAB_004654c8
    MOV ESP,EBP                         ; 004654cd
    POP EBP                             ; 004654cf
    POP EDI                             ; 004654d0
    POP ESI                             ; 004654d1
    POP EBX                             ; 004654d2
    RET                                 ; 004654d3
    CMP dword ptr [EBX + 0x2dc],0x1     ; 004654d4
        ;   Label: caseD_2
    JNZ 0x00465504                      ; 004654db
        ;   XREF to: 00465504 (CONDITIONAL_JUMP)  ; LAB_00465504
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004654dd
        ;   Label: LAB_004654dd
    JZ 0x004654eb                       ; 004654e4
        ;   XREF to: 004654eb (CONDITIONAL_JUMP)  ; LAB_004654eb
    XOR byte ptr [ESP + 0x17],0x80      ; 004654e6
    FLD float ptr [ESP + 0x14]          ; 004654eb
        ;   Label: LAB_004654eb
    FLDZ                                ; 004654ef
    FCOMPP                              ; 004654f1
    FNSTSW AX                           ; 004654f3
    SAHF                                ; 004654f5
    JBE 0x0046550b                      ; 004654f6
        ;   XREF to: 0046550b (CONDITIONAL_JUMP)  ; LAB_0046550b
    MOV EAX,0x5                         ; 004654f8
    MOV ESP,EBP                         ; 004654fd
    POP EBP                             ; 004654ff
    POP EDI                             ; 00465500
    POP ESI                             ; 00465501
    POP EBX                             ; 00465502
    RET                                 ; 00465503
    XOR byte ptr [ESP + 0x17],0x80      ; 00465504
        ;   Label: LAB_00465504
    JMP 0x004654dd                      ; 00465509
        ;   XREF to: 004654dd (UNCONDITIONAL_JUMP)  ; LAB_004654dd
    MOV EAX,0x4                         ; 0046550b
        ;   Label: LAB_0046550b
    MOV ESP,EBP                         ; 00465510
    POP EBP                             ; 00465512
    POP EDI                             ; 00465513
    POP ESI                             ; 00465514
    POP EBX                             ; 00465515
    RET                                 ; 00465516
    MOV EAX,0x1                         ; 00465517
        ;   Label: caseD_3
    MOV ESP,EBP                         ; 0046551c
    POP EBP                             ; 0046551e
    POP EDI                             ; 0046551f
    POP ESI                             ; 00465520
    POP EBX                             ; 00465521
    RET                                 ; 00465522
    MOV EDX,0x5bbf61                    ; 00465523 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x3de                       ; 00465528
    PUSH 0x5bbf72                       ; 0046552d | = "CDoor::getMoveType - invalid door!"
    MOV dword ptr [0x01d71de0],EDX      ; 00465532 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00465538 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0046553e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00465543
    XOR EAX,EAX                         ; 00465546
    MOV ESP,EBP                         ; 00465548
    POP EBP                             ; 0046554a
    POP EDI                             ; 0046554b
    POP ESI                             ; 0046554c
    POP EBX                             ; 0046554d
    RET                                 ; 0046554e

