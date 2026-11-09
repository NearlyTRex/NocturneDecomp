; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bfc46(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_math.c_acos_FUN_005b9924 at 005b9946
;   crt_math.c_asin_FUN_005b98f6 at 005b9900
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c3bdb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bfc46
        ;   Label: crt_unknown.c_FUN_005bfc46
    MOV EBP,ESP                         ; 005bfc47
    FTST                                ; 005bfc49
    SUB ESP,0x10                        ; 005bfc4b
    FSTSW word ptr [EBP + -0x8]         ; 005bfc4e
    WAIT                                ; 005bfc52
    XCHG word ptr [EBP + -0x8],AX       ; 005bfc53
    SAHF                                ; 005bfc57
    JNC 0x005bfc7c                      ; 005bfc58
        ;   XREF to: 005bfc7c (CONDITIONAL_JUMP)  ; LAB_005bfc7c
    FSTP double ptr [EBP + -0x10]       ; 005bfc5a
    MOV EAX,dword ptr [EBP + -0x8]      ; 005bfc5d
    CMP AL,0x3                          ; 005bfc60
    JZ 0x005bfc67                       ; 005bfc62
        ;   XREF to: 005bfc67 (CONDITIONAL_JUMP)  ; LAB_005bfc67
    FSTP double ptr [EBP + -0x10]       ; 005bfc64
    MOV dword ptr [EBP + -0x4],EDX      ; 005bfc67
        ;   Label: LAB_005bfc67
    CALL unkafter_morph.cpp_FUN_005c3bdb ; 005bfc6a
        ;   XREF to: 005c3bdb (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3bdb()
    PUSH EDX                            ; 005bfc6f
    PUSH EAX                            ; 005bfc70
    FLD double ptr [ESP]                ; 005bfc71
    MOV EDX,dword ptr [EBP + -0x4]      ; 005bfc74
    WAIT                                ; 005bfc77
    MOV AL,0x1                          ; 005bfc78
    JMP 0x005bfc80                      ; 005bfc7a
        ;   XREF to: 005bfc80 (UNCONDITIONAL_JUMP)  ; LAB_005bfc80
    FSQRT                               ; 005bfc7c
        ;   Label: LAB_005bfc7c
    MOV AL,0x0                          ; 005bfc7e
    MOV ESP,EBP                         ; 005bfc80
        ;   Label: LAB_005bfc80
    POP EBP                             ; 005bfc82
    RET                                 ; 005bfc83

