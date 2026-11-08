; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503950(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_0045dd30 at 0045dd7e
;   FUN_00464cc0 at 00464d79
;   FUN_004f17a0 at 004f181e
;   FUN_00501530 at 00501af6
;   FUN_0056f090 at 0056f0de
;   FUN_0056f6d0 at 0056f977
;   FUN_00583650 at 0058366d
;
; Called Functions:
;   FUN_00502f10
;   FUN_00503980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503950
        ;   Label: FUN_00503950
    PUSH 0x1                            ; 00503951
    MOV EDX,dword ptr [ESP + 0x10]      ; 00503953
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503957
    PUSH EDX                            ; 0050395b
    MOV ECX,dword ptr [EAX]             ; 0050395c
    PUSH ECX                            ; 0050395e
    CALL FUN_00502f10                   ; 0050395f
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00502f10()
    ADD ESP,0xc                         ; 00503964
    PUSH dword ptr [ESP + 0x10]         ; 00503967
    PUSH EAX                            ; 0050396b
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050396c
    PUSH EBX                            ; 00503970
    CALL FUN_00503980                   ; 00503971
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; undefined FUN_00503980()
    ADD ESP,0xc                         ; 00503976
    POP EBX                             ; 00503979
    RET                                 ; 0050397a

