; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004dba80(undefined4 param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00491f40 at 00492ad8
;   FUN_00518cd0 at 0051b4b3
;   FUN_00524940 at 005257dc
;
; Called Functions:
;   FUN_004db9e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dba80
        ;   Label: FUN_004dba80
    PUSH EDX                            ; 004dba84
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dba85
    PUSH ECX                            ; 004dba89
    CALL FUN_004db9e0                   ; 004dba8a
        ;   XREF to: 004db9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004db9e0()
    ADD ESP,0x8                         ; 004dba8f
    TEST EAX,EAX                        ; 004dba92
    SETNZ AL                            ; 004dba94
    AND EAX,0xff                        ; 004dba97
    RET                                 ; 004dba9c

