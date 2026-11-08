; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510510(int param_1)
;
;
; XREF[5]:
;   FUN_004d1050 at 004d1055
;   FUN_004d1400 at 004d159c
;   FUN_005115e0 at 005115e8
;   FUN_00571b60 at 00571b67
;   FUN_00571de0 at 00571de7
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_005e14c5
;   TerminatedCString s_Bip01_L_Hand_005e14d0
;   TerminatedCString s_Bip01_R_Hand_005e14dd
;   undefined4 DAT_01d653fc
;   undefined4 DAT_01d65400
;
; Called Functions:
;   FUN_00422930
;   FUN_00540e80
;   FUN_00547890
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510510
        ;   Label: FUN_00510510
    PUSH ESI                            ; 00510511
    PUSH EBP                            ; 00510512
    MOV EBP,ESP                         ; 00510513
    MOV EBX,dword ptr [EBP + 0x10]      ; 00510515
    PUSH EBX                            ; 00510518
    CALL FUN_00422930                   ; 00510519
        ;   XREF to: 00422930 (UNCONDITIONAL_CALL)  ; undefined FUN_00422930()
    ADD ESP,0x4                         ; 0051051e
    PUSH 0x5e14c5                       ; 00510521 | = "priest.dfm"
    LEA EAX,[EBX + 0x2514]              ; 00510526
    PUSH EAX                            ; 0051052c
    CALL FUN_005b8130                   ; 0051052d
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00510532
    TEST EAX,EAX                        ; 00510535
    JNZ 0x00510543                      ; 00510537
        ;   XREF to: 00510543 (CONDITIONAL_JUMP)  ; LAB_00510543
    MOV dword ptr [EBX + 0x280c],0x2    ; 00510539
    LEA EAX,[EBX + 0x2b4]               ; 00510543
        ;   Label: LAB_00510543
    PUSH EAX                            ; 00510549
    CALL FUN_00547890                   ; 0051054a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0051054f
    PUSH 0x0                            ; 00510552
    PUSH 0x5e14d0                       ; 00510554 | = "Bip01 L Hand"
    PUSH EAX                            ; 00510559
    MOV ESI,EAX                         ; 0051055a
    CALL FUN_00540e80                   ; 0051055c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 00510561
    PUSH 0x0                            ; 00510564
    PUSH 0x5e14dd                       ; 00510566 | = "Bip01 R Hand"
    PUSH ESI                            ; 0051056b
    MOV [0x01d653fc],EAX                ; 0051056c | DAT_01d653fc
    CALL FUN_00540e80                   ; 00510571
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV ESI,dword ptr [0x01d653fc]      ; 00510576 | DAT_01d653fc
    ADD ESP,0xc                         ; 0051057c
    MOV dword ptr [EBX + 0x2690],EAX    ; 0051057f
    MOV [0x01d65400],EAX                ; 00510585 | DAT_01d65400
    MOV EDX,dword ptr [EBX + 0x2814]    ; 0051058a
    MOV dword ptr [EBX + 0x2618],ESI    ; 00510590
    TEST EDX,EDX                        ; 00510596
    JNZ 0x0051059e                      ; 00510598
        ;   XREF to: 0051059e (CONDITIONAL_JUMP)  ; LAB_0051059e
    POP EBP                             ; 0051059a
    POP ESI                             ; 0051059b
    POP EBX                             ; 0051059c
    RET                                 ; 0051059d
    MOV dword ptr [EBX + 0xfc],0x1      ; 0051059e
        ;   Label: LAB_0051059e
    POP EBP                             ; 005105a8
    POP ESI                             ; 005105a9
    POP EBX                             ; 005105aa
    RET                                 ; 005105ab

