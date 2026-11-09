; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00437490(char *base_filename,uchar *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   base_filename
; uchar *          Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400 at 00437414
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005bfb40
;   support_trstream.cpp_FUN_005a0fd0
;   unkaddr_0059f520.cpp_FUN_005a0c10
;   unkaddr_0059f520.cpp_FUN_005a0dc0
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437490
        ;   Label: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490
    PUSH ESI                            ; 00437491
    PUSH EDI                            ; 00437492
    SUB ESP,0xcc                        ; 00437493
    MOV ESI,dword ptr [ESP + 0xdc]      ; 00437499
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004374a0
    LEA EAX,[ESP + 0xa0]                ; 004374a7
    PUSH EAX                            ; 004374ae
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 004374af
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004374b4
    MOV EDI,ESP                         ; 004374b7
    MOV DL,0x2e                         ; 004374b9
    PUSH EDI                            ; 004374bb
    MOV AL,byte ptr [ESI]               ; 004374bc
        ;   Label: LAB_004374bc
    MOV byte ptr [EDI],AL               ; 004374be
    CMP AL,0x0                          ; 004374c0
    JZ 0x004374d4                       ; 004374c2
        ;   XREF to: 004374d4 (CONDITIONAL_JUMP)  ; LAB_004374d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004374c4
    ADD ESI,0x2                         ; 004374c7
    MOV byte ptr [EDI + 0x1],AL         ; 004374ca
    ADD EDI,0x2                         ; 004374cd
    CMP AL,0x0                          ; 004374d0
    JNZ 0x004374bc                      ; 004374d2
        ;   XREF to: 004374bc (CONDITIONAL_JUMP)  ; LAB_004374bc
    POP EDI                             ; 004374d4
        ;   Label: LAB_004374d4
    MOV ESI,ESP                         ; 004374d5
    MOV AL,byte ptr [ESI]               ; 004374d7
        ;   Label: LAB_004374d7
    CMP AL,DL                           ; 004374d9
    JZ 0x004374ef                       ; 004374db
        ;   XREF to: 004374ef (CONDITIONAL_JUMP)  ; LAB_004374ef
    CMP AL,0x0                          ; 004374dd
    JZ 0x004374ed                       ; 004374df
        ;   XREF to: 004374ed (CONDITIONAL_JUMP)  ; LAB_004374ed
    INC ESI                             ; 004374e1
    MOV AL,byte ptr [ESI]               ; 004374e2
    CMP AL,DL                           ; 004374e4
    JZ 0x004374ef                       ; 004374e6
        ;   XREF to: 004374ef (CONDITIONAL_JUMP)  ; LAB_004374ef
    INC ESI                             ; 004374e8
    CMP AL,0x0                          ; 004374e9
    JNZ 0x004374d7                      ; 004374eb
        ;   XREF to: 004374d7 (CONDITIONAL_JUMP)  ; LAB_004374d7
    SUB ESI,ESI                         ; 004374ed
        ;   Label: LAB_004374ed
    MOV EDI,ESI                         ; 004374ef
        ;   Label: LAB_004374ef
    TEST ESI,ESI                        ; 004374f1
    JNZ 0x00437513                      ; 004374f3
        ;   XREF to: 00437513 (CONDITIONAL_JUMP)  ; LAB_00437513
    MOV ESI,ESP                         ; 004374f5
    XOR DL,DL                           ; 004374f7
    MOV AL,byte ptr [ESI]               ; 004374f9
        ;   Label: LAB_004374f9
    CMP AL,DL                           ; 004374fb
    JZ 0x00437511                       ; 004374fd
        ;   XREF to: 00437511 (CONDITIONAL_JUMP)  ; LAB_00437511
    CMP AL,0x0                          ; 004374ff
    JZ 0x0043750f                       ; 00437501
        ;   XREF to: 0043750f (CONDITIONAL_JUMP)  ; LAB_0043750f
    INC ESI                             ; 00437503
    MOV AL,byte ptr [ESI]               ; 00437504
    CMP AL,DL                           ; 00437506
    JZ 0x00437511                       ; 00437508
        ;   XREF to: 00437511 (CONDITIONAL_JUMP)  ; LAB_00437511
    INC ESI                             ; 0043750a
    CMP AL,0x0                          ; 0043750b
    JNZ 0x004374f9                      ; 0043750d
        ;   XREF to: 004374f9 (CONDITIONAL_JUMP)  ; LAB_004374f9
    SUB ESI,ESI                         ; 0043750f
        ;   Label: LAB_0043750f
    MOV EDI,ESI                         ; 00437511
        ;   Label: LAB_00437511
    MOV ESI,0x5d60be                    ; 00437513
        ;   Label: LAB_00437513
    PUSH EDI                            ; 00437518
    MOV AL,byte ptr [ESI]               ; 00437519
        ;   Label: LAB_00437519
    MOV byte ptr [EDI],AL               ; 0043751b
    CMP AL,0x0                          ; 0043751d
    JZ 0x00437531                       ; 0043751f
        ;   XREF to: 00437531 (CONDITIONAL_JUMP)  ; LAB_00437531
    MOV AL,byte ptr [ESI + 0x1]         ; 00437521
    ADD ESI,0x2                         ; 00437524
    MOV byte ptr [EDI + 0x1],AL         ; 00437527
    ADD EDI,0x2                         ; 0043752a
    CMP AL,0x0                          ; 0043752d
    JNZ 0x00437519                      ; 0043752f
        ;   XREF to: 00437519 (CONDITIONAL_JUMP)  ; LAB_00437519
    POP EDI                             ; 00437531
        ;   Label: LAB_00437531
    PUSH 0x1                            ; 00437532
    LEA EAX,[ESP + 0x4]                 ; 00437534
    PUSH EAX                            ; 00437538
    PUSH 0x5d60c3                       ; 00437539
    LEA EAX,[ESP + 0xac]                ; 0043753e
    PUSH EAX                            ; 00437545
    CALL support_trstream.cpp_FUN_005a0fd0 ; 00437546
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a0fd0()
    ADD ESP,0x10                        ; 0043754b
    TEST EAX,EAX                        ; 0043754e
    JZ 0x004375d7                       ; 00437550
        ;   XREF to: 004375d7 (CONDITIONAL_JUMP)  ; LAB_004375d7
    PUSH 0x300                          ; 00437556
    PUSH EBX                            ; 0043755b
    LEA EAX,[ESP + 0xa8]                ; 0043755c
    PUSH EAX                            ; 00437563
    CALL unkaddr_0059f520.cpp_FUN_005a0c10 ; 00437564
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0c10()
    ADD ESP,0xc                         ; 00437569
    CMP EAX,0x300                       ; 0043756c
    JZ 0x004375ab                       ; 00437571
        ;   XREF to: 004375ab (CONDITIONAL_JUMP)  ; LAB_004375ab
    MOV EAX,ESP                         ; 00437573
    PUSH EAX                            ; 00437575
    PUSH 0x5d60c7                       ; 00437576
    LEA EAX,[ESP + 0x58]                ; 0043757b
    PUSH EAX                            ; 0043757f
    CALL crt_unknown.c_FUN_005bfb40     ; 00437580
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5d60d9                    ; 00437585
    ADD ESP,0xc                         ; 0043758a
    LEA EAX,[ESP + 0x50]                ; 0043758d
    MOV ECX,0x119                       ; 00437591
    PUSH EAX                            ; 00437596
    MOV dword ptr [0x01d1d400],EDX      ; 00437597 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043759d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004375a3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004375a8
    LEA EAX,[ESP + 0xa0]                ; 004375ab
        ;   Label: LAB_004375ab
    PUSH EAX                            ; 004375b2
    CALL unkaddr_0059f520.cpp_FUN_005a0dc0 ; 004375b3
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0dc0()
    ADD ESP,0x4                         ; 004375b8
    PUSH 0x0                            ; 004375bb
        ;   Label: LAB_004375bb
    LEA EAX,[ESP + 0xa4]                ; 004375bd
    PUSH EAX                            ; 004375c4
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004375c5
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004375ca
    ADD ESP,0xcc                        ; 004375cd
    POP EDI                             ; 004375d3
    POP ESI                             ; 004375d4
    POP EBX                             ; 004375d5
    RET                                 ; 004375d6
    MOV ECX,0x300                       ; 004375d7
        ;   Label: LAB_004375d7
    MOV ESI,0x1c4ecf8                   ; 004375dc
    MOV EDI,EBX                         ; 004375e1
    PUSH EDI                            ; 004375e3
    MOV EAX,ECX                         ; 004375e4
    SHR ECX,0x2                         ; 004375e6
    MOVSD.REP ES:EDI,ESI                ; 004375e9
    MOV CL,AL                           ; 004375eb
    AND CL,0x3                          ; 004375ed
    MOVSB.REP ES:EDI,ESI                ; 004375f0
    POP EDI                             ; 004375f2
    JMP 0x004375bb                      ; 004375f3
        ;   XREF to: 004375bb (UNCONDITIONAL_JUMP)  ; LAB_004375bb

