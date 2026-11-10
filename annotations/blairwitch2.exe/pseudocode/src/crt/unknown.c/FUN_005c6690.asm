; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6690(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5c00 at 005c5c22
;
; Referenced Globals:
;   void* PTR_CharUpperBuffA_005c8494 = 001c8a50
;   undefined4 DAT_0061f758
;   undefined4 DAT_026807f0
;
; Called Functions:
;   CharUpperBuffA
;   crt_unknown.c_FUN_005c0dc0
;   crt_unknown.c_FUN_005c0e30
;   crt_unknown.c_FUN_005c0e50
;   crt_unknown.c_FUN_005c6e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6690
        ;   Label: crt_unknown.c_FUN_005c6690
    PUSH ESI                            ; 005c6691
    SUB ESP,0x4                         ; 005c6692
    MOV EAX,ESP                         ; 005c6695
    PUSH EAX                            ; 005c6697
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c6698
    PUSH EDX                            ; 005c669c
    CALL crt_unknown.c_FUN_005c0e30     ; 005c669d
        ;   XREF to: 005c0e30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e30()
    ADD ESP,0x8                         ; 005c66a2
    MOV EAX,ESP                         ; 005c66a5
    PUSH EAX                            ; 005c66a7
    CALL crt_unknown.c_FUN_005c0e50     ; 005c66a8
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005c66ad
    XOR DL,DL                           ; 005c66b0
    MOV EBX,dword ptr [0x0061f758]      ; 005c66b2 | DAT_0061f758
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005c66b8
    CMP EBX,0x3a4                       ; 005c66bb
    JNZ 0x005c66ec                      ; 005c66c1
        ;   XREF to: 005c66ec (CONDITIONAL_JUMP)  ; LAB_005c66ec
    CMP dword ptr [0x026807f0],0x0      ; 005c66c3 | DAT_026807f0
    JZ 0x005c66ec                       ; 005c66ca
        ;   XREF to: 005c66ec (CONDITIONAL_JUMP)  ; LAB_005c66ec
    XOR EAX,EAX                         ; 005c66cc
    MOV AL,byte ptr [ESP]               ; 005c66ce
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c66d1
    AND AL,0x1                          ; 005c66d7
    AND EAX,0xff                        ; 005c66d9
    JZ 0x005c66ec                       ; 005c66de
        ;   XREF to: 005c66ec (CONDITIONAL_JUMP)  ; LAB_005c66ec
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c66e0
    PUSH ESI                            ; 005c66e4
    CALL crt_unknown.c_FUN_005c6e00     ; 005c66e5
        ;   XREF to: 005c6e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e00()
    JMP 0x005c6702                      ; 005c66ea
        ;   XREF to: 005c6702 (UNCONDITIONAL_JUMP)  ; LAB_005c6702
    PUSH 0x1                            ; 005c66ec
        ;   Label: LAB_005c66ec
    LEA EAX,[ESP + 0x4]                 ; 005c66ee
    PUSH EAX                            ; 005c66f2
    CALL dword ptr CS:[0x5c8494]        ; 005c66f3 | PTR_CharUpperBuffA_005c8494
    MOV EAX,ESP                         ; 005c66fa
    PUSH EAX                            ; 005c66fc
    CALL crt_unknown.c_FUN_005c0dc0     ; 005c66fd
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005c6702
        ;   Label: LAB_005c6702
    ADD ESP,0x4                         ; 005c6705
    POP ESI                             ; 005c6708
    POP EBX                             ; 005c6709
    RET                                 ; 005c670a

