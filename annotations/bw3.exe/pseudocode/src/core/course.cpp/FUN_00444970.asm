; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_FUN_00444970(CCourse *this_ptr,char *filename)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_bat.cpp_CBat_setup_FUN_0040eeb0 at 0040eed5
;   core_platfrm.cpp_CPlatform_setup_FUN_005112b0 at 0051130d
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_course.cpp_FUN_00444910
;   core_course.cpp_FUN_00444aa0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444970
        ;   Label: core_course.cpp_FUN_00444970
    PUSH ESI                            ; 00444971
    PUSH EDI                            ; 00444972
    PUSH EBP                            ; 00444973
    SUB ESP,0x8                         ; 00444974
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00444977
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044497b
    PUSH EDI                            ; 0044497f
    CALL core_course.cpp_FUN_00444aa0   ; 00444980
        ;   XREF to: 00444aa0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00444aa0()
    ADD ESP,0x4                         ; 00444985
    PUSH 0x5b983c                       ; 00444988
    PUSH EBX                            ; 0044498d
    PUSH 0x5b983f                       ; 0044498e
    CALL engine_dosio.cpp_FUN_004659c0  ; 00444993
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00444998
    MOV EBP,EAX                         ; 0044499b
    TEST EAX,EAX                        ; 0044499d
    JZ 0x00444a71                       ; 0044499f
        ;   XREF to: 00444a71 (CONDITIONAL_JUMP)  ; LAB_00444a71
    MOV EBX,EBP                         ; 004449a5
        ;   Label: LAB_004449a5
    PUSH EBX                            ; 004449a7
        ;   Label: LAB_004449a7
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004449a8
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004449ad
    TEST EAX,EAX                        ; 004449b0
    JL 0x004449b9                       ; 004449b2
        ;   XREF to: 004449b9 (CONDITIONAL_JUMP)  ; LAB_004449b9
    CMP EAX,0xa                         ; 004449b4
    JNZ 0x004449a7                      ; 004449b7
        ;   XREF to: 004449a7 (CONDITIONAL_JUMP)  ; LAB_004449a7
    MOV EAX,ESP                         ; 004449b9
        ;   Label: LAB_004449b9
    PUSH EAX                            ; 004449bb
    PUSH 0x5b987a                       ; 004449bc
    PUSH EBP                            ; 004449c1
    MOV EBX,EBP                         ; 004449c2
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004449c4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004449c9
    PUSH EBX                            ; 004449cc
        ;   Label: LAB_004449cc
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004449cd
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004449d2
    TEST EAX,EAX                        ; 004449d5
    JL 0x004449de                       ; 004449d7
        ;   XREF to: 004449de (CONDITIONAL_JUMP)  ; LAB_004449de
    CMP EAX,0xa                         ; 004449d9
    JNZ 0x004449cc                      ; 004449dc
        ;   XREF to: 004449cc (CONDITIONAL_JUMP)  ; LAB_004449cc
    LEA EAX,[EDI + 0x8]                 ; 004449de
        ;   Label: LAB_004449de
    PUSH EAX                            ; 004449e1
    LEA EAX,[ESP + 0x8]                 ; 004449e2
    PUSH EAX                            ; 004449e6
    PUSH 0x5b987e                       ; 004449e7
    PUSH EBP                            ; 004449ec
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004449ed
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004449f2
    MOV EBX,dword ptr [ESP + 0x4]       ; 004449f5
    PUSH EBX                            ; 004449f9
    PUSH EDI                            ; 004449fa
    CALL core_course.cpp_FUN_00444910   ; 004449fb
        ;   XREF to: 00444910 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00444910()
    MOV EBX,EBP                         ; 00444a00
    ADD ESP,0x8                         ; 00444a02
    PUSH EBX                            ; 00444a05
        ;   Label: LAB_00444a05
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00444a06
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 00444a0b
    TEST EAX,EAX                        ; 00444a0e
    JL 0x00444a17                       ; 00444a10
        ;   XREF to: 00444a17 (CONDITIONAL_JUMP)  ; LAB_00444a17
    CMP EAX,0xa                         ; 00444a12
    JNZ 0x00444a05                      ; 00444a15
        ;   XREF to: 00444a05 (CONDITIONAL_JUMP)  ; LAB_00444a05
    MOV ESI,dword ptr [EDI]             ; 00444a17
        ;   Label: LAB_00444a17
    XOR EBX,EBX                         ; 00444a19
    TEST ESI,ESI                        ; 00444a1b
    JLE 0x00444a60                      ; 00444a1d
        ;   XREF to: 00444a60 (CONDITIONAL_JUMP)  ; LAB_00444a60
    XOR ESI,ESI                         ; 00444a1f
    MOV EAX,dword ptr [EDI + 0x4]       ; 00444a21
        ;   Label: LAB_00444a21
    ADD EAX,ESI                         ; 00444a24
    LEA EDX,[EAX + 0x18]                ; 00444a26
    PUSH EDX                            ; 00444a29
    LEA EDX,[EAX + 0x14]                ; 00444a2a
    PUSH EDX                            ; 00444a2d
    LEA EDX,[EAX + 0x10]                ; 00444a2e
    PUSH EDX                            ; 00444a31
    LEA EDX,[EAX + 0xc]                 ; 00444a32
    PUSH EDX                            ; 00444a35
    LEA EDX,[EAX + 0x8]                 ; 00444a36
    PUSH EDX                            ; 00444a39
    LEA EDX,[EAX + 0x4]                 ; 00444a3a
    PUSH EDX                            ; 00444a3d
    PUSH EAX                            ; 00444a3e
    PUSH 0x5b9885                       ; 00444a3f
    PUSH EBP                            ; 00444a44
    INC EBX                             ; 00444a45
    ADD ESI,0x1c                        ; 00444a46
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00444a49
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EDI]             ; 00444a4e
    ADD ESP,0x24                        ; 00444a50
    CMP EBX,EAX                         ; 00444a53
    JL 0x00444a21                       ; 00444a55
        ;   XREF to: 00444a21 (CONDITIONAL_JUMP)  ; LAB_00444a21
    LEA EAX,[EAX]                       ; 00444a57
    LEA EDX,[EDX]                       ; 00444a5d
    PUSH EBP                            ; 00444a60
        ;   Label: LAB_00444a60
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00444a61
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00444a66
    ADD ESP,0x8                         ; 00444a69
    POP EBP                             ; 00444a6c
    POP EDI                             ; 00444a6d
    POP ESI                             ; 00444a6e
    POP EBX                             ; 00444a6f
    RET                                 ; 00444a70
    PUSH EBX                            ; 00444a71
        ;   Label: LAB_00444a71
    MOV EDX,0x5b9844                    ; 00444a72
    MOV ECX,0x7c                        ; 00444a77
    PUSH 0x5b9857                       ; 00444a7c
    MOV dword ptr [0x01d71de0],EDX      ; 00444a81 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00444a87 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00444a8d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00444a92
    JMP 0x004449a5                      ; 00444a95
        ;   XREF to: 004449a5 (UNCONDITIONAL_JUMP)  ; LAB_004449a5

