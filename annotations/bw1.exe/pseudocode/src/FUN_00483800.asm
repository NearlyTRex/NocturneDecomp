; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483800(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[10]:
;   FUN_004ac0b0 at 004ac193
;   FUN_004ad140 at 004ad3e2
;   FUN_004adaf0 at 004addcb
;   FUN_004ae640 at 004ae6a0
;   FUN_004af040 at 004af06c
;   FUN_004af270 at 004af29c
;   FUN_004b4370 at 004b4425
;   FUN_004b46e0 at 004b4798
;   FUN_004b8100 at 004b8251
;   FUN_004e3f40 at 004e3fc3
;
; Called Functions:
;   FUN_00507c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483800
        ;   Label: FUN_00483800
    PUSH ESI                            ; 00483801
    PUSH EBP                            ; 00483802
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483803
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483807
    TEST EDX,EDX                        ; 0048380b
    JNZ 0x00483829                      ; 0048380d
        ;   XREF to: 00483829 (CONDITIONAL_JUMP)  ; LAB_00483829
    PUSH EDX                            ; 0048380f
    PUSH EDX                            ; 00483810
    PUSH EDX                            ; 00483811
    MOV ECX,dword ptr [EAX + 0x8]       ; 00483812
    PUSH ECX                            ; 00483815
    MOV EBX,dword ptr [EAX + 0x4]       ; 00483816
    PUSH EBX                            ; 00483819
    MOV ESI,dword ptr [EAX]             ; 0048381a
    PUSH ESI                            ; 0048381c
    CALL FUN_00507c70                   ; 0048381d
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00507c70()
    ADD ESP,0x18                        ; 00483822
    POP EBP                             ; 00483825
    POP ESI                             ; 00483826
    POP EBX                             ; 00483827
    RET                                 ; 00483828
    PUSH EDI                            ; 00483829
        ;   Label: LAB_00483829
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048382a
    PUSH ECX                            ; 0048382d
    MOV EBX,dword ptr [EDX + 0x4]       ; 0048382e
    PUSH EBX                            ; 00483831
    MOV ESI,dword ptr [EDX]             ; 00483832
    PUSH ESI                            ; 00483834
    MOV EDI,dword ptr [EAX + 0x8]       ; 00483835
    PUSH EDI                            ; 00483838
    MOV EBP,dword ptr [EAX + 0x4]       ; 00483839
    PUSH EBP                            ; 0048383c
    MOV EDX,dword ptr [EAX]             ; 0048383d
    PUSH EDX                            ; 0048383f
    CALL FUN_00507c70                   ; 00483840
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00507c70()
    ADD ESP,0x18                        ; 00483845
    POP EDI                             ; 00483848
    POP EBP                             ; 00483849
    POP ESI                             ; 0048384a
    POP EBX                             ; 0048384b
    RET                                 ; 0048384c

