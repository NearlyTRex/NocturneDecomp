; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_melee_cpp_CMelee_fire_FUN_004ceed0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_0058842d
;   TerminatedCString s_CMelee_fire_should_never_0058843f
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x58842d                    ; 004ceed0 | = "..\\core\\melee.cpp"
        ;   Label: core_melee.cpp_CMelee_fire_FUN_004ceed0
    MOV ECX,0x8c                        ; 004ceed5
    PUSH 0x58843f                       ; 004ceeda | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x01cc4800],EDX      ; 004ceedf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004ceee5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ceeeb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    MOV EAX,0x1                         ; 004ceef0
    ADD ESP,0x4                         ; 004ceef5
    RET                                 ; 004ceef8

