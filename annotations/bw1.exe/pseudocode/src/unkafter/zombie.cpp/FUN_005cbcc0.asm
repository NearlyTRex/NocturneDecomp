; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cbcc0(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c7280 at 005c7455
;   crt_unknown.c_FUN_005c74d0 at 005c74df
;   crt_unknown.c_FUN_005c8ae0 at 005c8b17
;
; Referenced Globals:
;   void* PTR_GetFileType_005d05a8 = 001d0ede
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   GetFileType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbcc0
        ;   Label: unkafter_zombie.cpp_FUN_005cbcc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cbcc1
    PUSH EBX                            ; 005cbcc5
    CALL dword ptr [0x00626600]         ; 005cbcc6 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EDX,dword ptr [0x00626774]      ; 005cbccc | DAT_00626774
    ADD ESP,0x4                         ; 005cbcd2
    TEST EDX,EDX                        ; 005cbcd5
    JZ 0x005cbcf8                       ; 005cbcd7
        ;   XREF to: 005cbcf8 (CONDITIONAL_JUMP)  ; LAB_005cbcf8
    PUSH EBX                            ; 005cbcd9
    CALL dword ptr [0x00626774]         ; 005cbcda | DAT_00626774
    ADD ESP,0x4                         ; 005cbce0
    TEST EAX,EAX                        ; 005cbce3
    JZ 0x005cbcf8                       ; 005cbce5
        ;   XREF to: 005cbcf8 (CONDITIONAL_JUMP)  ; LAB_005cbcf8
    PUSH EBX                            ; 005cbce7
    CALL dword ptr [0x00626604]         ; 005cbce8 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0x1                         ; 005cbcee
    ADD ESP,0x4                         ; 005cbcf3
    POP EBX                             ; 005cbcf6
    RET                                 ; 005cbcf7
    MOV EAX,[0x00626838]                ; 005cbcf8 | DAT_00626838
        ;   Label: LAB_005cbcf8
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005cbcfd
    PUSH EAX                            ; 005cbd00
    CALL dword ptr CS:[0x5d05a8]        ; 005cbd01 | PTR_GetFileType_005d05a8
    CMP EAX,0x2                         ; 005cbd08
    JNZ 0x005cbd1e                      ; 005cbd0b
        ;   XREF to: 005cbd1e (CONDITIONAL_JUMP)  ; LAB_005cbd1e
    PUSH EBX                            ; 005cbd0d
    CALL dword ptr [0x00626604]         ; 005cbd0e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0x1                         ; 005cbd14
    ADD ESP,0x4                         ; 005cbd19
    POP EBX                             ; 005cbd1c
    RET                                 ; 005cbd1d
    PUSH EBX                            ; 005cbd1e
        ;   Label: LAB_005cbd1e
    CALL dword ptr [0x00626604]         ; 005cbd1f | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005cbd25
    XOR EAX,EAX                         ; 005cbd28
    POP EBX                             ; 005cbd2a
    RET                                 ; 005cbd2b

