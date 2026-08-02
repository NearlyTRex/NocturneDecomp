; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00567928(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 005675ad
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_unknown.c_FUN_00567540
;   crt_unknown.c_FUN_0056754c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567928
        ;   Label: crt_unknown.c_FUN_00567928
    PUSH ESI                            ; 00567929
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056792a
    XOR EBX,EBX                         ; 0056792e
    PUSH ESI                            ; 00567930
        ;   Label: LAB_00567930
    CALL crt_unknown.c_FUN_00567540     ; 00567931
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    MOV EDX,EAX                         ; 00567936
    ADD ESP,0x4                         ; 00567938
    INC DL                              ; 0056793b
    AND EDX,0xff                        ; 0056793d
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 00567943 | DAT_005c168c
    JZ 0x0056794f                       ; 0056794a
        ;   XREF to: 0056794f (CONDITIONAL_JUMP)  ; LAB_0056794f
    INC EBX                             ; 0056794c
    JMP 0x00567930                      ; 0056794d
        ;   XREF to: 00567930 (UNCONDITIONAL_JUMP)  ; LAB_00567930
    TEST byte ptr [ESI + 0x10],0x2      ; 0056794f
        ;   Label: LAB_0056794f
    JNZ 0x0056795f                      ; 00567953
        ;   XREF to: 0056795f (CONDITIONAL_JUMP)  ; LAB_0056795f
    PUSH ESI                            ; 00567955
    PUSH EAX                            ; 00567956
    CALL crt_unknown.c_FUN_0056754c     ; 00567957
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056754c()
    ADD ESP,0x8                         ; 0056795c
    MOV EAX,EBX                         ; 0056795f
        ;   Label: LAB_0056795f
    POP ESI                             ; 00567961
    POP EBX                             ; 00567962
    RET                                 ; 00567963

