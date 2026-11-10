; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aede0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005aaed4 at 005aaefa
;
; Called Functions:
;   crt_unknown.c_FUN_005ac9c0
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005af2a0
;   crt_unknown.c_FUN_005b08a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aede0
        ;   Label: crt_unknown.c_FUN_005aede0
    PUSH ESI                            ; 005aede1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aede2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005aede6
    PUSH EBX                            ; 005aedea
        ;   Label: LAB_005aedea
    CALL crt_unknown.c_FUN_005af2a0     ; 005aedeb
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2a0()
    ADD ESP,0x4                         ; 005aedf0
    TEST EAX,EAX                        ; 005aedf3
    JNZ 0x005aee20                      ; 005aedf5
        ;   XREF to: 005aee20 (CONDITIONAL_JUMP)  ; LAB_005aee20
    PUSH EBX                            ; 005aedf7
    CALL crt_unknown.c_FUN_005ac9c0     ; 005aedf8
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac9c0()
    ADD ESP,0x4                         ; 005aedfd
    PUSH EAX                            ; 005aee00
    PUSH ESI                            ; 005aee01
    CALL crt_unknown.c_FUN_005b08a0     ; 005aee02
        ;   XREF to: 005b08a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b08a0()
    ADD ESP,0x8                         ; 005aee07
    TEST EAX,EAX                        ; 005aee0a
    JZ 0x005aee13                       ; 005aee0c
        ;   XREF to: 005aee13 (CONDITIONAL_JUMP)  ; LAB_005aee13
    MOV EAX,EBX                         ; 005aee0e
    POP ESI                             ; 005aee10
    POP EBX                             ; 005aee11
    RET                                 ; 005aee12
    PUSH EBX                            ; 005aee13
        ;   Label: LAB_005aee13
    CALL crt_unknown.c_FUN_005aca00     ; 005aee14
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005aee19
    MOV EBX,EAX                         ; 005aee1c
    JMP 0x005aedea                      ; 005aee1e
        ;   XREF to: 005aedea (UNCONDITIONAL_JUMP)  ; LAB_005aedea
    XOR EAX,EAX                         ; 005aee20
        ;   Label: LAB_005aee20
    POP ESI                             ; 005aee22
    POP EBX                             ; 005aee23
    RET                                 ; 005aee24

