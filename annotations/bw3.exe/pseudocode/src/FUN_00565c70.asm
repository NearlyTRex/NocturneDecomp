; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00565c70(int param_1,int *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004077f0 at 00407848
;   FUN_0046d960 at 0046dbb2
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf6024
;   undefined4 DAT_02cf6028
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565c70
        ;   Label: FUN_00565c70
    PUSH ESI                            ; 00565c71
    PUSH EDI                            ; 00565c72
    PUSH EBP                            ; 00565c73
    SUB ESP,0x10                        ; 00565c74
    MOV EBX,dword ptr [ESP + 0x24]      ; 00565c77
    MOV EDX,dword ptr [ESP + 0x28]      ; 00565c7b
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00565c7f
    CMP dword ptr [0x01c6cee8],0x0      ; 00565c83 | DAT_01c6cee8
    JZ 0x00565d68                       ; 00565c8a
        ;   XREF to: 00565d68 (CONDITIONAL_JUMP)  ; LAB_00565d68
    MOV EAX,[0x01ed3198]                ; 00565c90 | DAT_01ed3198
    MOV ESI,dword ptr [0x02cf6028]      ; 00565c95 | DAT_02cf6028
    ADD EAX,EBP                         ; 00565c9b
    TEST ESI,ESI                        ; 00565c9d
    JNZ 0x00565d84                      ; 00565c9f
        ;   XREF to: 00565d84 (CONDITIONAL_JUMP)  ; LAB_00565d84
    MOV [0x01ed3198],EAX                ; 00565ca5 | DAT_01ed3198
    XOR EDI,EDI                         ; 00565caa
    TEST EBP,EBP                        ; 00565cac
    JLE 0x00565d59                      ; 00565cae
        ;   XREF to: 00565d59 (CONDITIONAL_JUMP)  ; LAB_00565d59
    MOV ESI,EDX                         ; 00565cb4
    MOV EAX,dword ptr [ESI]             ; 00565cb6
        ;   Label: LAB_00565cb6
    IMUL EDX,dword ptr [EAX + 0x18],0x30 ; 00565cb8
    LEA ECX,[EBX + EDX*0x1]             ; 00565cbc
    MOV dword ptr [ESP],ECX             ; 00565cbf
    IMUL EDX,dword ptr [EAX + 0x24],0x30 ; 00565cc2
    LEA ECX,[EBX + EDX*0x1]             ; 00565cc6
    MOV dword ptr [ESP + 0x4],ECX       ; 00565cc9
    IMUL EDX,dword ptr [EAX + 0x30],0x30 ; 00565ccd
    LEA ECX,[EBX + EDX*0x1]             ; 00565cd1
    MOV dword ptr [ESP + 0x8],ECX       ; 00565cd4
    CMP dword ptr [EAX + 0x4],0x4       ; 00565cd8
    JZ 0x00565d74                       ; 00565cdc
        ;   XREF to: 00565d74 (CONDITIONAL_JUMP)  ; LAB_00565d74
    MOV EDX,dword ptr [ESP]             ; 00565ce2
        ;   Label: LAB_00565ce2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00565ce5
    MOV dword ptr [EDX + 0x18],ECX      ; 00565ce8
    MOV EDX,dword ptr [ESP]             ; 00565ceb
    MOV ECX,dword ptr [EAX + 0x20]      ; 00565cee
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565cf1
    MOV ECX,dword ptr [ESP + 0x4]       ; 00565cf4
    MOV EDX,dword ptr [EAX + 0x28]      ; 00565cf8
    MOV dword ptr [ECX + 0x18],EDX      ; 00565cfb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00565cfe
    MOV EDX,dword ptr [EAX + 0x2c]      ; 00565d02
    MOV dword ptr [ECX + 0x1c],EDX      ; 00565d05
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565d08
    MOV ECX,dword ptr [EAX + 0x34]      ; 00565d0c
    MOV dword ptr [EDX + 0x18],ECX      ; 00565d0f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565d12
    MOV ECX,dword ptr [EAX + 0x38]      ; 00565d16
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565d19
    CMP dword ptr [EAX + 0x4],0x4       ; 00565d1c
    JNZ 0x00565d36                      ; 00565d20
        ;   XREF to: 00565d36 (CONDITIONAL_JUMP)  ; LAB_00565d36
    MOV EDX,dword ptr [ESP + 0xc]       ; 00565d22
    MOV ECX,dword ptr [EAX + 0x40]      ; 00565d26
    MOV dword ptr [EDX + 0x18],ECX      ; 00565d29
    MOV EDX,dword ptr [ESP + 0xc]       ; 00565d2c
    MOV ECX,dword ptr [EAX + 0x44]      ; 00565d30
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565d33
    MOV EDX,dword ptr [ESP + 0x30]      ; 00565d36
        ;   Label: LAB_00565d36
    PUSH EDX                            ; 00565d3a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00565d3b
    PUSH ECX                            ; 00565d3e
    LEA EAX,[ESP + 0x8]                 ; 00565d3f
    PUSH EAX                            ; 00565d43
    ADD ESI,0x4                         ; 00565d44
    INC EDI                             ; 00565d47
    CALL dword ptr [0x02cf6024]         ; 00565d48 | DAT_02cf6024
    ADD ESP,0xc                         ; 00565d4e
    CMP EDI,EBP                         ; 00565d51
    JL 0x00565cb6                       ; 00565d53
        ;   XREF to: 00565cb6 (CONDITIONAL_JUMP)  ; LAB_00565cb6
    MOV EDX,0x1                         ; 00565d59
        ;   Label: LAB_00565d59
    MOV EAX,EDX                         ; 00565d5e
    ADD ESP,0x10                        ; 00565d60
    POP EBP                             ; 00565d63
    POP EDI                             ; 00565d64
    POP ESI                             ; 00565d65
    POP EBX                             ; 00565d66
    RET                                 ; 00565d67
    XOR EDX,EDX                         ; 00565d68
        ;   Label: LAB_00565d68
    MOV EAX,EDX                         ; 00565d6a
    ADD ESP,0x10                        ; 00565d6c
    POP EBP                             ; 00565d6f
    POP EDI                             ; 00565d70
    POP ESI                             ; 00565d71
    POP EBX                             ; 00565d72
    RET                                 ; 00565d73
    IMUL EDX,dword ptr [EAX + 0x3c],0x30 ; 00565d74
        ;   Label: LAB_00565d74
    LEA ECX,[EBX + EDX*0x1]             ; 00565d78
    MOV dword ptr [ESP + 0xc],ECX       ; 00565d7b
    JMP 0x00565ce2                      ; 00565d7f
        ;   XREF to: 00565ce2 (UNCONDITIONAL_JUMP)  ; LAB_00565ce2
    MOV EDI,dword ptr [ESP + 0x30]      ; 00565d84
        ;   Label: LAB_00565d84
    PUSH EDI                            ; 00565d88
    PUSH EBP                            ; 00565d89
    PUSH EDX                            ; 00565d8a
    PUSH EBX                            ; 00565d8b
    MOV [0x01ed3198],EAX                ; 00565d8c | DAT_01ed3198
    CALL dword ptr [0x02cf6028]         ; 00565d91 | DAT_02cf6028
    ADD ESP,0x10                        ; 00565d97
    MOV EDX,EAX                         ; 00565d9a
    MOV EAX,EDX                         ; 00565d9c
    ADD ESP,0x10                        ; 00565d9e
    POP EBP                             ; 00565da1
    POP EDI                             ; 00565da2
    POP ESI                             ; 00565da3
    POP EBX                             ; 00565da4
    RET                                 ; 00565da5

