; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_texlist_cpp_FUN_00596390(int *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_FUN_005c03c0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596390
        ;   Label: core_texlist.cpp_FUN_00596390
    PUSH ESI                            ; 00596391
    PUSH EDI                            ; 00596392
    PUSH EBP                            ; 00596393
    SUB ESP,0x104                       ; 00596394
    MOV EBP,dword ptr [ESP + 0x118]     ; 0059639a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005963a1
    MOV EDI,ESP                         ; 005963a8
    MOV DL,0x2e                         ; 005963aa
    PUSH EDI                            ; 005963ac
    MOV AL,byte ptr [ESI]               ; 005963ad
        ;   Label: LAB_005963ad
    MOV byte ptr [EDI],AL               ; 005963af
    CMP AL,0x0                          ; 005963b1
    JZ 0x005963c5                       ; 005963b3
        ;   XREF to: 005963c5 (CONDITIONAL_JUMP)  ; LAB_005963c5
    MOV AL,byte ptr [ESI + 0x1]         ; 005963b5
    ADD ESI,0x2                         ; 005963b8
    MOV byte ptr [EDI + 0x1],AL         ; 005963bb
    ADD EDI,0x2                         ; 005963be
    CMP AL,0x0                          ; 005963c1
    JNZ 0x005963ad                      ; 005963c3
        ;   XREF to: 005963ad (CONDITIONAL_JUMP)  ; LAB_005963ad
    POP EDI                             ; 005963c5
        ;   Label: LAB_005963c5
    MOV ESI,ESP                         ; 005963c6
    MOV AL,byte ptr [ESI]               ; 005963c8
        ;   Label: LAB_005963c8
    CMP AL,DL                           ; 005963ca
    JZ 0x005963e0                       ; 005963cc
        ;   XREF to: 005963e0 (CONDITIONAL_JUMP)  ; LAB_005963e0
    CMP AL,0x0                          ; 005963ce
    JZ 0x005963de                       ; 005963d0
        ;   XREF to: 005963de (CONDITIONAL_JUMP)  ; LAB_005963de
    INC ESI                             ; 005963d2
    MOV AL,byte ptr [ESI]               ; 005963d3
    CMP AL,DL                           ; 005963d5
    JZ 0x005963e0                       ; 005963d7
        ;   XREF to: 005963e0 (CONDITIONAL_JUMP)  ; LAB_005963e0
    INC ESI                             ; 005963d9
    CMP AL,0x0                          ; 005963da
    JNZ 0x005963c8                      ; 005963dc
        ;   XREF to: 005963c8 (CONDITIONAL_JUMP)  ; LAB_005963c8
    SUB ESI,ESI                         ; 005963de
        ;   Label: LAB_005963de
    MOV EDI,ESI                         ; 005963e0
        ;   Label: LAB_005963e0
    TEST ESI,ESI                        ; 005963e2
    JZ 0x005964bb                       ; 005963e4
        ;   XREF to: 005964bb (CONDITIONAL_JUMP)  ; LAB_005964bb
    MOV ESI,0x5f787f                    ; 005963ea
        ;   Label: LAB_005963ea
    PUSH EDI                            ; 005963ef
    MOV AL,byte ptr [ESI]               ; 005963f0
        ;   Label: LAB_005963f0
    MOV byte ptr [EDI],AL               ; 005963f2
    CMP AL,0x0                          ; 005963f4
    JZ 0x00596408                       ; 005963f6
        ;   XREF to: 00596408 (CONDITIONAL_JUMP)  ; LAB_00596408
    MOV AL,byte ptr [ESI + 0x1]         ; 005963f8
    ADD ESI,0x2                         ; 005963fb
    MOV byte ptr [EDI + 0x1],AL         ; 005963fe
    ADD EDI,0x2                         ; 00596401
    CMP AL,0x0                          ; 00596404
    JNZ 0x005963f0                      ; 00596406
        ;   XREF to: 005963f0 (CONDITIONAL_JUMP)  ; LAB_005963f0
    POP EDI                             ; 00596408
        ;   Label: LAB_00596408
    PUSH 0x5f7884                       ; 00596409
    LEA EAX,[ESP + 0x4]                 ; 0059640e
    PUSH EAX                            ; 00596412
    PUSH 0x5f7887                       ; 00596413
    CALL engine_dosio.cpp_FUN_00479180  ; 00596418
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0059641d
    MOV dword ptr [ESP + 0x100],EAX     ; 00596420
    TEST EAX,EAX                        ; 00596427
    JNZ 0x0059644e                      ; 00596429
        ;   XREF to: 0059644e (CONDITIONAL_JUMP)  ; LAB_0059644e
    MOV EBX,0x5f788c                    ; 0059642b
    MOV ESI,0xb6                        ; 00596430
    PUSH 0x5f78a0                       ; 00596435
    MOV dword ptr [0x01d1d400],EBX      ; 0059643a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00596440 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596446
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059644b
    MOV EDI,dword ptr [EBP]             ; 0059644e
        ;   Label: LAB_0059644e
    PUSH EDI                            ; 00596451
    PUSH 0x5f78c3                       ; 00596452
    MOV EAX,dword ptr [ESP + 0x108]     ; 00596457
    PUSH EAX                            ; 0059645e
    XOR EDI,EDI                         ; 0059645f
    CALL crt_unknown.c_FUN_005c03c0     ; 00596461
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [EBP]             ; 00596466
    ADD ESP,0xc                         ; 00596469
    TEST EDX,EDX                        ; 0059646c
    JLE 0x005964a0                      ; 0059646e
        ;   XREF to: 005964a0 (CONDITIONAL_JUMP)  ; LAB_005964a0
    LEA ESI,[EBP + 0xc]                 ; 00596470
    MOV EBX,EBP                         ; 00596473
    MOV ECX,dword ptr [EBX + 0x5dc4]    ; 00596475
        ;   Label: LAB_00596475
    PUSH ECX                            ; 0059647b
    PUSH ESI                            ; 0059647c
    PUSH 0x5f78c7                       ; 0059647d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00596482
    ADD EBX,0x4                         ; 00596489
    PUSH EAX                            ; 0059648c
    INC EDI                             ; 0059648d
    ADD ESI,0x18                        ; 0059648e
    CALL crt_unknown.c_FUN_005c03c0     ; 00596491
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [EBP]             ; 00596496
    ADD ESP,0x10                        ; 00596499
    CMP EDI,EDX                         ; 0059649c
    JL 0x00596475                       ; 0059649e
        ;   XREF to: 00596475 (CONDITIONAL_JUMP)  ; LAB_00596475
    MOV ECX,dword ptr [ESP + 0x100]     ; 005964a0
        ;   Label: LAB_005964a0
    PUSH ECX                            ; 005964a7
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 005964a8
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 005964ad
    ADD ESP,0x104                       ; 005964b0
    POP EBP                             ; 005964b6
    POP EDI                             ; 005964b7
    POP ESI                             ; 005964b8
    POP EBX                             ; 005964b9
    RET                                 ; 005964ba
    MOV EDX,0x5f7843                    ; 005964bb
        ;   Label: LAB_005964bb
    MOV ECX,0xad                        ; 005964c0
    PUSH 0x5f7857                       ; 005964c5
    MOV dword ptr [0x01d1d400],EDX      ; 005964ca | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005964d0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005964d6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005964db
    JMP 0x005963ea                      ; 005964de
        ;   XREF to: 005963ea (UNCONDITIONAL_JUMP)  ; LAB_005963ea

