; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e310(int param_1)
;
;
; XREF[1]:
;   FUN_00509a80 at 00509af1
;
; Called Functions:
;   FUN_005088f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e310
        ;   Label: FUN_0050e310
    PUSH ESI                            ; 0050e311
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050e312
    MOV EDX,dword ptr [EBX + 0x15aabc]  ; 0050e316
    PUSH EDX                            ; 0050e31c
    PUSH EBX                            ; 0050e31d
    MOV ESI,dword ptr [EBX + 0x15aac0]  ; 0050e31e
    CALL FUN_005088f0                   ; 0050e324
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005088f0()
    MOV dword ptr [EBX + 0x15aac4],0x0  ; 0050e329
    ADD ESP,0x8                         ; 0050e333
    MOV dword ptr [EBX + 0x15aac0],ESI  ; 0050e336
    POP ESI                             ; 0050e33c
    POP EBX                             ; 0050e33d
    RET                                 ; 0050e33e

