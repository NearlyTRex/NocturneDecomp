; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort crt_unknown_c_FUN_005c9080(byte *param_1)
;
;
; XREF[5]:
;   crt_file.c_makepath_FUN_005c232c at 005c23ba
;   crt_string.c_splitpath_FUN_005c2238 at 005c227c
;   crt_unknown.c_FUN_005cc170 at 005cc188
;   crt_unknown.c_FUN_005cdf00 at 005cdf19
;   crt_unknown.c_FUN_005ce990 at 005ce9fd
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c9080
        ;   Label: crt_unknown.c_FUN_005c9080
    CMP dword ptr [0x02c9f6e0],0x0      ; 005c9084 | DAT_02c9f6e0
    JZ 0x005c90b4                       ; 005c908b
        ;   XREF to: 005c90b4 (CONDITIONAL_JUMP)  ; LAB_005c90b4
    XOR EDX,EDX                         ; 005c908d
    MOV DL,byte ptr [EAX]               ; 005c908f
    MOV DL,byte ptr [EDX + 0x2c9f6f1]   ; 005c9091
    AND DL,0x1                          ; 005c9097
    AND EDX,0xff                        ; 005c909a
    JZ 0x005c90b4                       ; 005c90a0
        ;   XREF to: 005c90b4 (CONDITIONAL_JUMP)  ; LAB_005c90b4
    XOR EDX,EDX                         ; 005c90a2
    MOV DL,byte ptr [EAX]               ; 005c90a4
    SHL EDX,0x8                         ; 005c90a6
    MOV AL,byte ptr [EAX + 0x1]         ; 005c90a9
    AND EAX,0xff                        ; 005c90ac
    OR EAX,EDX                          ; 005c90b1
    RET                                 ; 005c90b3
    MOV AL,byte ptr [EAX]               ; 005c90b4
        ;   Label: LAB_005c90b4
    AND EAX,0xff                        ; 005c90b6
    RET                                 ; 005c90bb

