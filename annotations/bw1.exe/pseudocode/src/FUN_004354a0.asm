; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004354a0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00432240 at 00432510
;   FUN_00433f10 at 00434032
;   FUN_00435380 at 0043547d
;
; Called Functions:
;   FUN_005abb80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004354a0
        ;   Label: FUN_004354a0
    MOV EDX,dword ptr [EAX + 0x27a8]    ; 004354a4
    PUSH EDX                            ; 004354aa
    MOV ECX,dword ptr [ESP + 0xc]       ; 004354ab
    PUSH ECX                            ; 004354af
    ADD EAX,0x20                        ; 004354b0
    PUSH EAX                            ; 004354b3
    CALL FUN_005abb80                   ; 004354b4
        ;   XREF to: 005abb80 (UNCONDITIONAL_CALL)  ; undefined FUN_005abb80()
    ADD ESP,0xc                         ; 004354b9
    RET                                 ; 004354bc

