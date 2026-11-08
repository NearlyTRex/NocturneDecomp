; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408b80(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[125]:
;   FUN_00409f60 at 00409fe6
;   FUN_0040c990 at 0040c9a8
;   FUN_0040fb40 at 0040fc14
;   FUN_00410490 at 004104e0
;   FUN_00415570 at 004155e9
;   FUN_004157c0 at 00415b54
;   FUN_00415e30 at 004161a7
;   FUN_00416750 at 004167a4
;   FUN_00416970 at 00416a97
;   FUN_004179b0 at 0041818c
;   ... and 115 more
;
; Called Functions:
;   FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b80
        ;   Label: FUN_00408b80
    PUSH EDI                            ; 00408b81
    SUB ESP,0x24                        ; 00408b82
    MOV EBX,ESI                         ; 00408b85
    MOV EDX,dword ptr [ESP + 0x34]      ; 00408b87
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408b8b
    PUSH EDX                            ; 00408b8f
    ADD EAX,0x3c                        ; 00408b90
    PUSH EAX                            ; 00408b93
    LEA ESI,[ESP + 0x14]                ; 00408b94
    LEA EDI,[ESP + 0x8]                 ; 00408b98
    CALL FUN_0045b800                   ; 00408b9c
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x14]                ; 00408ba1
    ADD ESP,0x8                         ; 00408ba5
    MOVSD ES:EDI,ESI                    ; 00408ba8
    MOVSD ES:EDI,ESI                    ; 00408ba9
    MOVSD ES:EDI,ESI                    ; 00408baa
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408bab
    FLD float ptr [ESP]                 ; 00408baf
    FLD float ptr [ESP + 0x4]           ; 00408bb2
    FLD float ptr [ESP + 0x8]           ; 00408bb6
    LEA ESI,[ESP + 0x18]                ; 00408bba
    MOV EDI,EBX                         ; 00408bbe
    FXCH ST2                            ; 00408bc0
    FADD float ptr [EAX + 0x20]         ; 00408bc2
    FXCH                                ; 00408bc5
    FADD float ptr [EAX + 0x24]         ; 00408bc7
    FXCH ST2                            ; 00408bca
    FADD float ptr [EAX + 0x28]         ; 00408bcc
    FXCH                                ; 00408bcf
    FSTP float ptr [ESP + 0x18]         ; 00408bd1
    FXCH                                ; 00408bd5
    FSTP float ptr [ESP + 0x1c]         ; 00408bd7
    FSTP float ptr [ESP + 0x20]         ; 00408bdb
    MOVSD ES:EDI,ESI                    ; 00408bdf
    MOVSD ES:EDI,ESI                    ; 00408be0
    MOVSD ES:EDI,ESI                    ; 00408be1
    MOV EAX,EBX                         ; 00408be2
    ADD ESP,0x24                        ; 00408be4
    POP EDI                             ; 00408be7
    POP EBX                             ; 00408be8
    RET                                 ; 00408be9

