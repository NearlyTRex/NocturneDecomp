; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532650(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   FUN_00432cd0 at 00432e3f
;   FUN_004349a0 at 00434ae0
;   FUN_00457a00 at 00457a81
;   FUN_00458080 at 004580fd
;   FUN_004fa2e0 at 004fa3b1
;   FUN_004fb390 at 004fb471
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dac
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532650 | DAT_01c02594
        ;   Label: FUN_00532650
    JNZ 0x0053265c                      ; 00532657
        ;   XREF to: 0053265c (CONDITIONAL_JUMP)  ; LAB_0053265c
    XOR EAX,EAX                         ; 00532659
    RET                                 ; 0053265b
    PUSH ESI                            ; 0053265c
        ;   Label: LAB_0053265c
    PUSH EBX                            ; 0053265d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053265e
    PUSH ECX                            ; 00532662
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532663
    PUSH EBX                            ; 00532667
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532668
    PUSH ESI                            ; 0053266c
    CALL dword ptr [0x02dc9dac]         ; 0053266d | DAT_02dc9dac
    ADD ESP,0xc                         ; 00532673
    POP EBX                             ; 00532676
    POP ESI                             ; 00532677
    RET                                 ; 00532678

