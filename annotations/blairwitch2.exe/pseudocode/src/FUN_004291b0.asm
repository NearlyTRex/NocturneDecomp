; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004291b0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00522350 at 00525570
;
; Called Functions:
;   FUN_00502f10
;   FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004291b0
        ;   Label: FUN_004291b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004291b1
    PUSH 0x0                            ; 004291b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004291b7
    PUSH EDX                            ; 004291bb
    LEA EAX,[EBX + 0x2b4]               ; 004291bc
    PUSH EAX                            ; 004291c2
    MOV dword ptr [EBX + 0x27c8],0x0    ; 004291c3
    CALL FUN_00503860                   ; 004291cd
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 004291d2
    PUSH EAX                            ; 004291d5
    CALL FUN_00502f10                   ; 004291d6
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00502f10()
    ADD ESP,0xc                         ; 004291db
    MOV dword ptr [EBX + 0x27c4],EAX    ; 004291de
    TEST EAX,EAX                        ; 004291e4
    SETGE AL                            ; 004291e6
    AND EAX,0xff                        ; 004291e9
    POP EBX                             ; 004291ee
    RET                                 ; 004291ef

