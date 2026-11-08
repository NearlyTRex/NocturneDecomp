; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004da720(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004da990 at 004dac71
;
; Referenced Globals:
;   TerminatedCString s_anon_005db3fa
;
; Called Functions:
;   FUN_005b8100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004da720
        ;   Label: FUN_004da720
    LEA EAX,[EDX + 0x200]               ; 004da724
    PUSH EAX                            ; 004da72a
    LEA EAX,[EDX + 0x100]               ; 004da72b
    PUSH EAX                            ; 004da731
    PUSH EDX                            ; 004da732
    PUSH 0x5db3fa                       ; 004da733 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004da738
    PUSH EDX                            ; 004da73c
    CALL FUN_005b8100                   ; 004da73d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 004da742
    CMP EAX,0x3                         ; 004da745
    SETZ AL                             ; 004da748
    AND EAX,0xff                        ; 004da74b
    RET                                 ; 004da750

