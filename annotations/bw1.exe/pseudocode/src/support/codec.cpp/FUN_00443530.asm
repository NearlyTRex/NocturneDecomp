; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443530(int param_1,int *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d6420 at 004d67ae
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_00443110
;   support_codec.cpp_CLZWDictionary_findCode_FUN_004430d0
;   support_codec.cpp_FUN_00443290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443530
        ;   Label: support_codec.cpp_FUN_00443530
    PUSH ESI                            ; 00443531
    PUSH EDI                            ; 00443532
    PUSH EBP                            ; 00443533
    SUB ESP,0x4                         ; 00443534
    MOV EBX,dword ptr [ESP + 0x18]      ; 00443537
    LEA ESI,[EBX + 0x4]                 ; 0044353b
    LEA EAX,[EBX + 0x18]                ; 0044353e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00443541
    MOV dword ptr [ESP],EAX             ; 00443545
    CMP dword ptr [EBX + 0x34],0x0      ; 00443548
        ;   Label: LAB_00443548
    JGE 0x00443580                      ; 0044354c
        ;   XREF to: 00443580 (CONDITIONAL_JUMP)  ; LAB_00443580
    PUSH EBP                            ; 0044354e
        ;   Label: LAB_0044354e
    MOV EAX,dword ptr [EBP]             ; 0044354f
    CALL dword ptr [EAX + 0x4]          ; 00443552
    ADD ESP,0x4                         ; 00443555
    TEST EAX,EAX                        ; 00443558
    JL 0x004435ff                       ; 0044355a
        ;   XREF to: 004435ff (CONDITIONAL_JUMP)  ; LAB_004435ff
    MOV EDX,dword ptr [EBX + 0x30]      ; 00443560
    MOV EDI,dword ptr [EBX + 0x28]      ; 00443563
    PUSH EDX                            ; 00443566
    AND EDI,EAX                         ; 00443567
    PUSH EDI                            ; 00443569
    PUSH ESI                            ; 0044356a
    CALL support_codec.cpp_CLZWDictionary_findCode_FUN_004430d0 ; 0044356b
        ;   XREF to: 004430d0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_findCode_FUN_004430d0(CLZWDictionary * this_ptr, int search_code, int start_index)
    ADD ESP,0xc                         ; 00443570
    TEST EAX,EAX                        ; 00443573
    JL 0x0044360e                       ; 00443575
        ;   XREF to: 0044360e (CONDITIONAL_JUMP)  ; LAB_0044360e
    MOV dword ptr [EBX + 0x30],EAX      ; 0044357b
    JMP 0x00443548                      ; 0044357e
        ;   XREF to: 00443548 (UNCONDITIONAL_JUMP)  ; LAB_00443548
    MOV ECX,dword ptr [ESP + 0x20]      ; 00443580
        ;   Label: LAB_00443580
    PUSH ECX                            ; 00443584
    MOV EDI,dword ptr [ESP + 0x4]       ; 00443585
    PUSH EDI                            ; 00443589
    MOV EAX,dword ptr [EBX + 0x30]      ; 0044358a
    PUSH EAX                            ; 0044358d
    PUSH ESI                            ; 0044358e
    CALL support_codec.cpp_FUN_00443290 ; 0044358f
        ;   XREF to: 00443290 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443290()
    ADD ESP,0x10                        ; 00443594
    MOV EDI,EAX                         ; 00443597
    TEST EAX,EAX                        ; 00443599
    JZ 0x004435a7                       ; 0044359b
        ;   XREF to: 004435a7 (CONDITIONAL_JUMP)  ; LAB_004435a7
    CMP EAX,-0x1                        ; 0044359d
    JZ 0x004435e6                       ; 004435a0
        ;   XREF to: 004435e6 (CONDITIONAL_JUMP)  ; LAB_004435e6
    CMP EAX,-0x2                        ; 004435a2
    JNZ 0x004435f3                      ; 004435a5
        ;   XREF to: 004435f3 (CONDITIONAL_JUMP)  ; LAB_004435f3
    MOV EDX,dword ptr [EBX + 0x38]      ; 004435a7
        ;   Label: LAB_004435a7
    MOV dword ptr [EBX + 0x34],0xffffffff ; 004435aa
    TEST EDX,EDX                        ; 004435b1
    JL 0x004435f7                       ; 004435b3
        ;   XREF to: 004435f7 (CONDITIONAL_JUMP)  ; LAB_004435f7
    PUSH EDX                            ; 004435b5
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004435b6
    PUSH EAX                            ; 004435b9
    PUSH ESI                            ; 004435ba
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_00443110 ; 004435bb
        ;   XREF to: 00443110 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_00443110(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 004435c0
    TEST EAX,EAX                        ; 004435c3
    JZ 0x004435f7                       ; 004435c5
        ;   XREF to: 004435f7 (CONDITIONAL_JUMP)  ; LAB_004435f7
    MOV dword ptr [EBX + 0x38],0xffffffff ; 004435c7
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004435ce
        ;   Label: LAB_004435ce
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 004435d1
    MOV dword ptr [EBX + 0x2c],EAX      ; 004435d8
    MOV dword ptr [EBX + 0x30],EAX      ; 004435db
    TEST EDI,EDI                        ; 004435de
    JZ 0x0044354e                       ; 004435e0
        ;   XREF to: 0044354e (CONDITIONAL_JUMP)  ; LAB_0044354e
    MOV EAX,0x2                         ; 004435e6
        ;   Label: LAB_004435e6
    ADD ESP,0x4                         ; 004435eb
        ;   Label: LAB_004435eb
    POP EBP                             ; 004435ee
    POP EDI                             ; 004435ef
    POP ESI                             ; 004435f0
    POP EBX                             ; 004435f1
    RET                                 ; 004435f2
    XOR EAX,EAX                         ; 004435f3
        ;   Label: LAB_004435f3
    JMP 0x004435eb                      ; 004435f5
        ;   XREF to: 004435eb (UNCONDITIONAL_JUMP)  ; LAB_004435eb
    MOV EAX,dword ptr [EBX + 0x30]      ; 004435f7
        ;   Label: LAB_004435f7
    MOV dword ptr [EBX + 0x38],EAX      ; 004435fa
    JMP 0x004435ce                      ; 004435fd
        ;   XREF to: 004435ce (UNCONDITIONAL_JUMP)  ; LAB_004435ce
    CMP EAX,-0x1                        ; 004435ff
        ;   Label: LAB_004435ff
    JZ 0x0044361c                       ; 00443602
        ;   XREF to: 0044361c (CONDITIONAL_JUMP)  ; LAB_0044361c
    XOR EAX,EAX                         ; 00443604
    ADD ESP,0x4                         ; 00443606
    POP EBP                             ; 00443609
    POP EDI                             ; 0044360a
    POP ESI                             ; 0044360b
    POP EBX                             ; 0044360c
    RET                                 ; 0044360d
    MOV EAX,dword ptr [EBX + 0x30]      ; 0044360e
        ;   Label: LAB_0044360e
    MOV dword ptr [EBX + 0x3c],EDI      ; 00443611
    MOV dword ptr [EBX + 0x34],EAX      ; 00443614
    JMP 0x00443548                      ; 00443617
        ;   XREF to: 00443548 (UNCONDITIONAL_JUMP)  ; LAB_00443548
    MOV EAX,0x1                         ; 0044361c
        ;   Label: LAB_0044361c
    ADD ESP,0x4                         ; 00443621
    POP EBP                             ; 00443624
    POP EDI                             ; 00443625
    POP ESI                             ; 00443626
    POP EBX                             ; 00443627
    RET                                 ; 00443628

