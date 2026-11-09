; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c7f06(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_math.c_acos_FUN_005c1d04 at 005c1d26
;   crt_math.c_asin_FUN_005c1cd6 at 005c1ce0
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cbedb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c7f06
        ;   Label: crt_unknown.c_FUN_005c7f06
    MOV EBP,ESP                         ; 005c7f07
    FTST                                ; 005c7f09
    SUB ESP,0x10                        ; 005c7f0b
    FSTSW word ptr [EBP + -0x8]         ; 005c7f0e
    WAIT                                ; 005c7f12
    XCHG word ptr [EBP + -0x8],AX       ; 005c7f13
    SAHF                                ; 005c7f17
    JNC 0x005c7f3c                      ; 005c7f18
        ;   XREF to: 005c7f3c (CONDITIONAL_JUMP)  ; LAB_005c7f3c
    FSTP double ptr [EBP + -0x10]       ; 005c7f1a
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c7f1d
    CMP AL,0x3                          ; 005c7f20
    JZ 0x005c7f27                       ; 005c7f22
        ;   XREF to: 005c7f27 (CONDITIONAL_JUMP)  ; LAB_005c7f27
    FSTP double ptr [EBP + -0x10]       ; 005c7f24
    MOV dword ptr [EBP + -0x4],EDX      ; 005c7f27
        ;   Label: LAB_005c7f27
    CALL unkafter_zombie.cpp_FUN_005cbedb ; 005c7f2a
        ;   XREF to: 005cbedb (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cbedb()
    PUSH EDX                            ; 005c7f2f
    PUSH EAX                            ; 005c7f30
    FLD double ptr [ESP]                ; 005c7f31
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c7f34
    WAIT                                ; 005c7f37
    MOV AL,0x1                          ; 005c7f38
    JMP 0x005c7f40                      ; 005c7f3a
        ;   XREF to: 005c7f40 (UNCONDITIONAL_JUMP)  ; LAB_005c7f40
    FSQRT                               ; 005c7f3c
        ;   Label: LAB_005c7f3c
    MOV AL,0x0                          ; 005c7f3e
    MOV ESP,EBP                         ; 005c7f40
        ;   Label: LAB_005c7f40
    POP EBP                             ; 005c7f42
    RET                                 ; 005c7f43

