; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042d200(void)
;
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
;   FUN_0042d370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d200
        ;   Label: FUN_0042d200
    PUSH EBP                            ; 0042d201
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042d202
    TEST EBX,EBX                        ; 0042d206
    JNZ 0x0042d20d                      ; 0042d208
        ;   XREF to: 0042d20d (CONDITIONAL_JUMP)  ; LAB_0042d20d
    POP EBP                             ; 0042d20a
    POP EBX                             ; 0042d20b
    RET                                 ; 0042d20c
    PUSH EDI                            ; 0042d20d
        ;   Label: LAB_0042d20d
    PUSH ESI                            ; 0042d20e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042d20f
    PUSH EDX                            ; 0042d213
    PUSH EBX                            ; 0042d214
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042d215
    PUSH ECX                            ; 0042d219
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 ; 0042d21a
        ;   XREF to: 0042d240 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_readBitmapFile_FUN_0042d240()
    ADD ESP,0xc                         ; 0042d21f
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042d222
    PUSH ESI                            ; 0042d226
    MOV EDI,dword ptr [ESP + 0x20]      ; 0042d227
    PUSH EDI                            ; 0042d22b
    PUSH EBX                            ; 0042d22c
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042d22d
    PUSH EBP                            ; 0042d231
    CALL FUN_0042d370                   ; 0042d232
        ;   XREF to: 0042d370 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d370()
    ADD ESP,0x10                        ; 0042d237
    POP ESI                             ; 0042d23a
    POP EDI                             ; 0042d23b
    POP EBP                             ; 0042d23c
    POP EBX                             ; 0042d23d
    RET                                 ; 0042d23e

