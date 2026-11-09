; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_minecar_cpp_FUN_004ec81e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76f5c
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d76f64
;   undefined4 DAT_01d7a6ac
;   undefined4 DAT_01d7a6b0
;   undefined4 DAT_01d7f4f4
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   engine_mini3d.cpp_FUN_004f04c0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004ec81e
        ;   Label: unkafter_minecar.cpp_FUN_004ec81e
    MOV EDX,dword ptr [0x01d7f4f4]      ; 004ec820 | DAT_01d7f4f4
    PUSH EDX                            ; 004ec826
    CALL engine_mini3d.cpp_FUN_004f04c0 ; 004ec827
        ;   XREF to: 004f04c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f04c0()
    XOR ECX,ECX                         ; 004ec82c
    ADD ESP,0x4                         ; 004ec82e
    MOV dword ptr [0x01d7f4f4],ECX      ; 004ec831 | DAT_01d7f4f4
    LEA EAX,[EAX]                       ; 004ec837
    LEA EDX,[EDX]                       ; 004ec83d
    PUSH EBP                            ; 004ec840
    MOV EDX,dword ptr [0x01d76f5c]      ; 004ec841 | DAT_01d76f5c
    TEST EDX,EDX                        ; 004ec847
    JNZ 0x004ec857                      ; 004ec849
        ;   XREF to: 004ec857 (CONDITIONAL_JUMP)  ; LAB_004ec857
    MOV EBP,dword ptr [0x01d7a6ac]      ; 004ec84b | DAT_01d7a6ac
    TEST EBP,EBP                        ; 004ec851
    JNZ 0x004ec882                      ; 004ec853
        ;   XREF to: 004ec882 (CONDITIONAL_JUMP)  ; LAB_004ec882
    POP EBP                             ; 004ec855
    RET                                 ; 004ec856
    PUSH EBX                            ; 004ec857
        ;   Label: LAB_004ec857
    PUSH EDX                            ; 004ec858
    CALL crt_unknown.c_FUN_005a3770     ; 004ec859
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBX,EBX                         ; 004ec85e
    ADD ESP,0x4                         ; 004ec860
    MOV dword ptr [0x01d76f5c],EBX      ; 004ec863 | DAT_01d76f5c
    MOV dword ptr [0x01d76f60],EBX      ; 004ec869 | DAT_01d76f60
    MOV dword ptr [0x01d76f64],EBX      ; 004ec86f | DAT_01d76f64
    POP EBX                             ; 004ec875
    MOV EBP,dword ptr [0x01d7a6ac]      ; 004ec876 | DAT_01d7a6ac
    TEST EBP,EBP                        ; 004ec87c
    JNZ 0x004ec882                      ; 004ec87e
        ;   XREF to: 004ec882 (CONDITIONAL_JUMP)  ; LAB_004ec882
    POP EBP                             ; 004ec880
    RET                                 ; 004ec881
    PUSH EBP                            ; 004ec882
        ;   Label: LAB_004ec882
    CALL crt_unknown.c_FUN_005a3770     ; 004ec883
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004ec888
    MOV EDX,dword ptr [0x01d7a6b0]      ; 004ec88b | DAT_01d7a6b0
    PUSH EDX                            ; 004ec891
    CALL crt_unknown.c_FUN_005a3770     ; 004ec892
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR ECX,ECX                         ; 004ec897
    ADD ESP,0x4                         ; 004ec899
    MOV dword ptr [0x01d7a6ac],ECX      ; 004ec89c | DAT_01d7a6ac
    MOV dword ptr [0x01d7a6b0],ECX      ; 004ec8a2 | DAT_01d7a6b0
    POP EBP                             ; 004ec8a8
    RET                                 ; 004ec8a9

