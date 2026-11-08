; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0057dd92 at 0057ddac
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833f8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582960 | DAT_01c50948
        ;   Label: FUN_00582960
    JNZ 0x0058296c                      ; 00582967
        ;   XREF to: 0058296c (CONDITIONAL_JUMP)  ; LAB_0058296c
    XOR EAX,EAX                         ; 00582969
    RET                                 ; 0058296b
    PUSH EDI                            ; 0058296c
        ;   Label: LAB_0058296c
    PUSH ESI                            ; 0058296d
    PUSH EBX                            ; 0058296e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0058296f
    PUSH ECX                            ; 00582973
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00582974
    PUSH EBX                            ; 00582978
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00582979
    PUSH ESI                            ; 0058297d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0058297e
    PUSH EDI                            ; 00582982
    CALL dword ptr [0x02c833f8]         ; 00582983 | DAT_02c833f8
    ADD ESP,0x10                        ; 00582989
    POP EBX                             ; 0058298c
    POP ESI                             ; 0058298d
    POP EDI                             ; 0058298e
    RET                                 ; 0058298f

