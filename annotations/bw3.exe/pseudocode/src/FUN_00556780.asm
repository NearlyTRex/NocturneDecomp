; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556780(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[3]:
;   FUN_00495280 at 0049535e
;   FUN_004b6f30 at 004b7802
;   FUN_0056bd40 at 0056beb8
;
; Called Functions:
;   FUN_00552f10
;   FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556780
        ;   Label: FUN_00556780
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556782
    PUSH EDX                            ; 00556786
    CALL FUN_00552f10                   ; 00556787
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 0055678c
    TEST EAX,EAX                        ; 0055678f
    JNZ 0x00556794                      ; 00556791
        ;   XREF to: 00556794 (CONDITIONAL_JUMP)  ; LAB_00556794
    RET                                 ; 00556793
    PUSH EDI                            ; 00556794
        ;   Label: LAB_00556794
    PUSH ESI                            ; 00556795
    MOV ECX,0x54                        ; 00556796
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055679b
    MOV ESI,dword ptr [EAX + 0x68]      ; 0055679f
    MOVSD.REP ES:EDI,ESI                ; 005567a2
    CALL FUN_00556fd0                   ; 005567a4
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 005567a9
    POP ESI                             ; 005567ae
    POP EDI                             ; 005567af
    RET                                 ; 005567b0

