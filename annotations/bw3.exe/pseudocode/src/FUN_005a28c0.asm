; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a28c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[137]:
;   FUN_00402940 at 004029c3
;   FUN_0040cab0 at 0040cd25
;   FUN_0040d460 at 0040d49c
;   FUN_00410030 at 00410066
;   FUN_00412ee0 at 00412f03
;   FUN_004208d0 at 00420cc3
;   FUN_004350a0 at 00435190
;   FUN_00437e10 at 00437f0c
;   FUN_00438ef0 at 00438f45
;   FUN_0044f750 at 0044f7c1
;   ... and 127 more
;
; Called Functions:
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a28c0
        ;   Label: FUN_005a28c0
    SUB ESP,0x4                         ; 005a28c1
    LEA EAX,[ESP + 0x14]                ; 005a28c4
    MOV dword ptr [ESP],EAX             ; 005a28c8
    MOV EAX,ESP                         ; 005a28cb
    PUSH EAX                            ; 005a28cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a28ce
    PUSH EDX                            ; 005a28d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a28d3
    PUSH EBX                            ; 005a28d7
    CALL FUN_005a2898                   ; 005a28d8
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 005a28dd
    ADD ESP,0x4                         ; 005a28e0
    POP EBX                             ; 005a28e3
    RET                                 ; 005a28e4

