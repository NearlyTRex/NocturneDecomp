; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aa044(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a3e68 at 005a3ea7
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079bc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079c4 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9e88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa044
        ;   Label: crt_unknown.c_FUN_005aa044
    SUB ESP,0x4                         ; 005aa045
    CALL dword ptr [0x006079bc]         ; 005aa048 | PTR_crt_unknown.c_FUN_005a7f44_006079bc
    MOV EAX,ESP                         ; 005aa04e
    PUSH EAX                            ; 005aa050
    MOV EDX,dword ptr [ESP + 0x14]      ; 005aa051
    PUSH EDX                            ; 005aa055
    MOV EBX,dword ptr [ESP + 0x14]      ; 005aa056
    PUSH EBX                            ; 005aa05a
    MOV EAX,0x6075c4                    ; 005aa05b | DAT_006075c4
    MOV DX,DS                           ; 005aa060
    XOR EAX,EAX                         ; 005aa062
    MOV AX,DX                           ; 005aa064
    PUSH EAX                            ; 005aa067
    CALL crt_unknown.c_FUN_005a9e88     ; 005aa068
        ;   XREF to: 005a9e88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9e88()
    ADD ESP,0x10                        ; 005aa06d
    TEST EAX,EAX                        ; 005aa070
    JNZ 0x005aa081                      ; 005aa072
        ;   XREF to: 005aa081 (CONDITIONAL_JUMP)  ; LAB_005aa081
    CALL dword ptr [0x006079c4]         ; 005aa074 | PTR_crt_unknown.c_FUN_005a7f44_006079c4
    MOV EAX,EBX                         ; 005aa07a
    ADD ESP,0x4                         ; 005aa07c
    POP EBX                             ; 005aa07f
    RET                                 ; 005aa080
    CALL dword ptr [0x006079c4]         ; 005aa081 | PTR_crt_unknown.c_FUN_005a7f44_006079c4
        ;   Label: LAB_005aa081
    XOR EAX,EAX                         ; 005aa087
    ADD ESP,0x4                         ; 005aa089
    POP EBX                             ; 005aa08c
    RET                                 ; 005aa08d

