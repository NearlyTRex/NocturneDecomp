; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055ca30(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
; Referenced Globals:
;   undefined4 DAT_0059833e
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055ca30
        ;   Label: FUN_0055ca30
    PUSH EBP                            ; 0055ca31
    SUB ESP,0x30                        ; 0055ca32
    MOV EAX,ESI                         ; 0055ca35
    FLD float ptr [ESP + 0x3c]          ; 0055ca37
    FMUL double ptr [0x0059833e]        ; 0055ca3b | DAT_0059833e
    MOV EDX,0x3f800000                  ; 0055ca41
    MOV EBP,0xbf800000                  ; 0055ca46
    MOV EDI,ESI                         ; 0055ca4b
    XOR ECX,ECX                         ; 0055ca4d
    MOV ESI,ESP                         ; 0055ca4f
    MOV dword ptr [ESP],EDX             ; 0055ca51
    MOV dword ptr [ESP + 0x4],ECX       ; 0055ca54
    MOV dword ptr [ESP + 0x8],ECX       ; 0055ca58
    MOV dword ptr [ESP + 0xc],ECX       ; 0055ca5c
    MOV dword ptr [ESP + 0x10],ECX      ; 0055ca60
    MOV dword ptr [ESP + 0x14],EBP      ; 0055ca64
    MOV dword ptr [ESP + 0x18],ECX      ; 0055ca68
    MOV dword ptr [ESP + 0x20],ECX      ; 0055ca6c
    MOV dword ptr [ESP + 0x24],ECX      ; 0055ca70
    MOV dword ptr [ESP + 0x28],EDX      ; 0055ca74
    MOV dword ptr [ESP + 0x2c],ECX      ; 0055ca78
    MOV ECX,0xc                         ; 0055ca7c
    FSTP float ptr [ESP + 0x1c]         ; 0055ca81
    MOVSD.REP ES:EDI,ESI                ; 0055ca85
    ADD ESP,0x30                        ; 0055ca87
    POP EBP                             ; 0055ca8a
    POP EDI                             ; 0055ca8b
    RET                                 ; 0055ca8c

