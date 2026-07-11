; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c46b0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   FUN_0055aa00
;   FUN_0055ae80
;   FUN_0055afb0
;   FUN_0055b180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c46b0
        ;   Label: FUN_004c46b0
    PUSH ESI                            ; 004c46b1
    PUSH EDI                            ; 004c46b2
    SUB ESP,0xd8                        ; 004c46b3
    MOV EBX,dword ptr [ESP + 0xe8]      ; 004c46b9
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004c46c0
    JNZ 0x004c46d3                      ; 004c46c7
        ;   XREF to: 004c46d3 (CONDITIONAL_JUMP)  ; LAB_004c46d3
    ADD ESP,0xd8                        ; 004c46c9
        ;   Label: LAB_004c46c9
    POP EDI                             ; 004c46cf
    POP ESI                             ; 004c46d0
    POP EBX                             ; 004c46d1
    RET                                 ; 004c46d2
    LEA EAX,[EBX + 0x30]                ; 004c46d3
        ;   Label: LAB_004c46d3
    PUSH EAX                            ; 004c46d6
    LEA EAX,[EBX + 0x20]                ; 004c46d7
    PUSH EAX                            ; 004c46da
    LEA EAX,[ESP + 0x8]                 ; 004c46db
    PUSH EAX                            ; 004c46df
    CALL FUN_0055afb0                   ; 004c46e0
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 004c46e5
    ADD ESP,0xc                         ; 004c46eb
    LEA EDX,[EAX + 0x30]                ; 004c46ee
    PUSH EDX                            ; 004c46f1
    ADD EAX,0x20                        ; 004c46f2
    PUSH EAX                            ; 004c46f5
    LEA EAX,[ESP + 0x38]                ; 004c46f6
    PUSH EAX                            ; 004c46fa
    CALL FUN_0055ae80                   ; 004c46fb
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0xc                         ; 004c4700
    LEA EAX,[ESP + 0x30]                ; 004c4703
    PUSH EAX                            ; 004c4707
    LEA EAX,[ESP + 0x4]                 ; 004c4708
    PUSH EAX                            ; 004c470c
    LEA ESI,[ESP + 0x98]                ; 004c470d
    LEA EDI,[ESP + 0x68]                ; 004c4714
    CALL FUN_0055aa00                   ; 004c4718
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 004c471d
    LEA ESI,[ESP + 0x98]                ; 004c4722
    ADD ESP,0x8                         ; 004c4729
    MOVSD.REP ES:EDI,ESI                ; 004c472c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004c472e
    MOV dword ptr [ESP + 0xc0],EAX      ; 004c4732
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c4739
    MOV dword ptr [ESP + 0xc4],EAX      ; 004c473d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004c4744
    LEA EDX,[EBX + 0x2dc]               ; 004c474b
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c4751
    LEA EAX,[ESP + 0xc0]                ; 004c4758
    CMP EDX,EAX                         ; 004c475f
    JZ 0x004c477d                       ; 004c4761
        ;   XREF to: 004c477d (CONDITIONAL_JUMP)  ; LAB_004c477d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004c4763
    MOV dword ptr [EDX],EAX             ; 004c4767
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004c4769
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4770
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c4773
    MOV dword ptr [EDX + 0x8],EAX       ; 004c477a
    LEA EAX,[ESP + 0xcc]                ; 004c477d
        ;   Label: LAB_004c477d
    PUSH EAX                            ; 004c4784
    LEA EAX,[ESP + 0x64]                ; 004c4785
    PUSH EAX                            ; 004c4789
    ADD EBX,0x2e8                       ; 004c478a
    CALL FUN_0055b180                   ; 004c4790
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 004c4795
    CMP EBX,EAX                         ; 004c4798
    JZ 0x004c46c9                       ; 004c479a
        ;   XREF to: 004c46c9 (CONDITIONAL_JUMP)  ; LAB_004c46c9
    MOV EDX,dword ptr [EAX]             ; 004c47a0
    MOV dword ptr [EBX],EDX             ; 004c47a2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c47a4
    MOV dword ptr [EBX + 0x4],EDX       ; 004c47a7
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c47aa
    MOV dword ptr [EBX + 0x8],EDX       ; 004c47ad
    ADD ESP,0xd8                        ; 004c47b0
    POP EDI                             ; 004c47b6
    POP ESI                             ; 004c47b7
    POP EBX                             ; 004c47b8
    RET                                 ; 004c47b9

