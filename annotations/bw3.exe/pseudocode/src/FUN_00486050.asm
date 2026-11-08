; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00486050(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0047c2c0 at 0047c5c2
;   FUN_0047c8e0 at 0047cbbb
;   FUN_004832b0 at 004832d5
;
; Called Functions:
;   FUN_00486070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486050
        ;   Label: FUN_00486050
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486051
    PUSH EBX                            ; 00486055
    CALL FUN_00486070                   ; 00486056
        ;   XREF to: 00486070 (UNCONDITIONAL_CALL)  ; undefined FUN_00486070()
    ADD ESP,0x4                         ; 0048605b
    MOV EAX,EBX                         ; 0048605e
    POP EBX                             ; 00486060
    RET                                 ; 00486061

