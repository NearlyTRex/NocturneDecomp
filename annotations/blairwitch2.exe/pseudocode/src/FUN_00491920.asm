; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00491920(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00489670 at 0048b31a
;   FUN_0048e7e0 at 004904ad
;
; Called Functions:
;   FUN_00491a40
;   FUN_00491a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491920
        ;   Label: FUN_00491920
    MOV EBX,dword ptr [ESP + 0x8]       ; 00491921
    PUSH EBX                            ; 00491925
    CALL FUN_00491a90                   ; 00491926
        ;   XREF to: 00491a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00491a90()
    ADD ESP,0x4                         ; 0049192b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049192e
    PUSH EDX                            ; 00491932
    PUSH EBX                            ; 00491933
    CALL FUN_00491a40                   ; 00491934
        ;   XREF to: 00491a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00491a40()
    ADD ESP,0x8                         ; 00491939
    TEST EAX,EAX                        ; 0049193c
    JL 0x00491953                       ; 0049193e
        ;   XREF to: 00491953 (CONDITIONAL_JUMP)  ; LAB_00491953
    MOV EDX,EAX                         ; 00491940
    SHL EAX,0x3                         ; 00491942
    ADD EAX,EDX                         ; 00491945
    SHL EAX,0x5                         ; 00491947
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc] ; 0049194a
    POP EBX                             ; 00491951
    RET                                 ; 00491952
    XOR EAX,EAX                         ; 00491953
        ;   Label: LAB_00491953
    POP EBX                             ; 00491955
    RET                                 ; 00491956

