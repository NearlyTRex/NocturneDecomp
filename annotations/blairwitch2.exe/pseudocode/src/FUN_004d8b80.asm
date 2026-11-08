; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8b80(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[3]:
;   FUN_004d94d0 at 004d9512
;   FUN_00522350 at 005285d0
;   FUN_00553980 at 00553a34
;
; Referenced Globals:
;   undefined4 DAT_005dad8d
;
; Called Functions:
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8b80
        ;   Label: FUN_004d8b80
    SUB ESP,0x64                        ; 004d8b81
    MOV EDX,dword ptr [ESP + 0x74]      ; 004d8b84
    PUSH EDX                            ; 004d8b88
    PUSH 0x5dad8d                       ; 004d8b89 | DAT_005dad8d
    LEA EAX,[ESP + 0x8]                 ; 004d8b8e
    PUSH EAX                            ; 004d8b92
    CALL FUN_005b7790                   ; 004d8b93
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004d8b98
    MOV EAX,ESP                         ; 004d8b9b
    PUSH EAX                            ; 004d8b9d
    MOV ECX,dword ptr [ESP + 0x74]      ; 004d8b9e
    MOV EDX,dword ptr [ESP + 0x70]      ; 004d8ba2
    PUSH ECX                            ; 004d8ba6
    MOV EBX,dword ptr [ESP + 0x74]      ; 004d8ba7
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8bab
    PUSH EBX                            ; 004d8bb1
    CALL dword ptr [EDX + 0x8]          ; 004d8bb2
    ADD ESP,0xc                         ; 004d8bb5
    ADD ESP,0x64                        ; 004d8bb8
    POP EBX                             ; 004d8bbb
    RET                                 ; 004d8bbc

