; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492640(int param_1)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[2]:
;   FUN_00474400 at 00474a56
;   FUN_005907a0 at 00590d8b
;
; Referenced Globals:
;   TerminatedCString s_fuse_wav_005dbc50
;   undefined4 DAT_005ff6bc
;
; Called Functions:
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492640
        ;   Label: FUN_00492640
    SUB ESP,0x64                        ; 00492641
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00492644
    PUSH 0x5dbc50                       ; 00492648 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0049264d
    FLD float ptr [0x005ff6bc]          ; 00492651 | DAT_005ff6bc
    PUSH EAX                            ; 00492657
    FSTP float ptr [EBX + 0x578]        ; 00492658
    CALL FUN_005bfb40                   ; 0049265e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 00492663
    MOV EAX,ESP                         ; 00492666
    PUSH EAX                            ; 00492668
    MOV EDX,dword ptr [EBX + 0x154]     ; 00492669
    PUSH EBX                            ; 0049266f
    CALL dword ptr [EDX + 0x2c]         ; 00492670
    ADD ESP,0x8                         ; 00492673
    MOV dword ptr [EBX + 0x588],EAX     ; 00492676
    ADD ESP,0x64                        ; 0049267c
    POP EBX                             ; 0049267f
    RET                                 ; 00492680

