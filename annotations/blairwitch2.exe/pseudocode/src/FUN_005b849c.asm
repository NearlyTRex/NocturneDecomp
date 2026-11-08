; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b849c(void)
;
;
; XREF[35]:
;   FUN_0040cf60 at 0040cfab
;   FUN_0040cfc0 at 0040cff5
;   FUN_0040d060 at 0040d09d
;   FUN_00410170 at 00410342
;   FUN_00412500 at 00412520
;   FUN_00413f40 at 00413f60
;   FUN_0041d020 at 0041d0fa
;   FUN_0041e8a0 at 0041e8c3
;   FUN_004247f0 at 00424934
;   FUN_00426730 at 0042679a
;   ... and 25 more
;
; Called Functions:
;   FUN_005b8490
;
; *****************************************************************************

section .text

    CALL FUN_005b8490                   ; 005b849c
        ;   XREF to: 005b8490 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8490()
        ;   Label: FUN_005b849c
    TEST EAX,EAX                        ; 005b84a1
    JNZ 0x005b84a6                      ; 005b84a3
        ;   XREF to: 005b84a6 (CONDITIONAL_JUMP)  ; LAB_005b84a6
    RET                                 ; 005b84a5
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005b84a6
        ;   Label: LAB_005b84a6
    ADD EDX,0x3039                      ; 005b84ac
    MOV dword ptr [EAX],EDX             ; 005b84b2
    MOV EAX,EDX                         ; 005b84b4
    SHR EAX,0x10                        ; 005b84b6
    AND EAX,0x7fff                      ; 005b84b9
    RET                                 ; 005b84be

