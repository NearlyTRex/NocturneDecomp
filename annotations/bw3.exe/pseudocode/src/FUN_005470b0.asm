; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005470b0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005d154a
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00441ff0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005470b0
        ;   Label: FUN_005470b0
    PUSH EDX                            ; 005470b4
    PUSH 0x5d154a                       ; 005470b5 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005f1690]      ; 005470ba | PTR_DAT_005f1690
    PUSH ECX                            ; 005470c0 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 005470c1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 005470c6
    XOR EAX,EAX                         ; 005470c9
    RET                                 ; 005470cb

