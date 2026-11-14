; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_safeAcos_FUN_004abd60(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_005df174
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004abd60
        ;   Label: core_fire.cpp_safeAcos_FUN_004abd60
    MOV EBP,ESP                         ; 004abd61
    SUB ESP,0xc                         ; 004abd63
    AND ESP,0xfffffff8                  ; 004abd66
    FLD float ptr [EBP + 0x8]           ; 004abd69
    FST double ptr [ESP]                ; 004abd6c
    FCOMP double ptr [0x005df174]       ; 004abd6f | DAT_005df174
    FNSTSW AX                           ; 004abd75
    SAHF                                ; 004abd77
    JBE 0x004abd92                      ; 004abd78
        ;   XREF to: 004abd92 (CONDITIONAL_JUMP)  ; LAB_004abd92
    FLD1                                ; 004abd7a
    FCOMP double ptr [ESP]              ; 004abd7c
    FNSTSW AX                           ; 004abd7f
    SAHF                                ; 004abd81
    JA 0x004abd9c                       ; 004abd82
        ;   XREF to: 004abd9c (CONDITIONAL_JUMP)  ; LAB_004abd9c
    XOR EDX,EDX                         ; 004abd84
    MOV dword ptr [ESP + 0x8],EDX       ; 004abd86
    MOV EAX,dword ptr [ESP + 0x8]       ; 004abd8a
        ;   Label: LAB_004abd8a
    MOV ESP,EBP                         ; 004abd8e
    POP EBP                             ; 004abd90
    RET                                 ; 004abd91
    MOV dword ptr [ESP + 0x8],0x40490fdb ; 004abd92
        ;   Label: LAB_004abd92
    JMP 0x004abd8a                      ; 004abd9a
        ;   XREF to: 004abd8a (UNCONDITIONAL_JUMP)  ; LAB_004abd8a
    FLD double ptr [ESP]                ; 004abd9c
        ;   Label: LAB_004abd9c
    CALL crt_math.c_acos_FUN_005c1d04   ; 004abd9f
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x8]          ; 004abda4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004abda8
    MOV ESP,EBP                         ; 004abdac
    POP EBP                             ; 004abdae
    RET                                 ; 004abdaf

