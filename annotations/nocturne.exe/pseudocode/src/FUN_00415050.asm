; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415050(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_beast.dfm_00578d9f
;   undefined4 DAT_0059a408
;   undefined4 DAT_0059a40c
;   undefined1* PTR_FUN_0059a414 = 004150b0
;
; Called Functions:
;   FUN_00479560
;   FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415050
        ;   Label: FUN_00415050
    MOV EDX,dword ptr [ESP + 0x8]       ; 00415051
    PUSH EDX                            ; 00415055
    CALL FUN_00479560                   ; 00415056
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 0041505b
    PUSH 0x578d9f                       ; 0041505e | = "beast.dfm"
    MOV EBX,EAX                         ; 00415063
    ADD EAX,0x150                       ; 00415065
    PUSH EAX                            ; 0041506a
    MOV dword ptr [EAX + -0x4],0x59a414 ; 0041506b | PTR_FUN_0059a414
    CALL FUN_0051e0c0                   ; 00415072
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    FLD float ptr [0x0059a408]          ; 00415077 | DAT_0059a408
    FLD float ptr [0x0059a40c]          ; 0041507d | DAT_0059a40c
    MOV dword ptr [EBX + 0x2dd4],0x41200000 ; 00415083
    ADD ESP,0x8                         ; 0041508d
    MOV dword ptr [EBX + 0x2dd8],0x41200000 ; 00415090
    MOV EAX,EBX                         ; 0041509a
    FXCH                                ; 0041509c
    FSTP float ptr [EBX + 0x2ddc]       ; 0041509e
    FSTP float ptr [EBX + 0x2de0]       ; 004150a4
    POP EBX                             ; 004150aa
    RET                                 ; 004150ab

