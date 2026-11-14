; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b1200(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b1090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1200
        ;   Label: crt_unknown.c_FUN_005b1200
    PUSH 0x0                            ; 005b1201
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b1203
    PUSH EDX                            ; 005b1207
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b1208
    PUSH EBX                            ; 005b120c
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b120d
    PUSH ECX                            ; 005b1211
    CALL crt_unknown.c_FUN_005b1090     ; 005b1212
        ;   XREF to: 005b1090 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1090()
    ADD ESP,0x10                        ; 005b1217
    POP EBX                             ; 005b121a
    RET                                 ; 005b121b

