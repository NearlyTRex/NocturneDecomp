; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00558e10(void)
;
;
; XREF[3]:
;   FUN_00558d70 at 00558d78
;   FUN_0055ae40 at 0055ae7e
;   FUN_0055d9f0 at 0055da26
;
; Referenced Globals:
;   undefined4 s_Mb_killSoundThread_faile_005d3c96+4
;   undefined4 DAT_02cf3410
;   undefined4 DAT_02cf3414
;
; Called Functions:
;   FUN_0055a560
;   FUN_00581a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558e10
        ;   Label: FUN_00558e10
    PUSH EBP                            ; 00558e11
    MOV EBP,ESP                         ; 00558e12
    AND ESP,0xfffffff8                  ; 00558e14
    MOV EDX,0x1                         ; 00558e17
    MOV ECX,dword ptr [0x02cf3410]      ; 00558e1c | DAT_02cf3410
    XOR EBX,EBX                         ; 00558e22
    MOV dword ptr [0x02cf3414],EDX      ; 00558e24 | DAT_02cf3414
    TEST ECX,ECX                        ; 00558e2a
    JZ 0x00558e4f                       ; 00558e2c
        ;   XREF to: 00558e4f (CONDITIONAL_JUMP)  ; LAB_00558e4f
    PUSH 0x3f847ae1                     ; 00558e2e
        ;   Label: LAB_00558e2e
    PUSH 0x47ae147b                     ; 00558e33
    INC EBX                             ; 00558e38
    CALL FUN_00581a40                   ; 00558e39
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00581a40()
    ADD ESP,0x8                         ; 00558e3e
    CMP EBX,0x64                        ; 00558e41
    JGE 0x00558e4f                      ; 00558e44
        ;   XREF to: 00558e4f (CONDITIONAL_JUMP)  ; LAB_00558e4f
    CMP dword ptr [0x02cf3410],0x0      ; 00558e46 | DAT_02cf3410
    JNZ 0x00558e2e                      ; 00558e4d
        ;   XREF to: 00558e2e (CONDITIONAL_JUMP)  ; LAB_00558e2e
    CMP dword ptr [0x02cf3410],0x0      ; 00558e4f | DAT_02cf3410
        ;   Label: LAB_00558e4f
    JNZ 0x00558e6c                      ; 00558e56
        ;   XREF to: 00558e6c (CONDITIONAL_JUMP)  ; LAB_00558e6c
    CMP dword ptr [0x02cf3410],0x0      ; 00558e58 | DAT_02cf3410
    SETZ AL                             ; 00558e5f
    AND EAX,0xff                        ; 00558e62
    MOV ESP,EBP                         ; 00558e67
    POP EBP                             ; 00558e69
    POP EBX                             ; 00558e6a
    RET                                 ; 00558e6b
    PUSH 0x5d3c9a                       ; 00558e6c | s_Mb_killSoundThread_faile_005d3c96+4
        ;   Label: LAB_00558e6c
    CALL FUN_0055a560                   ; 00558e71
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 00558e76
    CMP dword ptr [0x02cf3410],0x0      ; 00558e79 | DAT_02cf3410
    SETZ AL                             ; 00558e80
    AND EAX,0xff                        ; 00558e83
    MOV ESP,EBP                         ; 00558e88
    POP EBP                             ; 00558e8a
    POP EBX                             ; 00558e8b
    RET                                 ; 00558e8c

