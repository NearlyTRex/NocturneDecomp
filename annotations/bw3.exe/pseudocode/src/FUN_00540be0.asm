; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540be0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00532b80 at 005336d2
;
; Referenced Globals:
;   undefined4 DAT_005d0cbe
;   undefined4 DAT_005d0cc1
;
; Called Functions:
;   FUN_004659c0
;   FUN_00540c40
;   FUN_00540cf0
;   FUN_005a3890
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540be0
        ;   Label: FUN_00540be0
    PUSH ESI                            ; 00540be1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00540be2
    PUSH 0x5d0cbe                       ; 00540be6 | DAT_005d0cbe
    MOV EDX,dword ptr [ESP + 0x14]      ; 00540beb
    PUSH EDX                            ; 00540bef
    PUSH 0x5d0cc1                       ; 00540bf0 | DAT_005d0cc1
    CALL FUN_004659c0                   ; 00540bf5
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    MOV EBX,EAX                         ; 00540bfa
    ADD ESP,0xc                         ; 00540bfc
    TEST EAX,EAX                        ; 00540bff
    JNZ 0x00540c1d                      ; 00540c01
        ;   XREF to: 00540c1d (CONDITIONAL_JUMP)  ; LAB_00540c1d
    PUSH ESI                            ; 00540c03
    CALL FUN_00540cf0                   ; 00540c04
        ;   XREF to: 00540cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540cf0()
    ADD ESP,0x4                         ; 00540c09
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540c0c
    PUSH EBX                            ; 00540c10
    PUSH ESI                            ; 00540c11
    CALL FUN_00540c40                   ; 00540c12
        ;   XREF to: 00540c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00540c40()
    ADD ESP,0x8                         ; 00540c17
    POP ESI                             ; 00540c1a
    POP EBX                             ; 00540c1b
    RET                                 ; 00540c1c
    PUSH EAX                            ; 00540c1d
        ;   Label: LAB_00540c1d
    MOV ECX,dword ptr [ESI]             ; 00540c1e
    PUSH ECX                            ; 00540c20
    PUSH 0x3000                         ; 00540c21
    PUSH 0x212551c                      ; 00540c26
    CALL FUN_005a3890                   ; 00540c2b
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 00540c30
    PUSH EBX                            ; 00540c33
    CALL FUN_005a3a90                   ; 00540c34
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 00540c39
    POP ESI                             ; 00540c3c
    POP EBX                             ; 00540c3d
    RET                                 ; 00540c3e

