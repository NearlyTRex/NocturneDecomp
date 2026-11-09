; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00428600(int param_1)
;
;
; XREF[1]:
;   core_carved.cpp_FUN_00428a80 at 00428b24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428600
        ;   Label: core_carved.cpp_FUN_00428600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428601
    PUSH 0x0                            ; 00428605
    PUSH 0x0                            ; 00428607
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428609
    PUSH EBX                            ; 0042860f
    MOV dword ptr [EBX + 0xd064],0x0    ; 00428610
    CALL dword ptr [EAX + 0x128]        ; 0042861a
    ADD ESP,0xc                         ; 00428620
    PUSH 0x0                            ; 00428623
    PUSH 0x1                            ; 00428625
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428627
    PUSH EBX                            ; 0042862d
    CALL dword ptr [EAX + 0x128]        ; 0042862e
    ADD ESP,0xc                         ; 00428634
    POP EBX                             ; 00428637
    RET                                 ; 00428638

