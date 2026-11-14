; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042dae0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dae0
        ;   Label: cockpit_ckptutil.c_FUN_0042dae0
    PUSH EDI                            ; 0042dae1
    PUSH EBP                            ; 0042dae2
    SUB ESP,0x30                        ; 0042dae3
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042dae6
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042daea
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0042daee
    MOV EDI,dword ptr [ESP + 0x58]      ; 0042daf2
    MOV dword ptr [ESP],EAX             ; 0042daf6
    TEST EAX,EAX                        ; 0042daf9
    JZ 0x0042dc7d                       ; 0042dafb
        ;   XREF to: 0042dc7d (CONDITIONAL_JUMP)  ; LAB_0042dc7d
    PUSH ESI                            ; 0042db01
    MOV EAX,EBX                         ; 0042db02
    SUB EAX,EBP                         ; 0042db04
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042db06
    INC EAX                             ; 0042db0a
    CMP EAX,EDX                         ; 0042db0b
    JG 0x0042dc84                       ; 0042db0d
        ;   XREF to: 0042dc84 (CONDITIONAL_JUMP)  ; LAB_0042dc84
    LEA EAX,[EBP*0x4 + 0x0]             ; 0042db13
        ;   Label: LAB_0042db13
    PUSH EAX                            ; 0042db1a
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 0042db1b
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 0042db20
    MOV dword ptr [ESP + 0x20],EAX      ; 0042db23
    TEST EAX,EAX                        ; 0042db27
    JZ 0x0042dcac                       ; 0042db29
        ;   XREF to: 0042dcac (CONDITIONAL_JUMP)  ; LAB_0042dcac
    XOR ESI,ESI                         ; 0042db2f
        ;   Label: LAB_0042db2f
    MOV dword ptr [ESP + 0x1c],ESI      ; 0042db31
    TEST EBP,EBP                        ; 0042db35
    JLE 0x0042db94                      ; 0042db37
        ;   XREF to: 0042db94 (CONDITIONAL_JUMP)  ; LAB_0042db94
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042db39
    DEC EAX                             ; 0042db3d
    MOV dword ptr [ESP + 0x14],EAX      ; 0042db3e
    IMUL EAX,EBX                        ; 0042db42
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042db45
    ADD EDX,EAX                         ; 0042db49
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042db4b
    MOV dword ptr [ESP + 0x8],EDX       ; 0042db4f
    MOV dword ptr [ESP + 0x24],EAX      ; 0042db53
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042db57
        ;   Label: LAB_0042db57
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042db5b
    ADD EDX,ESI                         ; 0042db5f
    TEST EAX,EAX                        ; 0042db61
    JL 0x0042db71                       ; 0042db63
        ;   XREF to: 0042db71 (CONDITIONAL_JUMP)  ; LAB_0042db71
    XOR ECX,ECX                         ; 0042db65
        ;   Label: LAB_0042db65
    MOV CL,byte ptr [EDX]               ; 0042db67
    CMP ECX,EDI                         ; 0042db69
    JNZ 0x0042dcd3                      ; 0042db6b
        ;   XREF to: 0042dcd3 (CONDITIONAL_JUMP)  ; LAB_0042dcd3
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042db71
        ;   Label: LAB_0042db71
    LEA EDX,[EAX + 0x1]                 ; 0042db75
    MOV dword ptr [ECX],EDX             ; 0042db78
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0042db7a
    JL 0x0042db84                       ; 0042db7e
        ;   XREF to: 0042db84 (CONDITIONAL_JUMP)  ; LAB_0042db84
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042db80
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042db84
        ;   Label: LAB_0042db84
    ADD EAX,0x4                         ; 0042db88
    INC ESI                             ; 0042db8b
    MOV dword ptr [ESP + 0x24],EAX      ; 0042db8c
    CMP ESI,EBP                         ; 0042db90
    JL 0x0042db57                       ; 0042db92
        ;   XREF to: 0042db57 (CONDITIONAL_JUMP)  ; LAB_0042db57
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042db94
        ;   Label: LAB_0042db94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042db98
    MOV dword ptr [EDX],EAX             ; 0042db9c
    MOV EDX,0x1                         ; 0042db9e
    MOV ECX,dword ptr [ESP + 0x58]      ; 0042dba3
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042dba7
    CMP ECX,EDX                         ; 0042dbab
    JLE 0x0042dc6f                      ; 0042dbad
        ;   XREF to: 0042dc6f (CONDITIONAL_JUMP)  ; LAB_0042dc6f
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042dbb3
    LEA EAX,[EBP*0x4 + 0x0]             ; 0042dbb7
    ADD EDX,EAX                         ; 0042dbbe
    LEA EAX,[EBP + -0x1]                ; 0042dbc0
    MOV dword ptr [ESP + 0x30],EAX      ; 0042dbc3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042dbc7
    DEC EAX                             ; 0042dbcb
    MOV dword ptr [ESP + 0x18],EAX      ; 0042dbcc
    IMUL EAX,EBX                        ; 0042dbd0
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042dbd3
    MOV dword ptr [ESP + 0x10],EDX      ; 0042dbd7
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042dbdb
    ADD EAX,ESI                         ; 0042dbdf
    ADD EDX,EAX                         ; 0042dbe1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042dbe3
    ADD EAX,0x4                         ; 0042dbe7
    MOV dword ptr [ESP + 0xc],EDX       ; 0042dbea
    MOV dword ptr [ESP + 0x28],EAX      ; 0042dbee
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042dbf2
        ;   Label: LAB_0042dbf2
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0042dbf6
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042dbfa
    TEST EDX,EDX                        ; 0042dbfe
    JL 0x0042dc0e                       ; 0042dc00
        ;   XREF to: 0042dc0e (CONDITIONAL_JUMP)  ; LAB_0042dc0e
    XOR ECX,ECX                         ; 0042dc02
        ;   Label: LAB_0042dc02
    MOV CL,byte ptr [EAX]               ; 0042dc04
    CMP ECX,EDI                         ; 0042dc06
    JNZ 0x0042dce3                      ; 0042dc08
        ;   XREF to: 0042dce3 (CONDITIONAL_JUMP)  ; LAB_0042dce3
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042dc0e
        ;   Label: LAB_0042dc0e
    XOR ECX,ECX                         ; 0042dc12
    TEST ESI,ESI                        ; 0042dc14
    JLE 0x0042dc2d                      ; 0042dc16
        ;   XREF to: 0042dc2d (CONDITIONAL_JUMP)  ; LAB_0042dc2d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042dc18
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042dc1c
        ;   Label: LAB_0042dc1c
    INC ECX                             ; 0042dc1f
    MOV dword ptr [EAX],ESI             ; 0042dc20
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042dc22
    ADD EAX,0x4                         ; 0042dc26
    CMP ECX,ESI                         ; 0042dc29
    JL 0x0042dc1c                       ; 0042dc2b
        ;   XREF to: 0042dc1c (CONDITIONAL_JUMP)  ; LAB_0042dc1c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042dc2d
        ;   Label: LAB_0042dc2d
    INC EDX                             ; 0042dc31
    XOR ECX,ECX                         ; 0042dc32
    MOV dword ptr [EAX + -0x4],EDX      ; 0042dc34
    XOR EDX,EDX                         ; 0042dc37
    TEST EBP,EBP                        ; 0042dc39
    JLE 0x0042dc51                      ; 0042dc3b
        ;   XREF to: 0042dc51 (CONDITIONAL_JUMP)  ; LAB_0042dc51
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042dc3d
    MOV ESI,dword ptr [EAX]             ; 0042dc41
        ;   Label: LAB_0042dc41
    CMP ECX,ESI                         ; 0042dc43
    JG 0x0042dc49                       ; 0042dc45
        ;   XREF to: 0042dc49 (CONDITIONAL_JUMP)  ; LAB_0042dc49
    MOV ECX,ESI                         ; 0042dc47
    INC EDX                             ; 0042dc49
        ;   Label: LAB_0042dc49
    ADD EAX,0x4                         ; 0042dc4a
    CMP EDX,EBP                         ; 0042dc4d
    JL 0x0042dc41                       ; 0042dc4f
        ;   XREF to: 0042dc41 (CONDITIONAL_JUMP)  ; LAB_0042dc41
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042dc51
        ;   Label: LAB_0042dc51
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0042dc55
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042dc59
    INC ESI                             ; 0042dc5d
    MOV dword ptr [EAX],ECX             ; 0042dc5e
    LEA ECX,[EAX + 0x4]                 ; 0042dc60
    MOV dword ptr [ESP + 0x2c],ESI      ; 0042dc63
    MOV dword ptr [ESP + 0x28],ECX      ; 0042dc67
    CMP ESI,EDX                         ; 0042dc6b
    JL 0x0042dbf2                       ; 0042dc6d
        ;   XREF to: 0042dbf2 (CONDITIONAL_JUMP)  ; LAB_0042dbf2
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042dc6f
        ;   Label: LAB_0042dc6f
    PUSH ECX                            ; 0042dc73
    CALL crt_unknown.c_FUN_005b7fdc     ; 0042dc74
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0042dc79
    POP ESI                             ; 0042dc7c
    ADD ESP,0x30                        ; 0042dc7d
        ;   Label: LAB_0042dc7d
    POP EBP                             ; 0042dc80
    POP EDI                             ; 0042dc81
    POP EBX                             ; 0042dc82
    RET                                 ; 0042dc83
    MOV ECX,0x5cd431                    ; 0042dc84
        ;   Label: LAB_0042dc84
    MOV ESI,0x405                       ; 0042dc89
    PUSH 0x5cd447                       ; 0042dc8e
    MOV dword ptr [0x01d046a0],ECX      ; 0042dc93 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0042dc99 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042dc9f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042dca4
    JMP 0x0042db13                      ; 0042dca7
        ;   XREF to: 0042db13 (UNCONDITIONAL_JUMP)  ; LAB_0042db13
    MOV EAX,0x5cd462                    ; 0042dcac
        ;   Label: LAB_0042dcac
    MOV EDX,0x40b                       ; 0042dcb1
    PUSH 0x5cd478                       ; 0042dcb6
    MOV [0x01d046a0],EAX                ; 0042dcbb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0042dcc0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042dcc6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042dccb
    JMP 0x0042db2f                      ; 0042dcce
        ;   XREF to: 0042db2f (UNCONDITIONAL_JUMP)  ; LAB_0042db2f
    DEC EAX                             ; 0042dcd3
        ;   Label: LAB_0042dcd3
    SUB EDX,EBX                         ; 0042dcd4
    TEST EAX,EAX                        ; 0042dcd6
    JGE 0x0042db65                      ; 0042dcd8
        ;   XREF to: 0042db65 (CONDITIONAL_JUMP)  ; LAB_0042db65
    JMP 0x0042db71                      ; 0042dcde
        ;   XREF to: 0042db71 (UNCONDITIONAL_JUMP)  ; LAB_0042db71
    DEC EDX                             ; 0042dce3
        ;   Label: LAB_0042dce3
    SUB EAX,EBX                         ; 0042dce4
    TEST EDX,EDX                        ; 0042dce6
    JGE 0x0042dc02                      ; 0042dce8
        ;   XREF to: 0042dc02 (CONDITIONAL_JUMP)  ; LAB_0042dc02
    JMP 0x0042dc0e                      ; 0042dcee
        ;   XREF to: 0042dc0e (UNCONDITIONAL_JUMP)  ; LAB_0042dc0e

