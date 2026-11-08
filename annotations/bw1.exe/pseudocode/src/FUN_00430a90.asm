; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430a90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[5]:
;   FUN_00423b70 at 0042478d
;   FUN_00428ae0 at 004298c2
;   FUN_00459100 at 00459df6
;   FUN_004de330 at 004e001f
;   FUN_005bafb0 at 005bbc9f
;
; Referenced Globals:
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_0040cd00
;   FUN_004e5f40
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430a90
        ;   Label: FUN_00430a90
    SUB ESP,0x54                        ; 00430a91
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00430a94
    MOV EAX,dword ptr [ESP + 0x60]      ; 00430a98
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00430a9c
    JZ 0x00430aab                       ; 00430aa4
        ;   XREF to: 00430aab (CONDITIONAL_JUMP)  ; LAB_00430aab
    ADD ESP,0x54                        ; 00430aa6
        ;   Label: LAB_00430aa6
    POP EBX                             ; 00430aa9
    RET                                 ; 00430aaa
    PUSH dword ptr [ESP + 0x68]         ; 00430aab
        ;   Label: LAB_00430aab
    CALL FUN_0040cd00                   ; 00430aaf
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 00430ab4
    TEST EAX,EAX                        ; 00430ab7
    JZ 0x00430aa6                       ; 00430ab9
        ;   XREF to: 00430aa6 (CONDITIONAL_JUMP)  ; LAB_00430aa6
    PUSH EDI                            ; 00430abb
    PUSH ESI                            ; 00430abc
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00430abd
    PUSH ECX                            ; 00430ac1
    LEA EAX,[EBX + 0x158]               ; 00430ac2
    PUSH EAX                            ; 00430ac8
    LEA ESI,[ESP + 0x10]                ; 00430ac9
    LEA EDI,[ESP + 0x40]                ; 00430acd
    CALL FUN_00569130                   ; 00430ad1
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    ADD ESP,0x8                         ; 00430ad6
    LEA EAX,[ESP + 0x38]                ; 00430ad9
    LEA ESI,[ESP + 0x8]                 ; 00430add
    PUSH EAX                            ; 00430ae1
    MOVSD ES:EDI,ESI                    ; 00430ae2
    MOVSD ES:EDI,ESI                    ; 00430ae3
    MOVSD ES:EDI,ESI                    ; 00430ae4
    PUSH EBX                            ; 00430ae5
    LEA ESI,[ESP + 0x1c]                ; 00430ae6
    LEA EDI,[ESP + 0x58]                ; 00430aea
    CALL FUN_00408b40                   ; 00430aee
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x1c]                ; 00430af3
    ADD ESP,0x8                         ; 00430af7
    LEA EAX,[ESP + 0x2c]                ; 00430afa
    MOVSD ES:EDI,ESI                    ; 00430afe
    MOVSD ES:EDI,ESI                    ; 00430aff
    MOVSD ES:EDI,ESI                    ; 00430b00
    PUSH EAX                            ; 00430b01
    MOV ESI,0xc0400000                  ; 00430b02
    PUSH EBX                            ; 00430b07
    XOR EDI,EDI                         ; 00430b08
    MOV dword ptr [ESP + 0x34],ESI      ; 00430b0a
    MOV dword ptr [ESP + 0x38],EDI      ; 00430b0e
    MOV dword ptr [ESP + 0x3c],EDI      ; 00430b12
    LEA ESI,[ESP + 0x28]                ; 00430b16
    LEA EDI,[ESP + 0x4c]                ; 00430b1a
    CALL FUN_00408ac0                   ; 00430b1e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x28]                ; 00430b23
    ADD ESP,0x8                         ; 00430b27
    MOVSD ES:EDI,ESI                    ; 00430b2a
    MOVSD ES:EDI,ESI                    ; 00430b2b
    MOVSD ES:EDI,ESI                    ; 00430b2c
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00430b2d
    PUSH EAX                            ; 00430b33
    LEA EAX,[ESP + 0x48]                ; 00430b34
    PUSH EAX                            ; 00430b38
    LEA EAX,[ESP + 0x58]                ; 00430b39
    PUSH EAX                            ; 00430b3d
    MOV EDX,dword ptr [0x0061dca4]      ; 00430b3e | DAT_0061dca4
    PUSH EDX                            ; 00430b44
    CALL FUN_004e5f40                   ; 00430b45
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 00430b4a
    POP ESI                             ; 00430b4d
    POP EDI                             ; 00430b4e
    ADD ESP,0x54                        ; 00430b4f
    POP EBX                             ; 00430b52
    RET                                 ; 00430b53

