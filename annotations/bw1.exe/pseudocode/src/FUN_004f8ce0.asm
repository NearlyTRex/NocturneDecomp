; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004f8ce0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00469550 at 0046bb74
;   FUN_004a70d0 at 004a7c68
;
; Called Functions:
;   FUN_004f8c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8ce0
        ;   Label: FUN_004f8ce0
    PUSH EDX                            ; 004f8ce4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f8ce5
    PUSH ECX                            ; 004f8ce9
    CALL FUN_004f8c90                   ; 004f8cea
        ;   XREF to: 004f8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8c90()
    ADD ESP,0x8                         ; 004f8cef
    TEST EAX,EAX                        ; 004f8cf2
    SETNZ AL                            ; 004f8cf4
    AND EAX,0xff                        ; 004f8cf7
    RET                                 ; 004f8cfc

