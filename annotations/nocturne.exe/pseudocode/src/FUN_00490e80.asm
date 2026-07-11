; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   FUN_00490e30 at 00490e64
;
; Called Functions:
;   FUN_00490de0
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490e80
        ;   Label: FUN_00490e80
    PUSH ESI                            ; 00490e81
    PUSH EDI                            ; 00490e82
    PUSH EBP                            ; 00490e83
    SUB ESP,0x1000                      ; 00490e84
    MOV EDX,dword ptr [ESP + 0x1030]    ; 00490e8a
    PUSH EDX                            ; 00490e91
    MOV ECX,dword ptr [ESP + 0x1030]    ; 00490e92
    PUSH ECX                            ; 00490e99
    LEA EAX,[ESP + 0x8]                 ; 00490e9a
    PUSH EAX                            ; 00490e9e
    CALL FUN_00563a08                   ; 00490e9f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00490ea4
    MOV EAX,ESP                         ; 00490ea7
    PUSH EAX                            ; 00490ea9
    MOV EBX,dword ptr [ESP + 0x102c]    ; 00490eaa
    PUSH EBX                            ; 00490eb1
    MOV ESI,dword ptr [ESP + 0x102c]    ; 00490eb2
    PUSH ESI                            ; 00490eb9
    MOV EDI,dword ptr [ESP + 0x102c]    ; 00490eba
    PUSH EDI                            ; 00490ec1
    MOV EBP,dword ptr [ESP + 0x102c]    ; 00490ec2
    PUSH EBP                            ; 00490ec9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 00490eca
    PUSH EAX                            ; 00490ed1
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00490ed2
    PUSH EDX                            ; 00490ed9
    CALL FUN_00490de0                   ; 00490eda
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00490de0()
    ADD ESP,0x1c                        ; 00490edf
    ADD ESP,0x1000                      ; 00490ee2
    POP EBP                             ; 00490ee8
    POP EDI                             ; 00490ee9
    POP ESI                             ; 00490eea
    POP EBX                             ; 00490eeb
    RET                                 ; 00490eec

