; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005633c4(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0056deac at 0056defc
;   crt_stdio.c_fclose_FUN_00563380 at 005633b7
;
; Called Functions:
;   crt_unknown.c_FUN_005634b0
;   FUN_00568620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005633c4
        ;   Label: crt_unknown.c_FUN_005633c4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005633c5
    PUSH EDX                            ; 005633c9
    MOV EBX,dword ptr [ESP + 0xc]       ; 005633ca
    PUSH EBX                            ; 005633ce
    CALL crt_unknown.c_FUN_005634b0     ; 005633cf
        ;   XREF to: 005634b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005634b0()
    ADD ESP,0x8                         ; 005633d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005633d7
    PUSH ECX                            ; 005633db
    MOV EBX,EAX                         ; 005633dc
    CALL FUN_00568620                   ; 005633de
        ;   XREF to: 00568620 (UNCONDITIONAL_CALL)  ; undefined FUN_00568620()
    ADD ESP,0x4                         ; 005633e3
    MOV EAX,EBX                         ; 005633e6
    POP EBX                             ; 005633e8
    RET                                 ; 005633e9

