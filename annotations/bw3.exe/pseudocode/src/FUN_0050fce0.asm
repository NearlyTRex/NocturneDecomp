; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050fce0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0050fd90 at 0050fd96
;
; Called Functions:
;   FUN_00435010
;   FUN_0050fd30
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0050fce0
        ;   Label: FUN_0050fce0
    MOV EAX,ESP                         ; 0050fce6
    PUSH EAX                            ; 0050fce8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0050fce9
    PUSH EDX                            ; 0050fcf0
    CALL FUN_00435010                   ; 0050fcf1
        ;   XREF to: 00435010 (UNCONDITIONAL_CALL)  ; undefined FUN_00435010()
    ADD ESP,0x8                         ; 0050fcf6
    MOV EAX,ESP                         ; 0050fcf9
    PUSH EAX                            ; 0050fcfb
    MOV ECX,dword ptr [ESP + 0x108]     ; 0050fcfc
    PUSH ECX                            ; 0050fd03
    CALL FUN_0050fd30                   ; 0050fd04
        ;   XREF to: 0050fd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fd30()
    ADD ESP,0x8                         ; 0050fd09
    ADD ESP,0x100                       ; 0050fd0c
    LEA EAX,[EAX]                       ; 0050fd12
    LEA EDX,[EDX]                       ; 0050fd18
    MOV EAX,EAX                         ; 0050fd1e
    RET                                 ; 0050fd20

