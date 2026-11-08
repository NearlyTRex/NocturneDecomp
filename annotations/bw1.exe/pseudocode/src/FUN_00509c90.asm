; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509c90(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_0050ba70 at 0050c28d
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f4b0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1ee98
;
; Called Functions:
;   FUN_00482170
;   FUN_00483dd0
;   FUN_00483de0
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00509c90
        ;   Label: FUN_00509c90
    SUB ESP,0x28                        ; 00509c91
    MOV EBP,dword ptr [ESP + 0x30]      ; 00509c94
    MOV EDX,dword ptr [ESP + 0x38]      ; 00509c98
    ADD EDX,EDX                         ; 00509c9c
    TEST EDX,EDX                        ; 00509c9e
    JLE 0x00509e17                      ; 00509ca0
        ;   XREF to: 00509e17 (CONDITIONAL_JUMP)  ; LAB_00509e17
    PUSH EDI                            ; 00509ca6
    PUSH ESI                            ; 00509ca7
    PUSH EBX                            ; 00509ca8
    MOV EAX,[0x00612560]                ; 00509ca9 | DAT_00612560
    LEA ECX,[EBP + -0x10]               ; 00509cae
    MOV EBX,dword ptr [EAX]             ; 00509cb1 | DAT_01bc120c
    SHL ECX,0x10                        ; 00509cb3
    MOV dword ptr [EBX + 0x10],ECX      ; 00509cb6
    MOV ESI,dword ptr [ESP + 0x40]      ; 00509cb9
    MOV EBX,dword ptr [EAX]             ; 00509cbd | DAT_01bc120c
    SHL ESI,0x10                        ; 00509cbf
    MOV dword ptr [EBX + 0x14],ESI      ; 00509cc2
    LEA EBX,[EBP + 0x10]                ; 00509cc5
    MOV EDI,dword ptr [EAX]             ; 00509cc8 | DAT_01bc120c
    SHL EBX,0x10                        ; 00509cca
    MOV dword ptr [EDI + 0x40],EBX      ; 00509ccd
    MOV EDI,dword ptr [EAX]             ; 00509cd0 | DAT_01bc120c
    MOV dword ptr [EDI + 0x44],ESI      ; 00509cd2
    MOV ESI,dword ptr [EAX]             ; 00509cd5 | DAT_01bc120c
    MOV dword ptr [ESI + 0x70],EBX      ; 00509cd7
    MOV EBX,dword ptr [ESP + 0x40]      ; 00509cda
    SUB EBX,EDX                         ; 00509cde
    MOV EDX,EBX                         ; 00509ce0
    MOV EBX,dword ptr [EAX]             ; 00509ce2 | DAT_01bc120c
    SHL EDX,0x10                        ; 00509ce4
    MOV dword ptr [EBX + 0x74],EDX      ; 00509ce7
    MOV EBX,dword ptr [EAX]             ; 00509cea | DAT_01bc120c
    MOV dword ptr [EBX + 0xa0],ECX      ; 00509cec
    MOV ECX,dword ptr [EAX]             ; 00509cf2 | DAT_01bc120c
    MOV dword ptr [ECX + 0xa4],EDX      ; 00509cf4
    MOV EDX,dword ptr [EAX]             ; 00509cfa | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x80000  ; 00509cfc
    MOV EDX,dword ptr [EAX]             ; 00509d03 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 00509d05
    MOV EDX,dword ptr [EAX]             ; 00509d0c | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],0xf80000 ; 00509d0e
    MOV EDX,dword ptr [EAX]             ; 00509d15 | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 00509d17
    MOV EDX,dword ptr [EAX]             ; 00509d1e | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],0xf80000 ; 00509d20
    MOV EDX,dword ptr [EAX]             ; 00509d27 | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0x80000  ; 00509d29
    MOV EDX,dword ptr [EAX]             ; 00509d30 | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x80000  ; 00509d32
    MOV EDX,dword ptr [EAX]             ; 00509d3c | DAT_01bc120c
    MOV dword ptr [EDX + 0xac],0x80000  ; 00509d3e
    MOV EDX,0x4                         ; 00509d48
    MOV EBX,0x2                         ; 00509d4d
    MOV ESI,0x3                         ; 00509d52
    PUSH 0x8000                         ; 00509d57
    XOR ECX,ECX                         ; 00509d5c
    MOV dword ptr [ESP + 0x14],EDX      ; 00509d5e
    MOV dword ptr [ESP + 0x24],ECX      ; 00509d62
    MOV dword ptr [ESP + 0x20],ECX      ; 00509d66
    MOV dword ptr [ESP + 0x1c],ECX      ; 00509d6a
    MOV dword ptr [ESP + 0x18],ECX      ; 00509d6e
    MOV dword ptr [ESP + 0x28],ECX      ; 00509d72
    MOV dword ptr [ESP + 0x30],EBX      ; 00509d76
    PUSH EAX                            ; 00509d7a | DAT_01bc120c
    MOV ECX,0x1                         ; 00509d7b
    MOV dword ptr [ESP + 0x38],ESI      ; 00509d80
    MOV dword ptr [ESP + 0x30],ECX      ; 00509d84
    CALL FUN_00483de0                   ; 00509d88
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 00509d8d
    PUSH 0x1                            ; 00509d90
    MOV EDI,dword ptr [0x00612560]      ; 00509d92 | DAT_00612560
    PUSH EDI                            ; 00509d98 | DAT_01bc120c
    CALL FUN_00483dd0                   ; 00509d99
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    MOV EAX,[0x01d1ee98]                ; 00509d9e | DAT_01d1ee98
    MOV EDX,EAX                         ; 00509da3
    SAR EDX,0x1f                        ; 00509da5
    SHL EDX,0x10                        ; 00509da8
    SBB EAX,EDX                         ; 00509dab
    SAR EAX,0x10                        ; 00509dad
    LEA EDX,[EAX + EBP*0x1]             ; 00509db0
    AND EDX,0x7                         ; 00509db3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00509db6
    SUB EAX,EDX                         ; 00509dbd
    SHL EAX,0x3                         ; 00509dbf
    ADD ESP,0x8                         ; 00509dc2
    ADD EAX,0x61f4b0                    ; 00509dc5 | DAT_0061f4b0
    PUSH EAX                            ; 00509dca
    MOV EBP,dword ptr [0x00612560]      ; 00509dcb | DAT_00612560
    PUSH EBP                            ; 00509dd1 | DAT_01bc120c
    CALL FUN_00484f00                   ; 00509dd2
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 00509dd7
    PUSH 0x23                           ; 00509dda
    LEA EAX,[ESP + 0x10]                ; 00509ddc
    PUSH EAX                            ; 00509de0
    MOV EAX,[0x00612560]                ; 00509de1 | DAT_00612560
    PUSH EAX                            ; 00509de6 | DAT_01bc120c
    CALL FUN_00482170                   ; 00509de7
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 00509dec
    PUSH 0x0                            ; 00509def
    MOV EDX,dword ptr [0x00612560]      ; 00509df1 | DAT_00612560
    PUSH EDX                            ; 00509df7 | DAT_01bc120c
    CALL FUN_00483dd0                   ; 00509df8
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483dd0()
    ADD ESP,0x8                         ; 00509dfd
    PUSH 0xffff                         ; 00509e00
    MOV ECX,dword ptr [0x00612560]      ; 00509e05 | DAT_00612560
    PUSH ECX                            ; 00509e0b | DAT_01bc120c
    CALL FUN_00483de0                   ; 00509e0c
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 00509e11
    POP EBX                             ; 00509e14
    POP ESI                             ; 00509e15
    POP EDI                             ; 00509e16
    ADD ESP,0x28                        ; 00509e17
        ;   Label: LAB_00509e17
    POP EBP                             ; 00509e1a
    RET                                 ; 00509e1b

