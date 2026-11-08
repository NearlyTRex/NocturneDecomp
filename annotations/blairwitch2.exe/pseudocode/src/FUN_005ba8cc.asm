; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba8cc(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[21]:
;   FUN_0047d730 at 0047d79c
;   FUN_0047d800 at 0047d87a
;   FUN_0047d900 at 0047d986
;   FUN_00481620 at 0048169f
;   FUN_00488e30 at 00488e6d
;   FUN_00489670 at 004898c1
;   FUN_0048e7e0 at 0048ea33
;   FUN_004a2cc0 at 004a2dd9
;   FUN_004a41b0 at 004a4c24
;   FUN_004d8b20 at 004d8b6e
;   ... and 11 more
;
; Called Functions:
;   FUN_005ba890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba8cc
        ;   Label: FUN_005ba8cc
    SUB ESP,0x4                         ; 005ba8cd
    LEA EAX,[ESP + 0x14]                ; 005ba8d0
    MOV dword ptr [ESP],EAX             ; 005ba8d4
    MOV EAX,ESP                         ; 005ba8d7
    PUSH EAX                            ; 005ba8d9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ba8da
    PUSH EDX                            ; 005ba8de
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ba8df
    PUSH EBX                            ; 005ba8e3
    CALL FUN_005ba890                   ; 005ba8e4
        ;   XREF to: 005ba890 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba890()
    ADD ESP,0xc                         ; 005ba8e9
    ADD ESP,0x4                         ; 005ba8ec
    POP EBX                             ; 005ba8ef
    RET                                 ; 005ba8f0

