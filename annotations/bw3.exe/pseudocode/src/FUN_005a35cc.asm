; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a35cc(void)
;
;
; XREF[32]:
;   FUN_0040ce40 at 0040ce8b
;   FUN_0040cea0 at 0040ced5
;   FUN_0040cf40 at 0040cf7d
;   FUN_00420420 at 004204fe
;   FUN_00428810 at 00428830
;   FUN_0042d500 at 0042d644
;   FUN_0042f310 at 0042f37a
;   FUN_00445730 at 00445750
;   FUN_00448750 at 004487a8
;   FUN_0044d800 at 0044d82a
;   ... and 22 more
;
; Called Functions:
;   FUN_005a35c0
;
; *****************************************************************************

section .text

    CALL FUN_005a35c0                   ; 005a35cc
        ;   XREF to: 005a35c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a35c0()
        ;   Label: FUN_005a35cc
    TEST EAX,EAX                        ; 005a35d1
    JNZ 0x005a35d6                      ; 005a35d3
        ;   XREF to: 005a35d6 (CONDITIONAL_JUMP)  ; LAB_005a35d6
    RET                                 ; 005a35d5
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005a35d6
        ;   Label: LAB_005a35d6
    ADD EDX,0x3039                      ; 005a35dc
    MOV dword ptr [EAX],EDX             ; 005a35e2
    MOV EAX,EDX                         ; 005a35e4
    SHR EAX,0x10                        ; 005a35e6
    AND EAX,0x7fff                      ; 005a35e9
    RET                                 ; 005a35ee

