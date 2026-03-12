; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __mathinternal crt_math_c_handle_math_error_FUN_0060c02b(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   crt_math.c_exp_FUN_006068e2 at 00606906
;   crt_math.c_sqrt_FUN_0060710c at 00607130
;
; Called Functions:
;   crt_math.c_set_math_errno_FUN_0060befa
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060c02b
        ;   Label: crt_math.c_handle_math_error_FUN_0060c02b
    MOV EBP,ESP                         ; 0060c02c
    PUSH EBX                            ; 0060c02e
    SUB ESP,0x10                        ; 0060c02f
    MOV DL,byte ptr [EBP + 0x10]        ; 0060c032
    CMP DL,0x1                          ; 0060c035
    JC 0x0060c06b                       ; 0060c038
        ;   XREF to: 0060c06b (CONDITIONAL_JUMP)  ; LAB_0060c06b
    CMP DL,0x3                          ; 0060c03a
    JBE 0x0060c046                      ; 0060c03d
        ;   XREF to: 0060c046 (CONDITIONAL_JUMP)  ; LAB_0060c046
    CMP DL,0x4                          ; 0060c03f
    JZ 0x0060c057                       ; 0060c042
        ;   XREF to: 0060c057 (CONDITIONAL_JUMP)  ; LAB_0060c057
    JMP 0x0060c06b                      ; 0060c044
        ;   XREF to: 0060c06b (UNCONDITIONAL_JUMP)  ; LAB_0060c06b
    LEA EBX,[EBP + 0x8]                 ; 0060c046
        ;   Label: LAB_0060c046
    OR DL,0x40                          ; 0060c049
    PUSH EBX                            ; 0060c04c
    XOR EBX,EBX                         ; 0060c04d
    MOV BL,DL                           ; 0060c04f
    OR BH,0x20                          ; 0060c051
    PUSH EBX                            ; 0060c054
    JMP 0x0060c08d                      ; 0060c055
        ;   XREF to: 0060c08d (UNCONDITIONAL_JUMP)  ; LAB_0060c08d
    FLDZ                                ; 0060c057
        ;   Label: LAB_0060c057
    FCOMP double ptr [EBP + 0x8]        ; 0060c059
    FNSTSW AX                           ; 0060c05c
    SAHF                                ; 0060c05e
    JBE 0x0060c06b                      ; 0060c05f
        ;   XREF to: 0060c06b (CONDITIONAL_JUMP)  ; LAB_0060c06b
    XOR EDX,EDX                         ; 0060c061
    MOV dword ptr [EBP + -0x14],EDX     ; 0060c063
    MOV dword ptr [EBP + -0x10],EDX     ; 0060c066
    JMP 0x0060c0a7                      ; 0060c069
        ;   XREF to: 0060c0a7 (UNCONDITIONAL_JUMP)  ; LAB_0060c0a7
    XOR EBX,EBX                         ; 0060c06b
        ;   Label: LAB_0060c06b
    MOV BL,DL                           ; 0060c06d
    MOV ECX,EBX                         ; 0060c06f
    OR CH,0x81                          ; 0060c071
    CMP DL,0x6                          ; 0060c074
    JNZ 0x0060c088                      ; 0060c077
        ;   XREF to: 0060c088 (CONDITIONAL_JUMP)  ; LAB_0060c088
    FLDZ                                ; 0060c079
    FCOMP double ptr [EBP + 0x8]        ; 0060c07b
    FNSTSW AX                           ; 0060c07e
    SAHF                                ; 0060c080
    JBE 0x0060c088                      ; 0060c081
        ;   XREF to: 0060c088 (CONDITIONAL_JUMP)  ; LAB_0060c088
    OR BH,0x11                          ; 0060c083
    MOV ECX,EBX                         ; 0060c086
    LEA EBX,[EBP + 0x8]                 ; 0060c088
        ;   Label: LAB_0060c088
    PUSH EBX                            ; 0060c08b
    PUSH ECX                            ; 0060c08c
    CALL crt_math.c_set_math_errno_FUN_0060befa ; 0060c08d
        ;   XREF to: 0060befa (UNCONDITIONAL_CALL)  ; double crt_math.c_set_math_errno_FUN_0060befa(int errorFlags, double * valuePtr)
        ;   Label: LAB_0060c08d
    MOV dword ptr [EBP + -0xc],EAX      ; 0060c092
    MOV dword ptr [EBP + -0x8],EDX      ; 0060c095
    ADD ESP,0x8                         ; 0060c098
    MOV EAX,dword ptr [EBP + -0xc]      ; 0060c09b
    MOV dword ptr [EBP + -0x14],EAX     ; 0060c09e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0060c0a1
    MOV dword ptr [EBP + -0x10],EAX     ; 0060c0a4
    MOV EBX,dword ptr [EBP + -0x14]     ; 0060c0a7
        ;   Label: LAB_0060c0a7
    MOV dword ptr [EBP + -0xc],EBX      ; 0060c0aa
    MOV EBX,dword ptr [EBP + -0x10]     ; 0060c0ad
    MOV EAX,dword ptr [EBP + -0xc]      ; 0060c0b0
    MOV EDX,EBX                         ; 0060c0b3
    LEA ESP,[EBP + -0x4]                ; 0060c0b5
    POP EBX                             ; 0060c0b8
    POP EBP                             ; 0060c0b9
    RET                                 ; 0060c0ba

