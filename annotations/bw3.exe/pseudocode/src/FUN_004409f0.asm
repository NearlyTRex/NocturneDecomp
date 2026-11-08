; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004409f0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   FUN_0044c130 at 0044c42f
;
; Called Functions:
;   FUN_00574150
;   FUN_005741d0
;   FUN_005743a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004409f0
        ;   Label: FUN_004409f0
    PUSH ESI                            ; 004409f1
    PUSH EDI                            ; 004409f2
    PUSH EBP                            ; 004409f3
    SUB ESP,0x14                        ; 004409f4
    MOV ESI,dword ptr [ESP + 0x30]      ; 004409f7
    MOV EDX,dword ptr [ESI]             ; 004409fb
    PUSH EDX                            ; 004409fd
    MOV ECX,dword ptr [ESP + 0x30]      ; 004409fe
    PUSH ECX                            ; 00440a02
    LEA EAX,[ESP + 0x8]                 ; 00440a03
    PUSH EAX                            ; 00440a07
    CALL FUN_00574150                   ; 00440a08
        ;   XREF to: 00574150 (UNCONDITIONAL_CALL)  ; undefined FUN_00574150()
    ADD ESP,0xc                         ; 00440a0d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00440a10
    PUSH EDI                            ; 00440a14
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00440a15
    PUSH EBP                            ; 00440a19
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00440a1a
    PUSH EAX                            ; 00440a1e
    LEA EAX,[ESP + 0xc]                 ; 00440a1f
    MOV EBX,dword ptr [ESP + 0x34]      ; 00440a23
    PUSH EAX                            ; 00440a27
    MOV EDX,dword ptr [ESP + 0x38]      ; 00440a28
    MOV EBX,dword ptr [EBX]             ; 00440a2c
    PUSH EDX                            ; 00440a2e
    CALL dword ptr [EBX + 0x10]         ; 00440a2f
    ADD ESP,0x14                        ; 00440a32
    MOV EBX,EAX                         ; 00440a35
    MOV EAX,ESP                         ; 00440a37
    PUSH EAX                            ; 00440a39
    CALL FUN_005743a0                   ; 00440a3a
        ;   XREF to: 005743a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005743a0()
    ADD ESP,0x4                         ; 00440a3f
    MOV ECX,dword ptr [ESI]             ; 00440a42
    PUSH 0x0                            ; 00440a44
    SUB ECX,EAX                         ; 00440a46
    LEA EAX,[ESP + 0x4]                 ; 00440a48
    PUSH EAX                            ; 00440a4c
    MOV dword ptr [ESI],ECX             ; 00440a4d
    CALL FUN_005741d0                   ; 00440a4f
        ;   XREF to: 005741d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005741d0()
    ADD ESP,0x8                         ; 00440a54
    MOV EAX,EBX                         ; 00440a57
    ADD ESP,0x14                        ; 00440a59
    POP EBP                             ; 00440a5c
    POP EDI                             ; 00440a5d
    POP ESI                             ; 00440a5e
    POP EBX                             ; 00440a5f
    RET                                 ; 00440a60

