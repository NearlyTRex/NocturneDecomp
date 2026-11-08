; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c5348(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005ca370 at 005ca3b1
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005d05c0 = 001d0f4c
;   undefined4 DAT_006265bc
;   void* PTR_FUN_006265fc = 005c50cc
;   void* PTR_FUN_0062663c = 005c50f8
;
; Called Functions:
;   FUN_005c50cc
;   FUN_005c50f8
;   FUN_005c50fc
;   FUN_005cb0a0
;   FUN_005cb5a8
;   FUN_005cb630
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5348
        ;   Label: FUN_005c5348
    PUSH 0x0                            ; 005c5349
    CALL dword ptr CS:[0x5d05c0]        ; 005c534b | PTR_GetModuleHandleA_005d05c0
    PUSH EAX                            ; 005c5352
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c5353
    PUSH EDX                            ; 005c5357
    PUSH 0x0                            ; 005c5358
    CALL FUN_005c50fc                   ; 005c535a
        ;   XREF to: 005c50fc (UNCONDITIONAL_CALL)  ; undefined FUN_005c50fc()
    ADD ESP,0xc                         ; 005c535f
    PUSH 0x6265bc                       ; 005c5362 | DAT_006265bc
    CALL dword ptr [0x006265fc]         ; 005c5367 | PTR_FUN_006265fc
    PUSH EAX                            ; 005c536d
    CALL FUN_005cb0a0                   ; 005c536e
        ;   XREF to: 005cb0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb0a0()
    ADD ESP,0x8                         ; 005c5373
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c5376
    PUSH EBX                            ; 005c537a
    CALL FUN_005cb5a8                   ; 005c537b
        ;   XREF to: 005cb5a8 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb5a8()
    ADD ESP,0x4                         ; 005c5380
    MOV EAX,0x21                        ; 005c5383
    CALL FUN_005cb630                   ; 005c5388
        ;   XREF to: 005cb630 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb630()
    CALL dword ptr [0x0062663c]         ; 005c538d | PTR_FUN_0062663c
    MOV EAX,0xff                        ; 005c5393
    CALL FUN_005cb630                   ; 005c5398
        ;   XREF to: 005cb630 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb630()
    POP EBX                             ; 005c539d
    RET                                 ; 005c539e

