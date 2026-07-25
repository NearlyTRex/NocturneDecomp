; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527930(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005bea90
;   undefined4 DAT_005bea94
;
; Called Functions:
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00527930
        ;   Label: FUN_00527930
    MOV [0x005bea90],EAX                ; 00527934 | DAT_005bea90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00527939
    PUSH 0x0                            ; 0052793d
    MOV [0x005bea94],EAX                ; 0052793f | DAT_005bea94
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0 ; 00527944
        ;   XREF to: 00521ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0()
    ADD ESP,0x4                         ; 00527949
    RET                                 ; 0052794c

