; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539ac0(undefined4 param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_004246e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539ac0
        ;   Label: FUN_00539ac0
    PUSH ESI                            ; 00539ac1
    SUB ESP,0xc                         ; 00539ac2
    MOV EDX,dword ptr [ESP + 0x20]      ; 00539ac5
    MOV EAX,dword ptr [EDX]             ; 00539ac9
    MOV dword ptr [ESP],EAX             ; 00539acb
    LEA EAX,[EDX + 0x4]                 ; 00539ace
    MOV EAX,dword ptr [EAX]             ; 00539ad1
    MOV dword ptr [ESP + 0x4],EAX       ; 00539ad3
    LEA EAX,[EDX + 0x8]                 ; 00539ad7
    MOV EAX,dword ptr [EAX]             ; 00539ada
    MOV dword ptr [ESP + 0x8],EAX       ; 00539adc
    MOV EAX,ESP                         ; 00539ae0
    PUSH EAX                            ; 00539ae2
    MOV EBX,dword ptr [ESP + 0x20]      ; 00539ae3
    PUSH EBX                            ; 00539ae7
    MOV ESI,dword ptr [ESP + 0x20]      ; 00539ae8
    XOR EDX,EDX                         ; 00539aec
    PUSH ESI                            ; 00539aee
    MOV dword ptr [ESP + 0xc],EDX       ; 00539aef
    MOV dword ptr [ESP + 0x14],EDX      ; 00539af3
    CALL FUN_004246e0                   ; 00539af7
        ;   XREF to: 004246e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004246e0()
    ADD ESP,0xc                         ; 00539afc
    ADD ESP,0xc                         ; 00539aff
    POP ESI                             ; 00539b02
    POP EBX                             ; 00539b03
    RET                                 ; 00539b04

