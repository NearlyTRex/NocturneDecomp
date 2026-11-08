; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585740(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   FUN_00444ac0 at 00444b01
;   FUN_0054e170 at 0054e30a
;
; Called Functions:
;   FUN_005837e0
;   FUN_005855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585740
        ;   Label: FUN_00585740
    PUSH EDI                            ; 00585741
    SUB ESP,0x30                        ; 00585742
    MOV EBX,ESI                         ; 00585745
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00585747
    PUSH EDX                            ; 0058574b
    LEA EAX,[ESP + 0x4]                 ; 0058574c
    PUSH EAX                            ; 00585750
    CALL FUN_005855f0                   ; 00585751
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005855f0()
    ADD ESP,0x8                         ; 00585756
    MOV EAX,ESP                         ; 00585759
    PUSH EAX                            ; 0058575b
    MOV EDI,ESI                         ; 0058575c
    LEA ESI,[ESP + 0x4]                 ; 0058575e
    CALL FUN_005837e0                   ; 00585762
        ;   XREF to: 005837e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005837e0()
    MOV ECX,0xc                         ; 00585767
    ADD ESP,0x4                         ; 0058576c
    MOVSD.REP ES:EDI,ESI                ; 0058576f
    MOV EAX,EBX                         ; 00585771
    ADD ESP,0x30                        ; 00585773
    POP EDI                             ; 00585776
    POP EBX                             ; 00585777
    RET                                 ; 00585778

