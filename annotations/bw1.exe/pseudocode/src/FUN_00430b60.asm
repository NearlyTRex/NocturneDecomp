; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430b60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[5]:
;   FUN_00423b70 at 0042481d
;   FUN_00428ae0 at 00429954
;   FUN_00459100 at 00459e88
;   FUN_004de330 at 004e00af
;   FUN_005bafb0 at 005bbd31
;
; Referenced Globals:
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cd00
;   FUN_004e5f40
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430b60
        ;   Label: FUN_00430b60
    SUB ESP,0x3c                        ; 00430b61
    MOV EBX,dword ptr [ESP + 0x44]      ; 00430b64
    MOV EAX,dword ptr [ESP + 0x48]      ; 00430b68
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00430b6c
    JZ 0x00430b7b                       ; 00430b74
        ;   XREF to: 00430b7b (CONDITIONAL_JUMP)  ; LAB_00430b7b
    ADD ESP,0x3c                        ; 00430b76
        ;   Label: LAB_00430b76
    POP EBX                             ; 00430b79
    RET                                 ; 00430b7a
    PUSH dword ptr [ESP + 0x50]         ; 00430b7b
        ;   Label: LAB_00430b7b
    CALL FUN_0040cd00                   ; 00430b7f
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 00430b84
    TEST EAX,EAX                        ; 00430b87
    JZ 0x00430b76                       ; 00430b89
        ;   XREF to: 00430b76 (CONDITIONAL_JUMP)  ; LAB_00430b76
    PUSH EDI                            ; 00430b8b
    PUSH ESI                            ; 00430b8c
    MOV ECX,dword ptr [ESP + 0x54]      ; 00430b8d
    PUSH ECX                            ; 00430b91
    LEA EAX,[EBX + 0x158]               ; 00430b92
    PUSH EAX                            ; 00430b98
    LEA ESI,[ESP + 0x1c]                ; 00430b99
    LEA EDI,[ESP + 0x40]                ; 00430b9d
    CALL FUN_00569130                   ; 00430ba1
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    ADD ESP,0x8                         ; 00430ba6
    LEA EAX,[ESP + 0x38]                ; 00430ba9
    LEA ESI,[ESP + 0x14]                ; 00430bad
    PUSH EAX                            ; 00430bb1
    MOVSD ES:EDI,ESI                    ; 00430bb2
    MOVSD ES:EDI,ESI                    ; 00430bb3
    MOVSD ES:EDI,ESI                    ; 00430bb4
    PUSH EBX                            ; 00430bb5
    LEA ESI,[ESP + 0x28]                ; 00430bb6
    LEA EDI,[ESP + 0x10]                ; 00430bba
    CALL FUN_00408b40                   ; 00430bbe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x28]                ; 00430bc3
    ADD ESP,0x8                         ; 00430bc7
    MOVSD ES:EDI,ESI                    ; 00430bca
    MOVSD ES:EDI,ESI                    ; 00430bcb
    MOVSD ES:EDI,ESI                    ; 00430bcc
    XOR ESI,ESI                         ; 00430bcd
    MOV EDI,0x40e00000                  ; 00430bcf
    MOV dword ptr [ESP + 0x2c],ESI      ; 00430bd4
    MOV dword ptr [ESP + 0x30],EDI      ; 00430bd8
    MOV dword ptr [ESP + 0x34],ESI      ; 00430bdc
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00430be0
    PUSH EAX                            ; 00430be6
    LEA EAX,[ESP + 0x30]                ; 00430be7
    PUSH EAX                            ; 00430beb
    LEA EAX,[ESP + 0x10]                ; 00430bec
    PUSH EAX                            ; 00430bf0
    MOV EDX,dword ptr [0x0061dca4]      ; 00430bf1 | DAT_0061dca4
    PUSH EDX                            ; 00430bf7
    CALL FUN_004e5f40                   ; 00430bf8
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 00430bfd
    POP ESI                             ; 00430c00
    POP EDI                             ; 00430c01
    ADD ESP,0x3c                        ; 00430c02
    POP EBX                             ; 00430c05
    RET                                 ; 00430c06

