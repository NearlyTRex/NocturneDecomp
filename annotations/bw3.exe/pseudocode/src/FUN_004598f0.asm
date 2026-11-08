; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004598f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004596c0 at 004596f2
;
; Called Functions:
;   FUN_00459960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004598f0
        ;   Label: FUN_004598f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004598f1
    PUSH EBX                            ; 004598f5
    CALL FUN_00459960                   ; 004598f6
        ;   XREF to: 00459960 (UNCONDITIONAL_CALL)  ; undefined FUN_00459960()
    ADD ESP,0x4                         ; 004598fb
    MOV EAX,EBX                         ; 004598fe
    POP EBX                             ; 00459900
    RET                                 ; 00459901

