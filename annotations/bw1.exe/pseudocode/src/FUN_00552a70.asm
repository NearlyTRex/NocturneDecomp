; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00552a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)
;
;
; XREF[8]:
;   FUN_00436600 at 00436923
;   FUN_004ac0b0 at 004ac374
;   FUN_004ac770 at 004aca94
;   FUN_004af9f0 at 004afb7d
;   FUN_004b4370 at 004b4645
;   FUN_004b46e0 at 004b49ef
;   FUN_004e3f40 at 004e41e1
;   FUN_005ae890 at 005aeabb
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_00629094
;   undefined4 DAT_00629098
;   undefined4 DAT_0062909c
;
; Called Functions:
;   FUN_00552710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552a70
        ;   Label: FUN_00552a70
    PUSH ESI                            ; 00552a71
    PUSH EDI                            ; 00552a72
    MOV EBX,dword ptr [ESP + 0x20]      ; 00552a73
    PUSH 0x0                            ; 00552a77
    MOV EDX,dword ptr [ESP + 0x20]      ; 00552a79
    PUSH EDX                            ; 00552a7d
    MOV ECX,dword ptr [ESP + 0x20]      ; 00552a7e
    PUSH ECX                            ; 00552a82
    MOV ESI,dword ptr [ESP + 0x20]      ; 00552a83
    PUSH ESI                            ; 00552a87
    MOV EDI,dword ptr [ESP + 0x20]      ; 00552a88
    PUSH EDI                            ; 00552a8c
    CALL FUN_00552710                   ; 00552a8d
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; undefined FUN_00552710()
    ADD ESP,0x14                        ; 00552a92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00552a95
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552a99
    SUB EAX,EDX                         ; 00552aa0
    MOV EDX,0x629014                    ; 00552aa2 | DAT_00629014
    SHL EAX,0x4                         ; 00552aa7
    ADD EDX,EAX                         ; 00552aaa
    DEC EBX                             ; 00552aac
    LEA EAX,[EDX + 0x30]                ; 00552aad
    TEST EBX,EBX                        ; 00552ab0
    JLE 0x00552ad0                      ; 00552ab2
        ;   XREF to: 00552ad0 (CONDITIONAL_JUMP)  ; LAB_00552ad0
    MOV ECX,dword ptr [EDX + 0x20]      ; 00552ab4 | DAT_00629034
        ;   Label: LAB_00552ab4
    MOV dword ptr [EAX + 0x20],ECX      ; 00552ab7 | DAT_00629064 | DAT_00629094
    MOV ECX,dword ptr [EDX + 0x24]      ; 00552aba | DAT_00629038
    MOV dword ptr [EAX + 0x24],ECX      ; 00552abd | DAT_00629068 | DAT_00629098
    ADD EAX,0x30                        ; 00552ac0
    MOV ECX,dword ptr [EDX + 0x28]      ; 00552ac3 | DAT_0062903c
    DEC EBX                             ; 00552ac6
    MOV dword ptr [EAX + -0x8],ECX      ; 00552ac7 | DAT_0062906c | DAT_0062909c
    TEST EBX,EBX                        ; 00552aca
    JG 0x00552ab4                       ; 00552acc
        ;   XREF to: 00552ab4 (CONDITIONAL_JUMP)  ; LAB_00552ab4
    MOV EAX,EAX                         ; 00552ace
    POP EDI                             ; 00552ad0
        ;   Label: LAB_00552ad0
    POP ESI                             ; 00552ad1
    POP EBX                             ; 00552ad2
    RET                                 ; 00552ad3

