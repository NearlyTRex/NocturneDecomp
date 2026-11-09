; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_004734e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a4b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004734e0
        ;   Label: core_dtrace.cpp_FUN_004734e0
    PUSH EBP                            ; 004734e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004734e2
    MOV EAX,dword ptr [EBX + 0x40]      ; 004734e6
    IMUL EAX,dword ptr [EBX + 0x44]     ; 004734e9
    IMUL EAX,dword ptr [EBX + 0x48]     ; 004734ed
    PUSH EAX                            ; 004734f1
    PUSH 0x58                           ; 004734f2
    CALL crt_unknown.c_FUN_005a4b20     ; 004734f4
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 004734f9
    MOV dword ptr [EBX + 0x4c],EAX      ; 004734fc
    TEST EAX,EAX                        ; 004734ff
    JZ 0x00473506                       ; 00473501
        ;   XREF to: 00473506 (CONDITIONAL_JUMP)  ; LAB_00473506
    POP EBP                             ; 00473503
    POP EBX                             ; 00473504
    RET                                 ; 00473505
    PUSH EDI                            ; 00473506
        ;   Label: LAB_00473506
    MOV EDI,0x5bc801                    ; 00473507
    MOV EBP,0x88                        ; 0047350c
    PUSH 0x5bc814                       ; 00473511
    MOV dword ptr [0x01d71de0],EDI      ; 00473516 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0047351c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473522
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00473527
    POP EDI                             ; 0047352a
    POP EBP                             ; 0047352b
    POP EBX                             ; 0047352c
    RET                                 ; 0047352d

