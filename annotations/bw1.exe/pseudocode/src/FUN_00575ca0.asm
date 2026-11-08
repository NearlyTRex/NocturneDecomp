; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00575ca0(void)
;
;
; XREF[3]:
;   FUN_00575c00 at 00575c08
;   FUN_00577cd0 at 00577d0e
;   FUN_0057a8c0 at 0057a8f6
;
; Referenced Globals:
;   undefined4 s_Mb_killSoundThread_faile_005f439c+4
;   undefined4 DAT_02c807e0
;   undefined4 DAT_02c807e4
;
; Called Functions:
;   FUN_005773f0
;   FUN_005b3860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575ca0
        ;   Label: FUN_00575ca0
    PUSH EBP                            ; 00575ca1
    MOV EBP,ESP                         ; 00575ca2
    AND ESP,0xfffffff8                  ; 00575ca4
    MOV EDX,0x1                         ; 00575ca7
    MOV ECX,dword ptr [0x02c807e0]      ; 00575cac | DAT_02c807e0
    XOR EBX,EBX                         ; 00575cb2
    MOV dword ptr [0x02c807e4],EDX      ; 00575cb4 | DAT_02c807e4
    TEST ECX,ECX                        ; 00575cba
    JZ 0x00575cdf                       ; 00575cbc
        ;   XREF to: 00575cdf (CONDITIONAL_JUMP)  ; LAB_00575cdf
    PUSH 0x3f847ae1                     ; 00575cbe
        ;   Label: LAB_00575cbe
    PUSH 0x47ae147b                     ; 00575cc3
    INC EBX                             ; 00575cc8
    CALL FUN_005b3860                   ; 00575cc9
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3860()
    ADD ESP,0x8                         ; 00575cce
    CMP EBX,0x64                        ; 00575cd1
    JGE 0x00575cdf                      ; 00575cd4
        ;   XREF to: 00575cdf (CONDITIONAL_JUMP)  ; LAB_00575cdf
    CMP dword ptr [0x02c807e0],0x0      ; 00575cd6 | DAT_02c807e0
    JNZ 0x00575cbe                      ; 00575cdd
        ;   XREF to: 00575cbe (CONDITIONAL_JUMP)  ; LAB_00575cbe
    CMP dword ptr [0x02c807e0],0x0      ; 00575cdf | DAT_02c807e0
        ;   Label: LAB_00575cdf
    JNZ 0x00575cfc                      ; 00575ce6
        ;   XREF to: 00575cfc (CONDITIONAL_JUMP)  ; LAB_00575cfc
    CMP dword ptr [0x02c807e0],0x0      ; 00575ce8 | DAT_02c807e0
    SETZ AL                             ; 00575cef
    AND EAX,0xff                        ; 00575cf2
    MOV ESP,EBP                         ; 00575cf7
    POP EBP                             ; 00575cf9
    POP EBX                             ; 00575cfa
    RET                                 ; 00575cfb
    PUSH 0x5f43a0                       ; 00575cfc | s_Mb_killSoundThread_faile_005f439c+4
        ;   Label: LAB_00575cfc
    CALL FUN_005773f0                   ; 00575d01
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00575d06
    CMP dword ptr [0x02c807e0],0x0      ; 00575d09 | DAT_02c807e0
    SETZ AL                             ; 00575d10
    AND EAX,0xff                        ; 00575d13
    MOV ESP,EBP                         ; 00575d18
    POP EBP                             ; 00575d1a
    POP EBX                             ; 00575d1b
    RET                                 ; 00575d1c

