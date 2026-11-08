; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4d10(int param_1,undefined4 param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[4]:
;   FUN_004d7250 at 004d733b
;   FUN_004f4f50 at 004f4fab
;   FUN_00544460 at 005475cc
;   FUN_005760b0 at 005761c4
;
; Referenced Globals:
;   undefined4 DAT_005e58e8
;   undefined4 DAT_005e58eb
;
; Called Functions:
;   FUN_005bfb40
;   FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4d10
        ;   Label: FUN_004f4d10
    PUSH ESI                            ; 004f4d11
    SUB ESP,0x64                        ; 004f4d12
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f4d15
    MOV EDX,dword ptr [EAX]             ; 004f4d19
    PUSH EDX                            ; 004f4d1b
    PUSH 0x5e58e8                       ; 004f4d1c | DAT_005e58e8
    LEA EAX,[ESP + 0x8]                 ; 004f4d21
    PUSH EAX                            ; 004f4d25
    CALL FUN_005bfb40                   ; 004f4d26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004f4d2b
    PUSH 0x64                           ; 004f4d2e
    LEA EAX,[ESP + 0x4]                 ; 004f4d30
    PUSH EAX                            ; 004f4d34
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004f4d35
    MOV EDX,dword ptr [ESP + 0x78]      ; 004f4d39
    PUSH ECX                            ; 004f4d3d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004f4d3e
    MOV EDX,dword ptr [EDX + 0x200]     ; 004f4d42
    PUSH EBX                            ; 004f4d48
    CALL dword ptr [EDX + 0x4]          ; 004f4d49
    ADD ESP,0x10                        ; 004f4d4c
    MOV ESI,dword ptr [ESP + 0x78]      ; 004f4d4f
    PUSH ESI                            ; 004f4d53
    PUSH 0x5e58eb                       ; 004f4d54 | DAT_005e58eb
    LEA EAX,[ESP + 0x8]                 ; 004f4d59
    PUSH EAX                            ; 004f4d5d
    CALL FUN_005c2cac                   ; 004f4d5e
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0xc                         ; 004f4d63
    ADD ESP,0x64                        ; 004f4d66
    POP ESI                             ; 004f4d69
    POP EBX                             ; 004f4d6a
    RET                                 ; 004f4d6b

