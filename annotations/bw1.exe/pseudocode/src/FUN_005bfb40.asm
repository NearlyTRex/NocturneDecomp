; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bfb40(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[140]:
;   FUN_00402940 at 004029c3
;   FUN_0040c870 at 0040cae5
;   FUN_0040d220 at 0040d25c
;   FUN_00415830 at 00415866
;   FUN_00417230 at 00417253
;   FUN_004232c0 at 004236a9
;   FUN_00437490 at 00437580
;   FUN_0043a200 at 0043a2fc
;   FUN_0043b2e0 at 0043b335
;   FUN_00453610 at 00453681
;   ... and 130 more
;
; Called Functions:
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb40
        ;   Label: FUN_005bfb40
    SUB ESP,0x4                         ; 005bfb41
    LEA EAX,[ESP + 0x14]                ; 005bfb44
    MOV dword ptr [ESP],EAX             ; 005bfb48
    MOV EAX,ESP                         ; 005bfb4b
    PUSH EAX                            ; 005bfb4d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bfb4e
    PUSH EDX                            ; 005bfb52
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bfb53
    PUSH EBX                            ; 005bfb57
    CALL FUN_005bfb18                   ; 005bfb58
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 005bfb5d
    ADD ESP,0x4                         ; 005bfb60
    POP EBX                             ; 005bfb63
    RET                                 ; 005bfb64

