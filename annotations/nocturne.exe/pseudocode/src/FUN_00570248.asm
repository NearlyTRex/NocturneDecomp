; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00570248(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a4884 = 0056ff82
;
; Called Functions:
;   FUN_0056fe12
;   FUN_0056fe65
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570248
        ;   Label: FUN_00570248
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570249
    PUSH EDX                            ; 0057024d
    CALL FUN_0056fe12                   ; 0057024e
        ;   XREF to: 0056fe12 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fe12()
    ADD ESP,0x4                         ; 00570253
    PUSH 0x0                            ; 00570256
    PUSH 0x0                            ; 00570258
    PUSH 0x0                            ; 0057025a
    PUSH EAX                            ; 0057025c
    MOV EBX,EAX                         ; 0057025d
    MOV dword ptr [EAX + 0x28],0x5a4884 ; 0057025f | PTR_FUN_005a4884
    CALL FUN_0056fe65                   ; 00570266
        ;   XREF to: 0056fe65 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fe65()
    ADD ESP,0x10                        ; 0057026b
    MOV EAX,EBX                         ; 0057026e
    POP EBX                             ; 00570270
    RET                                 ; 00570271

