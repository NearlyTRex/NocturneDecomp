; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_00513ff0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fseek_FUN_005a457c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513ff0
        ;   Label: engine_pod.cpp_FUN_00513ff0
    PUSH EDI                            ; 00513ff1
    PUSH EBP                            ; 00513ff2
    SUB ESP,0x138                       ; 00513ff3
    MOV EBP,dword ptr [ESP + 0x148]     ; 00513ff9
    MOV EBX,ESI                         ; 00514000
    MOV EDX,dword ptr [ESP + 0x14c]     ; 00514002
    TEST EDX,EDX                        ; 00514009
    JL 0x00514015                       ; 0051400b
        ;   XREF to: 00514015 (CONDITIONAL_JUMP)  ; LAB_00514015
    CMP EDX,dword ptr [EBP + 0x41c]     ; 0051400d
    JL 0x00514038                       ; 00514013
        ;   XREF to: 00514038 (CONDITIONAL_JUMP)  ; LAB_00514038
    MOV ESI,0x5cc621                    ; 00514015
        ;   Label: LAB_00514015
    MOV EDI,0x3ab                       ; 0051401a
    PUSH 0x5cc633                       ; 0051401f
    MOV dword ptr [0x01d71de0],ESI      ; 00514024 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0051402a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514030
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00514035
    PUSH 0x5cc66f                       ; 00514038
        ;   Label: LAB_00514038
    LEA EDI,[EBP + 0x4]                 ; 0051403d
    PUSH EDI                            ; 00514040
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00514041
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 00514046
    MOV ESI,EAX                         ; 00514049
    TEST EAX,EAX                        ; 0051404b
    JNZ 0x00514072                      ; 0051404d
        ;   XREF to: 00514072 (CONDITIONAL_JUMP)  ; LAB_00514072
    PUSH EDI                            ; 0051404f
    MOV EAX,0x5cc672                    ; 00514050
    MOV EDX,0x3b0                       ; 00514055
    PUSH 0x5cc684                       ; 0051405a
    MOV [0x01d71de0],EAX                ; 0051405f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00514064 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051406a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0051406f
    MOV EDX,dword ptr [ESP + 0x14c]     ; 00514072
        ;   Label: LAB_00514072
    LEA EAX,[EDX*0x4 + 0x0]             ; 00514079
    ADD EAX,EDX                         ; 00514080
    SHL EAX,0x3                         ; 00514082
    SUB EAX,EDX                         ; 00514085
    MOV ECX,dword ptr [EBP + 0x420]     ; 00514087
    SHL EAX,0x3                         ; 0051408d
    PUSH 0x0                            ; 00514090
    ADD EAX,ECX                         ; 00514092
    PUSH EAX                            ; 00514094
    PUSH ESI                            ; 00514095
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00514096
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0051409b
    PUSH ESI                            ; 0051409e
    PUSH 0x1                            ; 0051409f
    PUSH 0x138                          ; 005140a1
    LEA EAX,[ESP + 0xc]                 ; 005140a6
    PUSH EAX                            ; 005140aa
    CALL crt_stdio.c_fread_FUN_005a3890 ; 005140ab
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [ESI + 0xc]         ; 005140b0
    ADD ESP,0x10                        ; 005140b3
    TEST AH,0x20                        ; 005140b6
    JNZ 0x005140dd                      ; 005140b9
        ;   XREF to: 005140dd (CONDITIONAL_JUMP)  ; LAB_005140dd
    PUSH ESI                            ; 005140bb
        ;   Label: LAB_005140bb
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005140bc
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EDI,EBX                         ; 005140c1
    MOV ECX,0x4e                        ; 005140c3
    LEA ESI,[ESP + 0x4]                 ; 005140c8
    ADD ESP,0x4                         ; 005140cc
    MOVSD.REP ES:EDI,ESI                ; 005140cf
    MOV EAX,EBX                         ; 005140d1
    ADD ESP,0x138                       ; 005140d3
    POP EBP                             ; 005140d9
    POP EDI                             ; 005140da
    POP EBX                             ; 005140db
    RET                                 ; 005140dc
    ADD EBP,0x4                         ; 005140dd
        ;   Label: LAB_005140dd
    PUSH EBP                            ; 005140e0
    MOV EDI,0x5cc6ad                    ; 005140e1
    MOV EAX,0x3c5                       ; 005140e6
    PUSH 0x5cc6bf                       ; 005140eb
    MOV dword ptr [0x01d71de0],EDI      ; 005140f0 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005140f6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005140fb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00514100
    JMP 0x005140bb                      ; 00514103
        ;   XREF to: 005140bb (UNCONDITIONAL_JUMP)  ; LAB_005140bb

