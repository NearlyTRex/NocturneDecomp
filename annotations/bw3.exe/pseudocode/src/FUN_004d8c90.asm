; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8c90(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[3]:
;   FUN_004d95c0 at 004d9602
;   FUN_00529a70 at 0052efa8
;   FUN_00559520 at 005595d4
;
; Referenced Globals:
;   undefined4 DAT_005c58b4
;
; Called Functions:
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c90
        ;   Label: FUN_004d8c90
    SUB ESP,0x64                        ; 004d8c91
    MOV EDX,dword ptr [ESP + 0x74]      ; 004d8c94
    PUSH EDX                            ; 004d8c98
    PUSH 0x5c58b4                       ; 004d8c99 | DAT_005c58b4
    LEA EAX,[ESP + 0x8]                 ; 004d8c9e
    PUSH EAX                            ; 004d8ca2
    CALL FUN_005a28c0                   ; 004d8ca3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004d8ca8
    MOV EAX,ESP                         ; 004d8cab
    PUSH EAX                            ; 004d8cad
    MOV ECX,dword ptr [ESP + 0x74]      ; 004d8cae
    MOV EDX,dword ptr [ESP + 0x70]      ; 004d8cb2
    PUSH ECX                            ; 004d8cb6
    MOV EBX,dword ptr [ESP + 0x74]      ; 004d8cb7
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8cbb
    PUSH EBX                            ; 004d8cc1
    CALL dword ptr [EDX + 0x8]          ; 004d8cc2
    ADD ESP,0xc                         ; 004d8cc5
    ADD ESP,0x64                        ; 004d8cc8
    POP EBX                             ; 004d8ccb
    RET                                 ; 004d8ccc

