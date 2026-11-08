; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578cb0(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0050cf50 at 0050d2b8
;   FUN_00578f50 at 00578f5c
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_005ecffc
;
; Called Functions:
;   FUN_005b7790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578cb0
        ;   Label: FUN_00578cb0
    XOR EDX,EDX                         ; 00578cb4
    MOV DL,byte ptr [EAX + 0x3]         ; 00578cb6
    PUSH EDX                            ; 00578cb9
    XOR EDX,EDX                         ; 00578cba
    MOV DL,byte ptr [EAX + 0x2]         ; 00578cbc
    PUSH EDX                            ; 00578cbf
    XOR EDX,EDX                         ; 00578cc0
    MOV DL,byte ptr [EAX + 0x1]         ; 00578cc2
    PUSH EDX                            ; 00578cc5
    MOV AL,byte ptr [EAX]               ; 00578cc6
    AND EAX,0xff                        ; 00578cc8
    PUSH EAX                            ; 00578ccd
    PUSH 0x5ecffc                       ; 00578cce | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00578cd3
    PUSH EDX                            ; 00578cd7
    CALL FUN_005b7790                   ; 00578cd8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x18                        ; 00578cdd
    RET                                 ; 00578ce0

