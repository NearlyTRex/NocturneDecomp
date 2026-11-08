; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049d4b0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00493720 at 00493a22
;   FUN_00493d40 at 0049401b
;   FUN_0049a710 at 0049a735
;
; Called Functions:
;   FUN_0049d4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d4b0
        ;   Label: FUN_0049d4b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d4b1
    PUSH EBX                            ; 0049d4b5
    CALL FUN_0049d4d0                   ; 0049d4b6
        ;   XREF to: 0049d4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d4d0()
    ADD ESP,0x4                         ; 0049d4bb
    MOV EAX,EBX                         ; 0049d4be
    POP EBX                             ; 0049d4c0
    RET                                 ; 0049d4c1

