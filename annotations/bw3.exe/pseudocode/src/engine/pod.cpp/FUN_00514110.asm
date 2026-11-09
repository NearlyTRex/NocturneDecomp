; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_00514110(int param_1,int param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_00514d00 at 00514e53
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

    PUSH EBX                            ; 00514110
        ;   Label: engine_pod.cpp_FUN_00514110
    PUSH EDI                            ; 00514111
    PUSH EBP                            ; 00514112
    SUB ESP,0x108                       ; 00514113
    MOV EBP,dword ptr [ESP + 0x118]     ; 00514119
    MOV EBX,ESI                         ; 00514120
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00514122
    TEST EDX,EDX                        ; 00514129
    JL 0x00514135                       ; 0051412b
        ;   XREF to: 00514135 (CONDITIONAL_JUMP)  ; LAB_00514135
    CMP EDX,dword ptr [EBP + 0x424]     ; 0051412d
    JL 0x00514158                       ; 00514133
        ;   XREF to: 00514158 (CONDITIONAL_JUMP)  ; LAB_00514158
    MOV ESI,0x5cc6eb                    ; 00514135
        ;   Label: LAB_00514135
    MOV EDI,0x3d8                       ; 0051413a
    PUSH 0x5cc6fd                       ; 0051413f
    MOV dword ptr [0x01d71de0],ESI      ; 00514144 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0051414a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514150
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00514155
    PUSH 0x5cc73e                       ; 00514158
        ;   Label: LAB_00514158
    LEA EDI,[EBP + 0x4]                 ; 0051415d
    PUSH EDI                            ; 00514160
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00514161
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00514166
    MOV ESI,EAX                         ; 00514169
    TEST EAX,EAX                        ; 0051416b
    JNZ 0x00514192                      ; 0051416d
        ;   XREF to: 00514192 (CONDITIONAL_JUMP)  ; LAB_00514192
    PUSH EDI                            ; 0051416f
    MOV EAX,0x5cc741                    ; 00514170
    MOV EDX,0x3dd                       ; 00514175
    PUSH 0x5cc753                       ; 0051417a
    MOV [0x01d71de0],EAX                ; 0051417f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00514184 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051418a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0051418f
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00514192
        ;   Label: LAB_00514192
    MOV EAX,EDX                         ; 00514199
    SHL EAX,0x5                         ; 0051419b
    ADD EAX,EDX                         ; 0051419e
    MOV ECX,dword ptr [EBP + 0x428]     ; 005141a0
    SHL EAX,0x3                         ; 005141a6
    PUSH 0x0                            ; 005141a9
    ADD EAX,ECX                         ; 005141ab
    PUSH EAX                            ; 005141ad
    PUSH ESI                            ; 005141ae
    CALL crt_stdio.c_fseek_FUN_005a457c ; 005141af
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 005141b4
    PUSH ESI                            ; 005141b7
    PUSH 0x1                            ; 005141b8
    PUSH 0x108                          ; 005141ba
    LEA EAX,[ESP + 0xc]                 ; 005141bf
    PUSH EAX                            ; 005141c3
    CALL crt_stdio.c_fread_FUN_005a3890 ; 005141c4
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    MOV AH,byte ptr [ESI + 0xc]         ; 005141c9
    ADD ESP,0x10                        ; 005141cc
    TEST AH,0x20                        ; 005141cf
    JNZ 0x005141f6                      ; 005141d2
        ;   XREF to: 005141f6 (CONDITIONAL_JUMP)  ; LAB_005141f6
    PUSH ESI                            ; 005141d4
        ;   Label: LAB_005141d4
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005141d5
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EDI,EBX                         ; 005141da
    MOV ECX,0x42                        ; 005141dc
    LEA ESI,[ESP + 0x4]                 ; 005141e1
    ADD ESP,0x4                         ; 005141e5
    MOVSD.REP ES:EDI,ESI                ; 005141e8
    MOV EAX,EBX                         ; 005141ea
    ADD ESP,0x108                       ; 005141ec
    POP EBP                             ; 005141f2
    POP EDI                             ; 005141f3
    POP EBX                             ; 005141f4
    RET                                 ; 005141f5
    ADD EBP,0x4                         ; 005141f6
        ;   Label: LAB_005141f6
    PUSH EBP                            ; 005141f9
    MOV EDI,0x5cc781                    ; 005141fa
    MOV EAX,0x3ee                       ; 005141ff
    PUSH 0x5cc793                       ; 00514204
    MOV dword ptr [0x01d71de0],EDI      ; 00514209 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0051420f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00514214
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00514219
    JMP 0x005141d4                      ; 0051421c
        ;   XREF to: 005141d4 (UNCONDITIONAL_JUMP)  ; LAB_005141d4

