; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ac930(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a50e0 at 005a510f
;
; Called Functions:
;   crt_unknown.c_FUN_005ac960
;   crt_unknown.c_FUN_005af2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac930
        ;   Label: crt_unknown.c_FUN_005ac930
    PUSH ESI                            ; 005ac931
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac932
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ac936
    PUSH EDX                            ; 005ac93a
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ac93b
    PUSH ECX                            ; 005ac93f
    CALL crt_unknown.c_FUN_005ac960     ; 005ac940
        ;   XREF to: 005ac960 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac960()
    ADD ESP,0x8                         ; 005ac945
    INC EAX                             ; 005ac948
    PUSH EAX                            ; 005ac949
    MOV ESI,dword ptr [ESP + 0x14]      ; 005ac94a
    PUSH ESI                            ; 005ac94e
    PUSH EBX                            ; 005ac94f
    CALL crt_unknown.c_FUN_005af2e0     ; 005ac950
        ;   XREF to: 005af2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2e0()
    ADD ESP,0xc                         ; 005ac955
    MOV EAX,EBX                         ; 005ac958
    POP ESI                             ; 005ac95a
    POP EBX                             ; 005ac95b
    RET                                 ; 005ac95c

