; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00553270(void)
;
;
; XREF[3]:
;   FUN_005531d0 at 005531d8
;   FUN_005552a0 at 005552de
;   FUN_00557e90 at 00557ec6
;
; Referenced Globals:
;   undefined4 s_Mb_killSoundThread_faile_005e91a2+4
;   undefined4 DAT_02649010
;   undefined4 DAT_02649014
;
; Called Functions:
;   FUN_005549c0
;   FUN_0058fd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553270
        ;   Label: FUN_00553270
    PUSH EBP                            ; 00553271
    MOV EBP,ESP                         ; 00553272
    AND ESP,0xfffffff8                  ; 00553274
    MOV EDX,0x1                         ; 00553277
    MOV ECX,dword ptr [0x02649010]      ; 0055327c | DAT_02649010
    XOR EBX,EBX                         ; 00553282
    MOV dword ptr [0x02649014],EDX      ; 00553284 | DAT_02649014
    TEST ECX,ECX                        ; 0055328a
    JZ 0x005532af                       ; 0055328c
        ;   XREF to: 005532af (CONDITIONAL_JUMP)  ; LAB_005532af
    PUSH 0x3f847ae1                     ; 0055328e
        ;   Label: LAB_0055328e
    PUSH 0x47ae147b                     ; 00553293
    INC EBX                             ; 00553298
    CALL FUN_0058fd90                   ; 00553299
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0058fd90()
    ADD ESP,0x8                         ; 0055329e
    CMP EBX,0x64                        ; 005532a1
    JGE 0x005532af                      ; 005532a4
        ;   XREF to: 005532af (CONDITIONAL_JUMP)  ; LAB_005532af
    CMP dword ptr [0x02649010],0x0      ; 005532a6 | DAT_02649010
    JNZ 0x0055328e                      ; 005532ad
        ;   XREF to: 0055328e (CONDITIONAL_JUMP)  ; LAB_0055328e
    CMP dword ptr [0x02649010],0x0      ; 005532af | DAT_02649010
        ;   Label: LAB_005532af
    JNZ 0x005532cc                      ; 005532b6
        ;   XREF to: 005532cc (CONDITIONAL_JUMP)  ; LAB_005532cc
    CMP dword ptr [0x02649010],0x0      ; 005532b8 | DAT_02649010
    SETZ AL                             ; 005532bf
    AND EAX,0xff                        ; 005532c2
    MOV ESP,EBP                         ; 005532c7
    POP EBP                             ; 005532c9
    POP EBX                             ; 005532ca
    RET                                 ; 005532cb
    PUSH 0x5e91a6                       ; 005532cc | s_Mb_killSoundThread_faile_005e91a2+4
        ;   Label: LAB_005532cc
    CALL FUN_005549c0                   ; 005532d1
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 005532d6
    CMP dword ptr [0x02649010],0x0      ; 005532d9 | DAT_02649010
    SETZ AL                             ; 005532e0
    AND EAX,0xff                        ; 005532e3
    MOV ESP,EBP                         ; 005532e8
    POP EBP                             ; 005532ea
    POP EBX                             ; 005532eb
    RET                                 ; 005532ec

