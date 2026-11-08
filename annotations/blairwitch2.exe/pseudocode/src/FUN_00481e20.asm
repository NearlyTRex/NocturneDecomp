; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00460e10
;   FUN_00460e30
;   FUN_00460e50
;   FUN_00460ed0
;   FUN_00460f50
;   FUN_00461070
;   FUN_004610a0
;   FUN_00461210
;   FUN_00480e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481e20
        ;   Label: FUN_00481e20
    SUB ESP,0x824                       ; 00481e21
    MOV EBX,dword ptr [ESP + 0x82c]     ; 00481e27
    LEA EAX,[ESP + 0x420]               ; 00481e2e
    PUSH EAX                            ; 00481e35
    LEA EAX,[ESP + 0x524]               ; 00481e36
    PUSH EAX                            ; 00481e3d
    LEA EAX,[ESP + 0x728]               ; 00481e3e
    PUSH EAX                            ; 00481e45
    LEA EAX,[ESP + 0x82c]               ; 00481e46
    PUSH EAX                            ; 00481e4d
    MOV EDX,dword ptr [ESP + 0x840]     ; 00481e4e
    PUSH EDX                            ; 00481e55
    CALL FUN_00461070                   ; 00481e56
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00481e5b
    LEA EAX,[ESP + 0x420]               ; 00481e5e
    PUSH EAX                            ; 00481e65
    LEA EAX,[ESP + 0x524]               ; 00481e66
    PUSH EAX                            ; 00481e6d
    LEA EAX,[ESP + 0x728]               ; 00481e6e
    PUSH EAX                            ; 00481e75
    PUSH 0x0                            ; 00481e76
    LEA EAX,[ESP + 0x630]               ; 00481e78
    PUSH EAX                            ; 00481e7f
    CALL FUN_004610a0                   ; 00481e80
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 00481e85
    LEA EAX,[ESP + 0x420]               ; 00481e88
    PUSH EAX                            ; 00481e8f
    LEA EAX,[ESP + 0x524]               ; 00481e90
    PUSH EAX                            ; 00481e97
    PUSH 0x0                            ; 00481e98
    PUSH 0x0                            ; 00481e9a
    MOV ECX,dword ptr [ESP + 0x844]     ; 00481e9c
    PUSH ECX                            ; 00481ea3
    CALL FUN_00461070                   ; 00481ea4
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00481ea9
    LEA EAX,[ESP + 0x420]               ; 00481eac
    PUSH EAX                            ; 00481eb3
    LEA EAX,[ESP + 0x524]               ; 00481eb4
    PUSH EAX                            ; 00481ebb
    LEA EAX,[ESP + 0x628]               ; 00481ebc
    PUSH EAX                            ; 00481ec3
    LEA EAX,[ESP + 0x82c]               ; 00481ec4
    PUSH EAX                            ; 00481ecb
    LEA EAX,[ESP + 0x32c]               ; 00481ecc
    PUSH EAX                            ; 00481ed3
    CALL FUN_004610a0                   ; 00481ed4
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 00481ed9
    MOV EAX,ESP                         ; 00481edc
    PUSH EAX                            ; 00481ede
    CALL FUN_00460e10                   ; 00481edf
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 00481ee4
    LEA EAX,[ESP + 0x31c]               ; 00481ee7
    PUSH EAX                            ; 00481eee
    LEA EAX,[ESP + 0x4]                 ; 00481eef
    PUSH EAX                            ; 00481ef3
    CALL FUN_00460e50                   ; 00481ef4
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e50()
    ADD ESP,0x8                         ; 00481ef9
    CMP byte ptr [ESP],0x0              ; 00481efc
    JZ 0x00481f1d                       ; 00481f00
        ;   XREF to: 00481f1d (CONDITIONAL_JUMP)  ; LAB_00481f1d
    TEST byte ptr [ESP + 0x100],0x4     ; 00481f02
        ;   Label: LAB_00481f02
    JZ 0x00481f3f                       ; 00481f0a
        ;   XREF to: 00481f3f (CONDITIONAL_JUMP)  ; LAB_00481f3f
    MOV EAX,ESP                         ; 00481f0c
        ;   Label: LAB_00481f0c
    PUSH EAX                            ; 00481f0e
    CALL FUN_00460ed0                   ; 00481f0f
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460ed0()
    ADD ESP,0x4                         ; 00481f14
    CMP byte ptr [ESP],0x0              ; 00481f17
    JNZ 0x00481f02                      ; 00481f1b
        ;   XREF to: 00481f02 (CONDITIONAL_JUMP)  ; LAB_00481f02
    MOV EAX,ESP                         ; 00481f1d
        ;   Label: LAB_00481f1d
    PUSH EAX                            ; 00481f1f
    CALL FUN_00460f50                   ; 00481f20
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f50()
    ADD ESP,0x4                         ; 00481f25
    PUSH 0x0                            ; 00481f28
    LEA EAX,[ESP + 0x4]                 ; 00481f2a
    PUSH EAX                            ; 00481f2e
    CALL FUN_00460e30                   ; 00481f2f
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e30()
    ADD ESP,0x8                         ; 00481f34
    ADD ESP,0x824                       ; 00481f37
    POP EBX                             ; 00481f3d
    RET                                 ; 00481f3e
    LEA EAX,[ESP + 0x420]               ; 00481f3f
        ;   Label: LAB_00481f3f
    PUSH EAX                            ; 00481f46
    LEA EAX,[ESP + 0x524]               ; 00481f47
    PUSH EAX                            ; 00481f4e
    PUSH 0x0                            ; 00481f4f
    PUSH 0x0                            ; 00481f51
    LEA EAX,[ESP + 0x10]                ; 00481f53
    PUSH EAX                            ; 00481f57
    CALL FUN_00461070                   ; 00481f58
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00481f5d
    LEA EAX,[ESP + 0x420]               ; 00481f60
    PUSH EAX                            ; 00481f67
    LEA EAX,[ESP + 0x524]               ; 00481f68
    PUSH EAX                            ; 00481f6f
    LEA EAX,[ESP + 0x628]               ; 00481f70
    PUSH EAX                            ; 00481f77
    LEA EAX,[ESP + 0x82c]               ; 00481f78
    PUSH EAX                            ; 00481f7f
    LEA EAX,[ESP + 0x124]               ; 00481f80
    PUSH EAX                            ; 00481f87
    CALL FUN_004610a0                   ; 00481f88
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 00481f8d
    LEA EAX,[ESP + 0x114]               ; 00481f90
    PUSH EAX                            ; 00481f97
    LEA EAX,[ESP + 0x21c]               ; 00481f98
    PUSH EAX                            ; 00481f9f
    CALL FUN_00461210                   ; 00481fa0
        ;   XREF to: 00461210 (UNCONDITIONAL_CALL)  ; undefined FUN_00461210()
    ADD ESP,0x8                         ; 00481fa5
    LEA EAX,[ESP + 0x218]               ; 00481fa8
    PUSH EAX                            ; 00481faf
    PUSH EBX                            ; 00481fb0
    CALL FUN_00480e70                   ; 00481fb1
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 00481fb6
    JMP 0x00481f0c                      ; 00481fb9
        ;   XREF to: 00481f0c (UNCONDITIONAL_JUMP)  ; LAB_00481f0c

