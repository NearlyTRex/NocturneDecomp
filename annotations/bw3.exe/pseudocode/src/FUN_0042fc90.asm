; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042fc90(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[4]:
;   FUN_00425da0 at 00426c1a
;   FUN_00455080 at 00455e3e
;   FUN_004c6eb0 at 004c8c47
;   FUN_00588ee0 at 00589c74
;
; Referenced Globals:
;   undefined4 DAT_005fed24
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408b80
;   FUN_0040cf40
;   FUN_004ce8a0
;   FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fc90
        ;   Label: FUN_0042fc90
    PUSH ESI                            ; 0042fc91
    PUSH EDI                            ; 0042fc92
    PUSH EBP                            ; 0042fc93
    MOV EBP,ESP                         ; 0042fc94
    SUB ESP,0x84                        ; 0042fc96
    SUB EBP,0x7e                        ; 0042fc9c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0042fc9f
    XOR EDX,EDX                         ; 0042fca5
    MOV ECX,dword ptr [EBX + 0x3284]    ; 0042fca7
    MOV dword ptr [EBP + 0x76],EDX      ; 0042fcad
    TEST ECX,ECX                        ; 0042fcb0
    JLE 0x0042fcef                      ; 0042fcb2
        ;   XREF to: 0042fcef (CONDITIONAL_JUMP)  ; LAB_0042fcef
    LEA EAX,[EBX + 0xfd8]               ; 0042fcb4
    MOV dword ptr [EBP + 0x72],EAX      ; 0042fcba
    LEA EAX,[EBX + 0x3288]              ; 0042fcbd
    MOV dword ptr [EBP + 0x7a],EAX      ; 0042fcc3
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0042fcc6
        ;   Label: LAB_0042fcc6
    MOV EAX,dword ptr [EAX]             ; 0042fcc9
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042fccb
    JNZ 0x0042fcf7                      ; 0042fcd3
        ;   XREF to: 0042fcf7 (CONDITIONAL_JUMP)  ; LAB_0042fcf7
    MOV ESI,dword ptr [EBP + 0x7a]      ; 0042fcd5
        ;   Label: LAB_0042fcd5
    MOV EDI,dword ptr [EBP + 0x76]      ; 0042fcd8
    MOV EDX,dword ptr [EBX + 0x3284]    ; 0042fcdb
    ADD ESI,0x38                        ; 0042fce1
    INC EDI                             ; 0042fce4
    MOV dword ptr [EBP + 0x7a],ESI      ; 0042fce5
    MOV dword ptr [EBP + 0x76],EDI      ; 0042fce8
    CMP EDI,EDX                         ; 0042fceb
    JL 0x0042fcc6                       ; 0042fced
        ;   XREF to: 0042fcc6 (CONDITIONAL_JUMP)  ; LAB_0042fcc6
    LEA ESP,[EBP + 0x7e]                ; 0042fcef
        ;   Label: LAB_0042fcef
    POP EBP                             ; 0042fcf2
    POP EDI                             ; 0042fcf3
    POP ESI                             ; 0042fcf4
    POP EBX                             ; 0042fcf5
    RET                                 ; 0042fcf6
    PUSH 0x3dcccccd                     ; 0042fcf7
        ;   Label: LAB_0042fcf7
    CALL FUN_0040cf40                   ; 0042fcfc
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 0042fd01
    TEST EAX,EAX                        ; 0042fd04
    JZ 0x0042fcd5                       ; 0042fd06
        ;   XREF to: 0042fcd5 (CONDITIONAL_JUMP)  ; LAB_0042fcd5
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0042fd08
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 0042fd0b
    ADD EAX,dword ptr [EBP + 0x72]      ; 0042fd0f
    PUSH EAX                            ; 0042fd12
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0042fd13
    ADD EAX,0x8                         ; 0042fd16
    PUSH EAX                            ; 0042fd19
    XOR EAX,EAX                         ; 0042fd1a
    MOV ECX,0xbe4ccccd                  ; 0042fd1c
    MOV dword ptr [EBP + 0x5a],EAX      ; 0042fd21
    MOV dword ptr [EBP + 0x5e],EAX      ; 0042fd24
    LEA EAX,[EBP + 0x5a]                ; 0042fd27
    MOV dword ptr [EBP + 0x62],ECX      ; 0042fd2a
    PUSH EAX                            ; 0042fd2d
    LEA ESI,[EBP + 0x36]                ; 0042fd2e
    LEA EDI,[EBP + 0x42]                ; 0042fd31
    CALL FUN_00583260                   ; 0042fd34
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[EBP + 0x36]                ; 0042fd39
    LEA EAX,[EBP + 0x42]                ; 0042fd3c
    ADD ESP,0x8                         ; 0042fd3f
    MOVSD ES:EDI,ESI                    ; 0042fd42
    MOVSD ES:EDI,ESI                    ; 0042fd43
    MOVSD ES:EDI,ESI                    ; 0042fd44
    PUSH EAX                            ; 0042fd45
    LEA ESI,[EBP + -0x6]                ; 0042fd46
    LEA EDI,[EBP + 0x4e]                ; 0042fd49
    CALL FUN_00583260                   ; 0042fd4c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    ADD ESP,0x8                         ; 0042fd51
    LEA EAX,[EBP + 0x4e]                ; 0042fd54
    LEA ESI,[EBP + -0x6]                ; 0042fd57
    PUSH EAX                            ; 0042fd5a
    MOVSD ES:EDI,ESI                    ; 0042fd5b
    MOVSD ES:EDI,ESI                    ; 0042fd5c
    MOVSD ES:EDI,ESI                    ; 0042fd5d
    PUSH EBX                            ; 0042fd5e
    LEA ESI,[EBP + 0x12]                ; 0042fd5f
    LEA EDI,[EBP + 0x66]                ; 0042fd62
    CALL FUN_00408b80                   ; 0042fd65
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[EBP + 0x12]                ; 0042fd6a
    LEA EAX,[EBP + 0x2a]                ; 0042fd6d
    ADD ESP,0x8                         ; 0042fd70
    MOVSD ES:EDI,ESI                    ; 0042fd73
    MOVSD ES:EDI,ESI                    ; 0042fd74
    MOVSD ES:EDI,ESI                    ; 0042fd75
    PUSH EAX                            ; 0042fd76
    MOV ESI,0x40400000                  ; 0042fd77
    PUSH EBX                            ; 0042fd7c
    XOR EDI,EDI                         ; 0042fd7d
    MOV dword ptr [EBP + 0x2a],ESI      ; 0042fd7f
    MOV dword ptr [EBP + 0x2e],EDI      ; 0042fd82
    MOV dword ptr [EBP + 0x32],EDI      ; 0042fd85
    LEA ESI,[EBP + 0x1e]                ; 0042fd88
    LEA EDI,[EBP + 0x6]                 ; 0042fd8b
    CALL FUN_00408b00                   ; 0042fd8e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[EBP + 0x1e]                ; 0042fd93
    MOVSD ES:EDI,ESI                    ; 0042fd96
    MOVSD ES:EDI,ESI                    ; 0042fd97
    MOVSD ES:EDI,ESI                    ; 0042fd98
    ADD ESP,0x8                         ; 0042fd99
    MOV EDX,dword ptr [EBX + 0x27a0]    ; 0042fd9c
    PUSH EDX                            ; 0042fda2
    LEA EAX,[EBP + 0x6]                 ; 0042fda3
    PUSH EAX                            ; 0042fda6
    LEA EAX,[EBP + 0x66]                ; 0042fda7
    PUSH EAX                            ; 0042fdaa
    MOV ECX,dword ptr [0x005fed24]      ; 0042fdab | DAT_005fed24
    PUSH ECX                            ; 0042fdb1
    CALL FUN_004ce8a0                   ; 0042fdb2
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce8a0()
    ADD ESP,0x10                        ; 0042fdb7
    JMP 0x0042fcd5                      ; 0042fdba
        ;   XREF to: 0042fcd5 (UNCONDITIONAL_JUMP)  ; LAB_0042fcd5

