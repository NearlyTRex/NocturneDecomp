; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408b40(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[17]:
;   FUN_004091b0 at 00409307
;   FUN_0041ff20 at 0041ff5b
;   FUN_00425da0 at 00426723
;   FUN_004310e0 at 0043124c
;   FUN_00432330 at 00432835
;   FUN_00433220 at 0043329c
;   FUN_00455080 at 00455a29
;   FUN_00497290 at 004974f2
;   FUN_004a2e20 at 004a34c9
;   FUN_004ad950 at 004ad9f1
;   ... and 7 more
;
; Called Functions:
;   FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b40
        ;   Label: FUN_00408b40
    PUSH EDI                            ; 00408b41
    SUB ESP,0xc                         ; 00408b42
    MOV EBX,ESI                         ; 00408b45
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408b47
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408b4b
    PUSH EDX                            ; 00408b4f
    ADD ESI,0x3c                        ; 00408b50
    PUSH ESI                            ; 00408b53
    LEA ESI,[ESP + 0x8]                 ; 00408b54
    MOV EDI,EBX                         ; 00408b58
    CALL FUN_0045b870                   ; 00408b5a
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x8]                 ; 00408b5f
    ADD ESP,0x8                         ; 00408b63
    MOVSD ES:EDI,ESI                    ; 00408b66
    MOVSD ES:EDI,ESI                    ; 00408b67
    MOVSD ES:EDI,ESI                    ; 00408b68
    MOV EAX,EBX                         ; 00408b69
    ADD ESP,0xc                         ; 00408b6b
    POP EDI                             ; 00408b6e
    POP EBX                             ; 00408b6f
    RET                                 ; 00408b70

