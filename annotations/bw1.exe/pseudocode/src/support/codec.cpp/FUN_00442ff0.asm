; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442ff0(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004434e0 at 004434f5
;   FUN_004436f0 at 00443705
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005d6a58
;   TerminatedCString s_CLZWDictionary_init_out_005d6a6d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00443070
;   FUN_005030e0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442ff0
        ;   Label: FUN_00442ff0
    PUSH ESI                            ; 00442ff1
    PUSH EBP                            ; 00442ff2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00442ff3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00442ff7
    CMP EAX,dword ptr [EBX]             ; 00442ffb
    JNZ 0x00443019                      ; 00442ffd
        ;   XREF to: 00443019 (CONDITIONAL_JUMP)  ; LAB_00443019
    CMP dword ptr [EBX + 0x10],0x0      ; 00442fff
    JZ 0x00443019                       ; 00443003
        ;   XREF to: 00443019 (CONDITIONAL_JUMP)  ; LAB_00443019
    MOV EAX,dword ptr [ESP + 0x18]      ; 00443005
        ;   Label: LAB_00443005
    PUSH EBX                            ; 00443009
    MOV dword ptr [EBX + 0x4],EAX       ; 0044300a
    CALL FUN_00443070                   ; 0044300d
        ;   XREF to: 00443070 (UNCONDITIONAL_CALL)  ; undefined FUN_00443070()
    ADD ESP,0x4                         ; 00443012
    POP EBP                             ; 00443015
    POP ESI                             ; 00443016
    POP EBX                             ; 00443017
    RET                                 ; 00443018
    MOV dword ptr [EBX],EAX             ; 00443019
        ;   Label: LAB_00443019
    SHL EAX,0x4                         ; 0044301b
    PUSH EAX                            ; 0044301e
    MOV ESI,dword ptr [EBX + 0x10]      ; 0044301f
    PUSH ESI                            ; 00443022
    CALL FUN_005c10d0                   ; 00443023
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 00443028
    MOV dword ptr [EBX + 0x10],EAX      ; 0044302b
    TEST EAX,EAX                        ; 0044302e
    JNZ 0x00443005                      ; 00443030
        ;   XREF to: 00443005 (CONDITIONAL_JUMP)  ; LAB_00443005
    MOV EBP,0x5d6a58                    ; 00443032 | = "..\\support\\codec.cpp"
    MOV EAX,0x348                       ; 00443037
    PUSH 0x5d6a6d                       ; 0044303c | = "CLZWDictionary::init - out of memory"
    MOV dword ptr [0x01d1d400],EBP      ; 00443041 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00443047 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0044304c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00443051
    MOV EAX,dword ptr [ESP + 0x18]      ; 00443054
    PUSH EBX                            ; 00443058
    MOV dword ptr [EBX + 0x4],EAX       ; 00443059
    CALL FUN_00443070                   ; 0044305c
        ;   XREF to: 00443070 (UNCONDITIONAL_CALL)  ; undefined FUN_00443070()
    ADD ESP,0x4                         ; 00443061
    POP EBP                             ; 00443064
    POP ESI                             ; 00443065
    POP EBX                             ; 00443066
    RET                                 ; 00443067

