; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554600(int param_1)
;
;
; XREF[6]:
;   FUN_0043d1c0 at 0043d1fd
;   FUN_0046ec80 at 0046ec86
;   FUN_00477890 at 004778c7
;   FUN_004b27c0 at 004b27fd
;   FUN_00515ea0 at 00515edd
;   FUN_00545c30 at 00545ca1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554600
        ;   Label: FUN_00554600
    MOV ECX,dword ptr [EDX + 0x560]     ; 00554604
    TEST ECX,ECX                        ; 0055460a
    JLE 0x00554250                      ; 0055460c
        ;   XREF to: 00554250 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00554612
    MOV EAX,0x1                         ; 00554613
    MOV EBX,ECX                         ; 00554618
    SUB EBX,EAX                         ; 0055461a
    MOV dword ptr [EDX + 0x560],EBX     ; 0055461c
    POP EBX                             ; 00554622
    RET                                 ; 00554623

