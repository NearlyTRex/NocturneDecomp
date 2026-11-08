; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005604a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00605340
;   undefined4 DAT_00605344
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005604a0
        ;   Label: FUN_005604a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005604a1
    PUSH EDX                            ; 005604a5
    CALL FUN_004a0410                   ; 005604a6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 005604ab
    PUSH 0x5f17d7                       ; 005604ae
    MOV EBX,EAX                         ; 005604b3
    ADD EAX,0x158                       ; 005604b5
    PUSH EAX                            ; 005604ba
    MOV dword ptr [EAX + -0x4],0x605354 ; 005604bb
    CALL FUN_00569f50                   ; 005604c2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3fe00000 ; 005604c7
    FLD float ptr [0x00605340]          ; 005604d1 | DAT_00605340
    MOV dword ptr [EBX + 0x2ff0],0x40600000 ; 005604d7
    FLD float ptr [0x00605344]          ; 005604e1 | DAT_00605344
    MOV dword ptr [EBX + 0xc27c],0x0    ; 005604e7
    ADD ESP,0x8                         ; 005604f1
    MOV dword ptr [EBX + 0xc284],0x0    ; 005604f4
    MOV EAX,EBX                         ; 005604fe
    FXCH                                ; 00560500
    FSTP float ptr [EBX + 0x2ff4]       ; 00560502
    FSTP float ptr [EBX + 0x2ff8]       ; 00560508
    POP EBX                             ; 0056050e
    RET                                 ; 0056050f

