; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_fire_cpp_FUN_00496c0c(float param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c04b0
;
; Called Functions:
;   crt_math.c_acos_FUN_005a4b74
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00496c0c
        ;   Label: core_fire.cpp_FUN_00496c0c
    PUSH EBP                            ; 00496c10
    MOV EBP,ESP                         ; 00496c11
    SUB ESP,0xc                         ; 00496c13
    AND ESP,0xfffffff8                  ; 00496c16
    FLD float ptr [EBP + 0x8]           ; 00496c19
    FST double ptr [ESP]                ; 00496c1c
    FCOMP double ptr [0x005c04b0]       ; 00496c1f | DAT_005c04b0
    FNSTSW AX                           ; 00496c25
    SAHF                                ; 00496c27
    JBE 0x00496c42                      ; 00496c28
        ;   XREF to: 00496c42 (CONDITIONAL_JUMP)  ; LAB_00496c42
    FLD1                                ; 00496c2a
    FCOMP double ptr [ESP]              ; 00496c2c
    FNSTSW AX                           ; 00496c2f
    SAHF                                ; 00496c31
    JA 0x00496c4c                       ; 00496c32
        ;   XREF to: 00496c4c (CONDITIONAL_JUMP)  ; LAB_00496c4c
    XOR EDX,EDX                         ; 00496c34
    MOV dword ptr [ESP + 0x8],EDX       ; 00496c36
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496c3a
        ;   Label: LAB_00496c3a
    MOV ESP,EBP                         ; 00496c3e
    POP EBP                             ; 00496c40
    RET                                 ; 00496c41
    MOV dword ptr [ESP + 0x8],0x40490fdb ; 00496c42
        ;   Label: LAB_00496c42
    JMP 0x00496c3a                      ; 00496c4a
        ;   XREF to: 00496c3a (UNCONDITIONAL_JUMP)  ; LAB_00496c3a
    FLD double ptr [ESP]                ; 00496c4c
        ;   Label: LAB_00496c4c
    CALL crt_math.c_acos_FUN_005a4b74   ; 00496c4f
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP + 0x8]          ; 00496c54
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496c58
    MOV ESP,EBP                         ; 00496c5c
    POP EBP                             ; 00496c5e
    RET                                 ; 00496c5f

