; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00516a90(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_Warning:_called_fire()_for_melee_005910d1
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   FUN_0043ac60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00516a90
        ;   Label: FUN_00516a90
    PUSH EDX                            ; 00516a94
    PUSH 0x5910d1                       ; 00516a95 | = "Warning: called fire() for melee weap..."
    MOV ECX,dword ptr [0x005ad350]      ; 00516a9a | PTR_DAT_005ad350
    PUSH ECX                            ; 00516aa0 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 00516aa1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0xc                         ; 00516aa6
    XOR EAX,EAX                         ; 00516aa9
    RET                                 ; 00516aab

