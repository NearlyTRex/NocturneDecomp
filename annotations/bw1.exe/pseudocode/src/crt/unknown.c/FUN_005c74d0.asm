; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c74d0(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c140c at 005c150f
;   crt_unknown.c_FUN_005c64a0 at 005c64a7
;
; Called Functions:
;   crt_unknown.c_FUN_005cbcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c74d0
        ;   Label: crt_unknown.c_FUN_005c74d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c74d1
    TEST byte ptr [EBX + 0xd],0x20      ; 005c74d5
    JNZ 0x005c7501                      ; 005c74d9
        ;   XREF to: 005c7501 (CONDITIONAL_JUMP)  ; LAB_005c7501
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c74db
    PUSH EDX                            ; 005c74de
    CALL crt_unknown.c_FUN_005cbcc0     ; 005c74df
        ;   XREF to: 005cbcc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cbcc0()
    ADD ESP,0x4                         ; 005c74e4
    TEST EAX,EAX                        ; 005c74e7
    JZ 0x005c7501                       ; 005c74e9
        ;   XREF to: 005c7501 (CONDITIONAL_JUMP)  ; LAB_005c7501
    MOV DL,byte ptr [EBX + 0xd]         ; 005c74eb
    OR DL,0x20                          ; 005c74ee
    MOV byte ptr [EBX + 0xd],DL         ; 005c74f1
    TEST DL,0x7                         ; 005c74f4
    JNZ 0x005c7501                      ; 005c74f7
        ;   XREF to: 005c7501 (CONDITIONAL_JUMP)  ; LAB_005c7501
    MOV CL,DL                           ; 005c74f9
    OR CL,0x2                           ; 005c74fb
    MOV byte ptr [EBX + 0xd],CL         ; 005c74fe
    POP EBX                             ; 005c7501
        ;   Label: LAB_005c7501
    RET                                 ; 005c7502

