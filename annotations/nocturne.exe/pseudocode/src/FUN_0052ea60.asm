; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ea60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; XREF[10]:
;   FUN_0040a2e0 at 0040a2f6
;   FUN_0040db50 at 0040dca8
;   FUN_0043d1c0 at 0043d433
;   FUN_00477890 at 00477b80
;   FUN_00489850 at 00489924
;   FUN_0048c0d0 at 0048c12b
;   FUN_004b27c0 at 004b2a1d
;   FUN_004c71a0 at 004c792a
;   FUN_00515ea0 at 005161e5
;   FUN_00554d40 at 00554fb4
;
; Called Functions:
;   FUN_0052d120
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ea60
        ;   Label: FUN_0052ea60
    PUSH 0x0                            ; 0052ea64
    PUSH 0x0                            ; 0052ea66
    PUSH dword ptr [EAX + 0x8]          ; 0052ea68
    PUSH dword ptr [EAX + 0x4]          ; 0052ea6b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052ea6e
    PUSH dword ptr [EAX]                ; 0052ea72
    PUSH EDX                            ; 0052ea74
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052ea75
    PUSH ECX                            ; 0052ea79
    CALL FUN_0052d120                   ; 0052ea7a
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d120()
    ADD ESP,0x1c                        ; 0052ea7f
    RET                                 ; 0052ea82

