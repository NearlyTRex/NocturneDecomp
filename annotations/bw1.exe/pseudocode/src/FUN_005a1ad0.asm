; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a1ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00442c80 at 00442c9b
;   FUN_00442f00 at 00442f18
;   FUN_00444020 at 0044405a
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607454 = 005a1b60
;
; Called Functions:
;   FUN_005a14b0
;   FUN_005a1d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ad0
        ;   Label: FUN_005a1ad0
    PUSH ESI                            ; 005a1ad1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1ad2
    PUSH EDX                            ; 005a1ad6
    CALL FUN_005a14b0                   ; 005a1ad7
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    MOV dword ptr [EAX],0x607454        ; 005a1adc | PTR_FUN_00607454
    ADD ESP,0x4                         ; 005a1ae2
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1ae5
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a1aec
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1af0
    PUSH ECX                            ; 005a1af7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a1af8
    MOV dword ptr [EAX + 0xc],0x0       ; 005a1afc
    PUSH ESI                            ; 005a1b03
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1b04
    PUSH EAX                            ; 005a1b0b
    MOV EBX,EAX                         ; 005a1b0c
    MOV dword ptr [EAX + 0x14],0x1      ; 005a1b0e
    CALL FUN_005a1d60                   ; 005a1b15
        ;   XREF to: 005a1d60 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1d60()
    ADD ESP,0xc                         ; 005a1b1a
    MOV EAX,EBX                         ; 005a1b1d
    POP ESI                             ; 005a1b1f
    POP EBX                             ; 005a1b20
    RET                                 ; 005a1b21

