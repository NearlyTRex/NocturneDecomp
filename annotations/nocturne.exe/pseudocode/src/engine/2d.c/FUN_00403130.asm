; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403130(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00403070 at 004030ef
;
; Referenced Globals:
;   undefined4 DAT_005771c3
;   undefined4 DAT_005771c6
;   string s_..\\engine\\2d.c_005771ca
;   string s_Unable_to_write_fog_tab_005771d9
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403130
        ;   Label: FUN_00403130
    PUSH 0x5771c3                       ; 00403131 | DAT_005771c3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00403136
    PUSH EDX                            ; 0040313a
    PUSH 0x5771c6                       ; 0040313b | DAT_005771c6
    CALL FUN_00456a60                   ; 00403140
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 00403145
    MOV EBX,EAX                         ; 00403148
    TEST EAX,EAX                        ; 0040314a
    JZ 0x0040316e                       ; 0040314c
        ;   XREF to: 0040316e (CONDITIONAL_JUMP)  ; LAB_0040316e
    PUSH EBX                            ; 0040314e
        ;   Label: LAB_0040314e
    PUSH 0x10                           ; 0040314f
    PUSH 0x100                          ; 00403151
    PUSH 0x1bd1ea0                      ; 00403156
    CALL FUN_00563a50                   ; 0040315b
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a50()
    ADD ESP,0x10                        ; 00403160
    PUSH EBX                            ; 00403163
    CALL FUN_00563380                   ; 00403164
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 00403169
    POP EBX                             ; 0040316c
    RET                                 ; 0040316d
    PUSH ESI                            ; 0040316e
        ;   Label: LAB_0040316e
    MOV ECX,0x5771ca                    ; 0040316f | = "..\\engine\\2d.c"
    MOV ESI,0x6b7                       ; 00403174
    PUSH 0x5771d9                       ; 00403179 | = "Unable to write fog tab"
    MOV dword ptr [0x01cc4800],ECX      ; 0040317e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00403184 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040318a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0040318f
    POP ESI                             ; 00403192
    JMP 0x0040314e                      ; 00403193
        ;   XREF to: 0040314e (UNCONDITIONAL_JUMP)  ; LAB_0040314e

