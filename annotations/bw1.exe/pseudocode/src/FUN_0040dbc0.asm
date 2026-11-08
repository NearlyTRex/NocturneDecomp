; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040dbc0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040e210 at 0040e265
;   FUN_004d27b0 at 004d3c61
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_005d303f
;   undefined1 DAT_005d304a
;   undefined1 DAT_005d304b
;   undefined1 DAT_005d304c
;   undefined1 DAT_005d304d
;   void* PTR_FUN_005fb474 = 0040dc50
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dbc0
        ;   Label: FUN_0040dbc0
    PUSH ESI                            ; 0040dbc1
    PUSH EDI                            ; 0040dbc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040dbc3
    PUSH EBX                            ; 0040dbc7
    CALL FUN_004085c0                   ; 0040dbc8
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0040dbcd
    ADD EAX,0x158                       ; 0040dbd0
    PUSH EAX                            ; 0040dbd5
    CALL FUN_00468860                   ; 0040dbd6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 0040dbdb
    LEA EBX,[EAX + 0xfffffea8]          ; 0040dbde
    PUSH 0x5d303f                       ; 0040dbe4 | = "bullet.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040dbe9
    PUSH EAX                            ; 0040dbef
    MOV dword ptr [EBX + 0x154],0x5fb474 ; 0040dbf0 | PTR_FUN_005fb474
    CALL FUN_00468950                   ; 0040dbfa
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 0040dbff
    MOV ESI,0x5d304a                    ; 0040dc02 | DAT_005d304a
    LEA EDI,[EBX + 0x2d4]               ; 0040dc07
    PUSH EDI                            ; 0040dc0d
    MOV AL,byte ptr [ESI]               ; 0040dc0e | DAT_005d304a | DAT_005d304c
        ;   Label: LAB_0040dc0e
    MOV byte ptr [EDI],AL               ; 0040dc10
    CMP AL,0x0                          ; 0040dc12
    JZ 0x0040dc26                       ; 0040dc14
        ;   XREF to: 0040dc26 (CONDITIONAL_JUMP)  ; LAB_0040dc26
    MOV AL,byte ptr [ESI + 0x1]         ; 0040dc16 | DAT_005d304b | DAT_005d304d
    ADD ESI,0x2                         ; 0040dc19
    MOV byte ptr [EDI + 0x1],AL         ; 0040dc1c
    ADD EDI,0x2                         ; 0040dc1f
    CMP AL,0x0                          ; 0040dc22
    JNZ 0x0040dc0e                      ; 0040dc24
        ;   XREF to: 0040dc0e (CONDITIONAL_JUMP)  ; LAB_0040dc0e
    POP EDI                             ; 0040dc26
        ;   Label: LAB_0040dc26
    MOV dword ptr [EBX + 0x314],0x14    ; 0040dc27
    MOV EAX,EBX                         ; 0040dc31
    MOV dword ptr [EBX + 0x318],0x0     ; 0040dc33
    POP EDI                             ; 0040dc3d
    POP ESI                             ; 0040dc3e
    POP EBX                             ; 0040dc3f
    RET                                 ; 0040dc40

