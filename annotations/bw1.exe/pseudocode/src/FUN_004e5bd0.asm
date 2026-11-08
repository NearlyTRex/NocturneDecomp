; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e5bd0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e3d40 at 004e3d45
;
; Called Functions:
;   FUN_004e5c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5bd0
        ;   Label: FUN_004e5bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5bd1
    PUSH EBX                            ; 004e5bd5
    CALL FUN_004e5c00                   ; 004e5bd6
        ;   XREF to: 004e5c00 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5c00()
    ADD ESP,0x4                         ; 004e5bdb
    MOV EAX,EBX                         ; 004e5bde
    POP EBX                             ; 004e5be0
    RET                                 ; 004e5be1

