; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045bba0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_004599a0 at 00459a83
;   FUN_0045bdc0 at 0045c5f0
;
; Called Functions:
;   FUN_00449280
;   FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bba0
        ;   Label: FUN_0045bba0
    PUSH EDI                            ; 0045bba1
    SUB ESP,0x4c                        ; 0045bba2
    MOV EBX,ESI                         ; 0045bba5
    MOV ESI,dword ptr [ESP + 0x58]      ; 0045bba7
    MOV EAX,dword ptr [ESI + 0x2565c]   ; 0045bbab
    MOV dword ptr [ESP + 0x34],EAX      ; 0045bbb1
    LEA EAX,[ESP + 0x34]                ; 0045bbb5
    PUSH EAX                            ; 0045bbb9
    LEA EAX,[ESP + 0x4]                 ; 0045bbba
    XOR EDX,EDX                         ; 0045bbbe
    PUSH EAX                            ; 0045bbc0
    MOV dword ptr [ESP + 0x44],EDX      ; 0045bbc1
    MOV dword ptr [ESP + 0x40],EDX      ; 0045bbc5
    CALL FUN_00449280                   ; 0045bbc9
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0045bbce
    MOV EAX,dword ptr [ESI + 0x25650]   ; 0045bbd1
    MOV dword ptr [ESP + 0x48],EAX      ; 0045bbd7
    XOR ESI,ESI                         ; 0045bbdb
    LEA EAX,[ESP + 0x40]                ; 0045bbdd
    MOV dword ptr [ESP + 0x40],ESI      ; 0045bbe1
    PUSH EAX                            ; 0045bbe5
    LEA EAX,[ESP + 0x4]                 ; 0045bbe6
    MOV dword ptr [ESP + 0x48],ESI      ; 0045bbea
    PUSH EAX                            ; 0045bbee
    LEA ESI,[ESP + 0x30]                ; 0045bbef
    MOV EDI,EBX                         ; 0045bbf3
    CALL FUN_00449530                   ; 0045bbf5
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x30]                ; 0045bbfa
    ADD ESP,0x8                         ; 0045bbfe
    MOVSD ES:EDI,ESI                    ; 0045bc01
    MOVSD ES:EDI,ESI                    ; 0045bc02
    MOVSD ES:EDI,ESI                    ; 0045bc03
    MOV EAX,EBX                         ; 0045bc04
    ADD ESP,0x4c                        ; 0045bc06
    POP EDI                             ; 0045bc09
    POP EBX                             ; 0045bc0a
    RET                                 ; 0045bc0b

