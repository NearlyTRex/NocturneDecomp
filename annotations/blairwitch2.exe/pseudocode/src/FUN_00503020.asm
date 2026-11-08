; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00503020(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00544cd0 at 00544cd5
;
; Referenced Globals:
;   void* PTR_FUN_005fa5e4 = 00503050
;
; Called Functions:
;   FUN_005035f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503020
        ;   Label: FUN_00503020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503021
    MOV dword ptr [EBX + 0x50],0x5fa5e4 ; 00503025 | PTR_FUN_005fa5e4
    MOV byte ptr [EBX + 0x30],0x0       ; 0050302c
    PUSH EBX                            ; 00503030
    MOV dword ptr [EBX],0x0             ; 00503031
    CALL FUN_005035f0                   ; 00503037
        ;   XREF to: 005035f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035f0()
    ADD ESP,0x4                         ; 0050303c
    MOV EAX,EBX                         ; 0050303f
    POP EBX                             ; 00503041
    RET                                 ; 00503042

