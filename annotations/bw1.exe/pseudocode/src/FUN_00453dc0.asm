; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00453dc0(int param_1,int param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00451d90 at 00451df6
;
; Referenced Globals:
;   undefined4 DAT_01342360
;   undefined4 DAT_01354f60
;
; Called Functions:
;   FUN_0048957a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453dc0
        ;   Label: FUN_00453dc0
    PUSH ESI                            ; 00453dc1
    PUSH EDI                            ; 00453dc2
    PUSH EBP                            ; 00453dc3
    SUB ESP,0x4                         ; 00453dc4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00453dc7
    LEA ESI,[EBX + 0x1]                 ; 00453dcb
    CMP ESI,0x10                        ; 00453dce
    JL 0x00453dd5                       ; 00453dd1
        ;   XREF to: 00453dd5 (CONDITIONAL_JUMP)  ; LAB_00453dd5
    XOR ESI,ESI                         ; 00453dd3
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453dd5
        ;   Label: LAB_00453dd5
    CMP EDX,0xffff                      ; 00453dd9
    JLE 0x00453eb8                      ; 00453ddf
        ;   XREF to: 00453eb8 (CONDITIONAL_JUMP)  ; LAB_00453eb8
    MOV dword ptr [ESP + 0x20],0xffff   ; 00453de5
    MOV EAX,0xffff                      ; 00453ded
        ;   Label: LAB_00453ded
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453df2
    SUB EAX,EDX                         ; 00453df6
    MOV dword ptr [ESP],EAX             ; 00453df8
    MOV EAX,EDX                         ; 00453dfb
    MOV ECX,EDX                         ; 00453dfd
    SHL EAX,0x10                        ; 00453dff
    OR ECX,EAX                          ; 00453e02
    MOV EAX,dword ptr [ESP]             ; 00453e04
    MOV EDI,dword ptr [ESP]             ; 00453e07
    SHL EAX,0x10                        ; 00453e0a
    OR EDI,EAX                          ; 00453e0d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453e0f
    MOV dword ptr [ESP + 0x20],ECX      ; 00453e13
    MOV dword ptr [ESP],EDI             ; 00453e17
    MOV EBP,dword ptr [EAX + 0x154]     ; 00453e1a
    XOR EDI,EDI                         ; 00453e20
    TEST EBP,EBP                        ; 00453e22
    JLE 0x00453eb0                      ; 00453e24
        ;   XREF to: 00453eb0 (CONDITIONAL_JUMP)  ; LAB_00453eb0
    LEA EAX,[EBX*0x4 + 0x0]             ; 00453e2a
    ADD EAX,EBX                         ; 00453e31
    SHL EAX,0xa                         ; 00453e33
    MOV EBX,EAX                         ; 00453e36
    SHL EAX,0x4                         ; 00453e38
    MOV EBP,0x1354e20                   ; 00453e3b
    SUB EAX,EBX                         ; 00453e40
    ADD EBP,EAX                         ; 00453e42
    LEA EAX,[ESI*0x4 + 0x0]             ; 00453e44
    ADD EAX,ESI                         ; 00453e4b
    SHL EAX,0xa                         ; 00453e4d
    MOV EBX,EAX                         ; 00453e50
    SHL EAX,0x4                         ; 00453e52
    SUB EAX,EBX                         ; 00453e55
    MOV EBX,0x1354e20                   ; 00453e57
    MOV ESI,0x1342220                   ; 00453e5c
    ADD EBX,EAX                         ; 00453e61
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453e63
        ;   Label: LAB_00453e63
    MOV EAX,dword ptr [EAX + 0x150]     ; 00453e67
    PUSH EAX                            ; 00453e6d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00453e6e
    PUSH EAX                            ; 00453e72
    MOV EDX,dword ptr [ESP + 0x28]      ; 00453e73
    PUSH EDX                            ; 00453e77
    PUSH EBX                            ; 00453e78 | DAT_01354f60
    PUSH EBP                            ; 00453e79
    PUSH ESI                            ; 00453e7a | DAT_01342360
    CALL FUN_0048957a                   ; 00453e7b
        ;   XREF to: 0048957a (UNCONDITIONAL_CALL)  ; undefined FUN_0048957a()
    ADD ESP,0x18                        ; 00453e80
    INC EDI                             ; 00453e83
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453e84
    ADD EBX,0x140                       ; 00453e88
    ADD EBP,0x140                       ; 00453e8e
    MOV ECX,dword ptr [EAX + 0x154]     ; 00453e94
    ADD ESI,0x140                       ; 00453e9a
    CMP EDI,ECX                         ; 00453ea0
    JL 0x00453e63                       ; 00453ea2
        ;   XREF to: 00453e63 (CONDITIONAL_JUMP)  ; LAB_00453e63
    LEA EAX,[EAX]                       ; 00453ea4
    LEA EDX,[EDX]                       ; 00453eaa
    ADD ESP,0x4                         ; 00453eb0
        ;   Label: LAB_00453eb0
    POP EBP                             ; 00453eb3
    POP EDI                             ; 00453eb4
    POP ESI                             ; 00453eb5
    POP EBX                             ; 00453eb6
    RET                                 ; 00453eb7
    TEST EDX,EDX                        ; 00453eb8
        ;   Label: LAB_00453eb8
    JGE 0x00453ded                      ; 00453eba
        ;   XREF to: 00453ded (CONDITIONAL_JUMP)  ; LAB_00453ded
    XOR EDI,EDI                         ; 00453ec0
    MOV dword ptr [ESP + 0x20],EDI      ; 00453ec2
    JMP 0x00453ded                      ; 00453ec6
        ;   XREF to: 00453ded (UNCONDITIONAL_JUMP)  ; LAB_00453ded

