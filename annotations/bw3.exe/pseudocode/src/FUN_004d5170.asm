; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5170(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005c51ac
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00441ff0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d5170
        ;   Label: FUN_004d5170
    PUSH EDX                            ; 004d5174
    PUSH 0x5c51ac                       ; 004d5175 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005f1690]      ; 004d517a | PTR_DAT_005f1690
    PUSH ECX                            ; 004d5180 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d5181
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 004d5186
    XOR EAX,EAX                         ; 004d5189
    RET                                 ; 004d518b

