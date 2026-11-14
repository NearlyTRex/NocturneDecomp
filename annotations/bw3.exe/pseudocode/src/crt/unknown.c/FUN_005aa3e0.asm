; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005aa3e0(double param_1,double param_2,byte param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005a4764 at 005a4786
;
; Called Functions:
;   crt_unknown.c_FUN_005aec4d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aa3e0
        ;   Label: crt_unknown.c_FUN_005aa3e0
    MOV EBP,ESP                         ; 005aa3e1
    PUSH ECX                            ; 005aa3e3
    SUB ESP,0x10                        ; 005aa3e4
    MOV AH,byte ptr [EBP + 0x18]        ; 005aa3e7
    CMP AH,0x1                          ; 005aa3ea
    JA 0x005aa421                       ; 005aa3ed
        ;   XREF to: 005aa421 (CONDITIONAL_JUMP)  ; LAB_005aa421
    TEST AH,AH                          ; 005aa3ef
    JNZ 0x005aa41a                      ; 005aa3f1
        ;   XREF to: 005aa41a (CONDITIONAL_JUMP)  ; LAB_005aa41a
    FLDZ                                ; 005aa3f3
    FCOMP double ptr [EBP + 0x10]       ; 005aa3f5
    FNSTSW AX                           ; 005aa3f8
    SAHF                                ; 005aa3fa
    JNC 0x005aa40a                      ; 005aa3fb
        ;   XREF to: 005aa40a (CONDITIONAL_JUMP)  ; LAB_005aa40a
    XOR ECX,ECX                         ; 005aa3fd
    MOV dword ptr [EBP + -0x14],ECX     ; 005aa3ff
    MOV dword ptr [EBP + -0x10],ECX     ; 005aa402
    JMP 0x005aa46e                      ; 005aa405
        ;   XREF to: 005aa46e (UNCONDITIONAL_JUMP)  ; LAB_005aa46e
    JBE 0x005aa413                      ; 005aa40a
        ;   XREF to: 005aa413 (CONDITIONAL_JUMP)  ; LAB_005aa413
        ;   Label: LAB_005aa40a
    MOV EAX,0x8047                      ; 005aa40c
    JMP 0x005aa44b                      ; 005aa411
        ;   XREF to: 005aa44b (UNCONDITIONAL_JUMP)  ; LAB_005aa44b
    MOV EAX,0x4047                      ; 005aa413
        ;   Label: LAB_005aa413
    JMP 0x005aa44b                      ; 005aa418
        ;   XREF to: 005aa44b (UNCONDITIONAL_JUMP)  ; LAB_005aa44b
    MOV EAX,0x2047                      ; 005aa41a
        ;   Label: LAB_005aa41a
    JMP 0x005aa44b                      ; 005aa41f
        ;   XREF to: 005aa44b (UNCONDITIONAL_JUMP)  ; LAB_005aa44b
    FLDZ                                ; 005aa421
        ;   Label: LAB_005aa421
    FCOMP double ptr [EBP + 0x10]       ; 005aa423
    FNSTSW AX                           ; 005aa426
    SAHF                                ; 005aa428
    JC 0x005aa435                       ; 005aa429
        ;   XREF to: 005aa435 (CONDITIONAL_JUMP)  ; LAB_005aa435
    XOR EDX,EDX                         ; 005aa42b
    MOV dword ptr [EBP + -0x14],EDX     ; 005aa42d
    MOV dword ptr [EBP + -0x10],EDX     ; 005aa430
    JMP 0x005aa46e                      ; 005aa433
        ;   XREF to: 005aa46e (UNCONDITIONAL_JUMP)  ; LAB_005aa46e
    FLDZ                                ; 005aa435
        ;   Label: LAB_005aa435
    FCOMP double ptr [EBP + 0x8]        ; 005aa437
    FNSTSW AX                           ; 005aa43a
    SAHF                                ; 005aa43c
    JNC 0x005aa446                      ; 005aa43d
        ;   XREF to: 005aa446 (CONDITIONAL_JUMP)  ; LAB_005aa446
    MOV EAX,0x8107                      ; 005aa43f
    JMP 0x005aa44b                      ; 005aa444
        ;   XREF to: 005aa44b (UNCONDITIONAL_JUMP)  ; LAB_005aa44b
    MOV EAX,0x1107                      ; 005aa446
        ;   Label: LAB_005aa446
    LEA EDX,[EBP + 0x10]                ; 005aa44b
        ;   Label: LAB_005aa44b
    PUSH EDX                            ; 005aa44e
    LEA EDX,[EBP + 0x8]                 ; 005aa44f
    PUSH EDX                            ; 005aa452
    PUSH EAX                            ; 005aa453
    CALL crt_unknown.c_FUN_005aec4d     ; 005aa454
        ;   XREF to: 005aec4d (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aec4d()
    MOV dword ptr [EBP + -0xc],EAX      ; 005aa459
    MOV dword ptr [EBP + -0x8],EDX      ; 005aa45c
    ADD ESP,0xc                         ; 005aa45f
    MOV EAX,dword ptr [EBP + -0xc]      ; 005aa462
    MOV dword ptr [EBP + -0x14],EAX     ; 005aa465
    MOV EAX,dword ptr [EBP + -0x8]      ; 005aa468
    MOV dword ptr [EBP + -0x10],EAX     ; 005aa46b
    MOV EAX,dword ptr [EBP + -0x14]     ; 005aa46e
        ;   Label: LAB_005aa46e
    MOV dword ptr [EBP + -0xc],EAX      ; 005aa471
    MOV EAX,dword ptr [EBP + -0x10]     ; 005aa474
    MOV dword ptr [EBP + -0x8],EAX      ; 005aa477
    MOV EAX,dword ptr [EBP + -0xc]      ; 005aa47a
    MOV EDX,dword ptr [EBP + -0x8]      ; 005aa47d
    LEA ESP,[EBP + -0x4]                ; 005aa480
    POP ECX                             ; 005aa483
    POP EBP                             ; 005aa484
    RET                                 ; 005aa485

