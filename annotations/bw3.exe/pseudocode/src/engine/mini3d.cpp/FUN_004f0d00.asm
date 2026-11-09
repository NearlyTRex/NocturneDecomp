; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0d00(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f1020 at 004f10e2
;   engine_mini3d.cpp_FUN_004f1190 at 004f1225
;   engine_mini3d.cpp_FUN_004f2a10 at 004f2b03
;
; Referenced Globals:
;   undefined4 DAT_01d76f78
;   undefined4 DAT_01d78f7c
;   undefined4 DAT_01d78f84
;   undefined4 DAT_01d78fbc
;   undefined4 DAT_01d78fc0
;   undefined4 DAT_01d78fc4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0d00
        ;   Label: engine_mini3d.cpp_FUN_004f0d00
    SUB ESP,0x4                         ; 004f0d01
    MOV EBX,dword ptr [0x01d76f78]      ; 004f0d04 | DAT_01d76f78
    MOV EDX,0x1d78f7c                   ; 004f0d0a
    XOR ECX,ECX                         ; 004f0d0f
    TEST EBX,EBX                        ; 004f0d11
    JLE 0x004f0d35                      ; 004f0d13
        ;   XREF to: 004f0d35 (CONDITIONAL_JUMP)  ; LAB_004f0d35
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 004f0d15 | DAT_01d78f84 | DAT_01d78fc4
        ;   Label: LAB_004f0d15
    JZ 0x004f0d40                       ; 004f0d1c
        ;   XREF to: 004f0d40 (CONDITIONAL_JUMP)  ; LAB_004f0d40
    FLD float ptr [EDX]                 ; 004f0d1e | DAT_01d78f7c | DAT_01d78fbc
    FCOMP float ptr [EDX + 0x8]         ; 004f0d20 | DAT_01d78f84 | DAT_01d78fc4
    FNSTSW AX                           ; 004f0d23
    SAHF                                ; 004f0d25
    JBE 0x004f0d56                      ; 004f0d26
        ;   XREF to: 004f0d56 (CONDITIONAL_JUMP)  ; LAB_004f0d56
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f0d28 | DAT_01d78f84 | DAT_01d78fc4
    MOV dword ptr [EDX],EAX             ; 004f0d2b | DAT_01d78f7c | DAT_01d78fbc
        ;   Label: LAB_004f0d2b
    INC ECX                             ; 004f0d2d
        ;   Label: LAB_004f0d2d
    ADD EDX,0x40                        ; 004f0d2e
    CMP ECX,EBX                         ; 004f0d31
    JL 0x004f0d15                       ; 004f0d33
        ;   XREF to: 004f0d15 (CONDITIONAL_JUMP)  ; LAB_004f0d15
    MOV dword ptr [0x01d76f78],EBX      ; 004f0d35 | DAT_01d76f78
        ;   Label: LAB_004f0d35
    ADD ESP,0x4                         ; 004f0d3b
    POP EBX                             ; 004f0d3e
    RET                                 ; 004f0d3f
    MOV dword ptr [EDX],0x0             ; 004f0d40 | DAT_01d78fbc
        ;   Label: LAB_004f0d40
    MOV dword ptr [EDX + 0x4],0x0       ; 004f0d46 | DAT_01d78fc0
    MOV dword ptr [EDX + 0x8],0x3f800000 ; 004f0d4d | DAT_01d78fc4
    JMP 0x004f0d2d                      ; 004f0d54
        ;   XREF to: 004f0d2d (UNCONDITIONAL_JUMP)  ; LAB_004f0d2d
    FLD float ptr [EDX]                 ; 004f0d56 | DAT_01d78fbc
        ;   Label: LAB_004f0d56
    FLD float ptr [EDX + 0x8]           ; 004f0d58 | DAT_01d78fc4
    FCHS                                ; 004f0d5b
    FSTP float ptr [ESP]                ; 004f0d5d
    FCOMP float ptr [ESP]               ; 004f0d60
    FNSTSW AX                           ; 004f0d63
    SAHF                                ; 004f0d65
    JNC 0x004f0d6d                      ; 004f0d66
        ;   XREF to: 004f0d6d (CONDITIONAL_JUMP)  ; LAB_004f0d6d
    MOV EAX,dword ptr [ESP]             ; 004f0d68
    JMP 0x004f0d2b                      ; 004f0d6b
        ;   XREF to: 004f0d2b (UNCONDITIONAL_JUMP)  ; LAB_004f0d2b
    FLD float ptr [EDX + 0x4]           ; 004f0d6d | DAT_01d78fc0
        ;   Label: LAB_004f0d6d
    FCOMP float ptr [EDX + 0x8]         ; 004f0d70 | DAT_01d78fc4
    FNSTSW AX                           ; 004f0d73
    SAHF                                ; 004f0d75
    JBE 0x004f0d80                      ; 004f0d76
        ;   XREF to: 004f0d80 (CONDITIONAL_JUMP)  ; LAB_004f0d80
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f0d78 | DAT_01d78fc4
    MOV dword ptr [EDX + 0x4],EAX       ; 004f0d7b | DAT_01d78fc0
    JMP 0x004f0d2d                      ; 004f0d7e
        ;   XREF to: 004f0d2d (UNCONDITIONAL_JUMP)  ; LAB_004f0d2d
    FLD float ptr [EDX + 0x4]           ; 004f0d80 | DAT_01d78fc0
        ;   Label: LAB_004f0d80
    FCOMP float ptr [ESP]               ; 004f0d83
    FNSTSW AX                           ; 004f0d86
    SAHF                                ; 004f0d88
    JNC 0x004f0d2d                      ; 004f0d89
        ;   XREF to: 004f0d2d (CONDITIONAL_JUMP)  ; LAB_004f0d2d
    MOV EAX,dword ptr [ESP]             ; 004f0d8b
    MOV dword ptr [EDX + 0x4],EAX       ; 004f0d8e | DAT_01d78fc0
    JMP 0x004f0d2d                      ; 004f0d91
        ;   XREF to: 004f0d2d (UNCONDITIONAL_JUMP)  ; LAB_004f0d2d

