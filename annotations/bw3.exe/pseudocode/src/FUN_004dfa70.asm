; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dfa70(int param_1)
;
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004df880 at 004df8cb
;
; Called Functions:
;   FUN_005833e0
;   FUN_00583800
;   FUN_00583940
;   FUN_00583b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfa70
        ;   Label: FUN_004dfa70
    PUSH ESI                            ; 004dfa71
    PUSH EDI                            ; 004dfa72
    SUB ESP,0xf0                        ; 004dfa73
    MOV EBX,dword ptr [ESP + 0x100]     ; 004dfa79
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004dfa80
    JNZ 0x004dfa93                      ; 004dfa87
        ;   XREF to: 004dfa93 (CONDITIONAL_JUMP)  ; LAB_004dfa93
    ADD ESP,0xf0                        ; 004dfa89
        ;   Label: LAB_004dfa89
    POP EDI                             ; 004dfa8f
    POP ESI                             ; 004dfa90
    POP EBX                             ; 004dfa91
    RET                                 ; 004dfa92
    LEA EAX,[EBX + 0x30]                ; 004dfa93
        ;   Label: LAB_004dfa93
    PUSH EAX                            ; 004dfa96
    LEA EAX,[EBX + 0x20]                ; 004dfa97
    PUSH EAX                            ; 004dfa9a
    LEA EAX,[ESP + 0x38]                ; 004dfa9b
    PUSH EAX                            ; 004dfa9f
    CALL FUN_00583940                   ; 004dfaa0
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004dfaa5
    ADD ESP,0xc                         ; 004dfaab
    LEA EDX,[EAX + 0x30]                ; 004dfaae
    PUSH EDX                            ; 004dfab1
    ADD EAX,0x20                        ; 004dfab2
    PUSH EAX                            ; 004dfab5
    LEA EAX,[ESP + 0x68]                ; 004dfab6
    PUSH EAX                            ; 004dfaba
    CALL FUN_00583800                   ; 004dfabb
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; undefined FUN_00583800()
    ADD ESP,0xc                         ; 004dfac0
    LEA EAX,[ESP + 0x60]                ; 004dfac3
    PUSH EAX                            ; 004dfac7
    LEA EAX,[ESP + 0x34]                ; 004dfac8
    PUSH EAX                            ; 004dfacc
    LEA ESI,[ESP + 0x98]                ; 004dfacd
    LEA EDI,[ESP + 0x8]                 ; 004dfad4
    CALL FUN_005833e0                   ; 004dfad8
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 004dfadd
    LEA ESI,[ESP + 0x98]                ; 004dfae2
    ADD ESP,0x8                         ; 004dfae9
    MOVSD.REP ES:EDI,ESI                ; 004dfaec
    MOV EAX,dword ptr [ESP + 0xc]       ; 004dfaee
    LEA EDX,[EBX + 0x2e4]               ; 004dfaf2
    MOV dword ptr [ESP + 0xd8],EAX      ; 004dfaf8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dfaff
    LEA EDI,[ESP + 0xcc]                ; 004dfb03
    MOV dword ptr [ESP + 0xdc],EAX      ; 004dfb0a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004dfb11
    LEA ESI,[ESP + 0xd8]                ; 004dfb15
    MOV dword ptr [ESP + 0xe0],EAX      ; 004dfb1c
    LEA EAX,[ESP + 0xcc]                ; 004dfb23
    MOVSD ES:EDI,ESI                    ; 004dfb2a
    MOVSD ES:EDI,ESI                    ; 004dfb2b
    MOVSD ES:EDI,ESI                    ; 004dfb2c
    CMP EDX,EAX                         ; 004dfb2d
    JZ 0x004dfb4e                       ; 004dfb2f
        ;   XREF to: 004dfb4e (CONDITIONAL_JUMP)  ; LAB_004dfb4e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004dfb31
    MOV dword ptr [EDX],EAX             ; 004dfb38
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004dfb3a
    MOV dword ptr [EDX + 0x4],EAX       ; 004dfb41
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004dfb44
    MOV dword ptr [EDX + 0x8],EAX       ; 004dfb4b
    MOV EAX,ESP                         ; 004dfb4e
        ;   Label: LAB_004dfb4e
    LEA ESI,[ESP + 0xc0]                ; 004dfb50
    PUSH EAX                            ; 004dfb57
    LEA EDI,[ESP + 0xe8]                ; 004dfb58
    ADD EBX,0x2f0                       ; 004dfb5f
    CALL FUN_00583b10                   ; 004dfb65
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0xc4]                ; 004dfb6a
    ADD ESP,0x4                         ; 004dfb71
    LEA EAX,[ESP + 0xe4]                ; 004dfb74
    MOVSD ES:EDI,ESI                    ; 004dfb7b
    MOVSD ES:EDI,ESI                    ; 004dfb7c
    MOVSD ES:EDI,ESI                    ; 004dfb7d
    CMP EBX,EAX                         ; 004dfb7e
    JZ 0x004dfa89                       ; 004dfb80
        ;   XREF to: 004dfa89 (CONDITIONAL_JUMP)  ; LAB_004dfa89
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004dfb86
    MOV dword ptr [EBX],EAX             ; 004dfb8d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004dfb8f
    MOV dword ptr [EBX + 0x4],EAX       ; 004dfb96
    MOV EAX,dword ptr [ESP + 0xec]      ; 004dfb99
    MOV dword ptr [EBX + 0x8],EAX       ; 004dfba0
    ADD ESP,0xf0                        ; 004dfba3
    POP EDI                             ; 004dfba9
    POP ESI                             ; 004dfbaa
    POP EBX                             ; 004dfbab
    RET                                 ; 004dfbac

