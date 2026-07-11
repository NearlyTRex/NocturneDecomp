; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532620(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004f9dd0 at 004f9faa
;   FUN_004fad00 at 004fafd9
;   FUN_005628c0 at 00562bb0
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9da8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532620 | DAT_01c02594
        ;   Label: FUN_00532620
    JNZ 0x0053262c                      ; 00532627
        ;   XREF to: 0053262c (CONDITIONAL_JUMP)  ; LAB_0053262c
    XOR EAX,EAX                         ; 00532629
    RET                                 ; 0053262b
    PUSH ESI                            ; 0053262c
        ;   Label: LAB_0053262c
    PUSH EBX                            ; 0053262d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053262e
    PUSH ECX                            ; 00532632
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532633
    PUSH EBX                            ; 00532637
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532638
    PUSH ESI                            ; 0053263c
    CALL dword ptr [0x02dc9da8]         ; 0053263d | DAT_02dc9da8
    ADD ESP,0xc                         ; 00532643
    POP EBX                             ; 00532646
    POP ESI                             ; 00532647
    RET                                 ; 00532648

