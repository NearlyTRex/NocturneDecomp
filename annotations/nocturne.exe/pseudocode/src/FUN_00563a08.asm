; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563a08(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[11]:
;   FUN_0043ac60 at 0043ac98
;   FUN_0046fb40 at 0046fbac
;   FUN_0046fcd0 at 0046fd3c
;   FUN_0046fe60 at 0046fecc
;   FUN_0046fff0 at 0047003b
;   FUN_00470230 at 0047025b
;   FUN_0047a210 at 0047a23f
;   FUN_00490e80 at 00490e9f
;   FUN_004c8440 at 004c8477
;   FUN_00529980 at 005299aa
;   ... and 1 more
;
; Called Functions:
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563a08
        ;   Label: FUN_00563a08
    PUSH 0x5639f0                       ; 00563a09 | LAB_005639f0
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563a0e
    PUSH EDX                            ; 00563a12
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563a13
    PUSH EBX                            ; 00563a17
    MOV ECX,dword ptr [ESP + 0x14]      ; 00563a18
    PUSH ECX                            ; 00563a1c
    CALL FUN_00569040                   ; 00563a1d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x10                        ; 00563a22
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563a25
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 00563a29
    POP EBX                             ; 00563a2d
    RET                                 ; 00563a2e

