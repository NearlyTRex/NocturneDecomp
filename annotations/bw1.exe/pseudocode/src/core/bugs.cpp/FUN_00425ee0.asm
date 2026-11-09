; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00425ee0(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_bugs.cpp_FUN_00426870 at 00426945
;
; Referenced Globals:
;   undefined4 DAT_005fd228
;
; Called Functions:
;   core_bugs.cpp_maxFloat_FUN_00428150
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425ee0
        ;   Label: core_bugs.cpp_FUN_00425ee0
    PUSH ESI                            ; 00425ee1
    SUB ESP,0x14                        ; 00425ee2
    MOV ESI,dword ptr [ESP + 0x20]      ; 00425ee5
    FLD float ptr [ESP + 0x24]          ; 00425ee9
    FSUB float ptr [ESI + 0x19d98]      ; 00425eed
    FLD1                                ; 00425ef3
    FDIV float ptr [0x005fd228]         ; 00425ef5 | DAT_005fd228
    FLD float ptr [ESP + 0x28]          ; 00425efb
    FSUB float ptr [ESI + 0x19d9c]      ; 00425eff
    FXCH ST2                            ; 00425f05
    FMUL ST1                            ; 00425f07
    FXCH ST2                            ; 00425f09
    FMULP                               ; 00425f0b
    FXCH                                ; 00425f0d
    FSTP float ptr [ESP + 0x24]         ; 00425f0f
    FST float ptr [ESP + 0x28]          ; 00425f13
    FLD float ptr [ESP + 0x24]          ; 00425f17
    CALL crt_math.c_round_FUN_005c03a0  ; 00425f1b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00425f20
    CALL crt_math.c_round_FUN_005c03a0  ; 00425f22
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00425f27
    FISTP dword ptr [ESP + 0xc]         ; 00425f29
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425f2d
    FISTP dword ptr [ESP + 0x8]         ; 00425f31
    TEST EDX,EDX                        ; 00425f35
    JL 0x00425f9b                       ; 00425f37
        ;   XREF to: 00425f9b (CONDITIONAL_JUMP)  ; LAB_00425f9b
    CMP EDX,0xb                         ; 00425f39
    JGE 0x00425fa3                      ; 00425f3c
        ;   XREF to: 00425fa3 (CONDITIONAL_JUMP)  ; LAB_00425fa3
    LEA EBX,[EDX + 0x1]                 ; 00425f3e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425f41
        ;   Label: LAB_00425f41
    LEA EAX,[EDX*0x4 + 0x0]             ; 00425f45
    SUB EAX,EDX                         ; 00425f4c
    MOV EDX,EAX                         ; 00425f4e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00425f50
    SUB EAX,EBX                         ; 00425f57
    SHL EDX,0x4                         ; 00425f59
    SHL EAX,0x4                         ; 00425f5c
    LEA EBX,[ESI + EDX*0x1]             ; 00425f5f
    ADD ESI,EAX                         ; 00425f62
    MOV EAX,dword ptr [ESP + 0x8]       ; 00425f64
    TEST EAX,EAX                        ; 00425f68
    JL 0x00425fae                       ; 00425f6a
        ;   XREF to: 00425fae (CONDITIONAL_JUMP)  ; LAB_00425fae
    CMP EAX,0xb                         ; 00425f6c
    JL 0x00425fbc                       ; 00425f6f
        ;   XREF to: 00425fbc (CONDITIONAL_JUMP)  ; LAB_00425fbc
    PUSH dword ptr [ESI + 0x12c90]      ; 00425f71
    PUSH dword ptr [EBX + 0x12c90]      ; 00425f77
    CALL core_bugs.cpp_maxFloat_FUN_00428150 ; 00425f7d
        ;   XREF to: 00428150 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_maxFloat_FUN_00428150()
        ;   Label: LAB_00425f7d
    MOV dword ptr [ESP + 0x18],EAX      ; 00425f82
    FLD float ptr [ESP + 0x18]          ; 00425f86
    ADD ESP,0x8                         ; 00425f8a
    FSTP float ptr [ESP + 0x4]          ; 00425f8d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00425f91
    ADD ESP,0x14                        ; 00425f95
    POP ESI                             ; 00425f98
    POP EBX                             ; 00425f99
    RET                                 ; 00425f9a
    XOR EBX,EBX                         ; 00425f9b
        ;   Label: LAB_00425f9b
    MOV dword ptr [ESP + 0xc],EBX       ; 00425f9d
    JMP 0x00425f41                      ; 00425fa1
        ;   XREF to: 00425f41 (UNCONDITIONAL_JUMP)  ; LAB_00425f41
    MOV EBX,0xb                         ; 00425fa3
        ;   Label: LAB_00425fa3
    MOV dword ptr [ESP + 0xc],EBX       ; 00425fa8
    JMP 0x00425f41                      ; 00425fac
        ;   XREF to: 00425f41 (UNCONDITIONAL_JUMP)  ; LAB_00425f41
    PUSH dword ptr [ESI + 0x12c64]      ; 00425fae
        ;   Label: LAB_00425fae
    PUSH dword ptr [EBX + 0x12c64]      ; 00425fb4
    JMP 0x00425f7d                      ; 00425fba
        ;   XREF to: 00425f7d (UNCONDITIONAL_JUMP)  ; LAB_00425f7d
    PUSH EDI                            ; 00425fbc
        ;   Label: LAB_00425fbc
    MOV EDI,EAX                         ; 00425fbd
    SHL EAX,0x2                         ; 00425fbf
    LEA EDX,[ESI + EAX*0x1]             ; 00425fc2
    PUSH dword ptr [EDX + 0x12c64]      ; 00425fc5
    PUSH dword ptr [EBX + EAX*0x1 + 0x12c64] ; 00425fcb
    CALL core_bugs.cpp_maxFloat_FUN_00428150 ; 00425fd2
        ;   XREF to: 00428150 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_maxFloat_FUN_00428150()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425fd7
    FLD float ptr [ESP + 0x1c]          ; 00425fdb
    ADD ESP,0x8                         ; 00425fdf
    PUSH dword ptr [ESI + EDI*0x4 + 0x12c68] ; 00425fe2
    PUSH dword ptr [EBX + EDI*0x4 + 0x12c68] ; 00425fe9
    FSTP float ptr [ESP + 0xc]          ; 00425ff0
    CALL core_bugs.cpp_maxFloat_FUN_00428150 ; 00425ff4
        ;   XREF to: 00428150 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_maxFloat_FUN_00428150()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425ff9
    FLD float ptr [ESP + 0x1c]          ; 00425ffd
    ADD ESP,0x8                         ; 00426001
    SUB ESP,0x4                         ; 00426004
    FSTP float ptr [ESP]                ; 00426007
    PUSH dword ptr [ESP + 0x8]          ; 0042600a
    CALL core_bugs.cpp_maxFloat_FUN_00428150 ; 0042600e
        ;   XREF to: 00428150 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_maxFloat_FUN_00428150()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00426013
    FLD float ptr [ESP + 0x1c]          ; 00426017
    ADD ESP,0x8                         ; 0042601b
    FSTP float ptr [ESP + 0x8]          ; 0042601e
    POP EDI                             ; 00426022
    MOV EAX,dword ptr [ESP + 0x4]       ; 00426023
    ADD ESP,0x14                        ; 00426027
    POP ESI                             ; 0042602a
    POP EBX                             ; 0042602b
    RET                                 ; 0042602c

