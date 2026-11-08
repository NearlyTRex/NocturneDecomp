; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a91a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00467f70 at 00468089
;
; Called Functions:
;   FUN_004a90b0
;   FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a91a0
        ;   Label: FUN_004a91a0
    PUSH ESI                            ; 004a91a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a91a2
    PUSH EAX                            ; 004a91a6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a91a7
    PUSH EDX                            ; 004a91ab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a91ac
    PUSH ECX                            ; 004a91b0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a91b1
    PUSH EBX                            ; 004a91b5
    PUSH EAX                            ; 004a91b6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a91b7
    PUSH ESI                            ; 004a91bb
    CALL FUN_004aaf00                   ; 004a91bc
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    ADD ESP,0x8                         ; 004a91c1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a91c4
    SUB EDX,EAX                         ; 004a91c8
    LEA EAX,[EDX + 0x1]                 ; 004a91ca
    PUSH EAX                            ; 004a91cd
    PUSH ESI                            ; 004a91ce
    CALL FUN_004a90b0                   ; 004a91cf
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a90b0()
    ADD ESP,0x18                        ; 004a91d4
    POP ESI                             ; 004a91d7
    POP EBX                             ; 004a91d8
    RET                                 ; 004a91d9

