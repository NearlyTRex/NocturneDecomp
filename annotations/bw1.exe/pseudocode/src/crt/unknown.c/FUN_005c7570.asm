; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c7570(double param_1,double param_2,byte param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005c18f4 at 005c1916
;
; Called Functions:
;   crt_unknown.c_FUN_005cbddd
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c7570
        ;   Label: crt_unknown.c_FUN_005c7570
    MOV EBP,ESP                         ; 005c7571
    PUSH ECX                            ; 005c7573
    SUB ESP,0x10                        ; 005c7574
    MOV AH,byte ptr [EBP + 0x18]        ; 005c7577
    CMP AH,0x1                          ; 005c757a
    JA 0x005c75b1                       ; 005c757d
        ;   XREF to: 005c75b1 (CONDITIONAL_JUMP)  ; LAB_005c75b1
    TEST AH,AH                          ; 005c757f
    JNZ 0x005c75aa                      ; 005c7581
        ;   XREF to: 005c75aa (CONDITIONAL_JUMP)  ; LAB_005c75aa
    FLDZ                                ; 005c7583
    FCOMP double ptr [EBP + 0x10]       ; 005c7585
    FNSTSW AX                           ; 005c7588
    SAHF                                ; 005c758a
    JNC 0x005c759a                      ; 005c758b
        ;   XREF to: 005c759a (CONDITIONAL_JUMP)  ; LAB_005c759a
    XOR ECX,ECX                         ; 005c758d
    MOV dword ptr [EBP + -0x14],ECX     ; 005c758f
    MOV dword ptr [EBP + -0x10],ECX     ; 005c7592
    JMP 0x005c75fe                      ; 005c7595
        ;   XREF to: 005c75fe (UNCONDITIONAL_JUMP)  ; LAB_005c75fe
    JBE 0x005c75a3                      ; 005c759a
        ;   XREF to: 005c75a3 (CONDITIONAL_JUMP)  ; LAB_005c75a3
        ;   Label: LAB_005c759a
    MOV EAX,0x8047                      ; 005c759c
    JMP 0x005c75db                      ; 005c75a1
        ;   XREF to: 005c75db (UNCONDITIONAL_JUMP)  ; LAB_005c75db
    MOV EAX,0x4047                      ; 005c75a3
        ;   Label: LAB_005c75a3
    JMP 0x005c75db                      ; 005c75a8
        ;   XREF to: 005c75db (UNCONDITIONAL_JUMP)  ; LAB_005c75db
    MOV EAX,0x2047                      ; 005c75aa
        ;   Label: LAB_005c75aa
    JMP 0x005c75db                      ; 005c75af
        ;   XREF to: 005c75db (UNCONDITIONAL_JUMP)  ; LAB_005c75db
    FLDZ                                ; 005c75b1
        ;   Label: LAB_005c75b1
    FCOMP double ptr [EBP + 0x10]       ; 005c75b3
    FNSTSW AX                           ; 005c75b6
    SAHF                                ; 005c75b8
    JC 0x005c75c5                       ; 005c75b9
        ;   XREF to: 005c75c5 (CONDITIONAL_JUMP)  ; LAB_005c75c5
    XOR EDX,EDX                         ; 005c75bb
    MOV dword ptr [EBP + -0x14],EDX     ; 005c75bd
    MOV dword ptr [EBP + -0x10],EDX     ; 005c75c0
    JMP 0x005c75fe                      ; 005c75c3
        ;   XREF to: 005c75fe (UNCONDITIONAL_JUMP)  ; LAB_005c75fe
    FLDZ                                ; 005c75c5
        ;   Label: LAB_005c75c5
    FCOMP double ptr [EBP + 0x8]        ; 005c75c7
    FNSTSW AX                           ; 005c75ca
    SAHF                                ; 005c75cc
    JNC 0x005c75d6                      ; 005c75cd
        ;   XREF to: 005c75d6 (CONDITIONAL_JUMP)  ; LAB_005c75d6
    MOV EAX,0x8107                      ; 005c75cf
    JMP 0x005c75db                      ; 005c75d4
        ;   XREF to: 005c75db (UNCONDITIONAL_JUMP)  ; LAB_005c75db
    MOV EAX,0x1107                      ; 005c75d6
        ;   Label: LAB_005c75d6
    LEA EDX,[EBP + 0x10]                ; 005c75db
        ;   Label: LAB_005c75db
    PUSH EDX                            ; 005c75de
    LEA EDX,[EBP + 0x8]                 ; 005c75df
    PUSH EDX                            ; 005c75e2
    PUSH EAX                            ; 005c75e3
    CALL crt_unknown.c_FUN_005cbddd     ; 005c75e4
        ;   XREF to: 005cbddd (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cbddd()
    MOV dword ptr [EBP + -0xc],EAX      ; 005c75e9
    MOV dword ptr [EBP + -0x8],EDX      ; 005c75ec
    ADD ESP,0xc                         ; 005c75ef
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c75f2
    MOV dword ptr [EBP + -0x14],EAX     ; 005c75f5
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c75f8
    MOV dword ptr [EBP + -0x10],EAX     ; 005c75fb
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c75fe
        ;   Label: LAB_005c75fe
    MOV dword ptr [EBP + -0xc],EAX      ; 005c7601
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c7604
    MOV dword ptr [EBP + -0x8],EAX      ; 005c7607
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c760a
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c760d
    LEA ESP,[EBP + -0x4]                ; 005c7610
    POP ECX                             ; 005c7613
    POP EBP                             ; 005c7614
    RET                                 ; 005c7615

