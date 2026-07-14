; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10005c90(FILE *param_1)
;
;
; Called Functions:
;   __lock_file
;   __unlock_file
;   FUN_10005cd0
;   FUN_10005d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005c90
        ;   Label: FUN_10005c90
    PUSH EDI                            ; 10005c91
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005c92
    TEST ESI,ESI                        ; 10005c96
    JNZ 0x10005ca7                      ; 10005c98
        ;   XREF to: 10005ca7 (CONDITIONAL_JUMP)  ; LAB_10005ca7
    PUSH 0x0                            ; 10005c9a
    CALL FUN_10005d90                   ; 10005c9c
        ;   XREF to: 10005d90 (UNCONDITIONAL_CALL)  ; undefined FUN_10005d90()
    ADD ESP,0x4                         ; 10005ca1
    POP EDI                             ; 10005ca4
    POP ESI                             ; 10005ca5
    RET                                 ; 10005ca6
    PUSH ESI                            ; 10005ca7
        ;   Label: LAB_10005ca7
    CALL __lock_file                    ; 10005ca8
        ;   XREF to: 10005a30 (UNCONDITIONAL_CALL)  ; void __lock_file(FILE * _File)
    ADD ESP,0x4                         ; 10005cad
    PUSH ESI                            ; 10005cb0
    CALL FUN_10005cd0                   ; 10005cb1
        ;   XREF to: 10005cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_10005cd0()
    ADD ESP,0x4                         ; 10005cb6
    MOV EDI,EAX                         ; 10005cb9
    PUSH ESI                            ; 10005cbb
    CALL __unlock_file                  ; 10005cbc
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void __unlock_file(FILE * _File)
    ADD ESP,0x4                         ; 10005cc1
    MOV EAX,EDI                         ; 10005cc4
    POP EDI                             ; 10005cc6
    POP ESI                             ; 10005cc7
    RET                                 ; 10005cc8

