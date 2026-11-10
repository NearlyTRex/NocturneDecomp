; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c7040(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c6ff0 at 005c6ff6
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; Called Functions:
;   crt_unknown.c_FUN_005c7090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c7040
        ;   Label: crt_unknown.c_FUN_005c7040
    CMP dword ptr [0x026807f0],0x0      ; 005c7044 | DAT_026807f0
    JZ 0x005c7080                       ; 005c704b
        ;   XREF to: 005c7080 (CONDITIONAL_JUMP)  ; LAB_005c7080
    MOV EAX,EDX                         ; 005c704d
    SHR EAX,0x8                         ; 005c704f
    AND EAX,0xff                        ; 005c7052
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c7057
    AND AL,0x1                          ; 005c705d
    AND EAX,0xff                        ; 005c705f
    JZ 0x005c7080                       ; 005c7064
        ;   XREF to: 005c7080 (CONDITIONAL_JUMP)  ; LAB_005c7080
    MOV EAX,EDX                         ; 005c7066
    AND EAX,0xff                        ; 005c7068
    PUSH EAX                            ; 005c706d
    CALL crt_unknown.c_FUN_005c7090     ; 005c706e
        ;   XREF to: 005c7090 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7090()
    ADD ESP,0x4                         ; 005c7073
    TEST EAX,EAX                        ; 005c7076
    JZ 0x005c7080                       ; 005c7078
        ;   XREF to: 005c7080 (CONDITIONAL_JUMP)  ; LAB_005c7080
    MOV EAX,0x1                         ; 005c707a
    RET                                 ; 005c707f
    XOR EAX,EAX                         ; 005c7080
        ;   Label: LAB_005c7080
    RET                                 ; 005c7082

