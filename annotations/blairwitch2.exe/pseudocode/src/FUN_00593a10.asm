; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593a10(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[12]:
;   FUN_0040ded0 at 0040e00c
;   FUN_00438c40 at 00438c81
;   FUN_00450c60 at 004517b2
;   FUN_004cdb60 at 004cdcb1
;   FUN_00546f40 at 005470da
;   FUN_0059c680 at 0059c7e3
;   FUN_005a0bd0 at 005a0dc1
;   FUN_005a61f0 at 005a646a
;   FUN_005a6ed0 at 005a757b
;   FUN_005ab260 at 005ab638
;   ... and 2 more
;
; Called Functions:
;   FUN_00591ab0
;   FUN_005938c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593a10
        ;   Label: FUN_00593a10
    PUSH EDI                            ; 00593a11
    SUB ESP,0x30                        ; 00593a12
    MOV EBX,ESI                         ; 00593a15
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00593a17
    PUSH EDX                            ; 00593a1b
    LEA EAX,[ESP + 0x4]                 ; 00593a1c
    PUSH EAX                            ; 00593a20
    CALL FUN_005938c0                   ; 00593a21
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005938c0()
    ADD ESP,0x8                         ; 00593a26
    MOV EAX,ESP                         ; 00593a29
    PUSH EAX                            ; 00593a2b
    MOV EDI,ESI                         ; 00593a2c
    LEA ESI,[ESP + 0x4]                 ; 00593a2e
    CALL FUN_00591ab0                   ; 00593a32
        ;   XREF to: 00591ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591ab0()
    MOV ECX,0xc                         ; 00593a37
    ADD ESP,0x4                         ; 00593a3c
    MOVSD.REP ES:EDI,ESI                ; 00593a3f
    MOV EAX,EBX                         ; 00593a41
    ADD ESP,0x30                        ; 00593a43
    POP EDI                             ; 00593a46
    POP EBX                             ; 00593a47
    RET                                 ; 00593a48

