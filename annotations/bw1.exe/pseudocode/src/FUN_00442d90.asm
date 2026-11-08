; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00442d90(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   FUN_0044fff0 at 004502ef
;
; Called Functions:
;   FUN_005a1160
;   FUN_005a11e0
;   FUN_005a13b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442d90
        ;   Label: FUN_00442d90
    PUSH ESI                            ; 00442d91
    PUSH EDI                            ; 00442d92
    PUSH EBP                            ; 00442d93
    SUB ESP,0x14                        ; 00442d94
    MOV ESI,dword ptr [ESP + 0x30]      ; 00442d97
    MOV EDX,dword ptr [ESI]             ; 00442d9b
    PUSH EDX                            ; 00442d9d
    MOV ECX,dword ptr [ESP + 0x30]      ; 00442d9e
    PUSH ECX                            ; 00442da2
    LEA EAX,[ESP + 0x8]                 ; 00442da3
    PUSH EAX                            ; 00442da7
    CALL FUN_005a1160                   ; 00442da8
        ;   XREF to: 005a1160 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1160()
    ADD ESP,0xc                         ; 00442dad
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00442db0
    PUSH EDI                            ; 00442db4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00442db5
    PUSH EBP                            ; 00442db9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00442dba
    PUSH EAX                            ; 00442dbe
    LEA EAX,[ESP + 0xc]                 ; 00442dbf
    MOV EBX,dword ptr [ESP + 0x34]      ; 00442dc3
    PUSH EAX                            ; 00442dc7
    MOV EDX,dword ptr [ESP + 0x38]      ; 00442dc8
    MOV EBX,dword ptr [EBX]             ; 00442dcc
    PUSH EDX                            ; 00442dce
    CALL dword ptr [EBX + 0x10]         ; 00442dcf
    ADD ESP,0x14                        ; 00442dd2
    MOV EBX,EAX                         ; 00442dd5
    MOV EAX,ESP                         ; 00442dd7
    PUSH EAX                            ; 00442dd9
    CALL FUN_005a13b0                   ; 00442dda
        ;   XREF to: 005a13b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a13b0()
    ADD ESP,0x4                         ; 00442ddf
    MOV ECX,dword ptr [ESI]             ; 00442de2
    PUSH 0x0                            ; 00442de4
    SUB ECX,EAX                         ; 00442de6
    LEA EAX,[ESP + 0x4]                 ; 00442de8
    PUSH EAX                            ; 00442dec
    MOV dword ptr [ESI],ECX             ; 00442ded
    CALL FUN_005a11e0                   ; 00442def
        ;   XREF to: 005a11e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a11e0()
    ADD ESP,0x8                         ; 00442df4
    MOV EAX,EBX                         ; 00442df7
    ADD ESP,0x14                        ; 00442df9
    POP EBP                             ; 00442dfc
    POP EDI                             ; 00442dfd
    POP ESI                             ; 00442dfe
    POP EBX                             ; 00442dff
    RET                                 ; 00442e00

