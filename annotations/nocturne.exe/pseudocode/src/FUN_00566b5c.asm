; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566b5c(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[16]:
;   FUN_00471360 at 004713cc
;   FUN_00471430 at 004714aa
;   FUN_00474460 at 004744df
;   FUN_0047a4c0 at 0047a4fd
;   FUN_0047ac50 at 0047afb3
;   FUN_0047e0d0 at 0047e329
;   FUN_004bda20 at 004bda66
;   FUN_004bdac0 at 004bdb0a
;   FUN_004d9680 at 004d9704
;   FUN_004e5200 at 004e54e3
;   ... and 6 more
;
; Called Functions:
;   FUN_00566b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566b5c
        ;   Label: FUN_00566b5c
    SUB ESP,0x4                         ; 00566b5d
    LEA EAX,[ESP + 0x14]                ; 00566b60
    MOV dword ptr [ESP],EAX             ; 00566b64
    MOV EAX,ESP                         ; 00566b67
    PUSH EAX                            ; 00566b69
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566b6a
    PUSH EDX                            ; 00566b6e
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566b6f
    PUSH EBX                            ; 00566b73
    CALL FUN_00566b20                   ; 00566b74
        ;   XREF to: 00566b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00566b20()
    ADD ESP,0xc                         ; 00566b79
    ADD ESP,0x4                         ; 00566b7c
    POP EBX                             ; 00566b7f
    RET                                 ; 00566b80

