; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550bf0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[3]:
;   FUN_00491a90 at 00491b6e
;   FUN_004b5190 at 004b5a86
;   FUN_00576130 at 005762a8
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550bf0
        ;   Label: FUN_00550bf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550bf2
    PUSH EDX                            ; 00550bf6
    CALL FUN_0054d3a0                   ; 00550bf7
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550bfc
    TEST EAX,EAX                        ; 00550bff
    JNZ 0x00550c04                      ; 00550c01
        ;   XREF to: 00550c04 (CONDITIONAL_JUMP)  ; LAB_00550c04
    RET                                 ; 00550c03
    PUSH EDI                            ; 00550c04
        ;   Label: LAB_00550c04
    PUSH ESI                            ; 00550c05
    MOV ECX,0x54                        ; 00550c06
    MOV EDI,dword ptr [ESP + 0x10]      ; 00550c0b
    MOV ESI,dword ptr [EAX + 0x68]      ; 00550c0f
    MOVSD.REP ES:EDI,ESI                ; 00550c12
    CALL FUN_00551440                   ; 00550c14
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,0x1                         ; 00550c19
    POP ESI                             ; 00550c1e
    POP EDI                             ; 00550c1f
    RET                                 ; 00550c20

