; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bae03(int param_1)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c207f
;   crt_unknown.c_FUN_005badd7 at 005badf0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005bae03
        ;   Label: crt_unknown.c_FUN_005bae03
    PUSH EBX                            ; 005bae04
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bae05
    MOV EBX,0xfffffffc                  ; 005bae09
    MOV dword ptr [ESP + EBX*0x1],EBX   ; 005bae0e
        ;   Label: LAB_005bae0e
    SUB EBX,0x1000                      ; 005bae11
    SUB EAX,0x1000                      ; 005bae17
    JG 0x005bae0e                       ; 005bae1c
        ;   XREF to: 005bae0e (CONDITIONAL_JUMP)  ; LAB_005bae0e
    POP EBX                             ; 005bae1e
    POP EAX                             ; 005bae1f
    RET 0x4                             ; 005bae20

