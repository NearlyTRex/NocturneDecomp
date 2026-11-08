; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8bc0(int param_1,undefined4 param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x74]:8  local_74
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   FUN_00553680 at 005537d4
;
; Referenced Globals:
;   undefined4 DAT_005dad90
;   undefined4 DAT_005dad93
;
; Called Functions:
;   FUN_005b7790
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8bc0
        ;   Label: FUN_004d8bc0
    PUSH ESI                            ; 004d8bc1
    SUB ESP,0x64                        ; 004d8bc2
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d8bc5
    SUB ESP,0x8                         ; 004d8bc9
    FLD float ptr [EAX]                 ; 004d8bcc
    FSTP double ptr [ESP]               ; 004d8bce
    PUSH 0x5dad90                       ; 004d8bd1 | DAT_005dad90
    LEA EAX,[ESP + 0xc]                 ; 004d8bd6
    PUSH EAX                            ; 004d8bda
    CALL FUN_005b7790                   ; 004d8bdb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004d8be0
    PUSH 0x64                           ; 004d8be3
    LEA EAX,[ESP + 0x4]                 ; 004d8be5
    PUSH EAX                            ; 004d8be9
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004d8bea
    MOV EDX,dword ptr [ESP + 0x78]      ; 004d8bee
    PUSH ECX                            ; 004d8bf2
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004d8bf3
    MOV EDX,dword ptr [EDX + 0x200]     ; 004d8bf7
    PUSH EBX                            ; 004d8bfd
    CALL dword ptr [EDX + 0x4]          ; 004d8bfe
    ADD ESP,0x10                        ; 004d8c01
    MOV ESI,dword ptr [ESP + 0x78]      ; 004d8c04
    PUSH ESI                            ; 004d8c08
    PUSH 0x5dad93                       ; 004d8c09 | DAT_005dad93
    LEA EAX,[ESP + 0x8]                 ; 004d8c0e
    PUSH EAX                            ; 004d8c12
    CALL FUN_005ba8cc                   ; 004d8c13
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0xc                         ; 004d8c18
    ADD ESP,0x64                        ; 004d8c1b
    POP ESI                             ; 004d8c1e
    POP EBX                             ; 004d8c1f
    RET                                 ; 004d8c20

