; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053fea0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005e684d
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053fea0
        ;   Label: FUN_0053fea0
    PUSH EDX                            ; 0053fea4
    PUSH 0x5e684d                       ; 0053fea5 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x00609ed0]      ; 0053feaa | PTR_DAT_00609ed0
    PUSH ECX                            ; 0053feb0 | DAT_007c158c
    CALL FUN_00436710                   ; 0053feb1
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 0053feb6
    XOR EAX,EAX                         ; 0053feb9
    RET                                 ; 0053febb

