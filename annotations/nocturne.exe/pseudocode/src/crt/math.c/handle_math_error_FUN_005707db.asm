; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __mathinternal crt_math_c_handle_math_error_FUN_005707db(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[3]:
;   FUN_0056c56c at 0056c58c
;   crt_math.c_exp_FUN_0056bdd2 at 0056bdf6
;   crt_math.c_sqrt_FUN_0056c5a8 at 0056c5cc
;
; Called Functions:
;   crt_math.c_set_math_errno_FUN_005706aa
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005707db
        ;   Label: crt_math.c_handle_math_error_FUN_005707db
    MOV EBP,ESP                         ; 005707dc
    PUSH EBX                            ; 005707de
    SUB ESP,0x10                        ; 005707df
    MOV DL,byte ptr [EBP + 0x10]        ; 005707e2
    CMP DL,0x1                          ; 005707e5
    JC 0x0057081b                       ; 005707e8
        ;   XREF to: 0057081b (CONDITIONAL_JUMP)  ; LAB_0057081b
    CMP DL,0x3                          ; 005707ea
    JBE 0x005707f6                      ; 005707ed
        ;   XREF to: 005707f6 (CONDITIONAL_JUMP)  ; LAB_005707f6
    CMP DL,0x4                          ; 005707ef
    JZ 0x00570807                       ; 005707f2
        ;   XREF to: 00570807 (CONDITIONAL_JUMP)  ; LAB_00570807
    JMP 0x0057081b                      ; 005707f4
        ;   XREF to: 0057081b (UNCONDITIONAL_JUMP)  ; LAB_0057081b
    LEA EBX,[EBP + 0x8]                 ; 005707f6
        ;   Label: LAB_005707f6
    OR DL,0x40                          ; 005707f9
    PUSH EBX                            ; 005707fc
    XOR EBX,EBX                         ; 005707fd
    MOV BL,DL                           ; 005707ff
    OR BH,0x20                          ; 00570801
    PUSH EBX                            ; 00570804
    JMP 0x0057083d                      ; 00570805
        ;   XREF to: 0057083d (UNCONDITIONAL_JUMP)  ; LAB_0057083d
    FLDZ                                ; 00570807
        ;   Label: LAB_00570807
    FCOMP double ptr [EBP + 0x8]        ; 00570809
    FNSTSW AX                           ; 0057080c
    SAHF                                ; 0057080e
    JBE 0x0057081b                      ; 0057080f
        ;   XREF to: 0057081b (CONDITIONAL_JUMP)  ; LAB_0057081b
    XOR EDX,EDX                         ; 00570811
    MOV dword ptr [EBP + -0x14],EDX     ; 00570813
    MOV dword ptr [EBP + -0x10],EDX     ; 00570816
    JMP 0x00570857                      ; 00570819
        ;   XREF to: 00570857 (UNCONDITIONAL_JUMP)  ; LAB_00570857
    XOR EBX,EBX                         ; 0057081b
        ;   Label: LAB_0057081b
    MOV BL,DL                           ; 0057081d
    MOV ECX,EBX                         ; 0057081f
    OR CH,0x81                          ; 00570821
    CMP DL,0x6                          ; 00570824
    JNZ 0x00570838                      ; 00570827
        ;   XREF to: 00570838 (CONDITIONAL_JUMP)  ; LAB_00570838
    FLDZ                                ; 00570829
    FCOMP double ptr [EBP + 0x8]        ; 0057082b
    FNSTSW AX                           ; 0057082e
    SAHF                                ; 00570830
    JBE 0x00570838                      ; 00570831
        ;   XREF to: 00570838 (CONDITIONAL_JUMP)  ; LAB_00570838
    OR BH,0x11                          ; 00570833
    MOV ECX,EBX                         ; 00570836
    LEA EBX,[EBP + 0x8]                 ; 00570838
        ;   Label: LAB_00570838
    PUSH EBX                            ; 0057083b
    PUSH ECX                            ; 0057083c
    CALL crt_math.c_set_math_errno_FUN_005706aa ; 0057083d
        ;   XREF to: 005706aa (UNCONDITIONAL_CALL)  ; double crt_math.c_set_math_errno_FUN_005706aa(int errorFlags, double * valuePtr)
        ;   Label: LAB_0057083d
    MOV dword ptr [EBP + -0xc],EAX      ; 00570842
    MOV dword ptr [EBP + -0x8],EDX      ; 00570845
    ADD ESP,0x8                         ; 00570848
    MOV EAX,dword ptr [EBP + -0xc]      ; 0057084b
    MOV dword ptr [EBP + -0x14],EAX     ; 0057084e
    MOV EAX,dword ptr [EBP + -0x8]      ; 00570851
    MOV dword ptr [EBP + -0x10],EAX     ; 00570854
    MOV EBX,dword ptr [EBP + -0x14]     ; 00570857
        ;   Label: LAB_00570857
    MOV dword ptr [EBP + -0xc],EBX      ; 0057085a
    MOV EBX,dword ptr [EBP + -0x10]     ; 0057085d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00570860
    MOV EDX,EBX                         ; 00570863
    LEA ESP,[EBP + -0x4]                ; 00570865
    POP EBX                             ; 00570868
    POP EBP                             ; 00570869
    RET                                 ; 0057086a

