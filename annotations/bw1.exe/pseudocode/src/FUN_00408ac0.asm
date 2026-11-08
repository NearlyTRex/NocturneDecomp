; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408ac0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[72]:
;   FUN_00408ec0 at 00408f56
;   FUN_00409170 at 004093bb
;   FUN_00409f20 at 00409ff4
;   FUN_0040fa70 at 0040fadb
;   FUN_0040fc00 at 0040fc4b
;   FUN_00413c40 at 00413f52
;   FUN_00419b90 at 00419e2b
;   FUN_00422000 at 004223f1
;   FUN_0042ccf0 at 0042d36d
;   FUN_0042d750 at 0042d7b8
;   ... and 62 more
;
; Called Functions:
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ac0
        ;   Label: FUN_00408ac0
    PUSH EDI                            ; 00408ac1
    SUB ESP,0xc                         ; 00408ac2
    MOV EBX,ESI                         ; 00408ac5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408ac7
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408acb
    PUSH EDX                            ; 00408acf
    ADD ESI,0x3c                        ; 00408ad0
    PUSH ESI                            ; 00408ad3
    LEA ESI,[ESP + 0x8]                 ; 00408ad4
    MOV EDI,EBX                         ; 00408ad8
    CALL FUN_0045f690                   ; 00408ada
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x8]                 ; 00408adf
    ADD ESP,0x8                         ; 00408ae3
    MOVSD ES:EDI,ESI                    ; 00408ae6
    MOVSD ES:EDI,ESI                    ; 00408ae7
    MOVSD ES:EDI,ESI                    ; 00408ae8
    MOV EAX,EBX                         ; 00408ae9
    ADD ESP,0xc                         ; 00408aeb
    POP EDI                             ; 00408aee
    POP EBX                             ; 00408aef
    RET                                 ; 00408af0

