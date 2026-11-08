; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552850(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ed260 at 004ee086
;
; Called Functions:
;   FUN_005526f0
;   FUN_005527d0
;   FUN_005527f0
;
; *****************************************************************************

section .text

    CALL FUN_005527f0                   ; 00552850
        ;   XREF to: 005527f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005527f0()
        ;   Label: FUN_00552850
    PUSH EAX                            ; 00552855
    MOV EDX,dword ptr [ESP + 0x8]       ; 00552856
    PUSH EDX                            ; 0055285a
    CALL FUN_005527d0                   ; 0055285b
        ;   XREF to: 005527d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005527d0()
    PUSH EAX                            ; 00552860
    CALL FUN_005526f0                   ; 00552861
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526f0()
    ADD ESP,0xc                         ; 00552866
    RET                                 ; 00552869

