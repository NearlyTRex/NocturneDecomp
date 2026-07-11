; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_00568f70(uint param_1,LPVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   FUN_005636d0 at 005637e9
;   FUN_00564670 at 005646ff
;
; Referenced Globals:
;   void* PTR_ReadFile_0057557c = 00175f40
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d7c
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   FUN_005671e4
;   FUN_00568e80
;   FUN_0056c73c
;   ReadFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568f70
        ;   Label: FUN_00568f70
    PUSH ESI                            ; 00568f71
    PUSH EDI                            ; 00568f72
    PUSH EBP                            ; 00568f73
    SUB ESP,0x4                         ; 00568f74
    MOV EBX,dword ptr [ESP + 0x18]      ; 00568f77
    TEST EBX,EBX                        ; 00568f7b
    JL 0x00568f87                       ; 00568f7d
        ;   XREF to: 00568f87 (CONDITIONAL_JUMP)  ; LAB_00568f87
    CMP EBX,dword ptr [0x005c1f90]      ; 00568f7f | DAT_005c1f90
    JBE 0x00568f9b                      ; 00568f85
        ;   XREF to: 00568f9b (CONDITIONAL_JUMP)  ; LAB_00568f9b
    PUSH 0x4                            ; 00568f87
        ;   Label: LAB_00568f87
    CALL FUN_00568e80                   ; 00568f89
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 00568f8e
    ADD ESP,0x4                         ; 00568f93
    JMP 0x00569031                      ; 00568f96
        ;   XREF to: 00569031 (UNCONDITIONAL_JUMP)  ; LAB_00569031
    PUSH EBX                            ; 00568f9b
        ;   Label: LAB_00568f9b
    CALL dword ptr [0x005c1ac0]         ; 00568f9c | PTR_FUN_005c1ac0
    MOV ECX,dword ptr [0x005c1d7c]      ; 00568fa2 | DAT_005c1d7c
    ADD ESP,0x4                         ; 00568fa8
    TEST ECX,ECX                        ; 00568fab
    JZ 0x00568fe7                       ; 00568fad
        ;   XREF to: 00568fe7 (CONDITIONAL_JUMP)  ; LAB_00568fe7
    PUSH EBX                            ; 00568faf
    CALL dword ptr [0x005c1d54]         ; 00568fb0 | DAT_005c1d54
    ADD ESP,0x4                         ; 00568fb6
    TEST EAX,EAX                        ; 00568fb9
    JZ 0x00568fe7                       ; 00568fbb
        ;   XREF to: 00568fe7 (CONDITIONAL_JUMP)  ; LAB_00568fe7
    MOV EDX,dword ptr [ESP + 0x20]      ; 00568fbd
    PUSH EDX                            ; 00568fc1
    MOV ECX,dword ptr [ESP + 0x20]      ; 00568fc2
    PUSH ECX                            ; 00568fc6
    PUSH EAX                            ; 00568fc7
    CALL dword ptr [0x005c1d7c]         ; 00568fc8 | DAT_005c1d7c
    ADD ESP,0xc                         ; 00568fce
    PUSH EBX                            ; 00568fd1
    MOV ESI,EAX                         ; 00568fd2
    CALL dword ptr [0x005c1ac4]         ; 00568fd4 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00568fda
    MOV EAX,ESI                         ; 00568fdd
    ADD ESP,0x4                         ; 00568fdf
    POP EBP                             ; 00568fe2
    POP EDI                             ; 00568fe3
    POP ESI                             ; 00568fe4
    POP EBX                             ; 00568fe5
    RET                                 ; 00568fe6
    PUSH 0x0                            ; 00568fe7
        ;   Label: LAB_00568fe7
    LEA EAX,[ESP + 0x4]                 ; 00568fe9
    PUSH EAX                            ; 00568fed
    MOV EDI,dword ptr [ESP + 0x28]      ; 00568fee
    PUSH EDI                            ; 00568ff2
    MOV EBP,dword ptr [ESP + 0x28]      ; 00568ff3
    MOV ESI,dword ptr [0x005c1f54]      ; 00568ff7 | DAT_005c1f54
    PUSH EBP                            ; 00568ffd
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 00568ffe
    PUSH ESI                            ; 00569001
    CALL dword ptr CS:[0x57557c]        ; 00569002 | PTR_ReadFile_0057557c
    TEST EAX,EAX                        ; 00569009
    JNZ 0x00569024                      ; 0056900b
        ;   XREF to: 00569024 (CONDITIONAL_JUMP)  ; LAB_00569024
    PUSH EBX                            ; 0056900d
    CALL dword ptr [0x005c1ac4]         ; 0056900e | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00569014
    CALL FUN_0056c73c                   ; 00569017
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    ADD ESP,0x4                         ; 0056901c
    POP EBP                             ; 0056901f
    POP EDI                             ; 00569020
    POP ESI                             ; 00569021
    POP EBX                             ; 00569022
    RET                                 ; 00569023
    PUSH EBX                            ; 00569024
        ;   Label: LAB_00569024
    CALL dword ptr [0x005c1ac4]         ; 00569025 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056902b
    MOV EAX,dword ptr [ESP]             ; 0056902e
    ADD ESP,0x4                         ; 00569031
        ;   Label: LAB_00569031
    POP EBP                             ; 00569034
    POP EDI                             ; 00569035
    POP ESI                             ; 00569036
    POP EBX                             ; 00569037
    RET                                 ; 00569038

