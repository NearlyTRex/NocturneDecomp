; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c31c3(int param_1)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ca370 at 005ca3cf
;   crt_unknown.c_FUN_005c3197 at 005c31b0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c31c3
        ;   Label: crt_unknown.c_FUN_005c31c3
    PUSH EBX                            ; 005c31c4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c31c5
    MOV EBX,0xfffffffc                  ; 005c31c9
    MOV dword ptr [ESP + EBX*0x1],EBX   ; 005c31ce
        ;   Label: LAB_005c31ce
    SUB EBX,0x1000                      ; 005c31d1
    SUB EAX,0x1000                      ; 005c31d7
    JG 0x005c31ce                       ; 005c31dc
        ;   XREF to: 005c31ce (CONDITIONAL_JUMP)  ; LAB_005c31ce
    POP EBX                             ; 005c31de
    POP EAX                             ; 005c31df
    RET 0x4                             ; 005c31e0

