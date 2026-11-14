; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_005704a0(undefined4 param_1,int *param_2,undefined4 param_3,code *param_4)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_00570750 at 00570820
;   support_trisock.cpp_FUN_00570840 at 005709a3
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_string.c__strnicmp_FUN_005a3f90
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_FUN_00570320
;   support_trisock.cpp_FUN_00570350
;   support_trisock.cpp_FUN_00570420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005704a0
        ;   Label: support_trisock.cpp_FUN_005704a0
    PUSH ESI                            ; 005704a1
    PUSH EDI                            ; 005704a2
    PUSH EBP                            ; 005704a3
    SUB ESP,0x1118                      ; 005704a4
    MOV EBP,dword ptr [ESP + 0x1138]    ; 005704aa
    MOV EDX,dword ptr [ESP + 0x112c]    ; 005704b1
    PUSH EDX                            ; 005704b8
    LEA EAX,[ESP + 0x4]                 ; 005704b9
    PUSH EAX                            ; 005704bd
    CALL support_trisock.cpp_FUN_00570320 ; 005704be
        ;   XREF to: 00570320 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570320()
    ADD ESP,0x8                         ; 005704c3
    MOV ECX,dword ptr [ESP + 0x1134]    ; 005704c6
    PUSH ECX                            ; 005704cd
    PUSH EBP                            ; 005704ce
    PUSH 0x800                          ; 005704cf
    LEA EAX,[ESP + 0x81c]               ; 005704d4
    PUSH EAX                            ; 005704db
    LEA EAX,[ESP + 0x10]                ; 005704dc
    PUSH EAX                            ; 005704e0
    CALL support_trisock.cpp_FUN_00570420 ; 005704e1
        ;   XREF to: 00570420 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570420()
    ADD ESP,0x14                        ; 005704e6
    TEST EAX,EAX                        ; 005704e9
    JNZ 0x005704f8                      ; 005704eb
        ;   XREF to: 005704f8 (CONDITIONAL_JUMP)  ; LAB_005704f8
    ADD ESP,0x1118                      ; 005704ed
        ;   Label: LAB_005704ed
    POP EBP                             ; 005704f3
    POP EDI                             ; 005704f4
    POP ESI                             ; 005704f5
    POP EBX                             ; 005704f6
    RET                                 ; 005704f7
    MOV EBX,0xffffffff                  ; 005704f8
        ;   Label: LAB_005704f8
    MOV ESI,0x5d69d8                    ; 005704fd
    LEA EDI,[ESP + 0x1010]              ; 00570502
    MOV dword ptr [ESP + 0x1110],EBX    ; 00570509
    PUSH EDI                            ; 00570510
    MOV AL,byte ptr [ESI]               ; 00570511
        ;   Label: LAB_00570511
    MOV byte ptr [EDI],AL               ; 00570513
    CMP AL,0x0                          ; 00570515
    JZ 0x00570529                       ; 00570517
        ;   XREF to: 00570529 (CONDITIONAL_JUMP)  ; LAB_00570529
    MOV AL,byte ptr [ESI + 0x1]         ; 00570519
    ADD ESI,0x2                         ; 0057051c
    MOV byte ptr [EDI + 0x1],AL         ; 0057051f
    ADD EDI,0x2                         ; 00570522
    CMP AL,0x0                          ; 00570525
    JNZ 0x00570511                      ; 00570527
        ;   XREF to: 00570511 (CONDITIONAL_JUMP)  ; LAB_00570511
    POP EDI                             ; 00570529
        ;   Label: LAB_00570529
    LEA EAX,[ESP + 0x1010]              ; 0057052a
    PUSH EAX                            ; 00570531
    LEA EAX,[ESP + 0x1114]              ; 00570532
    PUSH EAX                            ; 00570539
    PUSH 0x5d69e6                       ; 0057053a
    LEA EAX,[ESP + 0x81c]               ; 0057053f
    PUSH EAX                            ; 00570546
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00570547
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0057054c
    MOV ESI,dword ptr [ESP + 0x1110]    ; 0057054f
    CMP ESI,EBX                         ; 00570556
    JZ 0x00570637                       ; 00570558
        ;   XREF to: 00570637 (CONDITIONAL_JUMP)  ; LAB_00570637
    CMP ESI,0x190                       ; 0057055e
    JGE 0x00570650                      ; 00570564
        ;   XREF to: 00570650 (CONDITIONAL_JUMP)  ; LAB_00570650
    CMP ESI,0x12c                       ; 0057056a
    JGE 0x0057068a                      ; 00570570
        ;   XREF to: 0057068a (CONDITIONAL_JUMP)  ; LAB_0057068a
    MOV ESI,0x5d6a3e                    ; 00570576
    LEA EDI,[ESP + 0x1010]              ; 0057057b
    MOV dword ptr [ESP + 0x1114],EBX    ; 00570582
    PUSH EDI                            ; 00570589
    MOV AL,byte ptr [ESI]               ; 0057058a
        ;   Label: LAB_0057058a
    MOV byte ptr [EDI],AL               ; 0057058c
    CMP AL,0x0                          ; 0057058e
    JZ 0x005705a2                       ; 00570590
        ;   XREF to: 005705a2 (CONDITIONAL_JUMP)  ; LAB_005705a2
    MOV AL,byte ptr [ESI + 0x1]         ; 00570592
    ADD ESI,0x2                         ; 00570595
    MOV byte ptr [EDI + 0x1],AL         ; 00570598
    ADD EDI,0x2                         ; 0057059b
    CMP AL,0x0                          ; 0057059e
    JNZ 0x0057058a                      ; 005705a0
        ;   XREF to: 0057058a (CONDITIONAL_JUMP)  ; LAB_0057058a
    POP EDI                             ; 005705a2
        ;   Label: LAB_005705a2
    XOR EBX,EBX                         ; 005705a3
    LEA EAX,[ESP + 0x1010]              ; 005705a5
        ;   Label: LAB_005705a5
    PUSH EAX                            ; 005705ac
    PUSH EBP                            ; 005705ad
    PUSH 0x800                          ; 005705ae
    LEA EAX,[ESP + 0x81c]               ; 005705b3
    PUSH EAX                            ; 005705ba
    LEA EAX,[ESP + 0x10]                ; 005705bb
    PUSH EAX                            ; 005705bf
    CALL support_trisock.cpp_FUN_00570420 ; 005705c0
        ;   XREF to: 00570420 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570420()
    ADD ESP,0x14                        ; 005705c5
    TEST EAX,EAX                        ; 005705c8
    JZ 0x005704ed                       ; 005705ca
        ;   XREF to: 005704ed (CONDITIONAL_JUMP)  ; LAB_005704ed
    CMP BL,byte ptr [ESP + 0x810]       ; 005705d0
    JNZ 0x005706c4                      ; 005705d7
        ;   XREF to: 005706c4 (CONDITIONAL_JUMP)  ; LAB_005706c4
    CMP dword ptr [ESP + 0x1114],0x0    ; 005705dd
    JL 0x00570705                       ; 005705e5
        ;   XREF to: 00570705 (CONDITIONAL_JUMP)  ; LAB_00570705
    XOR EBX,EBX                         ; 005705eb
        ;   Label: LAB_005705eb
    XOR EDI,EDI                         ; 005705ed
    MOV EAX,dword ptr [ESP + 0x1114]    ; 005705ef
        ;   Label: LAB_005705ef
    CMP EDI,EAX                         ; 005705f6
    JG 0x005705fe                       ; 005705f8
        ;   XREF to: 005705fe (CONDITIONAL_JUMP)  ; LAB_005705fe
    CMP EBX,EAX                         ; 005705fa
    JGE 0x00570627                      ; 005705fc
        ;   XREF to: 00570627 (CONDITIONAL_JUMP)  ; LAB_00570627
    LEA EAX,[ESP + 0x1010]              ; 005705fe
        ;   Label: LAB_005705fe
    PUSH EAX                            ; 00570605
    PUSH EBP                            ; 00570606
    LEA EAX,[ESP + 0x8]                 ; 00570607
    PUSH EAX                            ; 0057060b
    CALL support_trisock.cpp_FUN_00570350 ; 0057060c
        ;   XREF to: 00570350 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570350()
    ADD ESP,0xc                         ; 00570611
    MOV EDX,EAX                         ; 00570614
    TEST EAX,EAX                        ; 00570616
    JGE 0x00570711                      ; 00570618
        ;   XREF to: 00570711 (CONDITIONAL_JUMP)  ; LAB_00570711
    CMP EAX,-0x2                        ; 0057061e
    JNZ 0x005706b7                      ; 00570621
        ;   XREF to: 005706b7 (CONDITIONAL_JUMP)  ; LAB_005706b7
    MOV EAX,0x1                         ; 00570627
        ;   Label: LAB_00570627
    ADD ESP,0x1118                      ; 0057062c
    POP EBP                             ; 00570632
    POP EDI                             ; 00570633
    POP ESI                             ; 00570634
    POP EBX                             ; 00570635
    RET                                 ; 00570636
    PUSH 0x5d69f8                       ; 00570637
        ;   Label: LAB_00570637
    PUSH 0x1                            ; 0057063c
    CALL EBP                            ; 0057063e
    ADD ESP,0x8                         ; 00570640
    XOR EAX,EAX                         ; 00570643
    ADD ESP,0x1118                      ; 00570645
    POP EBP                             ; 0057064b
    POP EDI                             ; 0057064c
    POP ESI                             ; 0057064d
    POP EBX                             ; 0057064e
    RET                                 ; 0057064f
    LEA EAX,[ESP + 0x1010]              ; 00570650
        ;   Label: LAB_00570650
    PUSH EAX                            ; 00570657
    PUSH ESI                            ; 00570658
    PUSH 0x5d6a1f                       ; 00570659
    LEA EAX,[ESP + 0x81c]               ; 0057065e
    PUSH EAX                            ; 00570665
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00570666
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057066b
    LEA EAX,[ESP + 0x810]               ; 0057066e
    PUSH EAX                            ; 00570675
    PUSH 0x1                            ; 00570676
    CALL EBP                            ; 00570678
    ADD ESP,0x8                         ; 0057067a
    XOR EAX,EAX                         ; 0057067d
    ADD ESP,0x1118                      ; 0057067f
    POP EBP                             ; 00570685
    POP EDI                             ; 00570686
    POP ESI                             ; 00570687
    POP EBX                             ; 00570688
    RET                                 ; 00570689
    LEA EAX,[ESP + 0x1010]              ; 0057068a
        ;   Label: LAB_0057068a
    PUSH EAX                            ; 00570691
    PUSH ESI                            ; 00570692
    PUSH 0x5d6a26                       ; 00570693
    LEA EAX,[ESP + 0x81c]               ; 00570698
    PUSH EAX                            ; 0057069f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005706a0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005706a5
    LEA EAX,[ESP + 0x810]               ; 005706a8
    PUSH EAX                            ; 005706af
    PUSH 0x1                            ; 005706b0
    CALL EBP                            ; 005706b2
    ADD ESP,0x8                         ; 005706b4
    XOR EAX,EAX                         ; 005706b7
        ;   Label: LAB_005706b7
    ADD ESP,0x1118                      ; 005706b9
    POP EBP                             ; 005706bf
    POP EDI                             ; 005706c0
    POP ESI                             ; 005706c1
    POP EBX                             ; 005706c2
    RET                                 ; 005706c3
    PUSH 0xf                            ; 005706c4
        ;   Label: LAB_005706c4
    PUSH 0x5d6a51                       ; 005706c6
    LEA EAX,[ESP + 0x818]               ; 005706cb
    PUSH EAX                            ; 005706d2
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005706d3
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005706d8
    TEST EAX,EAX                        ; 005706db
    JNZ 0x005705a5                      ; 005706dd
        ;   XREF to: 005705a5 (CONDITIONAL_JUMP)  ; LAB_005705a5
    LEA EAX,[ESP + 0x1114]              ; 005706e3
    PUSH EAX                            ; 005706ea
    PUSH 0x5d6a61                       ; 005706eb
    LEA EAX,[ESP + 0x827]               ; 005706f0
    PUSH EAX                            ; 005706f7
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 005706f8
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 005706fd
    JMP 0x005705a5                      ; 00570700
        ;   XREF to: 005705a5 (UNCONDITIONAL_JUMP)  ; LAB_005705a5
    MOV dword ptr [ESP],0x1             ; 00570705
        ;   Label: LAB_00570705
    JMP 0x005705eb                      ; 0057070c
        ;   XREF to: 005705eb (UNCONDITIONAL_JUMP)  ; LAB_005705eb
    MOV EAX,dword ptr [ESP + 0x1130]    ; 00570711
        ;   Label: LAB_00570711
    MOV EAX,dword ptr [EAX]             ; 00570718
    AND EDX,0xff                        ; 0057071a
    PUSH EDX                            ; 00570720
    MOV ECX,dword ptr [ESP + 0x1134]    ; 00570721
    PUSH ECX                            ; 00570728
    CALL dword ptr [EAX + 0x4]          ; 00570729
    ADD ESP,0x8                         ; 0057072c
    CMP EAX,-0x1                        ; 0057072f
    JZ 0x00570627                       ; 00570732
        ;   XREF to: 00570627 (CONDITIONAL_JUMP)  ; LAB_00570627
    TEST EAX,EAX                        ; 00570738
    JL 0x005706b7                       ; 0057073a
        ;   XREF to: 005706b7 (CONDITIONAL_JUMP)  ; LAB_005706b7
    INC EBX                             ; 00570740
    JMP 0x005705ef                      ; 00570741
        ;   XREF to: 005705ef (UNCONDITIONAL_JUMP)  ; LAB_005705ef

