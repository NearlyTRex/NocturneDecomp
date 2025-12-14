; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00562620()
;
;
; XREF[1]:
;   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 at 00561ee6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562620
        ;   Label: core_script.cpp_FUN_00562620
    PUSH ESI                            ; 00562621
    PUSH EDI                            ; 00562622
    PUSH EBP                            ; 00562623
    MOV EBP,dword ptr [ESP + 0x18]      ; 00562624
    MOV EDI,dword ptr [ESP + 0x14]      ; 00562628
    ADD EDI,0x4                         ; 0056262c
    SUB ECX,ECX                         ; 0056262f
    DEC ECX                             ; 00562631
    XOR EAX,EAX                         ; 00562632
    SCASB.REPNE ES:EDI                  ; 00562634
    NOT ECX                             ; 00562636
    DEC ECX                             ; 00562638
    MOV EDI,dword ptr [ESP + 0x14]      ; 00562639
    ADD EDI,0x68                        ; 0056263d
    MOV EDX,ECX                         ; 00562640
    SUB ECX,ECX                         ; 00562642
    DEC ECX                             ; 00562644
    XOR EAX,EAX                         ; 00562645
    SCASB.REPNE ES:EDI                  ; 00562647
    NOT ECX                             ; 00562649
    DEC ECX                             ; 0056264b
    ADD EDX,ECX                         ; 0056264c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056264e
    MOV EBX,dword ptr [ECX + 0xcc]      ; 00562652
    XOR ESI,ESI                         ; 00562658
    TEST EBX,EBX                        ; 0056265a
    JLE 0x00562697                      ; 0056265c
        ;   XREF to: 00562697 (CONDITIONAL_JUMP)  ; LAB_00562697
    LEA EBX,[ECX + 0xd0]                ; 0056265e
    MOV EDI,EBX                         ; 00562664
        ;   Label: LAB_00562664
    SUB ECX,ECX                         ; 00562666
    DEC ECX                             ; 00562668
    XOR EAX,EAX                         ; 00562669
    SCASB.REPNE ES:EDI                  ; 0056266b
    NOT ECX                             ; 0056266d
    DEC ECX                             ; 0056266f
    ADD EDX,ECX                         ; 00562670
    CMP EDX,EBP                         ; 00562672
    JLE 0x005626a9                      ; 00562674
        ;   XREF to: 005626a9 (CONDITIONAL_JUMP)  ; LAB_005626a9
    MOV ECX,0xffffffff                  ; 00562676
        ;   Label: LAB_00562676
    MOV EAX,ECX                         ; 0056267b
        ;   Label: LAB_0056267b
    POP EBP                             ; 0056267d
    POP EDI                             ; 0056267e
    POP ESI                             ; 0056267f
    POP EBX                             ; 00562680
    RET                                 ; 00562681
    MOV ECX,dword ptr [ESP + 0x14]      ; 00562682
        ;   Label: LAB_00562682
    INC ESI                             ; 00562686
    MOV EDI,dword ptr [ECX + 0xcc]      ; 00562687
    ADD EBX,0x328                       ; 0056268d
    CMP ESI,EDI                         ; 00562693
    JL 0x00562664                       ; 00562695
        ;   XREF to: 00562664 (CONDITIONAL_JUMP)  ; LAB_00562664
    INC EDX                             ; 00562697
        ;   Label: LAB_00562697
    CMP EDX,EBP                         ; 00562698
    JL 0x00562676                       ; 0056269a
        ;   XREF to: 00562676 (CONDITIONAL_JUMP)  ; LAB_00562676
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056269c
    MOV ECX,dword ptr [ECX + 0xcc]      ; 005626a0
    DEC ECX                             ; 005626a6
    JMP 0x0056267b                      ; 005626a7
        ;   XREF to: 0056267b (UNCONDITIONAL_JUMP)  ; LAB_0056267b
    LEA EDI,[EBX + 0x64]                ; 005626a9
        ;   Label: LAB_005626a9
    SUB ECX,ECX                         ; 005626ac
    DEC ECX                             ; 005626ae
    XOR EAX,EAX                         ; 005626af
    SCASB.REPNE ES:EDI                  ; 005626b1
    NOT ECX                             ; 005626b3
    DEC ECX                             ; 005626b5
    ADD EDX,ECX                         ; 005626b6
    CMP EDX,EBP                         ; 005626b8
    JL 0x00562682                       ; 005626ba
        ;   XREF to: 00562682 (CONDITIONAL_JUMP)  ; LAB_00562682
    MOV ECX,ESI                         ; 005626bc
    MOV EAX,ECX                         ; 005626be
    POP EBP                             ; 005626c0
    POP EDI                             ; 005626c1
    POP ESI                             ; 005626c2
    POP EBX                             ; 005626c3
    RET                                 ; 005626c4

