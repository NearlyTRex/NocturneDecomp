; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005a3ff0(char *param_1)
;
;
; XREF[1]:
;   FUN_00431000 at 0043103a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3ff0
        ;   Label: FUN_005a3ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3ff1
    MOV EDX,EBX                         ; 005a3ff5
    MOV AL,byte ptr [EDX]               ; 005a3ff7
        ;   Label: LAB_005a3ff7
    TEST AL,AL                          ; 005a3ff9
    JZ 0x005a400a                       ; 005a3ffb
        ;   XREF to: 005a400a (CONDITIONAL_JUMP)  ; LAB_005a400a
    SUB AL,0x41                         ; 005a3ffd
    CMP AL,0x19                         ; 005a3fff
    JA 0x005a4007                       ; 005a4001
        ;   XREF to: 005a4007 (CONDITIONAL_JUMP)  ; LAB_005a4007
    ADD AL,0x61                         ; 005a4003
    MOV byte ptr [EDX],AL               ; 005a4005
    INC EDX                             ; 005a4007
        ;   Label: LAB_005a4007
    JMP 0x005a3ff7                      ; 005a4008
        ;   XREF to: 005a3ff7 (UNCONDITIONAL_JUMP)  ; LAB_005a3ff7
    MOV EAX,EBX                         ; 005a400a
        ;   Label: LAB_005a400a
    POP EBX                             ; 005a400c
    RET                                 ; 005a400d

