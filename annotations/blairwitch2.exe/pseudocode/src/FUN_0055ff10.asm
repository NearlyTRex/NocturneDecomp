; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055ff10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0055b342 at 0055b35c
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc28
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055ff10 | DAT_01c37788
        ;   Label: FUN_0055ff10
    JNZ 0x0055ff1c                      ; 0055ff17
        ;   XREF to: 0055ff1c (CONDITIONAL_JUMP)  ; LAB_0055ff1c
    XOR EAX,EAX                         ; 0055ff19
    RET                                 ; 0055ff1b
    PUSH EDI                            ; 0055ff1c
        ;   Label: LAB_0055ff1c
    PUSH ESI                            ; 0055ff1d
    PUSH EBX                            ; 0055ff1e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0055ff1f
    PUSH ECX                            ; 0055ff23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0055ff24
    PUSH EBX                            ; 0055ff28
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055ff29
    PUSH ESI                            ; 0055ff2d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055ff2e
    PUSH EDI                            ; 0055ff32
    CALL dword ptr [0x0264bc28]         ; 0055ff33 | DAT_0264bc28
    ADD ESP,0x10                        ; 0055ff39
    POP EBX                             ; 0055ff3c
    POP ESI                             ; 0055ff3d
    POP EDI                             ; 0055ff3e
    RET                                 ; 0055ff3f

