; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484e00(int param_1)
;
;
; XREF[9]:
;   FUN_004101f0 at 0041037e
;   FUN_00413970 at 00413b0f
;   FUN_0041d000 at 0041d0ad
;   FUN_0047cfe0 at 0047d18e
;   FUN_004f90d0 at 004f94ff
;   FUN_00522dd0 at 00522eaf
;   FUN_0055fc60 at 0055fd60
;   FUN_005611a0 at 0056128e
;   FUN_005a9440 at 005a957a
;
; Referenced Globals:
;   undefined4 DAT_01bc1280
;   undefined4 DAT_01bc1288
;   undefined4 DAT_01bc128c
;
; Called Functions:
;   FUN_00482390
;   FUN_00483d80
;   FUN_00484f00
;   FUN_005bfc68
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00484e00
        ;   Label: FUN_00484e00
    MOV EBP,dword ptr [ESP + 0x8]       ; 00484e01
    CMP dword ptr [EBP + 0x4],0x0       ; 00484e05
    JNZ 0x00484ee3                      ; 00484e09
        ;   XREF to: 00484ee3 (CONDITIONAL_JUMP)  ; LAB_00484ee3
    PUSH EDI                            ; 00484e0f
    PUSH ESI                            ; 00484e10
    PUSH EBX                            ; 00484e11
    MOV ECX,dword ptr [0x01bc1280]      ; 00484e12 | DAT_01bc1280
    TEST ECX,ECX                        ; 00484e18
    JLE 0x00484e40                      ; 00484e1a
        ;   XREF to: 00484e40 (CONDITIONAL_JUMP)  ; LAB_00484e40
    MOV EBX,0x1bc1288                   ; 00484e1c
    LEA ESI,[ECX*0x4 + 0x0]             ; 00484e21
    XOR EAX,EAX                         ; 00484e28
    MOV dword ptr [EAX + 0x1be8388],EBX ; 00484e2a
        ;   Label: LAB_00484e2a
    ADD EAX,0x4                         ; 00484e30
    ADD EBX,0x20                        ; 00484e33
    CMP EAX,ESI                         ; 00484e36
    JL 0x00484e2a                       ; 00484e38
        ;   XREF to: 00484e2a (CONDITIONAL_JUMP)  ; LAB_00484e2a
    LEA EAX,[EAX]                       ; 00484e3a
    CMP dword ptr [EBP + 0x1c],0x1      ; 00484e40
        ;   Label: LAB_00484e40
    JZ 0x00484ee5                       ; 00484e44
        ;   XREF to: 00484ee5 (CONDITIONAL_JUMP)  ; LAB_00484ee5
    PUSH 0x484da0                       ; 00484e4a | LAB_00484da0
    PUSH 0x4                            ; 00484e4f
    MOV ESI,dword ptr [0x01bc1280]      ; 00484e51 | DAT_01bc1280
    PUSH ESI                            ; 00484e57
    PUSH 0x1be8388                      ; 00484e58
        ;   Label: LAB_00484e58
    CALL FUN_005bfc68                   ; 00484e5d
        ;   XREF to: 005bfc68 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc68()
    ADD ESP,0x10                        ; 00484e62
    MOV EAX,dword ptr [EBP + 0x10]      ; 00484e65
    MOV dword ptr [EBP + 0x1c],0x0      ; 00484e68
    TEST EAX,EAX                        ; 00484e6f
    JZ 0x00484e7e                       ; 00484e71
        ;   XREF to: 00484e7e (CONDITIONAL_JUMP)  ; LAB_00484e7e
    PUSH 0x1                            ; 00484e73
    PUSH EBP                            ; 00484e75
    CALL FUN_00483d80                   ; 00484e76
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 00484e7b
    MOV EDI,0xffffffff                  ; 00484e7e
        ;   Label: LAB_00484e7e
    MOV EDX,dword ptr [0x01bc1280]      ; 00484e83 | DAT_01bc1280
    XOR ESI,ESI                         ; 00484e89
    TEST EDX,EDX                        ; 00484e8b
    JLE 0x00484ed5                      ; 00484e8d
        ;   XREF to: 00484ed5 (CONDITIONAL_JUMP)  ; LAB_00484ed5
    XOR EBX,EBX                         ; 00484e8f
    MOV EAX,dword ptr [EBX + 0x1be8388] ; 00484e91
        ;   Label: LAB_00484e91
    MOV EDX,dword ptr [EAX]             ; 00484e97 | DAT_01bc1288
    CMP EDI,EDX                         ; 00484e99
    JZ 0x00484eb1                       ; 00484e9b
        ;   XREF to: 00484eb1 (CONDITIONAL_JUMP)  ; LAB_00484eb1
    MOV EDI,EDX                         ; 00484e9d
    IMUL EAX,EDX,0x48                   ; 00484e9f
    ADD EAX,0x1bed1a8                   ; 00484ea2
    PUSH EAX                            ; 00484ea7
    PUSH EBP                            ; 00484ea8
    CALL FUN_00484f00                   ; 00484ea9
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 00484eae
    MOV EAX,dword ptr [EBX + 0x1be8388] ; 00484eb1
        ;   Label: LAB_00484eb1
    MOV ECX,dword ptr [EAX + 0x4]       ; 00484eb7 | DAT_01bc128c
    PUSH ECX                            ; 00484eba
    ADD EAX,0xc                         ; 00484ebb
    PUSH EAX                            ; 00484ebe
    PUSH EBP                            ; 00484ebf
    ADD EBX,0x4                         ; 00484ec0
    INC ESI                             ; 00484ec3
    CALL FUN_00482390                   ; 00484ec4
        ;   XREF to: 00482390 (UNCONDITIONAL_CALL)  ; undefined FUN_00482390()
    MOV EAX,[0x01bc1280]                ; 00484ec9 | DAT_01bc1280
    ADD ESP,0xc                         ; 00484ece
    CMP ESI,EAX                         ; 00484ed1
    JL 0x00484e91                       ; 00484ed3
        ;   XREF to: 00484e91 (CONDITIONAL_JUMP)  ; LAB_00484e91
    PUSH 0x0                            ; 00484ed5
        ;   Label: LAB_00484ed5
    PUSH EBP                            ; 00484ed7
    CALL FUN_00483d80                   ; 00484ed8
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 00484edd
    POP EBX                             ; 00484ee0
    POP ESI                             ; 00484ee1
    POP EDI                             ; 00484ee2
    POP EBP                             ; 00484ee3
        ;   Label: LAB_00484ee3
    RET                                 ; 00484ee4
    PUSH 0x484dd0                       ; 00484ee5 | LAB_00484dd0
        ;   Label: LAB_00484ee5
    PUSH 0x4                            ; 00484eea
    MOV EDI,dword ptr [0x01bc1280]      ; 00484eec | DAT_01bc1280
    PUSH EDI                            ; 00484ef2
    JMP 0x00484e58                      ; 00484ef3
        ;   XREF to: 00484e58 (UNCONDITIONAL_JUMP)  ; LAB_00484e58

