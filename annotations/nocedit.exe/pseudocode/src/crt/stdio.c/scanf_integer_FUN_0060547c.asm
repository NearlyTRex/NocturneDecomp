; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; int              Stack[0xc]:4   base
; int              Stack[0x10]:4   is_signed
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604b21
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_math.c_multiply64_FUN_0060b2b8
;   crt_stdio.c_char_to_digit_FUN_006058e8
;   crt_stdio.c_scanf_getc_with_width_FUN_00605918
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060547c
        ;   Label: crt_stdio.c_scanf_integer_FUN_0060547c
    PUSH ESI                            ; 0060547d
    PUSH EDI                            ; 0060547e
    PUSH ES                             ; 0060547f
    PUSH EBP                            ; 00605480
    SUB ESP,0x28                        ; 00605481
    MOV EDI,dword ptr [ESP + 0x48]      ; 00605484
    XOR EDX,EDX                         ; 00605488
    XOR EBP,EBP                         ; 0060548a
    MOV dword ptr [ESP],EDX             ; 0060548c
    MOV dword ptr [ESP + 0x4],EDX       ; 0060548f
    MOV dword ptr [ESP + 0x24],EDX      ; 00605493
    MOV dword ptr [ESP + 0x20],EDX      ; 00605497
    MOV EAX,dword ptr [ESP + 0x40]      ; 0060549b
        ;   Label: LAB_0060549b
    PUSH EAX                            ; 0060549f
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 006054a0 | int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006054a5
    MOV dword ptr [ESP + 0x18],EAX      ; 006054a8
    MOV BL,byte ptr [ESP + 0x18]        ; 006054ac
    INC BL                              ; 006054b0
    AND EBX,0xff                        ; 006054b2
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 006054b8 | char[256] g_CharacterClassificationTable
    JZ 0x006054c7                       ; 006054bf | LAB_006054c7
        ;   XREF to: 006054c7 (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0x20]          ; 006054c1
    JMP 0x0060549b                      ; 006054c5 | LAB_0060549b
        ;   XREF to: 0060549b (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x40]      ; 006054c7
        ;   Label: LAB_006054c7
    TEST byte ptr [EDX + 0x10],0x2      ; 006054cb
    JNZ 0x00605798                      ; 006054cf | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDX + 0xc]       ; 006054d5
    LEA ESI,[EBX + -0x1]                ; 006054d8
    MOV dword ptr [EDX + 0xc],ESI       ; 006054db
    TEST EBX,EBX                        ; 006054de
    JZ 0x00605786                       ; 006054e0 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EBX,0x2b                        ; 006054e6
    MOV ECX,dword ptr [ESP + 0x4c]      ; 006054eb
    MOV dword ptr [ESP + 0x1c],EBX      ; 006054ef
    TEST ECX,ECX                        ; 006054f3
    JZ 0x0060552b                       ; 006054f5 | LAB_0060552b
        ;   XREF to: 0060552b (CONDITIONAL_JUMP)
    CMP EAX,EBX                         ; 006054f7
    JZ 0x00605500                       ; 006054f9 | LAB_00605500
        ;   XREF to: 00605500 (CONDITIONAL_JUMP)
    CMP EAX,0x2d                        ; 006054fb
    JNZ 0x0060552b                      ; 006054fe | LAB_0060552b
        ;   XREF to: 0060552b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00605500
        ;   Label: LAB_00605500
    MOV dword ptr [ESP + 0x1c],EAX      ; 00605504
    MOV EAX,dword ptr [ESP + 0x20]      ; 00605508
    MOV ESI,dword ptr [ESP + 0x40]      ; 0060550c
    INC EAX                             ; 00605510
    PUSH ESI                            ; 00605511
    MOV dword ptr [ESP + 0x24],EAX      ; 00605512
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605516 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060551b
    MOV dword ptr [ESP + 0x18],EAX      ; 0060551e
    CMP EAX,-0x1                        ; 00605522
    JZ 0x00605798                       ; 00605525 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0060552b
        ;   Label: LAB_0060552b
    JNZ 0x006055a2                      ; 0060552d | LAB_006055a2
        ;   XREF to: 006055a2 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x18],0x30     ; 00605533
    JNZ 0x0060559b                      ; 00605538 | LAB_0060559b
        ;   XREF to: 0060559b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 0060553a
    PUSH EAX                            ; 0060553e
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 0060553f | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605544
    MOV EBP,0x1                         ; 00605547
    MOV dword ptr [ESP + 0x18],EAX      ; 0060554c
    CMP EAX,-0x1                        ; 00605550
    JZ 0x00605798                       ; 00605553 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    CMP EAX,0x78                        ; 00605559
    JZ 0x00605563                       ; 0060555c | LAB_00605563
        ;   XREF to: 00605563 (CONDITIONAL_JUMP)
    CMP EAX,0x58                        ; 0060555e
    JNZ 0x00605594                      ; 00605561 | LAB_00605594
        ;   XREF to: 00605594 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x40]      ; 00605563
        ;   Label: LAB_00605563
    MOV EBX,dword ptr [ESP + 0x20]      ; 00605567
    PUSH EDX                            ; 0060556b
    ADD EBX,0x2                         ; 0060556c
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 0060556f | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x24],EBX      ; 00605574
    ADD ESP,0x4                         ; 00605578
    XOR EBP,EBP                         ; 0060557b
    MOV dword ptr [ESP + 0x18],EAX      ; 0060557d
    CMP EAX,-0x1                        ; 00605581
    JZ 0x00605798                       ; 00605584 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    MOV EDI,0x10                        ; 0060558a
    JMP 0x006055fe                      ; 0060558f | LAB_006055fe
        ;   XREF to: 006055fe (UNCONDITIONAL_JUMP)
    MOV EDI,0x8                         ; 00605594
        ;   Label: LAB_00605594
    JMP 0x006055fe                      ; 00605599 | LAB_006055fe
        ;   XREF to: 006055fe (UNCONDITIONAL_JUMP)
    MOV EDI,0xa                         ; 0060559b
        ;   Label: LAB_0060559b
    JMP 0x006055fe                      ; 006055a0 | LAB_006055fe
        ;   XREF to: 006055fe (UNCONDITIONAL_JUMP)
    CMP EDI,0x10                        ; 006055a2
        ;   Label: LAB_006055a2
    JNZ 0x006055fe                      ; 006055a5 | LAB_006055fe
        ;   XREF to: 006055fe (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x18],0x30     ; 006055a7
    JNZ 0x006055fe                      ; 006055ac | LAB_006055fe
        ;   XREF to: 006055fe (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x40]      ; 006055ae
    PUSH EBX                            ; 006055b2
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 006055b3 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006055b8
    MOV EBP,0x1                         ; 006055bb
    MOV dword ptr [ESP + 0x18],EAX      ; 006055c0
    CMP EAX,-0x1                        ; 006055c4
    JZ 0x00605798                       ; 006055c7 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    CMP EAX,0x78                        ; 006055cd
    JZ 0x006055d7                       ; 006055d0 | LAB_006055d7
        ;   XREF to: 006055d7 (CONDITIONAL_JUMP)
    CMP EAX,0x58                        ; 006055d2
    JNZ 0x006055fe                      ; 006055d5 | LAB_006055fe
        ;   XREF to: 006055fe (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x40]      ; 006055d7
        ;   Label: LAB_006055d7
    MOV ESI,dword ptr [ESP + 0x20]      ; 006055db
    PUSH ECX                            ; 006055df
    ADD ESI,0x2                         ; 006055e0
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 006055e3 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x24],ESI      ; 006055e8
    ADD ESP,0x4                         ; 006055ec
    XOR EBP,EBP                         ; 006055ef
    MOV dword ptr [ESP + 0x18],EAX      ; 006055f1
    CMP EAX,-0x1                        ; 006055f5
    JZ 0x00605798                       ; 006055f8 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 006055fe
        ;   Label: LAB_006055fe
    TEST byte ptr [EAX + 0x10],0x40     ; 00605602
    JZ 0x0060570d                       ; 00605606 | LAB_0060570d
        ;   XREF to: 0060570d (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0060560c
    MOV dword ptr [ESP + 0x10],EDI      ; 0060560e
    MOV dword ptr [ESP + 0x14],ECX      ; 00605612
    MOV ECX,dword ptr [ESP + 0x18]      ; 00605616
        ;   Label: LAB_00605616
    PUSH ECX                            ; 0060561a
    CALL crt_stdio.c_char_to_digit_FUN_006058e8 ; 0060561b | int crt_stdio.c_char_to_digit_FUN_006058e8(int ch)
        ;   XREF to: 006058e8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605620
    CMP EAX,EDI                         ; 00605623
    JGE 0x00605685                      ; 00605625 | LAB_00605685
        ;   XREF to: 00605685 (CONDITIONAL_JUMP)
    LEA EBX,[ESP + 0x10]                ; 00605627
    MOV dword ptr [ESP + 0x8],EAX       ; 0060562b
    XOR ESI,ESI                         ; 0060562f
    MOV EAX,ESP                         ; 00605631
    MOV dword ptr [ESP + 0xc],ESI       ; 00605633
    MOV ESI,ESP                         ; 00605637
    MOV EDX,dword ptr [EAX + 0x4]       ; 00605639
    MOV EAX,dword ptr [EAX]             ; 0060563c
    MOV ECX,dword ptr [EBX + 0x4]       ; 0060563e
    MOV EBX,dword ptr [EBX]             ; 00605641
    CALL crt_math.c_multiply64_FUN_0060b2b8 ; 00605643 | ulonglong crt_math.c_multiply64_FUN_0060b2b8(ulonglong a, ulonglong b)
        ;   XREF to: 0060b2b8 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESI + 0x4],EDX       ; 00605648
    MOV dword ptr [ESI],EAX             ; 0060564b
    MOV ESI,ESP                         ; 0060564d
    LEA EBX,[ESP + 0x8]                 ; 0060564f
    MOV EAX,ESP                         ; 00605653
    MOV EDX,dword ptr [EAX + 0x4]       ; 00605655
    MOV EAX,dword ptr [EAX]             ; 00605658
    MOV ECX,dword ptr [EBX + 0x4]       ; 0060565a
    MOV EBX,dword ptr [EBX]             ; 0060565d
    ADD EAX,EBX                         ; 0060565f
    ADC EDX,ECX                         ; 00605661
    MOV dword ptr [ESI + 0x4],EDX       ; 00605663
    MOV dword ptr [ESI],EAX             ; 00605666
    MOV EAX,dword ptr [ESP + 0x40]      ; 00605668
    PUSH EAX                            ; 0060566c
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 0060566d | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605672
    INC EBP                             ; 00605675
    MOV dword ptr [ESP + 0x18],EAX      ; 00605676
    CMP EAX,-0x1                        ; 0060567a
    JZ 0x00605798                       ; 0060567d | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    JMP 0x00605616                      ; 00605683 | LAB_00605616
        ;   XREF to: 00605616 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x18],0x3a     ; 00605685
        ;   Label: LAB_00605685
    JNZ 0x00605786                      ; 0060568a | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 00605690
    TEST byte ptr [EAX + 0x10],0x80     ; 00605694
    JZ 0x00605786                       ; 00605698 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x40]      ; 0060569e
        ;   Label: LAB_0060569e
    PUSH EBX                            ; 006056a2
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 006056a3 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006056a8
    INC EBP                             ; 006056ab
    MOV dword ptr [ESP + 0x18],EAX      ; 006056ac
    CMP EAX,-0x1                        ; 006056b0
    JZ 0x00605798                       ; 006056b3 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 006056b9
    CALL crt_stdio.c_char_to_digit_FUN_006058e8 ; 006056ba | int crt_stdio.c_char_to_digit_FUN_006058e8(int ch)
        ;   XREF to: 006058e8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006056bf
    CMP EAX,EDI                         ; 006056c2
    JGE 0x00605786                      ; 006056c4 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV ESI,ESP                         ; 006056ca
    LEA EBX,[ESP + 0x10]                ; 006056cc
    MOV dword ptr [ESP + 0x8],EAX       ; 006056d0
    XOR ECX,ECX                         ; 006056d4
    MOV EAX,ESP                         ; 006056d6
    MOV dword ptr [ESP + 0xc],ECX       ; 006056d8
    MOV EDX,dword ptr [EAX + 0x4]       ; 006056dc
    MOV EAX,dword ptr [EAX]             ; 006056df
    MOV ECX,dword ptr [EBX + 0x4]       ; 006056e1
    MOV EBX,dword ptr [EBX]             ; 006056e4
    CALL crt_math.c_multiply64_FUN_0060b2b8 ; 006056e6 | ulonglong crt_math.c_multiply64_FUN_0060b2b8(ulonglong a, ulonglong b)
        ;   XREF to: 0060b2b8 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESI + 0x4],EDX       ; 006056eb
    MOV dword ptr [ESI],EAX             ; 006056ee
    MOV ESI,ESP                         ; 006056f0
    LEA EBX,[ESP + 0x8]                 ; 006056f2
    MOV EAX,ESP                         ; 006056f6
    MOV EDX,dword ptr [EAX + 0x4]       ; 006056f8
    MOV EAX,dword ptr [EAX]             ; 006056fb
    MOV ECX,dword ptr [EBX + 0x4]       ; 006056fd
    MOV EBX,dword ptr [EBX]             ; 00605700
    ADD EAX,EBX                         ; 00605702
    ADC EDX,ECX                         ; 00605704
    MOV dword ptr [ESI + 0x4],EDX       ; 00605706
    MOV dword ptr [ESI],EAX             ; 00605709
    JMP 0x0060569e                      ; 0060570b | LAB_0060569e
        ;   XREF to: 0060569e (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060570d
        ;   Label: LAB_0060570d
    PUSH ESI                            ; 00605711
    CALL crt_stdio.c_char_to_digit_FUN_006058e8 ; 00605712 | int crt_stdio.c_char_to_digit_FUN_006058e8(int ch)
        ;   XREF to: 006058e8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605717
    CMP EAX,EDI                         ; 0060571a
    JGE 0x00605744                      ; 0060571c | LAB_00605744
        ;   XREF to: 00605744 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x24]      ; 0060571e
    IMUL EBX,EDI                        ; 00605722
    ADD EBX,EAX                         ; 00605725
    MOV EAX,dword ptr [ESP + 0x40]      ; 00605727
    PUSH EAX                            ; 0060572b
    MOV dword ptr [ESP + 0x28],EBX      ; 0060572c
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605730 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605735
    INC EBP                             ; 00605738
    MOV dword ptr [ESP + 0x18],EAX      ; 00605739
    CMP EAX,-0x1                        ; 0060573d
    JZ 0x00605798                       ; 00605740 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    JMP 0x0060570d                      ; 00605742 | LAB_0060570d
        ;   XREF to: 0060570d (UNCONDITIONAL_JUMP)
    CMP ESI,0x3a                        ; 00605744
        ;   Label: LAB_00605744
    JNZ 0x00605786                      ; 00605747 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 00605749
    TEST byte ptr [EAX + 0x10],0x80     ; 0060574d
    JZ 0x00605786                       ; 00605751 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x40]      ; 00605753
        ;   Label: LAB_00605753
    PUSH EBX                            ; 00605757
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605758 | int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060575d
    INC EBP                             ; 00605760
    MOV dword ptr [ESP + 0x18],EAX      ; 00605761
    CMP EAX,-0x1                        ; 00605765
    JZ 0x00605798                       ; 00605768 | LAB_00605798
        ;   XREF to: 00605798 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0060576a
    CALL crt_stdio.c_char_to_digit_FUN_006058e8 ; 0060576b | int crt_stdio.c_char_to_digit_FUN_006058e8(int ch)
        ;   XREF to: 006058e8 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605770
    CMP EAX,EDI                         ; 00605773
    JGE 0x00605786                      ; 00605775 | LAB_00605786
        ;   XREF to: 00605786 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x24]      ; 00605777
    IMUL EBX,EDI                        ; 0060577b
    ADD EBX,EAX                         ; 0060577e
    MOV dword ptr [ESP + 0x24],EBX      ; 00605780
    JMP 0x00605753                      ; 00605784 | LAB_00605753
        ;   XREF to: 00605753 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x40]      ; 00605786
        ;   Label: LAB_00605786
    PUSH ESI                            ; 0060578a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0060578b
    PUSH EDI                            ; 0060578f
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 00605790 | int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00605795
    MOV EAX,dword ptr [ESP + 0x40]      ; 00605798
        ;   Label: LAB_00605798
    TEST byte ptr [EAX + 0x10],0x40     ; 0060579c
    JZ 0x0060584c                       ; 006057a0 | LAB_0060584c
        ;   XREF to: 0060584c (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x1c],0x2d     ; 006057a6
    JNZ 0x006057d4                      ; 006057ab | LAB_006057d4
        ;   XREF to: 006057d4 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP]             ; 006057ad
    MOV EBX,dword ptr [ESP + 0x4]       ; 006057b0
    NOT EDX                             ; 006057b4
    NOT EBX                             ; 006057b6
    MOV dword ptr [ESP],EDX             ; 006057b8
    LEA ECX,[EDX + 0x1]                 ; 006057bb
    MOV dword ptr [ESP + 0x4],EBX       ; 006057be
    MOV dword ptr [ESP],ECX             ; 006057c2
    TEST ECX,ECX                        ; 006057c5
    JNZ 0x006057ce                      ; 006057c7 | LAB_006057ce
        ;   XREF to: 006057ce (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1]                 ; 006057c9
    JMP 0x006057d0                      ; 006057cc | LAB_006057d0
        ;   XREF to: 006057d0 (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 006057ce
        ;   Label: LAB_006057ce
    MOV dword ptr [ESP + 0x4],EAX       ; 006057d0
        ;   Label: LAB_006057d0
    TEST EBP,EBP                        ; 006057d4
        ;   Label: LAB_006057d4
    JLE 0x006058da                      ; 006057d6 | LAB_006058da
        ;   XREF to: 006058da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 006057dc
    MOV EDI,dword ptr [ESP + 0x20]      ; 006057e0
    MOV DL,byte ptr [EAX + 0x10]        ; 006057e4
    ADD EBP,EDI                         ; 006057e7
    TEST DL,0x1                         ; 006057e9
    JZ 0x006058da                       ; 006057ec | LAB_006058da
        ;   XREF to: 006058da (CONDITIONAL_JUMP)
    TEST DL,0x4                         ; 006057f2
    JZ 0x0060580b                       ; 006057f5 | LAB_0060580b
        ;   XREF to: 0060580b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 006057f7
    MOV ECX,dword ptr [EAX]             ; 006057fb
    ADD ECX,0x8                         ; 006057fd
    MOV dword ptr [EAX],ECX             ; 00605800
    MOV AX,word ptr [ECX + -0x4]        ; 00605802
    MOV EDI,dword ptr [ECX + -0x8]      ; 00605806
    JMP 0x0060583b                      ; 00605809 | LAB_0060583b
        ;   XREF to: 0060583b (UNCONDITIONAL_JUMP)
    TEST DL,0x8                         ; 0060580b
        ;   Label: LAB_0060580b
    JZ 0x0060582b                       ; 0060580e | LAB_0060582b
        ;   XREF to: 0060582b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 00605810
    MOV EBX,dword ptr [EAX]             ; 00605814
    ADD EBX,0x4                         ; 00605816
    MOV dword ptr [EAX],EBX             ; 00605819
    MOV AX,DS                           ; 0060581b
    MOV EDI,dword ptr [EBX + -0x4]      ; 0060581d
    MOV ESI,ESP                         ; 00605820
    MOV ES,AX                           ; 00605822
    MOVSD ES:EDI,ESI                    ; 00605824
    MOVSD ES:EDI,ESI                    ; 00605825
    JMP 0x006058da                      ; 00605826 | LAB_006058da
        ;   XREF to: 006058da (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 0060582b
        ;   Label: LAB_0060582b
    MOV EDX,dword ptr [EAX]             ; 0060582f
    ADD EDX,0x4                         ; 00605831
    MOV dword ptr [EAX],EDX             ; 00605834
    MOV AX,DS                           ; 00605836
    MOV EDI,dword ptr [EDX + -0x4]      ; 00605838
    MOV ESI,ESP                         ; 0060583b
        ;   Label: LAB_0060583b
    MOV ES,AX                           ; 0060583d
    MOVSD ES:EDI,ESI                    ; 0060583f
    MOVSD ES:EDI,ESI                    ; 00605840
    MOV EAX,EBP                         ; 00605841
    ADD ESP,0x28                        ; 00605843
    POP EBP                             ; 00605846
    POP ES                              ; 00605847
    POP EDI                             ; 00605848
    POP ESI                             ; 00605849
    POP EBX                             ; 0060584a
    RET                                 ; 0060584b
    CMP dword ptr [ESP + 0x1c],0x2d     ; 0060584c
        ;   Label: LAB_0060584c
    JNZ 0x00605857                      ; 00605851 | LAB_00605857
        ;   XREF to: 00605857 (CONDITIONAL_JUMP)
    NEG dword ptr [ESP + 0x24]          ; 00605853
    TEST EBP,EBP                        ; 00605857
        ;   Label: LAB_00605857
    JLE 0x006058da                      ; 00605859 | LAB_006058da
        ;   XREF to: 006058da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 0060585f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00605863
    MOV DH,byte ptr [EAX + 0x10]        ; 00605867
    ADD EBP,EBX                         ; 0060586a
    TEST DH,0x1                         ; 0060586c
    JZ 0x006058da                       ; 0060586f | LAB_006058da
        ;   XREF to: 006058da (CONDITIONAL_JUMP)
    TEST DH,0x4                         ; 00605871
    JZ 0x00605886                       ; 00605874 | LAB_00605886
        ;   XREF to: 00605886 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 00605876
    MOV EDI,dword ptr [EAX]             ; 0060587a
    ADD EDI,0x8                         ; 0060587c
    MOV dword ptr [EAX],EDI             ; 0060587f
    LES EAX,[EDI + -0x8]                ; 00605881
    JMP 0x006058b1                      ; 00605884 | LAB_006058b1
        ;   XREF to: 006058b1 (UNCONDITIONAL_JUMP)
    TEST DH,0x8                         ; 00605886
        ;   Label: LAB_00605886
    JZ 0x0060589f                       ; 00605889 | LAB_0060589f
        ;   XREF to: 0060589f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 0060588b
    MOV ESI,dword ptr [EAX]             ; 0060588f
    ADD ESI,0x4                         ; 00605891
    MOV BX,DS                           ; 00605894
    MOV dword ptr [EAX],ESI             ; 00605896
    MOV ES,BX                           ; 00605898
    MOV EAX,dword ptr [ESI + -0x4]      ; 0060589a
    JMP 0x006058b1                      ; 0060589d | LAB_006058b1
        ;   XREF to: 006058b1 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 0060589f
        ;   Label: LAB_0060589f
    MOV ECX,dword ptr [EAX]             ; 006058a3
    ADD ECX,0x4                         ; 006058a5
    MOV BX,DS                           ; 006058a8
    MOV dword ptr [EAX],ECX             ; 006058aa
    MOV ES,BX                           ; 006058ac
    MOV EAX,dword ptr [ECX + -0x4]      ; 006058ae
    MOV EDX,dword ptr [ESP + 0x40]      ; 006058b1
        ;   Label: LAB_006058b1
    MOV CL,byte ptr [EDX + 0x10]        ; 006058b5
    TEST CL,0x10                        ; 006058b8
    JZ 0x006058d0                       ; 006058bb | LAB_006058d0
        ;   XREF to: 006058d0 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x24]      ; 006058bd
    MOV word ptr ES:[EAX],BX            ; 006058c1
    MOV EAX,EBP                         ; 006058c5
    ADD ESP,0x28                        ; 006058c7
    POP EBP                             ; 006058ca
    POP ES                              ; 006058cb
    POP EDI                             ; 006058cc
    POP ESI                             ; 006058cd
    POP EBX                             ; 006058ce
    RET                                 ; 006058cf
    TEST CL,0x20                        ; 006058d0
        ;   Label: LAB_006058d0
    MOV EBX,dword ptr [ESP + 0x24]      ; 006058d3
    MOV dword ptr ES:[EAX],EBX          ; 006058d7
    MOV EAX,EBP                         ; 006058da
        ;   Label: LAB_006058da
    ADD ESP,0x28                        ; 006058dc
    POP EBP                             ; 006058df
    POP ES                              ; 006058e0
    POP EDI                             ; 006058e1
    POP ESI                             ; 006058e2
    POP EBX                             ; 006058e3
    RET                                 ; 006058e4

