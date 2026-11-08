; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa9d0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   FUN_004fb0a0 at 004fb0e8
;   FUN_004fb150 at 004fb22d
;
; Called Functions:
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa9d0
        ;   Label: FUN_004fa9d0
    PUSH EDI                            ; 004fa9d1
    SUB ESP,0xc                         ; 004fa9d2
    MOV EBX,ESI                         ; 004fa9d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fa9d7
    ADD ESI,0x30                        ; 004fa9db
    PUSH ESI                            ; 004fa9de
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fa9df
    PUSH EDX                            ; 004fa9e3
    LEA ESI,[ESP + 0x8]                 ; 004fa9e4
    MOV EDI,EBX                         ; 004fa9e8
    CALL FUN_00591530                   ; 004fa9ea
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0x8]                 ; 004fa9ef
    ADD ESP,0x8                         ; 004fa9f3
    MOVSD ES:EDI,ESI                    ; 004fa9f6
    MOVSD ES:EDI,ESI                    ; 004fa9f7
    MOVSD ES:EDI,ESI                    ; 004fa9f8
    MOV EAX,EBX                         ; 004fa9f9
    ADD ESP,0xc                         ; 004fa9fb
    POP EDI                             ; 004fa9fe
    POP EBX                             ; 004fa9ff
    RET                                 ; 004faa00

