; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9110(byte *param_1)
;
;
; XREF[8]:
;   crt_file.c_makepath_FUN_005c232c at 005c23d6
;   crt_unknown.c_FUN_005c8fb0 at 005c8fcf
;   crt_unknown.c_FUN_005c9020 at 005c905f
;   crt_unknown.c_FUN_005cb6f0 at 005cb74e
;   crt_unknown.c_FUN_005cc9f0 at 005cca0c
;   crt_unknown.c_FUN_005cdb10 at 005cdb2b
;   crt_unknown.c_FUN_005cdf00 at 005cdf39
;   crt_unknown.c_FUN_005ce990 at 005ce9a8
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c9f6e0],0x0      ; 005c9110 | DAT_02c9f6e0
        ;   Label: crt_unknown.c_FUN_005c9110
    JZ 0x005c9136                       ; 005c9117
        ;   XREF to: 005c9136 (CONDITIONAL_JUMP)  ; LAB_005c9136
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c9119
    XOR EAX,EAX                         ; 005c911d
    MOV AL,byte ptr [EDX]               ; 005c911f
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005c9121
    AND AL,0x1                          ; 005c9127
    AND EAX,0xff                        ; 005c9129
    JZ 0x005c9136                       ; 005c912e
        ;   XREF to: 005c9136 (CONDITIONAL_JUMP)  ; LAB_005c9136
    MOV EAX,0x2                         ; 005c9130
    RET                                 ; 005c9135
    MOV EAX,0x1                         ; 005c9136
        ;   Label: LAB_005c9136
    RET                                 ; 005c913b

