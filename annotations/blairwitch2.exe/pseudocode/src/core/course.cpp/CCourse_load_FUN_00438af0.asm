; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_bat.cpp_CBat_setup_FUN_004110a0 at 004110c5
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004ac230 at 004ac440
;   core_marquee.cpp_CMarquee_setup_FUN_004e7e80 at 004e7e9c
;   core_platfrm.cpp_CPlatform_setup_FUN_00518280 at 005182dd
;   core_vehicle.cpp_CVehicle_setup_FUN_00583c40 at 00583ee2
;
; Referenced Globals:
;   undefined4 DAT_005ce019
;   undefined4 DAT_005ce01c
;   TerminatedCString s_core_course_cpp_005ce021
;   TerminatedCString s_CCourse_load_can_t_open_005ce034
;   undefined4 DAT_005ce057
;   TerminatedCString s_d_d_005ce05b
;   TerminatedCString s_f_f_f_f_f_f_f_005ce062
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_course.cpp_FUN_00438a90
;   core_course.cpp_FUN_00438c20
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438af0
        ;   Label: core_course.cpp_CCourse_load_FUN_00438af0
    PUSH ESI                            ; 00438af1
    PUSH EDI                            ; 00438af2
    PUSH EBP                            ; 00438af3
    SUB ESP,0x8                         ; 00438af4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00438af7
    MOV EBX,dword ptr [ESP + 0x20]      ; 00438afb
    PUSH EDI                            ; 00438aff
    CALL core_course.cpp_FUN_00438c20   ; 00438b00
        ;   XREF to: 00438c20 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00438c20()
    ADD ESP,0x4                         ; 00438b05
    PUSH 0x5ce019                       ; 00438b08 | DAT_005ce019
    PUSH EBX                            ; 00438b0d
    PUSH 0x5ce01c                       ; 00438b0e | DAT_005ce01c
    CALL engine_dosio.cpp_FUN_00460c70  ; 00438b13
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00438b18
    MOV EBP,EAX                         ; 00438b1b
    TEST EAX,EAX                        ; 00438b1d
    JZ 0x00438bf1                       ; 00438b1f
        ;   XREF to: 00438bf1 (CONDITIONAL_JUMP)  ; LAB_00438bf1
    MOV EBX,EBP                         ; 00438b25
        ;   Label: LAB_00438b25
    PUSH EBX                            ; 00438b27
        ;   Label: LAB_00438b27
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00438b28
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00438b2d
    TEST EAX,EAX                        ; 00438b30
    JL 0x00438b39                       ; 00438b32
        ;   XREF to: 00438b39 (CONDITIONAL_JUMP)  ; LAB_00438b39
    CMP EAX,0xa                         ; 00438b34
    JNZ 0x00438b27                      ; 00438b37
        ;   XREF to: 00438b27 (CONDITIONAL_JUMP)  ; LAB_00438b27
    MOV EAX,ESP                         ; 00438b39
        ;   Label: LAB_00438b39
    PUSH EAX                            ; 00438b3b
    PUSH 0x5ce057                       ; 00438b3c | DAT_005ce057
    PUSH EBP                            ; 00438b41
    MOV EBX,EBP                         ; 00438b42
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00438b44
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00438b49
    PUSH EBX                            ; 00438b4c
        ;   Label: LAB_00438b4c
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00438b4d
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00438b52
    TEST EAX,EAX                        ; 00438b55
    JL 0x00438b5e                       ; 00438b57
        ;   XREF to: 00438b5e (CONDITIONAL_JUMP)  ; LAB_00438b5e
    CMP EAX,0xa                         ; 00438b59
    JNZ 0x00438b4c                      ; 00438b5c
        ;   XREF to: 00438b4c (CONDITIONAL_JUMP)  ; LAB_00438b4c
    LEA EAX,[EDI + 0x8]                 ; 00438b5e
        ;   Label: LAB_00438b5e
    PUSH EAX                            ; 00438b61
    LEA EAX,[ESP + 0x8]                 ; 00438b62
    PUSH EAX                            ; 00438b66
    PUSH 0x5ce05b                       ; 00438b67 | = "%d,%d\n"
    PUSH EBP                            ; 00438b6c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00438b6d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00438b72
    MOV EBX,dword ptr [ESP + 0x4]       ; 00438b75
    PUSH EBX                            ; 00438b79
    PUSH EDI                            ; 00438b7a
    CALL core_course.cpp_FUN_00438a90   ; 00438b7b
        ;   XREF to: 00438a90 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00438a90()
    MOV EBX,EBP                         ; 00438b80
    ADD ESP,0x8                         ; 00438b82
    PUSH EBX                            ; 00438b85
        ;   Label: LAB_00438b85
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00438b86
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00438b8b
    TEST EAX,EAX                        ; 00438b8e
    JL 0x00438b97                       ; 00438b90
        ;   XREF to: 00438b97 (CONDITIONAL_JUMP)  ; LAB_00438b97
    CMP EAX,0xa                         ; 00438b92
    JNZ 0x00438b85                      ; 00438b95
        ;   XREF to: 00438b85 (CONDITIONAL_JUMP)  ; LAB_00438b85
    MOV ESI,dword ptr [EDI]             ; 00438b97
        ;   Label: LAB_00438b97
    XOR EBX,EBX                         ; 00438b99
    TEST ESI,ESI                        ; 00438b9b
    JLE 0x00438be0                      ; 00438b9d
        ;   XREF to: 00438be0 (CONDITIONAL_JUMP)  ; LAB_00438be0
    XOR ESI,ESI                         ; 00438b9f
    MOV EAX,dword ptr [EDI + 0x4]       ; 00438ba1
        ;   Label: LAB_00438ba1
    ADD EAX,ESI                         ; 00438ba4
    LEA EDX,[EAX + 0x18]                ; 00438ba6
    PUSH EDX                            ; 00438ba9
    LEA EDX,[EAX + 0x14]                ; 00438baa
    PUSH EDX                            ; 00438bad
    LEA EDX,[EAX + 0x10]                ; 00438bae
    PUSH EDX                            ; 00438bb1
    LEA EDX,[EAX + 0xc]                 ; 00438bb2
    PUSH EDX                            ; 00438bb5
    LEA EDX,[EAX + 0x8]                 ; 00438bb6
    PUSH EDX                            ; 00438bb9
    LEA EDX,[EAX + 0x4]                 ; 00438bba
    PUSH EDX                            ; 00438bbd
    PUSH EAX                            ; 00438bbe
    PUSH 0x5ce062                       ; 00438bbf | = "%f,%f,%f, %f,%f,%f,%f\n"
    PUSH EBP                            ; 00438bc4
    INC EBX                             ; 00438bc5
    ADD ESI,0x1c                        ; 00438bc6
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00438bc9
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI]             ; 00438bce
    ADD ESP,0x24                        ; 00438bd0
    CMP EBX,EAX                         ; 00438bd3
    JL 0x00438ba1                       ; 00438bd5
        ;   XREF to: 00438ba1 (CONDITIONAL_JUMP)  ; LAB_00438ba1
    LEA EAX,[EAX]                       ; 00438bd7
    LEA EDX,[EDX]                       ; 00438bdd
    PUSH EBP                            ; 00438be0
        ;   Label: LAB_00438be0
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00438be1
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00438be6
    ADD ESP,0x8                         ; 00438be9
    POP EBP                             ; 00438bec
    POP EDI                             ; 00438bed
    POP ESI                             ; 00438bee
    POP EBX                             ; 00438bef
    RET                                 ; 00438bf0
    PUSH EBX                            ; 00438bf1
        ;   Label: LAB_00438bf1
    MOV EDX,0x5ce021                    ; 00438bf2 | = "..\\core\\course.cpp"
    MOV ECX,0x7c                        ; 00438bf7
    PUSH 0x5ce034                       ; 00438bfc | = "CCourse::load - can't open data\\%s"
    MOV dword ptr [0x01d046a0],EDX      ; 00438c01 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00438c07 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00438c0d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00438c12
    JMP 0x00438b25                      ; 00438c15
        ;   XREF to: 00438b25 (UNCONDITIONAL_JUMP)  ; LAB_00438b25

