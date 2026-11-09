; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bbff7(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bbfc0 at 005bbfd7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005bbff7
        ;   Label: crt_unknown.c_FUN_005bbff7
    JZ 0x005bc062                       ; 005bbff9
        ;   XREF to: 005bc062 (CONDITIONAL_JUMP)  ; LAB_005bc062
    TEST AL,0x1f                        ; 005bbffb
        ;   Label: LAB_005bbffb
    JZ 0x005bc007                       ; 005bbffd
        ;   XREF to: 005bc007 (CONDITIONAL_JUMP)  ; LAB_005bc007
    MOV dword ptr [EAX],EDX             ; 005bbfff
    LEA EAX,[EAX + 0x4]                 ; 005bc001
    DEC ECX                             ; 005bc004
    JNZ 0x005bbffb                      ; 005bc005
        ;   XREF to: 005bbffb (CONDITIONAL_JUMP)  ; LAB_005bbffb
    PUSH ECX                            ; 005bc007
        ;   Label: LAB_005bc007
    SHR ECX,0x2                         ; 005bc008
    JZ 0x005bc047                       ; 005bc00b
        ;   XREF to: 005bc047 (CONDITIONAL_JUMP)  ; LAB_005bc047
    DEC ECX                             ; 005bc00d
    JZ 0x005bc039                       ; 005bc00e
        ;   XREF to: 005bc039 (CONDITIONAL_JUMP)  ; LAB_005bc039
    MOV dword ptr [EAX],EDX             ; 005bc010
        ;   Label: LAB_005bc010
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc012
    DEC ECX                             ; 005bc015
    MOV dword ptr [EAX + 0x8],EDX       ; 005bc016
    MOV dword ptr [EAX + 0xc],EDX       ; 005bc019
    JZ 0x005bc036                       ; 005bc01c
        ;   XREF to: 005bc036 (CONDITIONAL_JUMP)  ; LAB_005bc036
    CMP byte ptr [EAX + 0x20],DL        ; 005bc01e
    MOV dword ptr [EAX + 0x10],EDX      ; 005bc021
    MOV dword ptr [EAX + 0x14],EDX      ; 005bc024
    DEC ECX                             ; 005bc027
    MOV dword ptr [EAX + 0x18],EDX      ; 005bc028
    MOV dword ptr [EAX + 0x1c],EDX      ; 005bc02b
    LEA EAX,[EAX + 0x20]                ; 005bc02e
    JNZ 0x005bc010                      ; 005bc031
        ;   XREF to: 005bc010 (CONDITIONAL_JUMP)  ; LAB_005bc010
    LEA EAX,[EAX + -0x10]               ; 005bc033
    LEA EAX,[EAX + 0x10]                ; 005bc036
        ;   Label: LAB_005bc036
    MOV dword ptr [EAX],EDX             ; 005bc039
        ;   Label: LAB_005bc039
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc03b
    MOV dword ptr [EAX + 0x8],EDX       ; 005bc03e
    MOV dword ptr [EAX + 0xc],EDX       ; 005bc041
    LEA EAX,[EAX + 0x10]                ; 005bc044
    POP ECX                             ; 005bc047
        ;   Label: LAB_005bc047
    AND ECX,0x3                         ; 005bc048
    JZ 0x005bc062                       ; 005bc04b
        ;   XREF to: 005bc062 (CONDITIONAL_JUMP)  ; LAB_005bc062
    MOV dword ptr [EAX],EDX             ; 005bc04d
    LEA EAX,[EAX + 0x4]                 ; 005bc04f
    DEC ECX                             ; 005bc052
    JZ 0x005bc062                       ; 005bc053
        ;   XREF to: 005bc062 (CONDITIONAL_JUMP)  ; LAB_005bc062
    MOV dword ptr [EAX],EDX             ; 005bc055
    LEA EAX,[EAX + 0x4]                 ; 005bc057
    DEC ECX                             ; 005bc05a
    JZ 0x005bc062                       ; 005bc05b
        ;   XREF to: 005bc062 (CONDITIONAL_JUMP)  ; LAB_005bc062
    MOV dword ptr [EAX],EDX             ; 005bc05d
    LEA EAX,[EAX + 0x4]                 ; 005bc05f
    RET                                 ; 005bc062
        ;   Label: LAB_005bc062

