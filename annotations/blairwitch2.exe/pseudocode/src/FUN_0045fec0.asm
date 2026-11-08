; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fec0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004be8a0 at 004bf0af
;
; Referenced Globals:
;   undefined4 DAT_005f54c8
;
; Called Functions:
;   FUN_00408d70
;   FUN_0044fd20
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fec0
        ;   Label: FUN_0045fec0
    PUSH EDI                            ; 0045fec1
    PUSH EBP                            ; 0045fec2
    SUB ESP,0x20                        ; 0045fec3
    MOV EBP,ESI                         ; 0045fec6
    MOV ESI,dword ptr [ESP + 0x30]      ; 0045fec8
    LEA EBX,[ESI + 0x2b4]               ; 0045fecc
    PUSH EBX                            ; 0045fed2
    CALL FUN_0044fd20                   ; 0045fed3
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0045fed8
    PUSH EBX                            ; 0045fedb
    MOV EDI,dword ptr [EAX + 0x10c]     ; 0045fedc
    CALL FUN_0044fd20                   ; 0045fee2
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EAX,dword ptr [EAX + 0x100]     ; 0045fee7
    ADD ESP,0x4                         ; 0045feed
    DEC EAX                             ; 0045fef0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045fef1
    FILD dword ptr [ESP + 0x1c]         ; 0045fef5
    FMUL float ptr [ESI + 0xb08]        ; 0045fef9
    PUSH EBX                            ; 0045feff
    CALL FUN_005b7ff0                   ; 0045ff00
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 0045ff05
    CALL FUN_0044fd20                   ; 0045ff09
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0045ff0e
    MOV EAX,dword ptr [EAX + 0x104]     ; 0045ff11
    IMUL EAX,dword ptr [ESP + 0x18]     ; 0045ff17
    MOV EBX,dword ptr [ESI + 0xba4]     ; 0045ff1c
    ADD EBX,EAX                         ; 0045ff22
    LEA EAX,[EBX*0x4 + 0x0]             ; 0045ff24
    SUB EAX,EBX                         ; 0045ff2b
    SHL EAX,0x2                         ; 0045ff2d
    MOV EBX,ESP                         ; 0045ff30
    ADD EAX,EDI                         ; 0045ff32
    FILD dword ptr [EAX]                ; 0045ff34
    FMUL float ptr [0x005f54c8]         ; 0045ff36 | DAT_005f54c8
    FSTP float ptr [EBX]                ; 0045ff3c
    FILD dword ptr [EAX + 0x4]          ; 0045ff3e
    FMUL float ptr [0x005f54c8]         ; 0045ff41 | DAT_005f54c8
    FSTP float ptr [EBX + 0x4]          ; 0045ff47
    FILD dword ptr [EAX + 0x8]          ; 0045ff4a
    FMUL float ptr [0x005f54c8]         ; 0045ff4d | DAT_005f54c8
    FSTP float ptr [EBX + 0x8]          ; 0045ff53
    MOV EAX,ESP                         ; 0045ff56
    PUSH EAX                            ; 0045ff58
    PUSH ESI                            ; 0045ff59
    LEA ESI,[ESP + 0x14]                ; 0045ff5a
    MOV EDI,EBP                         ; 0045ff5e
    CALL FUN_00408d70                   ; 0045ff60
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 0045ff65
    ADD ESP,0x8                         ; 0045ff69
    MOVSD ES:EDI,ESI                    ; 0045ff6c
    MOVSD ES:EDI,ESI                    ; 0045ff6d
    MOVSD ES:EDI,ESI                    ; 0045ff6e
    MOV EAX,EBP                         ; 0045ff6f
    ADD ESP,0x20                        ; 0045ff71
    POP EBP                             ; 0045ff74
    POP EDI                             ; 0045ff75
    POP EBX                             ; 0045ff76
    RET                                 ; 0045ff77

