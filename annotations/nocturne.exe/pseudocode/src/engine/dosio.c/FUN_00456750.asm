; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00456750(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004c85f0 at 004c86df
;
; Referenced Globals:
;   string s_..\\engine\\dosio.c_0057d2b7
;   string s_addGetFileInfoHook_-_too_many!_0057d2c9
;   undefined4 DAT_01af4ed8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00456750
        ;   Label: FUN_00456750
    CMP dword ptr [0x01af4ed8],0x5      ; 00456751 | DAT_01af4ed8
    JGE 0x00456775                      ; 00456758
        ;   XREF to: 00456775 (CONDITIONAL_JUMP)  ; LAB_00456775
    MOV EAX,[0x01af4ed8]                ; 0045675a | DAT_01af4ed8
        ;   Label: LAB_0045675a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045675f
    LEA ESI,[EAX + 0x1]                 ; 00456763
    MOV dword ptr [EAX*0x4 + 0x1af4edc],EDX ; 00456766
    MOV dword ptr [0x01af4ed8],ESI      ; 0045676d | DAT_01af4ed8
    POP ESI                             ; 00456773
    RET                                 ; 00456774
    PUSH EBX                            ; 00456775
        ;   Label: LAB_00456775
    MOV ECX,0x57d2b7                    ; 00456776 | = "..\\engine\\dosio.c"
    MOV EBX,0x4d                        ; 0045677b
    PUSH 0x57d2c9                       ; 00456780 | = "addGetFileInfoHook - too many!"
    MOV dword ptr [0x01cc4800],ECX      ; 00456785 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0045678b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00456791
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00456796
    POP EBX                             ; 00456799
    JMP 0x0045675a                      ; 0045679a
        ;   XREF to: 0045675a (UNCONDITIONAL_JUMP)  ; LAB_0045675a

