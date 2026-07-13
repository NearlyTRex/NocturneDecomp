; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c4880(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_worm.dfm_0058777b
;   undefined4 DAT_0059fa70
;   undefined4 DAT_0059fa74
;   undefined1* PTR_FUN_0059fa84 = 004c4910
;
; Called Functions:
;   FUN_00479560
;   FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4880
        ;   Label: FUN_004c4880
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c4881
    PUSH EDX                            ; 004c4885
    CALL FUN_00479560                   ; 004c4886
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 004c488b
    PUSH 0x58777b                       ; 004c488e | = "worm.dfm"
    MOV EBX,EAX                         ; 004c4893
    ADD EAX,0x150                       ; 004c4895
    PUSH EAX                            ; 004c489a
    MOV dword ptr [EAX + -0x4],0x59fa84 ; 004c489b | PTR_FUN_0059fa84
    CALL FUN_0051e0c0                   ; 004c48a2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3e800000 ; 004c48a7
    MOV dword ptr [EBX + 0x2dd8],0x3f000000 ; 004c48b1
    MOV dword ptr [EBX + 0x2608],0x1    ; 004c48bb
    FLD float ptr [0x0059fa70]          ; 004c48c5 | DAT_0059fa70
    MOV dword ptr [EBX + 0x2434],0x41700000 ; 004c48cb
    FLD float ptr [0x0059fa74]          ; 004c48d5 | DAT_0059fa74
    MOV dword ptr [EBX + 0xbd28],0x0    ; 004c48db
    ADD ESP,0x8                         ; 004c48e5
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 004c48e8
    MOV EAX,EBX                         ; 004c48f2
    FXCH                                ; 004c48f4
    FSTP float ptr [EBX + 0x2ddc]       ; 004c48f6
    FSTP float ptr [EBX + 0x2de0]       ; 004c48fc
    POP EBX                             ; 004c4902
    RET                                 ; 004c4903

