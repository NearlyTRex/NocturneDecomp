; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ea80(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004bbf70 at 004bc817
;
; Referenced Globals:
;   undefined4 DAT_005d5832
;
; Called Functions:
;   FUN_00499c60
;   FUN_0049c190
;   FUN_005b8100
;   FUN_005b9600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ea80
        ;   Label: FUN_0049ea80
    PUSH ESI                            ; 0049ea81
    PUSH EDI                            ; 0049ea82
    SUB ESP,0x104                       ; 0049ea83
    MOV EDI,dword ptr [ESP + 0x118]     ; 0049ea89
    MOV ECX,dword ptr [ESP + 0x114]     ; 0049ea90
    XOR EDX,EDX                         ; 0049ea97
    PUSH ECX                            ; 0049ea99
    MOV dword ptr [ESP + 0x104],EDX     ; 0049ea9a
    CALL FUN_0049c190                   ; 0049eaa1
        ;   XREF to: 0049c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c190()
    ADD ESP,0x4                         ; 0049eaa6
    PUSH EDI                            ; 0049eaa9
    PUSH 0xff                           ; 0049eaaa
    LEA EBX,[ESP + 0x8]                 ; 0049eaaf
    PUSH EBX                            ; 0049eab3
    CALL FUN_005b9600                   ; 0049eab4
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 0049eab9
    LEA EBX,[ESP + 0x100]               ; 0049eabc
    PUSH EBX                            ; 0049eac3
    PUSH 0x5d5832                       ; 0049eac4 | DAT_005d5832
    PUSH EDI                            ; 0049eac9
    MOV EBX,0x1c9c4d4                   ; 0049eaca
    CALL FUN_005b8100                   ; 0049eacf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    LEA ESI,[EBX + 0x8c0]               ; 0049ead4
    ADD ESP,0xc                         ; 0049eada
    PUSH EDI                            ; 0049eadd
        ;   Label: LAB_0049eadd
    PUSH EBX                            ; 0049eade
    CALL FUN_00499c60                   ; 0049eadf
        ;   XREF to: 00499c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00499c60()
    ADD EBX,0x70                        ; 0049eae4
    ADD ESP,0x8                         ; 0049eae7
    CMP EBX,ESI                         ; 0049eaea
    JNZ 0x0049eadd                      ; 0049eaec
        ;   XREF to: 0049eadd (CONDITIONAL_JUMP)  ; LAB_0049eadd
    ADD ESP,0x104                       ; 0049eaee
    POP EDI                             ; 0049eaf4
    POP ESI                             ; 0049eaf5
    POP EBX                             ; 0049eaf6
    RET                                 ; 0049eaf7

