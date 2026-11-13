; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005abff0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   undefined4 DAT_02c99310
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005abff0
        ;   Label: wincore_wddvmem.cpp_FUN_005abff0
    PUSH EBP                            ; 005abff1
    MOV EDX,dword ptr [0x00629010]      ; 005abff2 | DAT_00629010
    TEST EDX,EDX                        ; 005abff8
    JNZ 0x005ac009                      ; 005abffa
        ;   XREF to: 005ac009 (CONDITIONAL_JUMP)  ; LAB_005ac009
    MOV ESI,dword ptr [0x02c99310]      ; 005abffc | DAT_02c99310
    TEST ESI,ESI                        ; 005ac002
    JNZ 0x005ac029                      ; 005ac004
        ;   XREF to: 005ac029 (CONDITIONAL_JUMP)  ; LAB_005ac029
    POP EBP                             ; 005ac006
    POP ESI                             ; 005ac007
    RET                                 ; 005ac008
    PUSH EBX                            ; 005ac009
        ;   Label: LAB_005ac009
    PUSH EDX                            ; 005ac00a
    CALL crt_unknown.c_FUN_005c09f0     ; 005ac00b
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBX,EBX                         ; 005ac010
    ADD ESP,0x4                         ; 005ac012
    MOV dword ptr [0x00629010],EBX      ; 005ac015 | DAT_00629010
    POP EBX                             ; 005ac01b
    MOV ESI,dword ptr [0x02c99310]      ; 005ac01c | DAT_02c99310
    TEST ESI,ESI                        ; 005ac022
    JNZ 0x005ac029                      ; 005ac024
        ;   XREF to: 005ac029 (CONDITIONAL_JUMP)  ; LAB_005ac029
    POP EBP                             ; 005ac026
    POP ESI                             ; 005ac027
    RET                                 ; 005ac028
    PUSH ESI                            ; 005ac029
        ;   Label: LAB_005ac029
    CALL crt_unknown.c_FUN_005c09f0     ; 005ac02a
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBP,EBP                         ; 005ac02f
    ADD ESP,0x4                         ; 005ac031
    MOV dword ptr [0x0071362c],EBP      ; 005ac034 | DAT_0071362c
    POP EBP                             ; 005ac03a
    POP ESI                             ; 005ac03b
    RET                                 ; 005ac03c

