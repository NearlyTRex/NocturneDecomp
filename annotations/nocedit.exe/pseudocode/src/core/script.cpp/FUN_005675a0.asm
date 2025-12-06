; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_005675a0()
;
;
; XREF[1]:
;   core_script.cpp_FUN_00567630 at 005676af
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675a0
        ;   Label: core_script.cpp_FUN_005675a0
    PUSH ESI                            ; 005675a1
    PUSH EDI                            ; 005675a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005675a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005675a7
    PUSH ESI                            ; 005675ab
    PUSH EBX                            ; 005675ac
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005675ad | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005675b2
    TEST EAX,EAX                        ; 005675b5
    JNZ 0x005675f8                      ; 005675b7 | LAB_005675f8
        ;   XREF to: 005675f8 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x100]     ; 005675b9
    MOV EAX,dword ptr [EBX + 0x100]     ; 005675bf
    CMP EAX,EDX                         ; 005675c5
    JL 0x005675fc                       ; 005675c7 | LAB_005675fc
        ;   XREF to: 005675fc (CONDITIONAL_JUMP)
    JG 0x005675f3                       ; 005675c9 | LAB_005675f3
        ;   XREF to: 005675f3 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x104]     ; 005675cb
    MOV EAX,dword ptr [EBX + 0x104]     ; 005675d1
    CMP EAX,EDI                         ; 005675d7
    JC 0x005675fc                       ; 005675d9 | LAB_005675fc
        ;   XREF to: 005675fc (CONDITIONAL_JUMP)
    JA 0x005675f3                       ; 005675db | LAB_005675f3
        ;   XREF to: 005675f3 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005675dd
    JNZ 0x00567605                      ; 005675df | LAB_00567605
        ;   XREF to: 00567605 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x10c]     ; 005675e1
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005675e7
    CMP EAX,EDI                         ; 005675ed
    JL 0x005675fc                       ; 005675ef | LAB_005675fc
        ;   XREF to: 005675fc (CONDITIONAL_JUMP)
    JLE 0x0056761e                      ; 005675f1 | LAB_0056761e
        ;   Label: LAB_005675f1
        ;   XREF to: 0056761e (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005675f3
        ;   Label: LAB_005675f3
    POP EDI                             ; 005675f8
        ;   Label: LAB_005675f8
    POP ESI                             ; 005675f9
    POP EBX                             ; 005675fa
    RET                                 ; 005675fb
    MOV EAX,0xffffffff                  ; 005675fc
        ;   Label: LAB_005675fc
    POP EDI                             ; 00567601
    POP ESI                             ; 00567602
    POP EBX                             ; 00567603
    RET                                 ; 00567604
    MOV EDX,dword ptr [ESI + 0x108]     ; 00567605
        ;   Label: LAB_00567605
    MOV EAX,dword ptr [EBX + 0x108]     ; 0056760b
    CMP EAX,EDX                         ; 00567611
    JGE 0x005675f1                      ; 00567613 | LAB_005675f1
        ;   XREF to: 005675f1 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 00567615
    POP EDI                             ; 0056761a
    POP ESI                             ; 0056761b
    POP EBX                             ; 0056761c
    RET                                 ; 0056761d
    XOR EAX,EAX                         ; 0056761e
        ;   Label: LAB_0056761e
    POP EDI                             ; 00567620
    POP ESI                             ; 00567621
    POP EBX                             ; 00567622
    RET                                 ; 00567623

