; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563c90(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[90]:
;   FUN_00403630 at 004036a1
;   FUN_0040e3c0 at 0040e49d
;   FUN_0041f6e0 at 0041f9a6
;   FUN_0042d240 at 0042d27b
;   FUN_00446810 at 0044687d
;   FUN_0044c310 at 0044c344
;   FUN_00456700 at 0045671f
;   FUN_0046ed30 at 0046ed4e
;   FUN_00471360 at 004713b3
;   FUN_00471430 at 00471491
;   ... and 80 more
;
; Called Functions:
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563c90
        ;   Label: FUN_00563c90
    SUB ESP,0x4                         ; 00563c91
    LEA EAX,[ESP + 0x14]                ; 00563c94
    MOV dword ptr [ESP],EAX             ; 00563c98
    MOV EAX,ESP                         ; 00563c9b
    PUSH EAX                            ; 00563c9d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563c9e
    PUSH EDX                            ; 00563ca2
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563ca3
    PUSH EBX                            ; 00563ca7
    CALL FUN_00563a08                   ; 00563ca8
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00563cad
    ADD ESP,0x4                         ; 00563cb0
    POP EBX                             ; 00563cb3
    RET                                 ; 00563cb4

