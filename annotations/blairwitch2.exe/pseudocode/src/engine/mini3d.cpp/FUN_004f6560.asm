; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f6560(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f6a70 at 004f6b16
;   engine_mini3d.cpp_FUN_004f6be0 at 004f6c57
;   engine_mini3d.cpp_FUN_004f8330 at 004f8409
;
; Referenced Globals:
;   void* PTR_caseD_1_004f654c = 004f660b
;   void* PTR_caseD_3_004f6554 = 004f65e9
;   undefined4 DAT_01d09b8c
;   undefined4 DAT_01d09b90
;   undefined4 DAT_01d0ab98
;   undefined4 DAT_01d0ab9c
;   undefined4 DAT_01d0aba0
;   undefined4 DAT_01d0abdc
;   undefined4 DAT_01d0abe0
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6560
        ;   Label: engine_mini3d.cpp_FUN_004f6560
    PUSH ESI                            ; 004f6561
    PUSH EDI                            ; 004f6562
    PUSH EBP                            ; 004f6563
    SUB ESP,0x8                         ; 004f6564
    MOV EBX,dword ptr [0x01d09b90]      ; 004f6567 | DAT_01d09b90
    XOR EDX,EDX                         ; 004f656d
    MOV ECX,dword ptr [0x01d09b8c]      ; 004f656f | DAT_01d09b8c
    MOV dword ptr [ESP],EDX             ; 004f6575
    TEST ECX,ECX                        ; 004f6578
    JLE 0x004f65fd                      ; 004f657a
        ;   XREF to: 004f65fd (CONDITIONAL_JUMP)  ; LAB_004f65fd
    MOV EBP,0x1d0ab98                   ; 004f6580
    MOV ECX,dword ptr [ESP]             ; 004f6585
        ;   Label: LAB_004f6585
    MOV EAX,[0x01d09b8c]                ; 004f6588 | DAT_01d09b8c
    INC ECX                             ; 004f658d
    CMP ECX,EAX                         ; 004f658e
    JNZ 0x004f6594                      ; 004f6590
        ;   XREF to: 004f6594 (CONDITIONAL_JUMP)  ; LAB_004f6594
    XOR ECX,EAX                         ; 004f6592
    MOV ESI,0x1d0ab98                   ; 004f6594
        ;   Label: LAB_004f6594
    SHL ECX,0x6                         ; 004f6599
    FLD float ptr [EBP + 0x4]           ; 004f659c | DAT_01d0ab9c | DAT_01d0abdc
    ADD ESI,ECX                         ; 004f659f
    MOV EDX,EBP                         ; 004f65a1
    MOV dword ptr [ESP + 0x4],ESI       ; 004f65a3
    XOR ECX,ECX                         ; 004f65a7
    FCOMP float ptr [EBP + 0x8]         ; 004f65a9 | DAT_01d0aba0 | DAT_01d0abe0
    FNSTSW AX                           ; 004f65ac
    SAHF                                ; 004f65ae
    JC 0x004f65b6                       ; 004f65af
        ;   XREF to: 004f65b6 (CONDITIONAL_JUMP)  ; LAB_004f65b6
    MOV ECX,0x1                         ; 004f65b1
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f65b6
        ;   Label: LAB_004f65b6
    FLD float ptr [ESI + 0x4]           ; 004f65ba | DAT_01d0ab9c
    FCOMP float ptr [ESI + 0x8]         ; 004f65bd | DAT_01d0aba0
    FNSTSW AX                           ; 004f65c0
    SAHF                                ; 004f65c2
    JC 0x004f65c8                       ; 004f65c3
        ;   XREF to: 004f65c8 (CONDITIONAL_JUMP)  ; LAB_004f65c8
    OR CL,0x2                           ; 004f65c5
    CMP ECX,0x3                         ; 004f65c8
        ;   Label: LAB_004f65c8
    JA 0x004f65e9                       ; 004f65cb
        ;   XREF to: 004f65e9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f6548]  ; 004f65cd | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f65d4
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f65d6
    MOV ECX,0x10                        ; 004f65d9
    LEA EDI,[ESI + 0x1d0b398]           ; 004f65de
    MOV ESI,EDX                         ; 004f65e4
    INC EBX                             ; 004f65e6
    MOVSD.REP ES:EDI,ESI                ; 004f65e7 | DAT_01d0ab98 | DAT_01d0ab9c
    MOV ESI,dword ptr [ESP]             ; 004f65e9
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d09b8c]      ; 004f65ec | DAT_01d09b8c
    INC ESI                             ; 004f65f2
    ADD EBP,0x40                        ; 004f65f3
    MOV dword ptr [ESP],ESI             ; 004f65f6
    CMP ESI,EDI                         ; 004f65f9
    JL 0x004f6585                       ; 004f65fb
        ;   XREF to: 004f6585 (CONDITIONAL_JUMP)  ; LAB_004f6585
    MOV dword ptr [0x01d09b90],EBX      ; 004f65fd | DAT_01d09b90
        ;   Label: LAB_004f65fd
    ADD ESP,0x8                         ; 004f6603
    POP EBP                             ; 004f6606
    POP EDI                             ; 004f6607
    POP ESI                             ; 004f6608
    POP EBX                             ; 004f6609
    RET                                 ; 004f660a
    MOV ECX,EBX                         ; 004f660b
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f660d
    ADD ECX,0x1d0b398                   ; 004f6610
    PUSH ECX                            ; 004f6616
    PUSH EDX                            ; 004f6617 | DAT_01d0ab98
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f6618
    PUSH ESI                            ; 004f661c
    MOV dword ptr [0x01d09b90],EBX      ; 004f661d | DAT_01d09b90
    CALL engine_mini3d.cpp_FUN_004f6150 ; 004f6623
        ;   XREF to: 004f6150 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6150()
    MOV EBX,dword ptr [0x01d09b90]      ; 004f6628 | DAT_01d09b90
    ADD ESP,0xc                         ; 004f662e
    INC EBX                             ; 004f6631
    JMP 0x004f65e9                      ; 004f6632
        ;   XREF to: 004f65e9 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f6634
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f6636
    MOV ECX,0x10                        ; 004f6639
    LEA EDI,[ESI + 0x1d0b398]           ; 004f663e
    MOV ESI,EDX                         ; 004f6644
    INC EBX                             ; 004f6646
    MOVSD.REP ES:EDI,ESI                ; 004f6647 | DAT_01d0ab98 | DAT_01d0ab9c
    MOV ECX,EBX                         ; 004f6649
    SHL ECX,0x6                         ; 004f664b
    ADD ECX,0x1d0b398                   ; 004f664e
    PUSH ECX                            ; 004f6654
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f6655
    PUSH ECX                            ; 004f6659
    PUSH EDX                            ; 004f665a | DAT_01d0ab98
    MOV dword ptr [0x01d09b90],EBX      ; 004f665b | DAT_01d09b90
    CALL engine_mini3d.cpp_FUN_004f6150 ; 004f6661
        ;   XREF to: 004f6150 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6150()
    MOV EBX,dword ptr [0x01d09b90]      ; 004f6666 | DAT_01d09b90
    ADD ESP,0xc                         ; 004f666c
    INC EBX                             ; 004f666f
    JMP 0x004f65e9                      ; 004f6670
        ;   XREF to: 004f65e9 (UNCONDITIONAL_JUMP)  ; caseD_3

