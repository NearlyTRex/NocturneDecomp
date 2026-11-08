; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d5430(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004d6310 at 004d6316
;   FUN_004d6390 at 004d6396
;   FUN_004d6410 at 004d6416
;
; Referenced Globals:
;   undefined4 DAT_005e1900
;   undefined4 DAT_005e1904
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5430
        ;   Label: FUN_004d5430
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d5431
    PUSH EDX                            ; 004d5435
    CALL FUN_00488fd0                   ; 004d5436
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 004d543b
    PUSH 0x5c5264                       ; 004d543e
    MOV EBX,EAX                         ; 004d5443
    ADD EAX,0x158                       ; 004d5445
    PUSH EAX                            ; 004d544a
    MOV dword ptr [EAX + -0x4],0x5e1914 ; 004d544b
    CALL FUN_0054eae0                   ; 004d5452
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    FLD float ptr [0x005e1900]          ; 004d5457 | DAT_005e1900
    FLD float ptr [0x005e1904]          ; 004d545d | DAT_005e1904
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 004d5463
    ADD ESP,0x8                         ; 004d546d
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 004d5470
    MOV EAX,EBX                         ; 004d547a
    FXCH                                ; 004d547c
    FSTP float ptr [EBX + 0x3274]       ; 004d547e
    FSTP float ptr [EBX + 0x3278]       ; 004d5484
    POP EBX                             ; 004d548a
    RET                                 ; 004d548b

