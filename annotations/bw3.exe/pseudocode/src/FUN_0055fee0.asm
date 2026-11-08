; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055fee0(void)
;
;
; XREF[2]:
;   FUN_004b7f90 at 004b85f9
;   FUN_004ba540 at 004ba5c3
;
; Referenced Globals:
;   undefined4 DAT_02cf5ec4
;   undefined4 DAT_02cf5f88
;   undefined4 DAT_02cf5f8c
;
; Called Functions:
;   FUN_00556be0
;   FUN_00558250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fee0
        ;   Label: FUN_0055fee0
    PUSH ESI                            ; 0055fee1
    XOR EDX,EDX                         ; 0055fee2
    XOR EBX,EBX                         ; 0055fee4
    MOV dword ptr [0x02cf5ec4],EDX      ; 0055fee6 | DAT_02cf5ec4
    MOV ECX,dword ptr [EBX + 0x2cf5ee0] ; 0055feec
        ;   Label: LAB_0055feec
    PUSH ECX                            ; 0055fef2
    ADD EBX,0x10                        ; 0055fef3
    CALL FUN_00556be0                   ; 0055fef6
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0055fefb
    CMP EBX,0xa0                        ; 0055fefe
    JNZ 0x0055feec                      ; 0055ff04
        ;   XREF to: 0055feec (CONDITIONAL_JUMP)  ; LAB_0055feec
    MOV EBX,dword ptr [0x02cf5f88]      ; 0055ff06 | DAT_02cf5f88
    PUSH EBX                            ; 0055ff0c
    CALL FUN_00556be0                   ; 0055ff0d
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0055ff12
    MOV ESI,dword ptr [0x02cf5f8c]      ; 0055ff15 | DAT_02cf5f8c
    PUSH ESI                            ; 0055ff1b
    CALL FUN_00556be0                   ; 0055ff1c
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0055ff21
    CALL FUN_00558250                   ; 0055ff24
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; undefined FUN_00558250()
    POP ESI                             ; 0055ff29
    POP EBX                             ; 0055ff2a
    RET                                 ; 0055ff2b

