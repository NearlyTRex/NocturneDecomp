; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
; undefined4       Stack[-0xb]:4  local_b
;
; XREF[2]:
;   FUN_005043b0 at 00504612
;   FUN_00504d60 at 00505034
;
; Called Functions:
;   FUN_005058d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507f90
        ;   Label: FUN_00507f90
    SUB ESP,0xc                         ; 00507f91
    MOV byte ptr [ESP + 0x4],0xd        ; 00507f94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00507f99
    MOV dword ptr [ESP + 0x5],EAX       ; 00507f9d
    MOV EAX,ESP                         ; 00507fa1
    PUSH EAX                            ; 00507fa3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00507fa4
    PUSH ECX                            ; 00507fa8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00507fa9
    MOV EDX,0x9                         ; 00507fad
    PUSH EBX                            ; 00507fb2
    MOV dword ptr [ESP + 0xc],EDX       ; 00507fb3
    CALL FUN_005058d0                   ; 00507fb7
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005058d0()
    ADD ESP,0xc                         ; 00507fbc
    ADD ESP,0xc                         ; 00507fbf
    POP EBX                             ; 00507fc2
    RET                                 ; 00507fc3

