; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00562490(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Warning_called_fire_for_005f1a1f
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00445430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562490
        ;   Label: FUN_00562490
    PUSH EDX                            ; 00562494
    PUSH 0x5f1a1f                       ; 00562495 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x00611100]      ; 0056249a | PTR_DAT_00611100
    PUSH ECX                            ; 005624a0 | DAT_007db5f0
    CALL FUN_00445430                   ; 005624a1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 005624a6
    XOR EAX,EAX                         ; 005624a9
    RET                                 ; 005624ab

