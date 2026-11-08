; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b77c0(undefined4 param_1)
;
;
; XREF[114]:
;   FUN_00402f30 at 00402f9b
;   FUN_0040dd20 at 0040dd37
;   FUN_0040fef0 at 0040ffe8
;   FUN_00416700 at 00416b1e
;   FUN_004177e0 at 00417868
;   FUN_004182d0 at 004183af
;   FUN_0041ef50 at 0041efbf
;   FUN_0041f940 at 0041f965
;   FUN_00435e30 at 00435e80
;   FUN_004368b0 at 004368c0
;   ... and 104 more
;
; Called Functions:
;   FUN_005bbfc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b77c0
        ;   Label: FUN_005b77c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b77c4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b77c8
    PUSH EAX                            ; 005b77cc
    MOV DH,DL                           ; 005b77cd
    SHL EDX,0x8                         ; 005b77cf
    MOV DL,DH                           ; 005b77d2
    SHL EDX,0x8                         ; 005b77d4
    MOV DL,DH                           ; 005b77d7
    CALL FUN_005bbfc0                   ; 005b77d9
        ;   XREF to: 005bbfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bbfc0()
    POP EAX                             ; 005b77de
    RET                                 ; 005b77df

