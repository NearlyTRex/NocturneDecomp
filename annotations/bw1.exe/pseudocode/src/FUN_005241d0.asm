; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005241d0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00567370 at 00567375
;
; Referenced Globals:
;   void* PTR_FUN_006042e4 = 00524200
;
; Called Functions:
;   FUN_00524790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005241d0
        ;   Label: FUN_005241d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005241d1
    MOV dword ptr [EBX + 0x50],0x6042e4 ; 005241d5 | PTR_FUN_006042e4
    MOV byte ptr [EBX + 0x30],0x0       ; 005241dc
    PUSH EBX                            ; 005241e0
    MOV dword ptr [EBX],0x0             ; 005241e1
    CALL FUN_00524790                   ; 005241e7
        ;   XREF to: 00524790 (UNCONDITIONAL_CALL)  ; undefined FUN_00524790()
    ADD ESP,0x4                         ; 005241ec
    MOV EAX,EBX                         ; 005241ef
    POP EBX                             ; 005241f1
    RET                                 ; 005241f2

