; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bb007(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_cpp.c_pureVirtualStub_FUN_005b7740 at 005b7747
;   crt_unknown.c_FUN_005bab17 at 005bab36
;
; Called Functions:
;   crt_unknown.c_FUN_005c1be0
;   unkafter_morph.cpp_FUN_005c2120
;   unkafter_morph.cpp_FUN_005c2154
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005bb007
        ;   Label: crt_unknown.c_FUN_005bb007
    MOV AX,DS                           ; 005bb008
    AND EAX,0xffff                      ; 005bb00a
    PUSH EAX                            ; 005bb00f
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bb010
    PUSH EDX                            ; 005bb014
    CALL unkafter_morph.cpp_FUN_005c2120 ; 005bb015
        ;   XREF to: 005c2120 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2120()
    ADD ESP,0x8                         ; 005bb01a
    TEST EAX,EAX                        ; 005bb01d
    JZ 0x005bb030                       ; 005bb01f
        ;   XREF to: 005bb030 (CONDITIONAL_JUMP)  ; LAB_005bb030
    MOV ESI,dword ptr [ESP + 0xc]       ; 005bb021
    PUSH ESI                            ; 005bb025
    CALL unkafter_morph.cpp_FUN_005c2154 ; 005bb026
        ;   XREF to: 005c2154 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2154()
    ADD ESP,0x4                         ; 005bb02b
    POP ESI                             ; 005bb02e
    RET                                 ; 005bb02f
    PUSH EBX                            ; 005bb030
        ;   Label: LAB_005bb030
    MOV ECX,dword ptr [ESP + 0x10]      ; 005bb031
    PUSH ECX                            ; 005bb035
    MOV EBX,dword ptr [ESP + 0x10]      ; 005bb036
    PUSH EBX                            ; 005bb03a
    CALL crt_unknown.c_FUN_005c1be0     ; 005bb03b
        ;   XREF to: 005c1be0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1be0()
    ADD ESP,0x8                         ; 005bb040
    POP EBX                             ; 005bb043
    POP ESI                             ; 005bb044
    RET                                 ; 005bb045

