; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_processSignal_FUN_005cd3b8(int signal_number)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
;
; XREF[2]:
;   crt_signal.c_FUN_005cd2ac at 005cd2ae
;   crt_unknown.c_FUN_005cd1b0 at 005cd1d2
;
; Referenced Globals:
;   undefined1* switchdataD_005cd388 = 005cd3eb
;
; Called Functions:
;   crt_unknown.c_FUN_005c3148
;   crt_unknown.c_FUN_005cd0f0
;   crt_unknown.c_FUN_005cd144
;   crt_unknown.c_FUN_005cd210
;   crt_unknown.c_FUN_005cd274
;   crt_unknown.c_FUN_005cd2b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd3b8
        ;   Label: crt_unknown.c_processSignal_FUN_005cd3b8
    PUSH ESI                            ; 005cd3b9
    MOV ESI,dword ptr [ESP + 0xc]       ; 005cd3ba
    PUSH ESI                            ; 005cd3be
    CALL crt_unknown.c_FUN_005cd144     ; 005cd3bf
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd144()
    ADD ESP,0x4                         ; 005cd3c4
    LEA EDX,[ESI + -0x1]                ; 005cd3c7
    MOV EBX,EAX                         ; 005cd3ca
    CMP EDX,0xb                         ; 005cd3cc
    JA 0x005cd428                       ; 005cd3cf
        ;   XREF to: 005cd428 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EDX*0x4 + 0x5cd388] ; 005cd3d1 | caseD_1 | caseD_2 | caseD_c
        ;   Label: switchD
    PUSH 0x8c                           ; 005cd3d9
        ;   Label: caseD_2
    CALL crt_unknown.c_FUN_005cd2b8     ; 005cd3de
        ;   XREF to: 005cd2b8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd2b8()
    ADD ESP,0x4                         ; 005cd3e3
    XOR EAX,EAX                         ; 005cd3e6
    POP ESI                             ; 005cd3e8
    POP EBX                             ; 005cd3e9
    RET                                 ; 005cd3ea
    CMP EAX,0x2                         ; 005cd3eb
        ;   Label: caseD_1
    JNZ 0x005cd3f5                      ; 005cd3ee
        ;   XREF to: 005cd3f5 (CONDITIONAL_JUMP)  ; caseD_c
    CALL crt_unknown.c_FUN_005c3148     ; 005cd3f0
        ;   XREF to: 005c3148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3148()
    CMP EBX,0x1                         ; 005cd3f5
        ;   Label: caseD_3
    JZ 0x005cd415                       ; 005cd3f8
        ;   XREF to: 005cd415 (CONDITIONAL_JUMP)  ; LAB_005cd415
    CMP EBX,0x2                         ; 005cd3fa
    JZ 0x005cd415                       ; 005cd3fd
        ;   XREF to: 005cd415 (CONDITIONAL_JUMP)  ; LAB_005cd415
    CMP EBX,0x3                         ; 005cd3ff
    JZ 0x005cd415                       ; 005cd402
        ;   XREF to: 005cd415 (CONDITIONAL_JUMP)  ; LAB_005cd415
    PUSH 0x2                            ; 005cd404
    PUSH ESI                            ; 005cd406
    CALL crt_unknown.c_FUN_005cd0f0     ; 005cd407
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd40c
    PUSH ESI                            ; 005cd40f
    CALL EBX                            ; 005cd410
    ADD ESP,0x4                         ; 005cd412
    CALL crt_unknown.c_FUN_005cd210     ; 005cd415
        ;   XREF to: 005cd210 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd210()
        ;   Label: LAB_005cd415
    TEST EAX,EAX                        ; 005cd41a
    JNZ 0x005cd430                      ; 005cd41c
        ;   XREF to: 005cd430 (CONDITIONAL_JUMP)  ; LAB_005cd430
    CALL crt_unknown.c_FUN_005cd274     ; 005cd41e
        ;   XREF to: 005cd274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd274()
    XOR EAX,EAX                         ; 005cd423
    POP ESI                             ; 005cd425
    POP EBX                             ; 005cd426
    RET                                 ; 005cd427
    MOV EAX,0xffffffff                  ; 005cd428
        ;   Label: default
    POP ESI                             ; 005cd42d
    POP EBX                             ; 005cd42e
    RET                                 ; 005cd42f
    XOR EAX,EAX                         ; 005cd430
        ;   Label: LAB_005cd430
    POP ESI                             ; 005cd432
    POP EBX                             ; 005cd433
    RET                                 ; 005cd434

