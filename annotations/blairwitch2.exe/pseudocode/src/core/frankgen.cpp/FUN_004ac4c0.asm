; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_FUN_004ac4c0(CFrankenstienMachine *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f71ec
;   undefined4 DAT_005f71f0
;   undefined4 DAT_01cb0620
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_frankgen.cpp_FUN_004accb0
;   core_frankgen.cpp_FUN_004ace60
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ac4c0
        ;   Label: core_frankgen.cpp_FUN_004ac4c0
    SUB ESP,0xb8                        ; 004ac4c1
    MOV EBP,dword ptr [ESP + 0xc0]      ; 004ac4c7
    MOV EAX,dword ptr [EBP + 0x2b8]     ; 004ac4ce
    MOV [0x01cb0620],EAX                ; 004ac4d4 | DAT_01cb0620
    CALL core_frankgen.cpp_FUN_004ace60 ; 004ac4d9
        ;   XREF to: 004ace60 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_FUN_004ace60()
    CMP EAX,EBP                         ; 004ac4de
    JZ 0x004ac895                       ; 004ac4e0
        ;   XREF to: 004ac895 (CONDITIONAL_JUMP)  ; LAB_004ac895
    MOV EDX,dword ptr [EAX + 0x2b8]     ; 004ac4e6
    MOV dword ptr [EBP + 0x2b8],EDX     ; 004ac4ec
    FLD float ptr [0x01cb0620]          ; 004ac4f2 | DAT_01cb0620
        ;   Label: LAB_004ac4f2
    FCOMP float ptr [EBP + 0x2b8]       ; 004ac4f8
    FNSTSW AX                           ; 004ac4fe
    SAHF                                ; 004ac500
    JBE 0x004ac515                      ; 004ac501
        ;   XREF to: 004ac515 (CONDITIONAL_JUMP)  ; LAB_004ac515
    FLD float ptr [0x005f71f0]          ; 004ac503 | DAT_005f71f0
    FSUBR float ptr [0x01cb0620]        ; 004ac509 | DAT_01cb0620
    FSTP float ptr [0x01cb0620]         ; 004ac50f | DAT_01cb0620
    PUSH EBP                            ; 004ac515
        ;   Label: LAB_004ac515
    CALL core_frankgen.cpp_FUN_004accb0 ; 004ac516
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_FUN_004accb0(CFrankenstienMachine * this_ptr)
    MOV EAX,dword ptr [EBP + 0x2b4]     ; 004ac51b
    ADD ESP,0x4                         ; 004ac521
    CMP EAX,0x8                         ; 004ac524
    JA 0x004ac9a6                       ; 004ac527
        ;   XREF to: 004ac9a6 (CONDITIONAL_JUMP)  ; LAB_004ac9a6
    JMP dword ptr [EAX*0x4 + 0x4ac498]  ; 004ac52d
    FLD float ptr [ESP + 0xc4]          ; 004ac895
        ;   Label: LAB_004ac895
    FMUL float ptr [0x005f71ec]         ; 004ac89c | DAT_005f71ec
    FADD float ptr [EBP + 0x2b8]        ; 004ac8a2
    FST float ptr [EBP + 0x2b8]         ; 004ac8a8
    FCOMP float ptr [0x005f71f0]        ; 004ac8ae | DAT_005f71f0
    FNSTSW AX                           ; 004ac8b4
    SAHF                                ; 004ac8b6
    JC 0x004ac4f2                       ; 004ac8b7
        ;   XREF to: 004ac4f2 (CONDITIONAL_JUMP)  ; LAB_004ac4f2
    FLD float ptr [0x005f71f0]          ; 004ac8bd | DAT_005f71f0
    FSUBR float ptr [EBP + 0x2b8]       ; 004ac8c3
    FSTP float ptr [EBP + 0x2b8]        ; 004ac8c9
    JMP 0x004ac4f2                      ; 004ac8cf
        ;   XREF to: 004ac4f2 (UNCONDITIONAL_JUMP)  ; LAB_004ac4f2
    MOV EDX,0x5d6c5e                    ; 004ac9a6
        ;   Label: LAB_004ac9a6
    MOV ECX,0x13e                       ; 004ac9ab
    PUSH 0x5d6c73                       ; 004ac9b0
    MOV dword ptr [0x01d046a0],EDX      ; 004ac9b5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004ac9bb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ac9c1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ac9c6
    ADD ESP,0xb8                        ; 004ac9c9
    POP EBP                             ; 004ac9cf
    RET                                 ; 004ac9d0

