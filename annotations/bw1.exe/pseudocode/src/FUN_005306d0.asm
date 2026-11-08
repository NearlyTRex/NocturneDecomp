; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005306d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
; undefined4       Stack[-0xb]:4  local_b
;
; XREF[2]:
;   FUN_0052cab0 at 0052cd0b
;   FUN_0052d450 at 0052d739
;
; Called Functions:
;   FUN_0052dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005306d0
        ;   Label: FUN_005306d0
    SUB ESP,0xc                         ; 005306d1
    MOV byte ptr [ESP + 0x4],0xd        ; 005306d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005306d9
    MOV dword ptr [ESP + 0x5],EAX       ; 005306dd
    MOV EAX,ESP                         ; 005306e1
    PUSH EAX                            ; 005306e3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005306e4
    PUSH ECX                            ; 005306e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005306e9
    MOV EDX,0x9                         ; 005306ed
    PUSH EBX                            ; 005306f2
    MOV dword ptr [ESP + 0xc],EDX       ; 005306f3
    CALL FUN_0052dfc0                   ; 005306f7
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dfc0()
    ADD ESP,0xc                         ; 005306fc
    ADD ESP,0xc                         ; 005306ff
    POP EBX                             ; 00530702
    RET                                 ; 00530703

