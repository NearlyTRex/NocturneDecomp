; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d3460(int param_1)
;
;
; XREF[2]:
;   FUN_004d4520 at 004d4621
;   FUN_0051b550 at 0051bf66
;
; Referenced Globals:
;   undefined4 s_CHero_toggleLeverNow_005c4d3c+1
;   TerminatedCString s_current_motion_is_s_005c4d54
;   TerminatedCString s_toggling_lever_s_005c4d6c
;   TerminatedCString s_but_no_lever_set_005c4d81
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00441ff0
;   FUN_004e0630
;   FUN_004fc070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3460
        ;   Label: FUN_004d3460
    PUSH ESI                            ; 004d3461
    PUSH EDI                            ; 004d3462
    PUSH EBP                            ; 004d3463
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d3464
    PUSH 0x5c4d3d                       ; 004d3468 | s_CHero_toggleLeverNow_005c4d3c+1
    MOV EDX,dword ptr [0x005f1690]      ; 004d346d | PTR_DAT_005f1690
    PUSH EDX                            ; 004d3473 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d3474
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x8                         ; 004d3479
    LEA EAX,[EBX + 0x158]               ; 004d347c
    PUSH EAX                            ; 004d3482
    CALL FUN_004fc070                   ; 004d3483
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 004d3488
    PUSH EAX                            ; 004d348b
    PUSH 0x5c4d54                       ; 004d348c | = "  current motion is %s\n"
    MOV ECX,dword ptr [0x005f1690]      ; 004d3491 | PTR_DAT_005f1690
    PUSH ECX                            ; 004d3497 | DAT_007f7ea4
    XOR ESI,ESI                         ; 004d3498
    CALL FUN_00441ff0                   ; 004d349a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EDI,dword ptr [EBX + 0x20ba0]   ; 004d349f
    ADD ESP,0xc                         ; 004d34a5
    TEST EDI,EDI                        ; 004d34a8
    JZ 0x004d34e2                       ; 004d34aa
        ;   XREF to: 004d34e2 (CONDITIONAL_JUMP)  ; LAB_004d34e2
    PUSH EDI                            ; 004d34ac
    PUSH 0x5c4d6c                       ; 004d34ad | = "  toggling lever %s\n"
    MOV EDX,dword ptr [0x005f1690]      ; 004d34b2 | PTR_DAT_005f1690
    PUSH EDX                            ; 004d34b8 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d34b9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 004d34be
    MOV ECX,dword ptr [EBX + 0x20ba0]   ; 004d34c1
    PUSH ECX                            ; 004d34c7
    CALL FUN_004e0630                   ; 004d34c8
        ;   XREF to: 004e0630 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0630()
    ADD ESP,0x4                         ; 004d34cd
    MOV dword ptr [EBX + 0x20ba0],ESI   ; 004d34d0
    MOV ESI,0x1                         ; 004d34d6
    MOV EAX,ESI                         ; 004d34db
    POP EBP                             ; 004d34dd
    POP EDI                             ; 004d34de
    POP ESI                             ; 004d34df
    POP EBX                             ; 004d34e0
    RET                                 ; 004d34e1
    PUSH 0x5c4d81                       ; 004d34e2 | = "  but no lever set!\n"
        ;   Label: LAB_004d34e2
    MOV EBP,dword ptr [0x005f1690]      ; 004d34e7 | PTR_DAT_005f1690
    PUSH EBP                            ; 004d34ed | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d34ee
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x8                         ; 004d34f3
    MOV EAX,ESI                         ; 004d34f6
    POP EBP                             ; 004d34f8
    POP EDI                             ; 004d34f9
    POP ESI                             ; 004d34fa
    POP EBX                             ; 004d34fb
    RET                                 ; 004d34fc

