; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00596560(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00597970 at 0059798c
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596560
        ;   Label: FUN_00596560
    MOV EBX,dword ptr [ESP + 0x8]       ; 00596561
    PUSH 0x18000                        ; 00596565
    MOV dword ptr [EBX + 0x18004],0x0   ; 0059656a
    PUSH 0x0                            ; 00596574
    LEA EAX,[EBX + 0x4]                 ; 00596576
    MOV dword ptr [EBX],0x0             ; 00596579
    PUSH EAX                            ; 0059657f
    MOV dword ptr [EBX + 0x18008],0x0   ; 00596580
    CALL FUN_005bfb70                   ; 0059658a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059658f
    MOV EAX,EBX                         ; 00596592
    POP EBX                             ; 00596594
    RET                                 ; 00596595

