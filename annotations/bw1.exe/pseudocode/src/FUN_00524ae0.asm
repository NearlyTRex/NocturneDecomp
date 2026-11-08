; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00524ae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_004763c0 at 0047640e
;   FUN_0047d1e0 at 0047d299
;   FUN_00510530 at 005105ae
;   FUN_005204e0 at 00520aa6
;   FUN_00591ce0 at 00591d2e
;   FUN_00592320 at 005925c7
;   FUN_005a7290 at 005a72ad
;
; Called Functions:
;   FUN_005240c0
;   FUN_00524b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524ae0
        ;   Label: FUN_00524ae0
    PUSH 0x1                            ; 00524ae1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00524ae3
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524ae7
    PUSH EDX                            ; 00524aeb
    MOV ECX,dword ptr [EAX]             ; 00524aec
    PUSH ECX                            ; 00524aee
    CALL FUN_005240c0                   ; 00524aef
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 00524af4
    PUSH dword ptr [ESP + 0x10]         ; 00524af7
    PUSH EAX                            ; 00524afb
    MOV EBX,dword ptr [ESP + 0x10]      ; 00524afc
    PUSH EBX                            ; 00524b00
    CALL FUN_00524b10                   ; 00524b01
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524b10()
    ADD ESP,0xc                         ; 00524b06
    POP EBX                             ; 00524b09
    RET                                 ; 00524b0a

