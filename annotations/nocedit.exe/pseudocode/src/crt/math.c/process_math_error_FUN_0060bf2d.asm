; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double crt_math.c_process_math_error_FUN_0060bf2d(int errorFlags, double * value1, double * value2)
;
; Parameters:
; int              Stack[0x4]:4   errorFlags
; double *         Stack[0x8]:4   value1
; double *         Stack[0xc]:4   value2
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_math.c_math_domain_error_FUN_00606832 at 006068a6
;   crt_math.c_set_math_errno_FUN_0060befa at 0060bf09
;
; Referenced Globals:
;   double g_PositiveInfinity = +Infinity
;   undefined4 g_PositiveInfinity+4
;   char*[24] g_MathFunctionNames
;
; Called Functions:
;   crt_math.c_report_math_error_FUN_0060e2e5
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060bf2d
        ;   Label: crt_math.c_process_math_error_FUN_0060bf2d
    MOV EBP,ESP                         ; 0060bf2e
    PUSH EBX                            ; 0060bf30
    PUSH ESI                            ; 0060bf31
    SUB ESP,0x30                        ; 0060bf32
    MOV EDX,dword ptr [EBP + 0x8]       ; 0060bf35
    MOV ESI,dword ptr [EBP + 0xc]       ; 0060bf38
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060bf3b
    MOV EAX,dword ptr [ESI]             ; 0060bf3e
    MOV dword ptr [EBP + -0x30],EAX     ; 0060bf40
    MOV EAX,dword ptr [ESI + 0x4]       ; 0060bf43
    MOV dword ptr [EBP + -0x2c],EAX     ; 0060bf46
    MOV EAX,dword ptr [ECX]             ; 0060bf49
    MOV dword ptr [EBP + -0x28],EAX     ; 0060bf4b
    MOV EAX,dword ptr [ECX + 0x4]       ; 0060bf4e
    MOV dword ptr [EBP + -0x24],EAX     ; 0060bf51
    TEST DL,0x40                        ; 0060bf54
    JZ 0x0060bf60                       ; 0060bf57
        ;   XREF to: 0060bf60 (CONDITIONAL_JUMP)  ; LAB_0060bf60
    MOV EBX,0x1                         ; 0060bf59
    JMP 0x0060bf9a                      ; 0060bf5e
        ;   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)  ; LAB_0060bf9a
    TEST DL,0x80                        ; 0060bf60
        ;   Label: LAB_0060bf60
    JZ 0x0060bf6c                       ; 0060bf63
        ;   XREF to: 0060bf6c (CONDITIONAL_JUMP)  ; LAB_0060bf6c
    MOV EBX,0x2                         ; 0060bf65
    JMP 0x0060bf9a                      ; 0060bf6a
        ;   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)  ; LAB_0060bf9a
    TEST DH,0x1                         ; 0060bf6c
        ;   Label: LAB_0060bf6c
    JZ 0x0060bf78                       ; 0060bf6f
        ;   XREF to: 0060bf78 (CONDITIONAL_JUMP)  ; LAB_0060bf78
    MOV EBX,0x3                         ; 0060bf71
    JMP 0x0060bf9a                      ; 0060bf76
        ;   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)  ; LAB_0060bf9a
    TEST DH,0x8                         ; 0060bf78
        ;   Label: LAB_0060bf78
    JZ 0x0060bf84                       ; 0060bf7b
        ;   XREF to: 0060bf84 (CONDITIONAL_JUMP)  ; LAB_0060bf84
    MOV EBX,0x4                         ; 0060bf7d
    JMP 0x0060bf9a                      ; 0060bf82
        ;   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)  ; LAB_0060bf9a
    TEST DH,0x2                         ; 0060bf84
        ;   Label: LAB_0060bf84
    JZ 0x0060bf90                       ; 0060bf87
        ;   XREF to: 0060bf90 (CONDITIONAL_JUMP)  ; LAB_0060bf90
    MOV EBX,0x6                         ; 0060bf89
    JMP 0x0060bf9a                      ; 0060bf8e
        ;   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)  ; LAB_0060bf9a
    TEST DH,0x4                         ; 0060bf90
        ;   Label: LAB_0060bf90
    JZ 0x0060bf9a                       ; 0060bf93
        ;   XREF to: 0060bf9a (CONDITIONAL_JUMP)  ; LAB_0060bf9a
    MOV EBX,0x5                         ; 0060bf95
    MOV EAX,EDX                         ; 0060bf9a
        ;   Label: LAB_0060bf9a
    AND EAX,0x1f                        ; 0060bf9c
    MOV EAX,dword ptr [EAX*0x4 + 0x68548c] ; 0060bf9f | g_MathFunctionNames
    MOV dword ptr [EBP + -0x38],EBX     ; 0060bfa6
    MOV dword ptr [EBP + -0x34],EAX     ; 0060bfa9
    TEST DH,0x10                        ; 0060bfac
    JZ 0x0060bfbe                       ; 0060bfaf
        ;   XREF to: 0060bfbe (CONDITIONAL_JUMP)  ; LAB_0060bfbe
    FLD double ptr [0x00665f30]         ; 0060bfb1 | g_PositiveInfinity
    FCHS                                ; 0060bfb7
    FSTP double ptr [EBP + -0x20]       ; 0060bfb9
    JMP 0x0060c000                      ; 0060bfbc
        ;   XREF to: 0060c000 (UNCONDITIONAL_JUMP)  ; LAB_0060c000
    TEST DH,0x20                        ; 0060bfbe
        ;   Label: LAB_0060bfbe
    JZ 0x0060bfcd                       ; 0060bfc1
        ;   XREF to: 0060bfcd (CONDITIONAL_JUMP)  ; LAB_0060bfcd
    XOR ECX,ECX                         ; 0060bfc3
    MOV dword ptr [EBP + -0x20],ECX     ; 0060bfc5
    MOV dword ptr [EBP + -0x1c],ECX     ; 0060bfc8
    JMP 0x0060c000                      ; 0060bfcb
        ;   XREF to: 0060c000 (UNCONDITIONAL_JUMP)  ; LAB_0060c000
    TEST DH,0x40                        ; 0060bfcd
        ;   Label: LAB_0060bfcd
    JZ 0x0060bfe1                       ; 0060bfd0
        ;   XREF to: 0060bfe1 (CONDITIONAL_JUMP)  ; LAB_0060bfe1
    XOR EDX,EDX                         ; 0060bfd2
    MOV EBX,0x3ff00000                  ; 0060bfd4
    MOV dword ptr [EBP + -0x20],EDX     ; 0060bfd9
    MOV dword ptr [EBP + -0x1c],EBX     ; 0060bfdc
    JMP 0x0060c000                      ; 0060bfdf
        ;   XREF to: 0060c000 (UNCONDITIONAL_JUMP)  ; LAB_0060c000
    TEST DH,0x80                        ; 0060bfe1
        ;   Label: LAB_0060bfe1
    JZ 0x0060bff5                       ; 0060bfe4
        ;   XREF to: 0060bff5 (CONDITIONAL_JUMP)  ; LAB_0060bff5
    MOV EAX,[0x00665f30]                ; 0060bfe6 | g_PositiveInfinity
    MOV dword ptr [EBP + -0x20],EAX     ; 0060bfeb
    MOV EAX,[0x00665f34]                ; 0060bfee | g_PositiveInfinity+4
    JMP 0x0060bffd                      ; 0060bff3
        ;   XREF to: 0060bffd (UNCONDITIONAL_JUMP)  ; LAB_0060bffd
    MOV EAX,dword ptr [ECX]             ; 0060bff5
        ;   Label: LAB_0060bff5
    MOV dword ptr [EBP + -0x20],EAX     ; 0060bff7
    MOV EAX,dword ptr [ECX + 0x4]       ; 0060bffa
    MOV dword ptr [EBP + -0x1c],EAX     ; 0060bffd
        ;   Label: LAB_0060bffd
    LEA EAX,[EBP + -0x38]               ; 0060c000
        ;   Label: LAB_0060c000
    PUSH EAX                            ; 0060c003
    CALL crt_math.c_report_math_error_FUN_0060e2e5 ; 0060c004
        ;   XREF to: 0060e2e5 (UNCONDITIONAL_CALL)  ; double crt_math.c_report_math_error_FUN_0060e2e5(MathErrorContext * errorCtx)
    MOV dword ptr [EBP + -0x18],EAX     ; 0060c009
    MOV dword ptr [EBP + -0x14],EDX     ; 0060c00c
    ADD ESP,0x4                         ; 0060c00f
    MOV EAX,dword ptr [EBP + -0x18]     ; 0060c012
    MOV dword ptr [EBP + -0x10],EAX     ; 0060c015
    MOV EAX,dword ptr [EBP + -0x14]     ; 0060c018
    MOV dword ptr [EBP + -0xc],EAX      ; 0060c01b
    MOV EAX,dword ptr [EBP + -0x10]     ; 0060c01e
    MOV EDX,dword ptr [EBP + -0xc]      ; 0060c021
    LEA ESP,[EBP + -0x8]                ; 0060c024
    POP ESI                             ; 0060c027
    POP EBX                             ; 0060c028
    POP EBP                             ; 0060c029
    RET                                 ; 0060c02a

