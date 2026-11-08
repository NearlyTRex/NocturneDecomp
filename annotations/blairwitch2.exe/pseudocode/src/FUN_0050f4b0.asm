; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
; undefined4       Stack[-0xb]:4  local_b
;
; XREF[2]:
;   FUN_0050b8d0 at 0050bb32
;   FUN_0050c280 at 0050c554
;
; Called Functions:
;   FUN_0050cdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f4b0
        ;   Label: FUN_0050f4b0
    SUB ESP,0xc                         ; 0050f4b1
    MOV byte ptr [ESP + 0x4],0xd        ; 0050f4b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050f4b9
    MOV dword ptr [ESP + 0x5],EAX       ; 0050f4bd
    MOV EAX,ESP                         ; 0050f4c1
    PUSH EAX                            ; 0050f4c3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050f4c4
    PUSH ECX                            ; 0050f4c8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050f4c9
    MOV EDX,0x9                         ; 0050f4cd
    PUSH EBX                            ; 0050f4d2
    MOV dword ptr [ESP + 0xc],EDX       ; 0050f4d3
    CALL FUN_0050cdf0                   ; 0050f4d7
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050cdf0()
    ADD ESP,0xc                         ; 0050f4dc
    ADD ESP,0xc                         ; 0050f4df
    POP EBX                             ; 0050f4e2
    RET                                 ; 0050f4e3

