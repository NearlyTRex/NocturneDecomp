; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ce990(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005cdf00 at 005cdf22
;
; Referenced Globals:
;   void* PTR_CharUpperBuffA_005d04a0 = 001d0a68
;   undefined4 DAT_00626ad8
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   CharUpperBuffA
;   crt_unknown.c_FUN_005c9080
;   crt_unknown.c_FUN_005c90f0
;   crt_unknown.c_FUN_005c9110
;   crt_unknown.c_FUN_005cf100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce990
        ;   Label: crt_unknown.c_FUN_005ce990
    PUSH ESI                            ; 005ce991
    SUB ESP,0x4                         ; 005ce992
    MOV EAX,ESP                         ; 005ce995
    PUSH EAX                            ; 005ce997
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ce998
    PUSH EDX                            ; 005ce99c
    CALL crt_unknown.c_FUN_005c90f0     ; 005ce99d
        ;   XREF to: 005c90f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90f0()
    ADD ESP,0x8                         ; 005ce9a2
    MOV EAX,ESP                         ; 005ce9a5
    PUSH EAX                            ; 005ce9a7
    CALL crt_unknown.c_FUN_005c9110     ; 005ce9a8
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9110()
    ADD ESP,0x4                         ; 005ce9ad
    XOR DL,DL                           ; 005ce9b0
    MOV EBX,dword ptr [0x00626ad8]      ; 005ce9b2 | DAT_00626ad8
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005ce9b8
    CMP EBX,0x3a4                       ; 005ce9bb
    JNZ 0x005ce9ec                      ; 005ce9c1
        ;   XREF to: 005ce9ec (CONDITIONAL_JUMP)  ; LAB_005ce9ec
    CMP dword ptr [0x02c9f6e0],0x0      ; 005ce9c3 | DAT_02c9f6e0
    JZ 0x005ce9ec                       ; 005ce9ca
        ;   XREF to: 005ce9ec (CONDITIONAL_JUMP)  ; LAB_005ce9ec
    XOR EAX,EAX                         ; 005ce9cc
    MOV AL,byte ptr [ESP]               ; 005ce9ce
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005ce9d1
    AND AL,0x1                          ; 005ce9d7
    AND EAX,0xff                        ; 005ce9d9
    JZ 0x005ce9ec                       ; 005ce9de
        ;   XREF to: 005ce9ec (CONDITIONAL_JUMP)  ; LAB_005ce9ec
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ce9e0
    PUSH ESI                            ; 005ce9e4
    CALL crt_unknown.c_FUN_005cf100     ; 005ce9e5
        ;   XREF to: 005cf100 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cf100()
    JMP 0x005cea02                      ; 005ce9ea
        ;   XREF to: 005cea02 (UNCONDITIONAL_JUMP)  ; LAB_005cea02
    PUSH 0x1                            ; 005ce9ec
        ;   Label: LAB_005ce9ec
    LEA EAX,[ESP + 0x4]                 ; 005ce9ee
    PUSH EAX                            ; 005ce9f2
    CALL dword ptr CS:[0x5d04a0]        ; 005ce9f3 | PTR_CharUpperBuffA_005d04a0
    MOV EAX,ESP                         ; 005ce9fa
    PUSH EAX                            ; 005ce9fc
    CALL crt_unknown.c_FUN_005c9080     ; 005ce9fd
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9080()
    ADD ESP,0x4                         ; 005cea02
        ;   Label: LAB_005cea02
    ADD ESP,0x4                         ; 005cea05
    POP ESI                             ; 005cea08
    POP EBX                             ; 005cea09
    RET                                 ; 005cea0a

