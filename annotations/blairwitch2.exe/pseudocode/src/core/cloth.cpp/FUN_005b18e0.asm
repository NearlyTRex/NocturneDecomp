; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b18e0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0056eb60 at 0056ecba
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f124f
;   TerminatedCString s_CCloth_grabCloth_Can_t_f_005f1261
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b18e0
        ;   Label: FUN_005b18e0
    PUSH ESI                            ; 005b18e1
    PUSH EDI                            ; 005b18e2
    PUSH EBP                            ; 005b18e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b18e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b18e8
    MOV EDX,dword ptr [EDI + 0x37b4c]   ; 005b18ec
    XOR EBX,EBX                         ; 005b18f2
    TEST EDX,EDX                        ; 005b18f4
    JLE 0x005b190c                      ; 005b18f6
        ;   XREF to: 005b190c (CONDITIONAL_JUMP)  ; LAB_005b190c
    LEA ESI,[EDI + 0x37b50]             ; 005b18f8
    PUSH ESI                            ; 005b18fe
        ;   Label: LAB_005b18fe
    PUSH EBP                            ; 005b18ff
    CALL FUN_005b8c30                   ; 005b1900
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 005b1905
    TEST EAX,EAX                        ; 005b1908
    JNZ 0x005b193d                      ; 005b190a
        ;   XREF to: 005b193d (CONDITIONAL_JUMP)  ; LAB_005b193d
    CMP EBX,dword ptr [EDI + 0x37b4c]   ; 005b190c
        ;   Label: LAB_005b190c
    JZ 0x005b1950                       ; 005b1912
        ;   XREF to: 005b1950 (CONDITIONAL_JUMP)  ; LAB_005b1950
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b1914
        ;   Label: LAB_005b1914
    LEA EAX,[ESI*0x8 + 0x0]             ; 005b1918
    ADD EAX,ESI                         ; 005b191f
    SHL EAX,0x3                         ; 005b1921
    SUB EAX,ESI                         ; 005b1924
    MOV dword ptr [EDI + EAX*0x4 + 0x40c],0x1 ; 005b1926
    MOV dword ptr [EDI + EAX*0x4 + 0x470],EBX ; 005b1931
    POP EBP                             ; 005b1938
    POP EDI                             ; 005b1939
    POP ESI                             ; 005b193a
    POP EBX                             ; 005b193b
    RET                                 ; 005b193c
    INC EBX                             ; 005b193d
        ;   Label: LAB_005b193d
    MOV ECX,dword ptr [EDI + 0x37b4c]   ; 005b193e
    ADD ESI,0xac                        ; 005b1944
    CMP EBX,ECX                         ; 005b194a
    JL 0x005b18fe                       ; 005b194c
        ;   XREF to: 005b18fe (CONDITIONAL_JUMP)  ; LAB_005b18fe
    JMP 0x005b190c                      ; 005b194e
        ;   XREF to: 005b190c (UNCONDITIONAL_JUMP)  ; LAB_005b190c
    PUSH EBP                            ; 005b1950
        ;   Label: LAB_005b1950
    MOV EAX,0x5f124f                    ; 005b1951 | = "..\\core\\cloth.cpp"
    MOV EDX,0xab4                       ; 005b1956
    PUSH 0x5f1261                       ; 005b195b | = "CCloth::grabCloth - Can't find bone %s"
    MOV [0x01d046a0],EAX                ; 005b1960 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005b1965 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005b196b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005b1970
    JMP 0x005b1914                      ; 005b1973
        ;   XREF to: 005b1914 (UNCONDITIONAL_JUMP)  ; LAB_005b1914

