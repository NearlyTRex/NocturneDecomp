; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb0a0(undefined4 param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_005311e0 at 00531365
;
; Referenced Globals:
;   undefined4 DAT_005fa1b0
;   undefined4 DAT_005fa1b8
;
; Called Functions:
;   FUN_004fa9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb0a0
        ;   Label: FUN_004fb0a0
    PUSH EDI                            ; 004fb0a1
    PUSH EBP                            ; 004fb0a2
    SUB ESP,0x3c                        ; 004fb0a3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fb0a6
    MOV EBP,ESI                         ; 004fb0aa
    LEA EBX,[ESP + 0x24]                ; 004fb0ac
    FILD dword ptr [EAX]                ; 004fb0b0
    FMUL float ptr [0x005fa1b8]         ; 004fb0b2 | DAT_005fa1b8
    FSTP float ptr [EBX]                ; 004fb0b8
    FILD dword ptr [EAX + 0x4]          ; 004fb0ba
    FMUL float ptr [0x005fa1b8]         ; 004fb0bd | DAT_005fa1b8
    FSTP float ptr [EBX + 0x4]          ; 004fb0c3
    FILD dword ptr [EAX + 0x8]          ; 004fb0c6
    FMUL float ptr [0x005fa1b8]         ; 004fb0c9 | DAT_005fa1b8
    FSTP float ptr [EBX + 0x8]          ; 004fb0cf
    LEA EAX,[ESP + 0x24]                ; 004fb0d2
    PUSH EAX                            ; 004fb0d6
    MOV EDX,dword ptr [ESP + 0x50]      ; 004fb0d7
    LEA ESI,[ESP + 0x34]                ; 004fb0db
    PUSH EDX                            ; 004fb0df
    LEA EDI,[ESP + 0x14]                ; 004fb0e0
    LEA EBX,[ESP + 0x8]                 ; 004fb0e4
    CALL FUN_004fa9d0                   ; 004fb0e8
        ;   XREF to: 004fa9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa9d0()
    LEA ESI,[ESP + 0x38]                ; 004fb0ed
    ADD ESP,0x8                         ; 004fb0f1
    LEA EAX,[ESP + 0xc]                 ; 004fb0f4
    MOVSD ES:EDI,ESI                    ; 004fb0f8
    MOVSD ES:EDI,ESI                    ; 004fb0f9
    MOVSD ES:EDI,ESI                    ; 004fb0fa
    CMP EBX,EAX                         ; 004fb0fb
    JZ 0x004fb116                       ; 004fb0fd
        ;   XREF to: 004fb116 (CONDITIONAL_JUMP)  ; LAB_004fb116
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fb0ff
    MOV dword ptr [ESP],EAX             ; 004fb103
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fb106
    MOV dword ptr [ESP + 0x4],EAX       ; 004fb10a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fb10e
    MOV dword ptr [ESP + 0x8],EAX       ; 004fb112
    LEA EBX,[ESP + 0x18]                ; 004fb116
        ;   Label: LAB_004fb116
    MOV EAX,ESP                         ; 004fb11a
    LEA ESI,[ESP + 0x18]                ; 004fb11c
    MOV EDI,EBP                         ; 004fb120
    FLD float ptr [EAX]                 ; 004fb122
    FMUL float ptr [0x005fa1b0]         ; 004fb124 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fb12a
    FLD float ptr [EAX + 0x4]           ; 004fb12c
    FMUL float ptr [0x005fa1b0]         ; 004fb12f | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fb135
    FLD float ptr [EAX + 0x8]           ; 004fb138
    FMUL float ptr [0x005fa1b0]         ; 004fb13b | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fb141
    MOVSD ES:EDI,ESI                    ; 004fb144
    MOVSD ES:EDI,ESI                    ; 004fb145
    MOVSD ES:EDI,ESI                    ; 004fb146
    MOV EAX,EBP                         ; 004fb147
    ADD ESP,0x3c                        ; 004fb149
    POP EBP                             ; 004fb14c
    POP EDI                             ; 004fb14d
    POP EBX                             ; 004fb14e
    RET                                 ; 004fb14f

