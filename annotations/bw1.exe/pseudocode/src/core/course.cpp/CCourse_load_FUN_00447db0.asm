; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_load_FUN_00447db0(CCourse *this_ptr,char *filename)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_bat.cpp_CBat_setup_FUN_00410c20 at 00410c45
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004c51e0 at 004c53f0
;   core_marquee.cpp_CMarquee_setup_FUN_00506b20 at 00506b3c
;   core_platfrm.cpp_CPlatform_setup_FUN_005395d0 at 0053962d
;   core_vehicle.cpp_CVehicle_setup_FUN_005a7870 at 005a7b12
;
; Referenced Globals:
;   undefined4 DAT_005d7185
;   undefined4 DAT_005d7188
;   TerminatedCString s_core_course_cpp_005d718d
;   TerminatedCString s_CCourse_load_can_t_open_005d71a0
;   undefined4 DAT_005d71c3
;   TerminatedCString s_d_d_005d71c7
;   TerminatedCString s_f_f_f_f_f_f_f_005d71ce
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_course.cpp_FUN_00447d50
;   core_course.cpp_FUN_00447ee0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447db0
        ;   Label: core_course.cpp_CCourse_load_FUN_00447db0
    PUSH ESI                            ; 00447db1
    PUSH EDI                            ; 00447db2
    PUSH EBP                            ; 00447db3
    SUB ESP,0x8                         ; 00447db4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00447db7
    MOV EBX,dword ptr [ESP + 0x20]      ; 00447dbb
    PUSH EDI                            ; 00447dbf
    CALL core_course.cpp_FUN_00447ee0   ; 00447dc0
        ;   XREF to: 00447ee0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00447ee0()
    ADD ESP,0x4                         ; 00447dc5
    PUSH 0x5d7185                       ; 00447dc8 | DAT_005d7185
    PUSH EBX                            ; 00447dcd
    PUSH 0x5d7188                       ; 00447dce | DAT_005d7188
    CALL engine_dosio.cpp_FUN_00479180  ; 00447dd3
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00447dd8
    MOV EBP,EAX                         ; 00447ddb
    TEST EAX,EAX                        ; 00447ddd
    JZ 0x00447eb1                       ; 00447ddf
        ;   XREF to: 00447eb1 (CONDITIONAL_JUMP)  ; LAB_00447eb1
    MOV EBX,EBP                         ; 00447de5
        ;   Label: LAB_00447de5
    PUSH EBX                            ; 00447de7
        ;   Label: LAB_00447de7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00447de8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00447ded
    TEST EAX,EAX                        ; 00447df0
    JL 0x00447df9                       ; 00447df2
        ;   XREF to: 00447df9 (CONDITIONAL_JUMP)  ; LAB_00447df9
    CMP EAX,0xa                         ; 00447df4
    JNZ 0x00447de7                      ; 00447df7
        ;   XREF to: 00447de7 (CONDITIONAL_JUMP)  ; LAB_00447de7
    MOV EAX,ESP                         ; 00447df9
        ;   Label: LAB_00447df9
    PUSH EAX                            ; 00447dfb
    PUSH 0x5d71c3                       ; 00447dfc | DAT_005d71c3
    PUSH EBP                            ; 00447e01
    MOV EBX,EBP                         ; 00447e02
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00447e04
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00447e09
    PUSH EBX                            ; 00447e0c
        ;   Label: LAB_00447e0c
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00447e0d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00447e12
    TEST EAX,EAX                        ; 00447e15
    JL 0x00447e1e                       ; 00447e17
        ;   XREF to: 00447e1e (CONDITIONAL_JUMP)  ; LAB_00447e1e
    CMP EAX,0xa                         ; 00447e19
    JNZ 0x00447e0c                      ; 00447e1c
        ;   XREF to: 00447e0c (CONDITIONAL_JUMP)  ; LAB_00447e0c
    LEA EAX,[EDI + 0x8]                 ; 00447e1e
        ;   Label: LAB_00447e1e
    PUSH EAX                            ; 00447e21
    LEA EAX,[ESP + 0x8]                 ; 00447e22
    PUSH EAX                            ; 00447e26
    PUSH 0x5d71c7                       ; 00447e27 | = "%d,%d\n"
    PUSH EBP                            ; 00447e2c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00447e2d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 00447e32
    MOV EBX,dword ptr [ESP + 0x4]       ; 00447e35
    PUSH EBX                            ; 00447e39
    PUSH EDI                            ; 00447e3a
    CALL core_course.cpp_FUN_00447d50   ; 00447e3b
        ;   XREF to: 00447d50 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00447d50()
    MOV EBX,EBP                         ; 00447e40
    ADD ESP,0x8                         ; 00447e42
    PUSH EBX                            ; 00447e45
        ;   Label: LAB_00447e45
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00447e46
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00447e4b
    TEST EAX,EAX                        ; 00447e4e
    JL 0x00447e57                       ; 00447e50
        ;   XREF to: 00447e57 (CONDITIONAL_JUMP)  ; LAB_00447e57
    CMP EAX,0xa                         ; 00447e52
    JNZ 0x00447e45                      ; 00447e55
        ;   XREF to: 00447e45 (CONDITIONAL_JUMP)  ; LAB_00447e45
    MOV ESI,dword ptr [EDI]             ; 00447e57
        ;   Label: LAB_00447e57
    XOR EBX,EBX                         ; 00447e59
    TEST ESI,ESI                        ; 00447e5b
    JLE 0x00447ea0                      ; 00447e5d
        ;   XREF to: 00447ea0 (CONDITIONAL_JUMP)  ; LAB_00447ea0
    XOR ESI,ESI                         ; 00447e5f
    MOV EAX,dword ptr [EDI + 0x4]       ; 00447e61
        ;   Label: LAB_00447e61
    ADD EAX,ESI                         ; 00447e64
    LEA EDX,[EAX + 0x18]                ; 00447e66
    PUSH EDX                            ; 00447e69
    LEA EDX,[EAX + 0x14]                ; 00447e6a
    PUSH EDX                            ; 00447e6d
    LEA EDX,[EAX + 0x10]                ; 00447e6e
    PUSH EDX                            ; 00447e71
    LEA EDX,[EAX + 0xc]                 ; 00447e72
    PUSH EDX                            ; 00447e75
    LEA EDX,[EAX + 0x8]                 ; 00447e76
    PUSH EDX                            ; 00447e79
    LEA EDX,[EAX + 0x4]                 ; 00447e7a
    PUSH EDX                            ; 00447e7d
    PUSH EAX                            ; 00447e7e
    PUSH 0x5d71ce                       ; 00447e7f | = "%f,%f,%f, %f,%f,%f,%f\n"
    PUSH EBP                            ; 00447e84
    INC EBX                             ; 00447e85
    ADD ESI,0x1c                        ; 00447e86
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00447e89
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EDI]             ; 00447e8e
    ADD ESP,0x24                        ; 00447e90
    CMP EBX,EAX                         ; 00447e93
    JL 0x00447e61                       ; 00447e95
        ;   XREF to: 00447e61 (CONDITIONAL_JUMP)  ; LAB_00447e61
    LEA EAX,[EAX]                       ; 00447e97
    LEA EDX,[EDX]                       ; 00447e9d
    PUSH EBP                            ; 00447ea0
        ;   Label: LAB_00447ea0
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00447ea1
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00447ea6
    ADD ESP,0x8                         ; 00447ea9
    POP EBP                             ; 00447eac
    POP EDI                             ; 00447ead
    POP ESI                             ; 00447eae
    POP EBX                             ; 00447eaf
    RET                                 ; 00447eb0
    PUSH EBX                            ; 00447eb1
        ;   Label: LAB_00447eb1
    MOV EDX,0x5d718d                    ; 00447eb2 | = "..\\core\\course.cpp"
    MOV ECX,0x7c                        ; 00447eb7
    PUSH 0x5d71a0                       ; 00447ebc | = "CCourse::load - can't open data\\%s"
    MOV dword ptr [0x01d1d400],EDX      ; 00447ec1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00447ec7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00447ecd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00447ed2
    JMP 0x00447de5                      ; 00447ed5
        ;   XREF to: 00447de5 (UNCONDITIONAL_JUMP)  ; LAB_00447de5

