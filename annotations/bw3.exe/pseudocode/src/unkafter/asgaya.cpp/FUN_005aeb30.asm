; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005aeb30(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005aa0f0 at 005aa2c5
;   crt_unknown.c_FUN_005aa340 at 005aa34f
;   crt_unknown.c_FUN_005ab920 at 005ab957
;
; Referenced Globals:
;   void* PTR_GetFileType_005b35a8 = 001b3ee4
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   GetFileType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aeb30
        ;   Label: unkafter_asgaya.cpp_FUN_005aeb30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aeb31
    PUSH EBX                            ; 005aeb35
    CALL dword ptr [0x006079a4]         ; 005aeb36 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EDX,dword ptr [0x00607b18]      ; 005aeb3c | DAT_00607b18
    ADD ESP,0x4                         ; 005aeb42
    TEST EDX,EDX                        ; 005aeb45
    JZ 0x005aeb68                       ; 005aeb47
        ;   XREF to: 005aeb68 (CONDITIONAL_JUMP)  ; LAB_005aeb68
    PUSH EBX                            ; 005aeb49
    CALL dword ptr [0x00607b18]         ; 005aeb4a | DAT_00607b18
    ADD ESP,0x4                         ; 005aeb50
    TEST EAX,EAX                        ; 005aeb53
    JZ 0x005aeb68                       ; 005aeb55
        ;   XREF to: 005aeb68 (CONDITIONAL_JUMP)  ; LAB_005aeb68
    PUSH EBX                            ; 005aeb57
    CALL dword ptr [0x006079a8]         ; 005aeb58 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0x1                         ; 005aeb5e
    ADD ESP,0x4                         ; 005aeb63
    POP EBX                             ; 005aeb66
    RET                                 ; 005aeb67
    MOV EAX,[0x00607bdc]                ; 005aeb68 | DAT_00607bdc
        ;   Label: LAB_005aeb68
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005aeb6d
    PUSH EAX                            ; 005aeb70
    CALL dword ptr CS:[0x5b35a8]        ; 005aeb71 | PTR_GetFileType_005b35a8
    CMP EAX,0x2                         ; 005aeb78
    JNZ 0x005aeb8e                      ; 005aeb7b
        ;   XREF to: 005aeb8e (CONDITIONAL_JUMP)  ; LAB_005aeb8e
    PUSH EBX                            ; 005aeb7d
    CALL dword ptr [0x006079a8]         ; 005aeb7e | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0x1                         ; 005aeb84
    ADD ESP,0x4                         ; 005aeb89
    POP EBX                             ; 005aeb8c
    RET                                 ; 005aeb8d
    PUSH EBX                            ; 005aeb8e
        ;   Label: LAB_005aeb8e
    CALL dword ptr [0x006079a8]         ; 005aeb8f | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aeb95
    XOR EAX,EAX                         ; 005aeb98
    POP EBX                             ; 005aeb9a
    RET                                 ; 005aeb9b

