; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00479950(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004455d0 at 00445601
;
; Called Functions:
;   FUN_005c25c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00479950
        ;   Label: FUN_00479950
    PUSH EDX                            ; 00479954
    CALL FUN_005c25c0                   ; 00479955
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25c0()
    ADD ESP,0x4                         ; 0047995a
    TEST EAX,EAX                        ; 0047995d
    SETZ AL                             ; 0047995f
    AND EAX,0xff                        ; 00479962
    RET                                 ; 00479967

