; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044b810(int param_1)
;
;
; XREF[1]:
;   FUN_00481fd0 at 00481fd6
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   FUN_00409fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b810
        ;   Label: FUN_0044b810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044b811
    PUSH EBX                            ; 0044b815
    CALL FUN_00409fc0                   ; 0044b816
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    MOV EAX,[0x005baf90]                ; 0044b81b | DAT_005baf90
    MOV dword ptr [EBX + 0xf8],0x0      ; 0044b820
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044b82a | DAT_01cc9454
    MOV dword ptr [EBX + 0x17c],0x0     ; 0044b82d
    MOV dword ptr [EBX + 0x1e8],0x1     ; 0044b837
    ADD ESP,0x4                         ; 0044b841
    MOV dword ptr [EBX + 0xfc],EAX      ; 0044b844
    POP EBX                             ; 0044b84a
    RET                                 ; 0044b84b

