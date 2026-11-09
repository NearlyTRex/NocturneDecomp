; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00570420(int *param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_005704a0 at 005704e1
;
; Called Functions:
;   support_trisock.cpp_FUN_00570350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570420
        ;   Label: support_trisock.cpp_FUN_00570420
    PUSH ESI                            ; 00570421
    PUSH EDI                            ; 00570422
    PUSH EBP                            ; 00570423
    MOV EBP,dword ptr [ESP + 0x14]      ; 00570424
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00570428
    MOV ESI,dword ptr [ESP + 0x18]      ; 0057042c
    XOR EBX,EBX                         ; 00570430
    DEC EDI                             ; 00570432
    MOV EDX,dword ptr [ESP + 0x24]      ; 00570433
        ;   Label: LAB_00570433
    PUSH EDX                            ; 00570437
    MOV ECX,dword ptr [ESP + 0x24]      ; 00570438
    PUSH ECX                            ; 0057043c
    PUSH EBP                            ; 0057043d
    CALL support_trisock.cpp_FUN_00570350 ; 0057043e
        ;   XREF to: 00570350 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570350()
    ADD ESP,0xc                         ; 00570443
    MOV EDX,EAX                         ; 00570446
    TEST EAX,EAX                        ; 00570448
    JL 0x00570476                       ; 0057044a
        ;   XREF to: 00570476 (CONDITIONAL_JUMP)  ; LAB_00570476
    CMP EAX,0xd                         ; 0057044c
    JZ 0x00570433                       ; 0057044f
        ;   XREF to: 00570433 (CONDITIONAL_JUMP)  ; LAB_00570433
    CMP EAX,0xa                         ; 00570451
    JZ 0x00570483                       ; 00570454
        ;   XREF to: 00570483 (CONDITIONAL_JUMP)  ; LAB_00570483
    INC AL                              ; 00570456
    AND EAX,0xff                        ; 00570458
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0057045d
    JZ 0x0057046b                       ; 00570464
        ;   XREF to: 0057046b (CONDITIONAL_JUMP)  ; LAB_0057046b
    MOV EDX,0x20                        ; 00570466
    CMP EBX,EDI                         ; 0057046b
        ;   Label: LAB_0057046b
    JGE 0x00570433                      ; 0057046d
        ;   XREF to: 00570433 (CONDITIONAL_JUMP)  ; LAB_00570433
    INC ESI                             ; 0057046f
    INC EBX                             ; 00570470
    MOV byte ptr [ESI + -0x1],DL        ; 00570471
    JMP 0x00570433                      ; 00570474
        ;   XREF to: 00570433 (UNCONDITIONAL_JUMP)  ; LAB_00570433
    CMP dword ptr [EBP],0x0             ; 00570476
        ;   Label: LAB_00570476
    JNZ 0x00570483                      ; 0057047a
        ;   XREF to: 00570483 (CONDITIONAL_JUMP)  ; LAB_00570483
    XOR EAX,EAX                         ; 0057047c
    POP EBP                             ; 0057047e
    POP EDI                             ; 0057047f
    POP ESI                             ; 00570480
    POP EBX                             ; 00570481
    RET                                 ; 00570482
    ADD EBX,dword ptr [ESP + 0x18]      ; 00570483
        ;   Label: LAB_00570483
    MOV EAX,0x1                         ; 00570487
    MOV byte ptr [EBX],0x0              ; 0057048c
    POP EBP                             ; 0057048f
    POP EDI                             ; 00570490
    POP ESI                             ; 00570491
    POP EBX                             ; 00570492
    RET                                 ; 00570493

