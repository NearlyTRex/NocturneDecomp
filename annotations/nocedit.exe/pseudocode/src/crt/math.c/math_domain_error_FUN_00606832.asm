; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c_math_domain_error_FUN_00606832(double x,double y,uchar error_type)
;
; Parameters:
; undefined4       Stack[0x4]:4   in_stack_00000004
; double           Stack[0x8]:8   x
; double           Stack[0x10]:8   y
; uchar            Stack[0x18]:1   error_type
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005ffd76 at 005ffd98
;
; Called Functions:
;   crt_math.c_process_math_error_FUN_0060bf2d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00606832
        ;   Label: crt_math.c_math_domain_error_FUN_00606832
    MOV EBP,ESP                         ; 00606833
    PUSH ECX                            ; 00606835
    SUB ESP,0x10                        ; 00606836
    MOV AH,byte ptr [EBP + 0x18]        ; 00606839
    CMP AH,0x1                          ; 0060683c
    JA 0x00606873                       ; 0060683f
        ;   XREF to: 00606873 (CONDITIONAL_JUMP)  ; LAB_00606873
    TEST AH,AH                          ; 00606841
    JNZ 0x0060686c                      ; 00606843
        ;   XREF to: 0060686c (CONDITIONAL_JUMP)  ; LAB_0060686c
    FLDZ                                ; 00606845
    FCOMP double ptr [EBP + 0x10]       ; 00606847
    FNSTSW AX                           ; 0060684a
    SAHF                                ; 0060684c
    JNC 0x0060685c                      ; 0060684d
        ;   XREF to: 0060685c (CONDITIONAL_JUMP)  ; LAB_0060685c
    XOR ECX,ECX                         ; 0060684f
    MOV dword ptr [EBP + -0x14],ECX     ; 00606851
    MOV dword ptr [EBP + -0x10],ECX     ; 00606854
    JMP 0x006068c0                      ; 00606857
        ;   XREF to: 006068c0 (UNCONDITIONAL_JUMP)  ; LAB_006068c0
    JBE 0x00606865                      ; 0060685c
        ;   XREF to: 00606865 (CONDITIONAL_JUMP)  ; LAB_00606865
        ;   Label: LAB_0060685c
    MOV EAX,0x8047                      ; 0060685e
    JMP 0x0060689d                      ; 00606863
        ;   XREF to: 0060689d (UNCONDITIONAL_JUMP)  ; LAB_0060689d
    MOV EAX,0x4047                      ; 00606865
        ;   Label: LAB_00606865
    JMP 0x0060689d                      ; 0060686a
        ;   XREF to: 0060689d (UNCONDITIONAL_JUMP)  ; LAB_0060689d
    MOV EAX,0x2047                      ; 0060686c
        ;   Label: LAB_0060686c
    JMP 0x0060689d                      ; 00606871
        ;   XREF to: 0060689d (UNCONDITIONAL_JUMP)  ; LAB_0060689d
    FLDZ                                ; 00606873
        ;   Label: LAB_00606873
    FCOMP double ptr [EBP + 0x10]       ; 00606875
    FNSTSW AX                           ; 00606878
    SAHF                                ; 0060687a
    JC 0x00606887                       ; 0060687b
        ;   XREF to: 00606887 (CONDITIONAL_JUMP)  ; LAB_00606887
    XOR EDX,EDX                         ; 0060687d
    MOV dword ptr [EBP + -0x14],EDX     ; 0060687f
    MOV dword ptr [EBP + -0x10],EDX     ; 00606882
    JMP 0x006068c0                      ; 00606885
        ;   XREF to: 006068c0 (UNCONDITIONAL_JUMP)  ; LAB_006068c0
    FLDZ                                ; 00606887
        ;   Label: LAB_00606887
    FCOMP double ptr [EBP + 0x8]        ; 00606889
    FNSTSW AX                           ; 0060688c
    SAHF                                ; 0060688e
    JNC 0x00606898                      ; 0060688f
        ;   XREF to: 00606898 (CONDITIONAL_JUMP)  ; LAB_00606898
    MOV EAX,0x8107                      ; 00606891
    JMP 0x0060689d                      ; 00606896
        ;   XREF to: 0060689d (UNCONDITIONAL_JUMP)  ; LAB_0060689d
    MOV EAX,0x1107                      ; 00606898
        ;   Label: LAB_00606898
    LEA EDX,[EBP + 0x10]                ; 0060689d
        ;   Label: LAB_0060689d
    PUSH EDX                            ; 006068a0
    LEA EDX,[EBP + 0x8]                 ; 006068a1
    PUSH EDX                            ; 006068a4
    PUSH EAX                            ; 006068a5
    CALL crt_math.c_process_math_error_FUN_0060bf2d ; 006068a6
        ;   XREF to: 0060bf2d (UNCONDITIONAL_CALL)  ; double crt_math.c_process_math_error_FUN_0060bf2d(int errorFlags, double * value1, double * value2)
    MOV dword ptr [EBP + -0xc],EAX      ; 006068ab
    MOV dword ptr [EBP + -0x8],EDX      ; 006068ae
    ADD ESP,0xc                         ; 006068b1
    MOV EAX,dword ptr [EBP + -0xc]      ; 006068b4
    MOV dword ptr [EBP + -0x14],EAX     ; 006068b7
    MOV EAX,dword ptr [EBP + -0x8]      ; 006068ba
    MOV dword ptr [EBP + -0x10],EAX     ; 006068bd
    MOV EAX,dword ptr [EBP + -0x14]     ; 006068c0
        ;   Label: LAB_006068c0
    MOV dword ptr [EBP + -0xc],EAX      ; 006068c3
    MOV EAX,dword ptr [EBP + -0x10]     ; 006068c6
    MOV dword ptr [EBP + -0x8],EAX      ; 006068c9
    MOV EAX,dword ptr [EBP + -0xc]      ; 006068cc
    MOV EDX,dword ptr [EBP + -0x8]      ; 006068cf
    LEA ESP,[EBP + -0x4]                ; 006068d2
    POP ECX                             ; 006068d5
    POP EBP                             ; 006068d6
    RET                                 ; 006068d7

