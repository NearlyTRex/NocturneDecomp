; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ef38e(float *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_02cf60a8
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004edcc0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004ef38e
        ;   Label: engine_mini3d.cpp_FUN_004ef38e
    PUSH EBX                            ; 004ef390
    SUB ESP,0x10                        ; 004ef391
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ef394
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004ef398
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    FLD float ptr [EBX + 0x4]           ; 004ef39d
    FMUL ST0                            ; 004ef3a0
    FLD float ptr [EBX]                 ; 004ef3a2
    FMUL ST0                            ; 004ef3a4
    FADDP                               ; 004ef3a6
    FLD float ptr [EBX + 0x8]           ; 004ef3a8
    FMUL ST0                            ; 004ef3ab
    FADDP                               ; 004ef3ad
    FSQRT                               ; 004ef3af
    FDIVR float ptr [ESP + 0x1c]        ; 004ef3b1
    MOV EDX,dword ptr [0x02cf60a8]      ; 004ef3b5 | DAT_02cf60a8
    FSTP float ptr [ESP + 0xc]          ; 004ef3bb
    TEST EDX,EDX                        ; 004ef3bf
    JZ 0x004ef3cc                       ; 004ef3c1
        ;   XREF to: 004ef3cc (CONDITIONAL_JUMP)  ; LAB_004ef3cc
    CMP dword ptr [0x01c6cee8],0x0      ; 004ef3c3 | DAT_01c6cee8
    JNZ 0x004ef3ef                      ; 004ef3ca
        ;   XREF to: 004ef3ef (CONDITIONAL_JUMP)  ; LAB_004ef3ef
    FLD float ptr [ESP + 0xc]           ; 004ef3cc
        ;   Label: LAB_004ef3cc
    FLD float ptr [EBX]                 ; 004ef3d0
    FMUL ST1                            ; 004ef3d2
    MOV EAX,[0x01d76cfc]                ; 004ef3d4 | DAT_01d76cfc
    FSTP float ptr [EAX + 0x30]         ; 004ef3d9
    FLD float ptr [EBX + 0x4]           ; 004ef3dc
    FMUL ST1                            ; 004ef3df
    FSTP float ptr [EAX + 0x34]         ; 004ef3e1
    FMUL float ptr [EBX + 0x8]          ; 004ef3e4
    FSTP float ptr [EAX + 0x38]         ; 004ef3e7
    ADD ESP,0x10                        ; 004ef3ea
    POP EBX                             ; 004ef3ed
    RET                                 ; 004ef3ee
    FLD float ptr [ESP + 0xc]           ; 004ef3ef
        ;   Label: LAB_004ef3ef
    FLD float ptr [EBX]                 ; 004ef3f3
    FMUL ST1                            ; 004ef3f5
    FSTP float ptr [ESP]                ; 004ef3f7
    FLD float ptr [EBX + 0x4]           ; 004ef3fa
    FMUL ST1                            ; 004ef3fd
    FSTP float ptr [ESP + 0x4]          ; 004ef3ff
    FMUL float ptr [EBX + 0x8]          ; 004ef403
    MOV EAX,ESP                         ; 004ef406
    PUSH dword ptr [ESP + 0x1c]         ; 004ef408
    PUSH EAX                            ; 004ef40c
    FSTP float ptr [ESP + 0x10]         ; 004ef40d
    CALL dword ptr [0x02cf60a8]         ; 004ef411 | DAT_02cf60a8
    ADD ESP,0x8                         ; 004ef417
    JMP 0x004ef3cc                      ; 004ef41a
        ;   XREF to: 004ef3cc (UNCONDITIONAL_JUMP)  ; LAB_004ef3cc

