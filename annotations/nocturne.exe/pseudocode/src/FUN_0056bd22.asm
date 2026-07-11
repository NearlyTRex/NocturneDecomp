; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0056bd22(double param_1,double param_2,byte param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   FUN_00565ad6 at 00565af8
;
; Called Functions:
;   FUN_005706dd
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056bd22
        ;   Label: FUN_0056bd22
    MOV EBP,ESP                         ; 0056bd23
    PUSH ECX                            ; 0056bd25
    SUB ESP,0x10                        ; 0056bd26
    MOV AH,byte ptr [EBP + 0x18]        ; 0056bd29
    CMP AH,0x1                          ; 0056bd2c
    JA 0x0056bd63                       ; 0056bd2f
        ;   XREF to: 0056bd63 (CONDITIONAL_JUMP)  ; LAB_0056bd63
    TEST AH,AH                          ; 0056bd31
    JNZ 0x0056bd5c                      ; 0056bd33
        ;   XREF to: 0056bd5c (CONDITIONAL_JUMP)  ; LAB_0056bd5c
    FLDZ                                ; 0056bd35
    FCOMP double ptr [EBP + 0x10]       ; 0056bd37
    FNSTSW AX                           ; 0056bd3a
    SAHF                                ; 0056bd3c
    JNC 0x0056bd4c                      ; 0056bd3d
        ;   XREF to: 0056bd4c (CONDITIONAL_JUMP)  ; LAB_0056bd4c
    XOR ECX,ECX                         ; 0056bd3f
    MOV dword ptr [EBP + -0x14],ECX     ; 0056bd41
    MOV dword ptr [EBP + -0x10],ECX     ; 0056bd44
    JMP 0x0056bdb0                      ; 0056bd47
        ;   XREF to: 0056bdb0 (UNCONDITIONAL_JUMP)  ; LAB_0056bdb0
    JBE 0x0056bd55                      ; 0056bd4c
        ;   XREF to: 0056bd55 (CONDITIONAL_JUMP)  ; LAB_0056bd55
        ;   Label: LAB_0056bd4c
    MOV EAX,0x8047                      ; 0056bd4e
    JMP 0x0056bd8d                      ; 0056bd53
        ;   XREF to: 0056bd8d (UNCONDITIONAL_JUMP)  ; LAB_0056bd8d
    MOV EAX,0x4047                      ; 0056bd55
        ;   Label: LAB_0056bd55
    JMP 0x0056bd8d                      ; 0056bd5a
        ;   XREF to: 0056bd8d (UNCONDITIONAL_JUMP)  ; LAB_0056bd8d
    MOV EAX,0x2047                      ; 0056bd5c
        ;   Label: LAB_0056bd5c
    JMP 0x0056bd8d                      ; 0056bd61
        ;   XREF to: 0056bd8d (UNCONDITIONAL_JUMP)  ; LAB_0056bd8d
    FLDZ                                ; 0056bd63
        ;   Label: LAB_0056bd63
    FCOMP double ptr [EBP + 0x10]       ; 0056bd65
    FNSTSW AX                           ; 0056bd68
    SAHF                                ; 0056bd6a
    JC 0x0056bd77                       ; 0056bd6b
        ;   XREF to: 0056bd77 (CONDITIONAL_JUMP)  ; LAB_0056bd77
    XOR EDX,EDX                         ; 0056bd6d
    MOV dword ptr [EBP + -0x14],EDX     ; 0056bd6f
    MOV dword ptr [EBP + -0x10],EDX     ; 0056bd72
    JMP 0x0056bdb0                      ; 0056bd75
        ;   XREF to: 0056bdb0 (UNCONDITIONAL_JUMP)  ; LAB_0056bdb0
    FLDZ                                ; 0056bd77
        ;   Label: LAB_0056bd77
    FCOMP double ptr [EBP + 0x8]        ; 0056bd79
    FNSTSW AX                           ; 0056bd7c
    SAHF                                ; 0056bd7e
    JNC 0x0056bd88                      ; 0056bd7f
        ;   XREF to: 0056bd88 (CONDITIONAL_JUMP)  ; LAB_0056bd88
    MOV EAX,0x8107                      ; 0056bd81
    JMP 0x0056bd8d                      ; 0056bd86
        ;   XREF to: 0056bd8d (UNCONDITIONAL_JUMP)  ; LAB_0056bd8d
    MOV EAX,0x1107                      ; 0056bd88
        ;   Label: LAB_0056bd88
    LEA EDX,[EBP + 0x10]                ; 0056bd8d
        ;   Label: LAB_0056bd8d
    PUSH EDX                            ; 0056bd90
    LEA EDX,[EBP + 0x8]                 ; 0056bd91
    PUSH EDX                            ; 0056bd94
    PUSH EAX                            ; 0056bd95
    CALL FUN_005706dd                   ; 0056bd96
        ;   XREF to: 005706dd (UNCONDITIONAL_CALL)  ; undefined FUN_005706dd()
    MOV dword ptr [EBP + -0xc],EAX      ; 0056bd9b
    MOV dword ptr [EBP + -0x8],EDX      ; 0056bd9e
    ADD ESP,0xc                         ; 0056bda1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0056bda4
    MOV dword ptr [EBP + -0x14],EAX     ; 0056bda7
    MOV EAX,dword ptr [EBP + -0x8]      ; 0056bdaa
    MOV dword ptr [EBP + -0x10],EAX     ; 0056bdad
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056bdb0
        ;   Label: LAB_0056bdb0
    MOV dword ptr [EBP + -0xc],EAX      ; 0056bdb3
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056bdb6
    MOV dword ptr [EBP + -0x8],EAX      ; 0056bdb9
    MOV EAX,dword ptr [EBP + -0xc]      ; 0056bdbc
    MOV EDX,dword ptr [EBP + -0x8]      ; 0056bdbf
    LEA ESP,[EBP + -0x4]                ; 0056bdc2
    POP ECX                             ; 0056bdc5
    POP EBP                             ; 0056bdc6
    RET                                 ; 0056bdc7

