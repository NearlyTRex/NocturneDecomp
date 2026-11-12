; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_005048e0(int *param_1,_FILE *param_2,ulong param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005048e0
        ;   Label: sound_mp3.cpp_FUN_005048e0
    PUSH ESI                            ; 005048e1
    PUSH EDI                            ; 005048e2
    PUSH EBP                            ; 005048e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005048e4
    MOV EDX,dword ptr [EBX]             ; 005048e8
    MOV ESI,EBX                         ; 005048ea
    TEST EDX,EDX                        ; 005048ec
    JNZ 0x0050497a                      ; 005048ee
        ;   XREF to: 0050497a (CONDITIONAL_JUMP)  ; LAB_0050497a
    MOV EDI,dword ptr [ESI + 0x4]       ; 005048f4
        ;   Label: LAB_005048f4
    TEST EDI,EDI                        ; 005048f7
    JZ 0x0050490b                       ; 005048f9
        ;   XREF to: 0050490b (CONDITIONAL_JUMP)  ; LAB_0050490b
    PUSH EDI                            ; 005048fb
    CALL crt_unknown.c_FUN_005b86a0     ; 005048fc
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00504901
    MOV dword ptr [ESI + 0x4],0x0       ; 00504904
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050490b
        ;   Label: LAB_0050490b
    PUSH EAX                            ; 0050490f
    MOV dword ptr [EBX],EAX             ; 00504910
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00504912
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00504917
    MOV dword ptr [EBX + 0x20],EAX      ; 0050491a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050491d
    MOV dword ptr [EBX + 0x24],EAX      ; 00504921
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00504924
    PUSH EAX                            ; 00504928
    MOV dword ptr [EBX + 0x8],EAX       ; 00504929
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0050492c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00504931
    MOV dword ptr [EBX + 0x4],EAX       ; 00504934
    TEST EAX,EAX                        ; 00504937
    JZ 0x0050498e                       ; 00504939
        ;   XREF to: 0050498e (CONDITIONAL_JUMP)  ; LAB_0050498e
    PUSH 0x0                            ; 0050493b
        ;   Label: LAB_0050493b
    MOV EBP,dword ptr [EBX + 0x20]      ; 0050493d
    PUSH EBP                            ; 00504940
    MOV EAX,dword ptr [EBX]             ; 00504941
    PUSH EAX                            ; 00504943
    CALL crt_stdio.c_fseek_FUN_005b929c ; 00504944
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005b929c(_FILE * file, long offset, int whence)
    MOV dword ptr [EBX + 0x10],0x0      ; 00504949
    MOV dword ptr [EBX + 0x14],0x0      ; 00504950
    MOV dword ptr [EBX + 0xc],0x0       ; 00504957
    MOV dword ptr [EBX + 0x18],0x0      ; 0050495e
    MOV dword ptr [EBX + 0x1c],0x0      ; 00504965
    MOV EAX,dword ptr [EBX + 0x24]      ; 0050496c
    ADD ESP,0xc                         ; 0050496f
    MOV dword ptr [EBX + 0x28],EAX      ; 00504972
    POP EBP                             ; 00504975
    POP EDI                             ; 00504976
    POP ESI                             ; 00504977
    POP EBX                             ; 00504978
    RET                                 ; 00504979
    PUSH EDX                            ; 0050497a
        ;   Label: LAB_0050497a
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0050497b
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00504980
    MOV dword ptr [EBX],0x0             ; 00504983
    JMP 0x005048f4                      ; 00504989
        ;   XREF to: 005048f4 (UNCONDITIONAL_JUMP)  ; LAB_005048f4
    PUSH 0x1d23558                      ; 0050498e
        ;   Label: LAB_0050498e
    MOV ESI,0x5dfee2                    ; 00504993
    MOV EDI,0x23d                       ; 00504998
    PUSH 0x5dfef3                       ; 0050499d
    MOV dword ptr [0x01d046a0],ESI      ; 005049a2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005049a8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005049ae
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005049b3
    JMP 0x0050493b                      ; 005049b6
        ;   XREF to: 0050493b (UNCONDITIONAL_JUMP)  ; LAB_0050493b

