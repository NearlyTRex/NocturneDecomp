; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005747c0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00402940 at 004029f6
;   FUN_004bda10 at 004bdcf7
;   FUN_004bdfb0 at 004be24b
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e5b24 = 00574850
;
; Called Functions:
;   FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005747c0
        ;   Label: FUN_005747c0
    PUSH EDX                            ; 005747c4
    CALL FUN_005744a0                   ; 005747c5
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    MOV dword ptr [EAX],0x5e5b24        ; 005747ca | PTR_FUN_005e5b24
    ADD ESP,0x4                         ; 005747d0
    MOV dword ptr [EAX + 0x4],0x0       ; 005747d3
    RET                                 ; 005747da

