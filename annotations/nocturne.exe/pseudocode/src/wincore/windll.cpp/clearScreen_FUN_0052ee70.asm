; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl wincore_windll_cpp_clearScreen_FUN_0052ee70(void)
;
;
; XREF[25]:
;   FUN_0049cc10 at 0049cd04
;   FUN_004a57c0 at 004a5989
;   FUN_004c8510 at 004c851b
;   FUN_004c85f0 at 004c8bba
;   FUN_004c90e0 at 004c9160
;   FUN_004d23d0 at 004d25d2
;   FUN_0050a260 at 0050a62b
;   FUN_0055a510 at 0055a570
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404dc
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a66b9
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined8 DAT_005bf48c
;   undefined4 DAT_005bf494
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c02594
;
; Called Functions:
;   wincore_windll.cpp_clear_FUN_005329a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052ee70
        ;   Label: wincore_windll.cpp_clearScreen_FUN_0052ee70
    PUSH EDI                            ; 0052ee71
    CMP dword ptr [0x01c02594],0x0      ; 0052ee72 | DAT_01c02594
    JZ 0x0052ee83                       ; 0052ee79
        ;   XREF to: 0052ee83 (CONDITIONAL_JUMP)  ; LAB_0052ee83
    CALL wincore_windll.cpp_clear_FUN_005329a0 ; 0052ee7b
        ;   XREF to: 005329a0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clear_FUN_005329a0()
    POP EDI                             ; 0052ee80
    POP ESI                             ; 0052ee81
    RET                                 ; 0052ee82
    PUSHAD                              ; 0052ee83
        ;   Label: LAB_0052ee83
    CLD                                 ; 0052ee84
    PUSH DS                             ; 0052ee85
    POP ES                              ; 0052ee86
    MOV EAX,0x0                         ; 0052ee87
    MOV EBX,0x0                         ; 0052ee8c
    MOV EAX,[0x005b761c]                ; 0052ee91 | DAT_005b761c
        ;   Label: LAB_0052ee91
    IMUL dword ptr [0x005b7624]         ; 0052ee96 | DAT_005b7624
    SHR EAX,0x3                         ; 0052ee9c
    MOV ECX,EAX                         ; 0052ee9f
    MOV EDI,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0052eea1 | DAT_01bd2fa0 | DAT_01bd2fa4
    FLD double ptr [0x005bf48c]         ; 0052eea8 | DAT_005bf48c
    FST double ptr [EDI]                ; 0052eeae
        ;   Label: LAB_0052eeae
    FST double ptr [EDI + 0x8]          ; 0052eeb0
    FST double ptr [EDI + 0x10]         ; 0052eeb3
    FST double ptr [EDI + 0x18]         ; 0052eeb6
    ADD EDI,0x20                        ; 0052eeb9
    SUB ECX,0x20                        ; 0052eebc
    JG 0x0052eeae                       ; 0052eebf
        ;   XREF to: 0052eeae (CONDITIONAL_JUMP)  ; LAB_0052eeae
    FSTP double ptr [0x005bf494]        ; 0052eec1 | DAT_005bf494
    INC EBX                             ; 0052eec7
    CMP EBX,dword ptr [0x005b7620]      ; 0052eec8 | DAT_005b7620
    JL 0x0052ee91                       ; 0052eece
        ;   XREF to: 0052ee91 (CONDITIONAL_JUMP)  ; LAB_0052ee91
    POPAD                               ; 0052eed0
    POP EDI                             ; 0052eed1
    POP ESI                             ; 0052eed2
    RET                                 ; 0052eed3

