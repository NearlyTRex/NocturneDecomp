; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005353b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_004ba540 at 004ba707
;   FUN_004bb100 at 004bb5d9
;
; Called Functions:
;   FUN_00448d70
;   FUN_00534890
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 005353b0
        ;   Label: FUN_005353b0
    PUSH EDX                            ; 005353b4
    PUSH 0x2038f4c                      ; 005353b5
    CALL FUN_00448d70                   ; 005353ba
        ;   XREF to: 00448d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00448d70()
    ADD ESP,0x8                         ; 005353bf
    MOV EAX,dword ptr [ESP + 0x4]       ; 005353c2
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 005353c6
    PUSH ECX                            ; 005353cc
    PUSH EAX                            ; 005353cd
    CALL FUN_00534890                   ; 005353ce
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; undefined FUN_00534890()
    ADD ESP,0x8                         ; 005353d3
    RET                                 ; 005353d6

