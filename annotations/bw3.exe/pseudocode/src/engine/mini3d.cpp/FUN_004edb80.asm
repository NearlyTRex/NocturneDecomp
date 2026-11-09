; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004edb80(int param_1,int param_2,uint param_3,float param_4,float param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005c7f91
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2bc
;   undefined4 DAT_01d76ce4
;   undefined4 DAT_01d76ce8
;   undefined4 DAT_01d76cec
;   undefined4 DAT_01d76cf0
;   undefined4 DAT_01d76cf4
;   undefined4 DAT_01d7f538
;   undefined4 DAT_02cf60f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edb80
        ;   Label: engine_mini3d.cpp_FUN_004edb80
    SUB ESP,0x8                         ; 004edb81
    MOV EDX,dword ptr [ESP + 0x10]      ; 004edb84
    MOV EAX,dword ptr [ESP + 0x14]      ; 004edb88
    MOV EBX,dword ptr [ESP + 0x18]      ; 004edb8c
    MOV dword ptr [ESP],EDX             ; 004edb90
    MOV dword ptr [ESP + 0x4],EAX       ; 004edb93
    FLD float ptr [0x005c7f91]          ; 004edb97 | DAT_005c7f91
    FILD dword ptr [ESP]                ; 004edb9d
    FMUL ST1                            ; 004edba0
    FILD dword ptr [ESP + 0x4]          ; 004edba2
    FMUL ST2                            ; 004edba6
    MOV dword ptr [ESP + 0x4],EBX       ; 004edba8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004edbac
    FILD dword ptr [ESP + 0x4]          ; 004edbb0
    FMULP ST3                           ; 004edbb4
    MOV dword ptr [0x01d76cf0],ECX      ; 004edbb6 | DAT_01d76cf0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004edbbc
    FSTP float ptr [0x01d76ce8]         ; 004edbc0 | DAT_01d76ce8
    FXCH                                ; 004edbc6
    FSTP float ptr [0x01d76cec]         ; 004edbc8 | DAT_01d76cec
    MOV dword ptr [0x01d76cf4],ECX      ; 004edbce | DAT_01d76cf4
    MOV ECX,dword ptr [0x005fba20]      ; 004edbd4 | DAT_005fba20
    FSTP float ptr [0x01d76ce4]         ; 004edbda | DAT_01d76ce4
    CMP ECX,0x20                        ; 004edbe0
    JNZ 0x004edc3b                      ; 004edbe3
        ;   XREF to: 004edc3b (CONDITIONAL_JUMP)  ; LAB_004edc3b
    MOV CL,byte ptr [0x01c6af74]        ; 004edbe5 | DAT_01c6af74
    SHL EDX,CL                          ; 004edbeb
    MOV CL,byte ptr [0x01c6af80]        ; 004edbed | DAT_01c6af80
    SHL EAX,CL                          ; 004edbf3
    MOV ECX,EAX                         ; 004edbf5
    MOV EAX,EDX                         ; 004edbf7
    OR EAX,ECX                          ; 004edbf9
    MOV CL,byte ptr [0x01c6af8c]        ; 004edbfb | DAT_01c6af8c
    SHL EBX,CL                          ; 004edc01
    MOV ECX,EBX                         ; 004edc03
    OR ECX,EAX                          ; 004edc05
    MOV EBX,dword ptr [0x02cf60f8]      ; 004edc07 | DAT_02cf60f8
        ;   Label: LAB_004edc07
    MOV dword ptr [0x01c6e2bc],ECX      ; 004edc0d | DAT_01c6e2bc
    TEST EBX,EBX                        ; 004edc13
    JZ 0x004edc20                       ; 004edc15
        ;   XREF to: 004edc20 (CONDITIONAL_JUMP)  ; LAB_004edc20
    CMP dword ptr [0x01c6cee8],0x0      ; 004edc17 | DAT_01c6cee8
    JNZ 0x004edc49                      ; 004edc1e
        ;   XREF to: 004edc49 (CONDITIONAL_JUMP)  ; LAB_004edc49
    FLD float ptr [0x01d76cf4]          ; 004edc20 | DAT_01d76cf4
        ;   Label: LAB_004edc20
    FSUB float ptr [0x01d76cf0]         ; 004edc26 | DAT_01d76cf0
    FLD1                                ; 004edc2c
    FDIVRP                              ; 004edc2e
    FSTP float ptr [0x01d7f538]         ; 004edc30 | DAT_01d7f538
    ADD ESP,0x8                         ; 004edc36
    POP EBX                             ; 004edc39
    RET                                 ; 004edc3a
    MOV ECX,EDX                         ; 004edc3b
        ;   Label: LAB_004edc3b
    SHL EAX,0x8                         ; 004edc3d
    SHL ECX,0x10                        ; 004edc40
    OR ECX,EAX                          ; 004edc43
    OR ECX,EBX                          ; 004edc45
    JMP 0x004edc07                      ; 004edc47
        ;   XREF to: 004edc07 (UNCONDITIONAL_JUMP)  ; LAB_004edc07
    PUSH dword ptr [ESP + 0x20]         ; 004edc49
        ;   Label: LAB_004edc49
    PUSH dword ptr [ESP + 0x20]         ; 004edc4d
    PUSH dword ptr [0x01d76cec]         ; 004edc51 | DAT_01d76cec
    PUSH dword ptr [0x01d76ce8]         ; 004edc57 | DAT_01d76ce8
    PUSH dword ptr [0x01d76ce4]         ; 004edc5d | DAT_01d76ce4
    CALL dword ptr [0x02cf60f8]         ; 004edc63 | DAT_02cf60f8
    ADD ESP,0x14                        ; 004edc69
    JMP 0x004edc20                      ; 004edc6c
        ;   XREF to: 004edc20 (UNCONDITIONAL_JUMP)  ; LAB_004edc20

