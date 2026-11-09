; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005bf2b0(double param_1,double param_2,byte param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005b9484 at 005b94a6
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c3add
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bf2b0
        ;   Label: crt_unknown.c_FUN_005bf2b0
    MOV EBP,ESP                         ; 005bf2b1
    PUSH ECX                            ; 005bf2b3
    SUB ESP,0x10                        ; 005bf2b4
    MOV AH,byte ptr [EBP + 0x18]        ; 005bf2b7
    CMP AH,0x1                          ; 005bf2ba
    JA 0x005bf2f1                       ; 005bf2bd
        ;   XREF to: 005bf2f1 (CONDITIONAL_JUMP)  ; LAB_005bf2f1
    TEST AH,AH                          ; 005bf2bf
    JNZ 0x005bf2ea                      ; 005bf2c1
        ;   XREF to: 005bf2ea (CONDITIONAL_JUMP)  ; LAB_005bf2ea
    FLDZ                                ; 005bf2c3
    FCOMP double ptr [EBP + 0x10]       ; 005bf2c5
    FNSTSW AX                           ; 005bf2c8
    SAHF                                ; 005bf2ca
    JNC 0x005bf2da                      ; 005bf2cb
        ;   XREF to: 005bf2da (CONDITIONAL_JUMP)  ; LAB_005bf2da
    XOR ECX,ECX                         ; 005bf2cd
    MOV dword ptr [EBP + -0x14],ECX     ; 005bf2cf
    MOV dword ptr [EBP + -0x10],ECX     ; 005bf2d2
    JMP 0x005bf33e                      ; 005bf2d5
        ;   XREF to: 005bf33e (UNCONDITIONAL_JUMP)  ; LAB_005bf33e
    JBE 0x005bf2e3                      ; 005bf2da
        ;   XREF to: 005bf2e3 (CONDITIONAL_JUMP)  ; LAB_005bf2e3
        ;   Label: LAB_005bf2da
    MOV EAX,0x8047                      ; 005bf2dc
    JMP 0x005bf31b                      ; 005bf2e1
        ;   XREF to: 005bf31b (UNCONDITIONAL_JUMP)  ; LAB_005bf31b
    MOV EAX,0x4047                      ; 005bf2e3
        ;   Label: LAB_005bf2e3
    JMP 0x005bf31b                      ; 005bf2e8
        ;   XREF to: 005bf31b (UNCONDITIONAL_JUMP)  ; LAB_005bf31b
    MOV EAX,0x2047                      ; 005bf2ea
        ;   Label: LAB_005bf2ea
    JMP 0x005bf31b                      ; 005bf2ef
        ;   XREF to: 005bf31b (UNCONDITIONAL_JUMP)  ; LAB_005bf31b
    FLDZ                                ; 005bf2f1
        ;   Label: LAB_005bf2f1
    FCOMP double ptr [EBP + 0x10]       ; 005bf2f3
    FNSTSW AX                           ; 005bf2f6
    SAHF                                ; 005bf2f8
    JC 0x005bf305                       ; 005bf2f9
        ;   XREF to: 005bf305 (CONDITIONAL_JUMP)  ; LAB_005bf305
    XOR EDX,EDX                         ; 005bf2fb
    MOV dword ptr [EBP + -0x14],EDX     ; 005bf2fd
    MOV dword ptr [EBP + -0x10],EDX     ; 005bf300
    JMP 0x005bf33e                      ; 005bf303
        ;   XREF to: 005bf33e (UNCONDITIONAL_JUMP)  ; LAB_005bf33e
    FLDZ                                ; 005bf305
        ;   Label: LAB_005bf305
    FCOMP double ptr [EBP + 0x8]        ; 005bf307
    FNSTSW AX                           ; 005bf30a
    SAHF                                ; 005bf30c
    JNC 0x005bf316                      ; 005bf30d
        ;   XREF to: 005bf316 (CONDITIONAL_JUMP)  ; LAB_005bf316
    MOV EAX,0x8107                      ; 005bf30f
    JMP 0x005bf31b                      ; 005bf314
        ;   XREF to: 005bf31b (UNCONDITIONAL_JUMP)  ; LAB_005bf31b
    MOV EAX,0x1107                      ; 005bf316
        ;   Label: LAB_005bf316
    LEA EDX,[EBP + 0x10]                ; 005bf31b
        ;   Label: LAB_005bf31b
    PUSH EDX                            ; 005bf31e
    LEA EDX,[EBP + 0x8]                 ; 005bf31f
    PUSH EDX                            ; 005bf322
    PUSH EAX                            ; 005bf323
    CALL unkafter_morph.cpp_FUN_005c3add ; 005bf324
        ;   XREF to: 005c3add (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3add()
    MOV dword ptr [EBP + -0xc],EAX      ; 005bf329
    MOV dword ptr [EBP + -0x8],EDX      ; 005bf32c
    ADD ESP,0xc                         ; 005bf32f
    MOV EAX,dword ptr [EBP + -0xc]      ; 005bf332
    MOV dword ptr [EBP + -0x14],EAX     ; 005bf335
    MOV EAX,dword ptr [EBP + -0x8]      ; 005bf338
    MOV dword ptr [EBP + -0x10],EAX     ; 005bf33b
    MOV EAX,dword ptr [EBP + -0x14]     ; 005bf33e
        ;   Label: LAB_005bf33e
    MOV dword ptr [EBP + -0xc],EAX      ; 005bf341
    MOV EAX,dword ptr [EBP + -0x10]     ; 005bf344
    MOV dword ptr [EBP + -0x8],EAX      ; 005bf347
    MOV EAX,dword ptr [EBP + -0xc]      ; 005bf34a
    MOV EDX,dword ptr [EBP + -0x8]      ; 005bf34d
    LEA ESP,[EBP + -0x4]                ; 005bf350
    POP ECX                             ; 005bf353
    POP EBP                             ; 005bf354
    RET                                 ; 005bf355

