; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5b9c(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[21]:
;   FUN_0047e940 at 0047e9ac
;   FUN_0047ea10 at 0047ea8a
;   FUN_0047eb10 at 0047eb96
;   FUN_00482820 at 0048289f
;   FUN_0048ba80 at 0048babd
;   FUN_0048c2e0 at 0048c599
;   FUN_00491f40 at 00492193
;   FUN_004a9330 at 004a9449
;   FUN_004aa810 at 004ab30c
;   FUN_004d8c30 at 004d8c7e
;   ... and 11 more
;
; Called Functions:
;   FUN_005a5b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b9c
        ;   Label: FUN_005a5b9c
    SUB ESP,0x4                         ; 005a5b9d
    LEA EAX,[ESP + 0x14]                ; 005a5ba0
    MOV dword ptr [ESP],EAX             ; 005a5ba4
    MOV EAX,ESP                         ; 005a5ba7
    PUSH EAX                            ; 005a5ba9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5baa
    PUSH EDX                            ; 005a5bae
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a5baf
    PUSH EBX                            ; 005a5bb3
    CALL FUN_005a5b60                   ; 005a5bb4
        ;   XREF to: 005a5b60 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b60()
    ADD ESP,0xc                         ; 005a5bb9
    ADD ESP,0x4                         ; 005a5bbc
    POP EBX                             ; 005a5bbf
    RET                                 ; 005a5bc0

