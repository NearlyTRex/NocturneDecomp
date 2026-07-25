; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532380(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b762c
;   undefined4 DAT_01c00648
;   undefined4 DAT_01c02580
;   undefined4 DAT_01c02584
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d9c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532380 | DAT_01c02594
        ;   Label: FUN_00532380
    JNZ 0x0053238c                      ; 00532387
        ;   XREF to: 0053238c (CONDITIONAL_JUMP)  ; LAB_0053238c
    XOR EAX,EAX                         ; 00532389
    RET                                 ; 0053238b
    PUSH EDI                            ; 0053238c
        ;   Label: LAB_0053238c
    PUSH ESI                            ; 0053238d
    PUSH EBX                            ; 0053238e
    MOV ECX,dword ptr [0x01c02584]      ; 0053238f | DAT_01c02584
    PUSH ECX                            ; 00532395
    PUSH 0x1c00648                      ; 00532396 | DAT_01c00648
    MOV EBX,dword ptr [0x01c02580]      ; 0053239b | DAT_01c02580
    PUSH EBX                            ; 005323a1
    MOV ESI,dword ptr [0x005b762c]      ; 005323a2 | DAT_005b762c
    PUSH ESI                            ; 005323a8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005323a9
    PUSH EDI                            ; 005323ad
    CALL dword ptr [0x02dc9d9c]         ; 005323ae | DAT_02dc9d9c
    ADD ESP,0x14                        ; 005323b4
    POP EBX                             ; 005323b7
    POP ESI                             ; 005323b8
    POP EDI                             ; 005323b9
    RET                                 ; 005323ba

