; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; XREF[2]:
;   core_game.cpp_FUN_004b90d0 at 004b9efa
;   wincore_winrun.cpp_FUN_0058ed90 at 0058ef58
;
; Referenced Globals:
;   undefined4 DAT_02662d84
;   undefined4 DAT_02662dd8
;   undefined4 DAT_02662ddc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058eb70
        ;   Label: wincore_winrun.cpp_enqueueInput_FUN_0058eb70
    MOV EDX,dword ptr [0x02662ddc]      ; 0058eb71 | DAT_02662ddc
    MOV ECX,dword ptr [0x02662dd8]      ; 0058eb77 | DAT_02662dd8
    INC EDX                             ; 0058eb7d
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058eb7e
    MOV dword ptr [EDX*0x4 + 0x2662d84],EBX ; 0058eb82 | DAT_02662d84
    CMP EDX,0x14                        ; 0058eb89
    JL 0x0058eb90                       ; 0058eb8c
        ;   XREF to: 0058eb90 (CONDITIONAL_JUMP)  ; LAB_0058eb90
    XOR EDX,EDX                         ; 0058eb8e
    CMP EDX,ECX                         ; 0058eb90
        ;   Label: LAB_0058eb90
    JNZ 0x0058eb9c                      ; 0058eb92
        ;   XREF to: 0058eb9c (CONDITIONAL_JUMP)  ; LAB_0058eb9c
    INC ECX                             ; 0058eb94
    CMP ECX,0x14                        ; 0058eb95
    JL 0x0058eb9c                       ; 0058eb98
        ;   XREF to: 0058eb9c (CONDITIONAL_JUMP)  ; LAB_0058eb9c
    XOR ECX,ECX                         ; 0058eb9a
    MOV dword ptr [0x02662dd8],ECX      ; 0058eb9c | DAT_02662dd8
        ;   Label: LAB_0058eb9c
    MOV dword ptr [0x02662ddc],EDX      ; 0058eba2 | DAT_02662ddc
    POP EBX                             ; 0058eba8
    RET                                 ; 0058eba9

