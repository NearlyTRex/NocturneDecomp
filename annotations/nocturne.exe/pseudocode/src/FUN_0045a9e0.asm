; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045a9e0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_01b4d260
;   undefined4 DAT_01b4d274
;   undefined4 DAT_01b4d27c
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a9e0
        ;   Label: FUN_0045a9e0
    PUSH ESI                            ; 0045a9e1
    PUSH EBP                            ; 0045a9e2
    SUB ESP,0x24                        ; 0045a9e3
    MOV ESI,dword ptr [ESP + 0x34]      ; 0045a9e6
    MOV EBX,dword ptr [ESP + 0x38]      ; 0045a9ea
    CMP dword ptr [ESI + 0xbdb0],0x0    ; 0045a9ee
    JZ 0x0045aa00                       ; 0045a9f5
        ;   XREF to: 0045aa00 (CONDITIONAL_JUMP)  ; LAB_0045aa00
    XOR EAX,EAX                         ; 0045a9f7
    ADD ESP,0x24                        ; 0045a9f9
    POP EBP                             ; 0045a9fc
    POP ESI                             ; 0045a9fd
    POP EBX                             ; 0045a9fe
    RET                                 ; 0045a9ff
    PUSH EDI                            ; 0045aa00
        ;   Label: LAB_0045aa00
    MOV ECX,dword ptr [0x01b4d260]      ; 0045aa01 | DAT_01b4d260
    PUSH ECX                            ; 0045aa07
    LEA EAX,[ESP + 0x14]                ; 0045aa08
    PUSH EAX                            ; 0045aa0c
    LEA EAX,[ESI + 0x150]               ; 0045aa0d
    PUSH EAX                            ; 0045aa13
    MOV EDI,0x3                         ; 0045aa14
    CALL FUN_0051d380                   ; 0045aa19
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 0045aa1e
    CMP EBX,EAX                         ; 0045aa21
    JZ 0x0045aa35                       ; 0045aa23
        ;   XREF to: 0045aa35 (CONDITIONAL_JUMP)  ; LAB_0045aa35
    MOV EDX,dword ptr [EAX]             ; 0045aa25
    MOV dword ptr [EBX],EDX             ; 0045aa27
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045aa29
    MOV dword ptr [EBX + 0x4],EDX       ; 0045aa2c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045aa2f
    MOV dword ptr [EBX + 0x8],EDX       ; 0045aa32
    MOV EBP,dword ptr [0x01b4d274]      ; 0045aa35 | DAT_01b4d274
        ;   Label: LAB_0045aa35
    PUSH EBP                            ; 0045aa3b
    LEA EAX,[ESP + 0x20]                ; 0045aa3c
    PUSH EAX                            ; 0045aa40
    LEA EAX,[ESI + 0x150]               ; 0045aa41
    PUSH EAX                            ; 0045aa47
    CALL FUN_0051d380                   ; 0045aa48
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    LEA EDX,[EBX + 0xc]                 ; 0045aa4d
    ADD ESP,0xc                         ; 0045aa50
    CMP EDX,EAX                         ; 0045aa53
    JZ 0x0045aa67                       ; 0045aa55
        ;   XREF to: 0045aa67 (CONDITIONAL_JUMP)  ; LAB_0045aa67
    MOV ECX,dword ptr [EAX]             ; 0045aa57
    MOV dword ptr [EDX],ECX             ; 0045aa59
    MOV ECX,dword ptr [EAX + 0x4]       ; 0045aa5b
    MOV dword ptr [EDX + 0x4],ECX       ; 0045aa5e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045aa61
    MOV dword ptr [EDX + 0x8],ECX       ; 0045aa64
    MOV EAX,[0x01b4d27c]                ; 0045aa67 | DAT_01b4d27c
        ;   Label: LAB_0045aa67
    PUSH EAX                            ; 0045aa6c
    LEA EAX,[ESP + 0x8]                 ; 0045aa6d
    PUSH EAX                            ; 0045aa71
    ADD ESI,0x150                       ; 0045aa72
    PUSH ESI                            ; 0045aa78
    ADD EBX,0x18                        ; 0045aa79
    CALL FUN_0051d380                   ; 0045aa7c
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 0045aa81
    CMP EBX,EAX                         ; 0045aa84
    JZ 0x0045aa98                       ; 0045aa86
        ;   XREF to: 0045aa98 (CONDITIONAL_JUMP)  ; LAB_0045aa98
    MOV EDX,dword ptr [EAX]             ; 0045aa88
    MOV dword ptr [EBX],EDX             ; 0045aa8a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045aa8c
    MOV dword ptr [EBX + 0x4],EDX       ; 0045aa8f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045aa92
    MOV dword ptr [EBX + 0x8],EDX       ; 0045aa95
    MOV EAX,EDI                         ; 0045aa98
        ;   Label: LAB_0045aa98
    POP EDI                             ; 0045aa9a
    ADD ESP,0x24                        ; 0045aa9b
    POP EBP                             ; 0045aa9e
    POP ESI                             ; 0045aa9f
    POP EBX                             ; 0045aaa0
    RET                                 ; 0045aaa1

