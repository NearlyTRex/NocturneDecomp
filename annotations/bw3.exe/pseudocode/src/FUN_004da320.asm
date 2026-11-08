; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004da320(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004da570 at 004da7ef
;
; Referenced Globals:
;   TerminatedCString s_anon_005c5f07
;
; Called Functions:
;   FUN_005a3230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004da320
        ;   Label: FUN_004da320
    LEA EAX,[EDX + 0x200]               ; 004da324
    PUSH EAX                            ; 004da32a
    LEA EAX,[EDX + 0x100]               ; 004da32b
    PUSH EAX                            ; 004da331
    PUSH EDX                            ; 004da332
    PUSH 0x5c5f07                       ; 004da333 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004da338
    PUSH EDX                            ; 004da33c
    CALL FUN_005a3230                   ; 004da33d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 004da342
    CMP EAX,0x3                         ; 004da345
    SETZ AL                             ; 004da348
    AND EAX,0xff                        ; 004da34b
    RET                                 ; 004da350

