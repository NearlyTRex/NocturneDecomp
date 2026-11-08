; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; XREF[13]:
;   FUN_00408c20 at 00408c36
;   FUN_0040c870 at 0040c9bc
;   FUN_00449a50 at 00449cab
;   FUN_0049e1a0 at 0049e53d
;   FUN_004b4230 at 004b4304
;   FUN_004b6c60 at 004b6cbb
;   FUN_004e8630 at 004e88dc
;   FUN_00500310 at 0050036c
;   FUN_00501a70 at 00501acc
;   FUN_00540080 at 0054042c
;   ... and 3 more
;
; Called Functions:
;   FUN_0057bef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0057d8a0
        ;   Label: FUN_0057d8a0
    PUSH 0x0                            ; 0057d8a4
    PUSH 0x0                            ; 0057d8a6
    PUSH dword ptr [EAX + 0x8]          ; 0057d8a8
    PUSH dword ptr [EAX + 0x4]          ; 0057d8ab
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057d8ae
    PUSH dword ptr [EAX]                ; 0057d8b2
    PUSH EDX                            ; 0057d8b4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d8b5
    PUSH ECX                            ; 0057d8b9
    CALL FUN_0057bef0                   ; 0057d8ba
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bef0()
    ADD ESP,0x1c                        ; 0057d8bf
    RET                                 ; 0057d8c2

