; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_FUN_004ff3f0(int param_1,float param_2,int param_3)
;
;
; XREF[2]:
;   core_event.cpp_FUN_004a1d00 at 004a5988
;   core_lever.cpp_CLever_process_FUN_004ff190 at 004ff39c
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CLeverClassInfo.name_hash
;   undefined4 DAT_01d2d908
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff3f0
        ;   Label: core_lever.cpp_FUN_004ff3f0
    PUSH ESI                            ; 004ff3f1
    PUSH EDI                            ; 004ff3f2
    PUSH EBP                            ; 004ff3f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ff3f4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004ff3f8
    FLD float ptr [EDI + 0x2dc]         ; 004ff3fc
    FCOMP float ptr [ESP + 0x18]        ; 004ff402
    FNSTSW AX                           ; 004ff406
    SAHF                                ; 004ff408
    JZ 0x004ff44e                       ; 004ff409
        ;   XREF to: 004ff44e (CONDITIONAL_JUMP)  ; LAB_004ff44e
    MOV EAX,[0x0061f650]                ; 004ff40b | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 004ff410 | DAT_01d2d908
    JZ 0x004ff453                       ; 004ff417
        ;   XREF to: 004ff453 (CONDITIONAL_JUMP)  ; LAB_004ff453
    TEST EBP,EBP                        ; 004ff419
        ;   Label: LAB_004ff419
    JZ 0x004ff4c0                       ; 004ff41b
        ;   XREF to: 004ff4c0 (CONDITIONAL_JUMP)  ; LAB_004ff4c0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ff421
        ;   Label: LAB_004ff421
    MOV dword ptr [EDI + 0x2dc],EAX     ; 004ff425
    MOV EAX,dword ptr [EDI + 0x410]     ; 004ff42b
    TEST EAX,EAX                        ; 004ff431
    JNZ 0x004ff514                      ; 004ff433
        ;   XREF to: 004ff514 (CONDITIONAL_JUMP)  ; LAB_004ff514
    XOR ESI,ESI                         ; 004ff439
        ;   Label: LAB_004ff439
    XOR EBX,EBX                         ; 004ff43b
    MOV EAX,[0x00622c18]                ; 004ff43d | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004ff43d
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004ff442 | g_CDemonSetInstance.actor_count
    JL 0x004ff527                       ; 004ff448
        ;   XREF to: 004ff527 (CONDITIONAL_JUMP)  ; LAB_004ff527
    POP EBP                             ; 004ff44e
        ;   Label: LAB_004ff44e
    POP EDI                             ; 004ff44f
    POP ESI                             ; 004ff450
    POP EBX                             ; 004ff451
    RET                                 ; 004ff452
    FLD float ptr [ESP + 0x18]          ; 004ff453
        ;   Label: LAB_004ff453
    FLDZ                                ; 004ff457
    FCOMPP                              ; 004ff459
    FNSTSW AX                           ; 004ff45b
    SAHF                                ; 004ff45d
    JC 0x004ff485                       ; 004ff45e
        ;   XREF to: 004ff485 (CONDITIONAL_JUMP)  ; LAB_004ff485
    FLD float ptr [EDI + 0x2dc]         ; 004ff460
    FLDZ                                ; 004ff466
    FCOMPP                              ; 004ff468
    FNSTSW AX                           ; 004ff46a
    SAHF                                ; 004ff46c
    JNC 0x004ff485                      ; 004ff46d
        ;   XREF to: 004ff485 (CONDITIONAL_JUMP)  ; LAB_004ff485
    LEA EAX,[EDI + 0x344]               ; 004ff46f
    PUSH EAX                            ; 004ff475
    MOV ECX,dword ptr [0x0061b4d0]      ; 004ff476 | DAT_0061b4d0
    PUSH ECX                            ; 004ff47c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ff47d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ff482
    FLD float ptr [ESP + 0x18]          ; 004ff485
        ;   Label: LAB_004ff485
    FLD1                                ; 004ff489
    FCOMPP                              ; 004ff48b
    FNSTSW AX                           ; 004ff48d
    SAHF                                ; 004ff48f
    JA 0x004ff419                       ; 004ff490
        ;   XREF to: 004ff419 (CONDITIONAL_JUMP)  ; LAB_004ff419
    FLD float ptr [EDI + 0x2dc]         ; 004ff492
    FLD1                                ; 004ff498
    FCOMPP                              ; 004ff49a
    FNSTSW AX                           ; 004ff49c
    SAHF                                ; 004ff49e
    JBE 0x004ff419                      ; 004ff49f
        ;   XREF to: 004ff419 (CONDITIONAL_JUMP)  ; LAB_004ff419
    LEA EAX,[EDI + 0x2e0]               ; 004ff4a5
    PUSH EAX                            ; 004ff4ab
    MOV EBX,dword ptr [0x0061b4d0]      ; 004ff4ac | DAT_0061b4d0
    PUSH EBX                            ; 004ff4b2
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ff4b3
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ff4b8
    JMP 0x004ff419                      ; 004ff4bb
        ;   XREF to: 004ff419 (UNCONDITIONAL_JUMP)  ; LAB_004ff419
    FLDZ                                ; 004ff4c0
        ;   Label: LAB_004ff4c0
    FCOMP float ptr [ESP + 0x18]        ; 004ff4c2
    FNSTSW AX                           ; 004ff4c6
    SAHF                                ; 004ff4c8
    JNC 0x004ff4da                      ; 004ff4c9
        ;   XREF to: 004ff4da (CONDITIONAL_JUMP)  ; LAB_004ff4da
    FLD float ptr [EDI + 0x2dc]         ; 004ff4cb
    FLDZ                                ; 004ff4d1
    FCOMPP                              ; 004ff4d3
    FNSTSW AX                           ; 004ff4d5
    SAHF                                ; 004ff4d7
    JNC 0x004ff4fb                      ; 004ff4d8
        ;   XREF to: 004ff4fb (CONDITIONAL_JUMP)  ; LAB_004ff4fb
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 004ff4da
        ;   Label: LAB_004ff4da
    JGE 0x004ff421                      ; 004ff4e2
        ;   XREF to: 004ff421 (CONDITIONAL_JUMP)  ; LAB_004ff421
    FLD float ptr [EDI + 0x2dc]         ; 004ff4e8
    FLD1                                ; 004ff4ee
    FCOMPP                              ; 004ff4f0
    FNSTSW AX                           ; 004ff4f2
    SAHF                                ; 004ff4f4
    JA 0x004ff421                       ; 004ff4f5
        ;   XREF to: 004ff421 (CONDITIONAL_JUMP)  ; LAB_004ff421
    LEA EAX,[EDI + 0x3a8]               ; 004ff4fb
        ;   Label: LAB_004ff4fb
    PUSH EAX                            ; 004ff501
    MOV EBX,dword ptr [EDI + 0x154]     ; 004ff502
    PUSH EDI                            ; 004ff508
    CALL dword ptr [EBX + 0x2c]         ; 004ff509
    ADD ESP,0x8                         ; 004ff50c
    JMP 0x004ff421                      ; 004ff50f
        ;   XREF to: 004ff421 (UNCONDITIONAL_JUMP)  ; LAB_004ff421
    PUSH EBP                            ; 004ff514
        ;   Label: LAB_004ff514
    PUSH dword ptr [ESP + 0x1c]         ; 004ff515
    PUSH EAX                            ; 004ff519
    CALL core_lever.cpp_FUN_004ff3f0    ; 004ff51a
        ;   XREF to: 004ff3f0 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_FUN_004ff3f0()
    ADD ESP,0xc                         ; 004ff51f
    JMP 0x004ff439                      ; 004ff522
        ;   XREF to: 004ff439 (UNCONDITIONAL_JUMP)  ; LAB_004ff439
    MOV EDX,dword ptr [0x01d1c21c]      ; 004ff527 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_004ff527
    PUSH EDX                            ; 004ff52d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004ff52e
    PUSH ECX                            ; 004ff535
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ff536
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004ff53b
    TEST EAX,EAX                        ; 004ff53e
    JZ 0x004ff558                       ; 004ff540
        ;   XREF to: 004ff558 (CONDITIONAL_JUMP)  ; LAB_004ff558
    CMP EDI,dword ptr [EAX + 0x410]     ; 004ff542
    JNZ 0x004ff558                      ; 004ff548
        ;   XREF to: 004ff558 (CONDITIONAL_JUMP)  ; LAB_004ff558
    PUSH EBP                            ; 004ff54a
    PUSH dword ptr [ESP + 0x1c]         ; 004ff54b
    PUSH EAX                            ; 004ff54f
    CALL core_lever.cpp_FUN_004ff3f0    ; 004ff550
        ;   XREF to: 004ff3f0 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_FUN_004ff3f0()
    ADD ESP,0xc                         ; 004ff555
    INC EBX                             ; 004ff558
        ;   Label: LAB_004ff558
    ADD ESI,0x4                         ; 004ff559
    JMP 0x004ff43d                      ; 004ff55c
        ;   XREF to: 004ff43d (UNCONDITIONAL_JUMP)  ; LAB_004ff43d

