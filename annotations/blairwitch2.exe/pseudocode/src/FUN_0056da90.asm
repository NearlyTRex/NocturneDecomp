; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056da90(int param_1)
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
;   FUN_0056b770 at 0056b84b
;   FUN_0056db50 at 0056e184
;
; Called Functions:
;   FUN_00449280
;   FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056da90
        ;   Label: FUN_0056da90
    PUSH EDI                            ; 0056da91
    SUB ESP,0x4c                        ; 0056da92
    MOV EBX,ESI                         ; 0056da95
    MOV ESI,dword ptr [ESP + 0x58]      ; 0056da97
    MOV EAX,dword ptr [ESI + 0x2565c]   ; 0056da9b
    MOV dword ptr [ESP + 0x34],EAX      ; 0056daa1
    LEA EAX,[ESP + 0x34]                ; 0056daa5
    PUSH EAX                            ; 0056daa9
    LEA EAX,[ESP + 0x4]                 ; 0056daaa
    XOR EDX,EDX                         ; 0056daae
    PUSH EAX                            ; 0056dab0
    MOV dword ptr [ESP + 0x44],EDX      ; 0056dab1
    MOV dword ptr [ESP + 0x40],EDX      ; 0056dab5
    CALL FUN_00449280                   ; 0056dab9
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0056dabe
    MOV EAX,dword ptr [ESI + 0x25650]   ; 0056dac1
    MOV dword ptr [ESP + 0x48],EAX      ; 0056dac7
    XOR ESI,ESI                         ; 0056dacb
    LEA EAX,[ESP + 0x40]                ; 0056dacd
    MOV dword ptr [ESP + 0x40],ESI      ; 0056dad1
    PUSH EAX                            ; 0056dad5
    LEA EAX,[ESP + 0x4]                 ; 0056dad6
    MOV dword ptr [ESP + 0x48],ESI      ; 0056dada
    PUSH EAX                            ; 0056dade
    LEA ESI,[ESP + 0x30]                ; 0056dadf
    MOV EDI,EBX                         ; 0056dae3
    CALL FUN_00449530                   ; 0056dae5
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x30]                ; 0056daea
    ADD ESP,0x8                         ; 0056daee
    MOVSD ES:EDI,ESI                    ; 0056daf1
    MOVSD ES:EDI,ESI                    ; 0056daf2
    MOVSD ES:EDI,ESI                    ; 0056daf3
    MOV EAX,EBX                         ; 0056daf4
    ADD ESP,0x4c                        ; 0056daf6
    POP EDI                             ; 0056daf9
    POP EBX                             ; 0056dafa
    RET                                 ; 0056dafb

