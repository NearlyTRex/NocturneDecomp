; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d970(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_004ba130 at 004ba257
;   FUN_004bc2d0 at 004bc382
;   FUN_004be0f0 at 004be680
;   FUN_004bebc0 at 004bf16c
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d970
        ;   Label: FUN_0040d970
    PUSH ESI                            ; 0040d971
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d972
    MOV EAX,dword ptr [EDX + 0xc]       ; 0040d976
    IMUL EAX,dword ptr [EDX + 0x10]     ; 0040d979
    PUSH EAX                            ; 0040d97d
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d97e
    PUSH EBX                            ; 0040d982
    MOV ESI,dword ptr [EDX + 0x4]       ; 0040d983
    PUSH ESI                            ; 0040d986
    CALL FUN_005bfb70                   ; 0040d987
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0040d98c
    POP ESI                             ; 0040d98f
    POP EBX                             ; 0040d990
    RET                                 ; 0040d991

