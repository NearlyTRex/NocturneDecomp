; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005670ed(int param_1)
;
;
; XREF[2]:
;   FUN_005670c1 at 005670da
;   crt_startup.cpp_WinMainBootstrap_FUN_0056df10 at 0056df6f
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005670ed
        ;   Label: FUN_005670ed
    PUSH EBX                            ; 005670ee
    MOV EAX,dword ptr [ESP + 0xc]       ; 005670ef
    MOV EBX,0xfffffffc                  ; 005670f3
    MOV dword ptr [ESP + EBX*0x1],EBX   ; 005670f8
        ;   Label: LAB_005670f8
    SUB EBX,0x1000                      ; 005670fb
    SUB EAX,0x1000                      ; 00567101
    JG 0x005670f8                       ; 00567106
        ;   XREF to: 005670f8 (CONDITIONAL_JUMP)  ; LAB_005670f8
    POP EBX                             ; 00567108
    POP EAX                             ; 00567109
    RET 0x4                             ; 0056710a

