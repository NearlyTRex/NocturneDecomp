; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563c90(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[129]:
;   FUN_00403630 at 004036a1
;   FUN_00403fb0 at 00403fec
;   FUN_00404430 at 0040444a
;   FUN_004054f0 at 0040550a
;   FUN_004063c0 at 004063da
;   FUN_0040db50 at 0040dc92
;   FUN_0040e3c0 at 0040e49d
;   FUN_0041f6e0 at 0041f9a6
;   FUN_0042d240 at 0042d27b
;   FUN_0042d480 at 0042d552
;   ... and 119 more
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

