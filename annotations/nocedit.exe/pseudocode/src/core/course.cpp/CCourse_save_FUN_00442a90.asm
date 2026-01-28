; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443234
;
; Referenced Globals:
;   TerminatedCString s_wt_00618fb3
;   TerminatedCString s_data_00618fb6
;   TerminatedCString s_Can_t_create_data_s_00618fbb
;   TerminatedCString s_version_00618fd0
;   TerminatedCString s_d_00618fdc
;   TerminatedCString s_len_loop_00618fe0
;   TerminatedCString s_d_d_00618fed
;   TerminatedCString s_frameList_pos_x_y_z_orie_00618ff4
;   TerminatedCString s_g_g_g_g_g_g_g_0061901f
;   TerminatedCString s_core_course_cpp_00619036
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442a90
        ;   Label: core_course.cpp_CCourse_save_FUN_00442a90
    PUSH ESI                            ; 00442a91
    PUSH EDI                            ; 00442a92
    PUSH EBP                            ; 00442a93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00442a94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00442a98
    PUSH 0x618fb3                       ; 00442a9c | = "wt"
    PUSH ESI                            ; 00442aa1
    PUSH 0x618fb6                       ; 00442aa2 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00442aa7
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 00442aac
    ADD ESP,0xc                         ; 00442aae
    MOV EBP,EAX                         ; 00442ab1
    TEST EAX,EAX                        ; 00442ab3
    JZ 0x00442b98                       ; 00442ab5
        ;   XREF to: 00442b98 (CONDITIONAL_JUMP)  ; LAB_00442b98
    PUSH 0x618fd0                       ; 00442abb | = "// version\n"
    PUSH EAX                            ; 00442ac0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442ac1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00442ac6
    PUSH 0x1                            ; 00442ac9
    PUSH 0x618fdc                       ; 00442acb | = "%d\n"
    PUSH EBX                            ; 00442ad0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442ad1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00442ad6
    PUSH 0x618fe0                       ; 00442ad9 | = "// len,loop\n"
    PUSH EBX                            ; 00442ade
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442adf
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00442ae4
    MOV EDX,dword ptr [EDI + 0x8]       ; 00442ae7
    PUSH EDX                            ; 00442aea
    MOV ECX,dword ptr [EDI]             ; 00442aeb
    PUSH ECX                            ; 00442aed
    PUSH 0x618fed                       ; 00442aee | = "%d,%d\n"
    PUSH EBX                            ; 00442af3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442af4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00442af9
    PUSH 0x618ff4                       ; 00442afc | = "// frameList: pos(x,y,z), orient(w,x,..."
    PUSH EBX                            ; 00442b01
    XOR ESI,ESI                         ; 00442b02
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442b04
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [EDI]             ; 00442b09
    ADD ESP,0x8                         ; 00442b0b
    TEST EBX,EBX                        ; 00442b0e
    JLE 0x00442b80                      ; 00442b10
        ;   XREF to: 00442b80 (CONDITIONAL_JUMP)  ; LAB_00442b80
    XOR EBX,EBX                         ; 00442b12
    MOV EAX,dword ptr [EDI + 0x4]       ; 00442b14
        ;   Label: LAB_00442b14
    SUB ESP,0x8                         ; 00442b17
    FLD float ptr [EBX + EAX*0x1 + 0x18] ; 00442b1a
    FSTP double ptr [ESP]               ; 00442b1e
    SUB ESP,0x8                         ; 00442b21
    FLD float ptr [EBX + EAX*0x1 + 0x14] ; 00442b24
    FSTP double ptr [ESP]               ; 00442b28
    SUB ESP,0x8                         ; 00442b2b
    FLD float ptr [EBX + EAX*0x1 + 0x10] ; 00442b2e
    FSTP double ptr [ESP]               ; 00442b32
    SUB ESP,0x8                         ; 00442b35
    FLD float ptr [EBX + EAX*0x1 + 0xc] ; 00442b38
    FSTP double ptr [ESP]               ; 00442b3c
    SUB ESP,0x8                         ; 00442b3f
    FLD float ptr [EBX + EAX*0x1 + 0x8] ; 00442b42
    FSTP double ptr [ESP]               ; 00442b46
    SUB ESP,0x8                         ; 00442b49
    FLD float ptr [EBX + EAX*0x1 + 0x4] ; 00442b4c
    FSTP double ptr [ESP]               ; 00442b50
    SUB ESP,0x8                         ; 00442b53
    FLD float ptr [EBX + EAX*0x1]       ; 00442b56
    FSTP double ptr [ESP]               ; 00442b59
    PUSH 0x61901f                       ; 00442b5c | = "%g,%g,%g, %g,%g,%g,%g\n"
    PUSH EBP                            ; 00442b61
    ADD EBX,0x1c                        ; 00442b62
    INC ESI                             ; 00442b65
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00442b66
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EAX,dword ptr [EDI]             ; 00442b6b
    ADD ESP,0x40                        ; 00442b6d
    CMP ESI,EAX                         ; 00442b70
    JL 0x00442b14                       ; 00442b72
        ;   XREF to: 00442b14 (CONDITIONAL_JUMP)  ; LAB_00442b14
    LEA EAX,[EAX]                       ; 00442b74
    LEA EDX,[EDX]                       ; 00442b7a
    PUSH 0x140                          ; 00442b80
        ;   Label: LAB_00442b80
    PUSH 0x619036                       ; 00442b85 | = "..\\core\\course.cpp"
    PUSH EBP                            ; 00442b8a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00442b8b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00442b90
    POP EBP                             ; 00442b93
    POP EDI                             ; 00442b94
    POP ESI                             ; 00442b95
    POP EBX                             ; 00442b96
    RET                                 ; 00442b97
    PUSH ESI                            ; 00442b98
        ;   Label: LAB_00442b98
    PUSH 0x618fbb                       ; 00442b99 | = "Can't create data\\%s"
    MOV ESI,dword ptr [0x00678a60]      ; 00442b9e | g_CEditorToolsPtr
    PUSH ESI                            ; 00442ba4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00442ba5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00442baa
    POP EBP                             ; 00442bad
    POP EDI                             ; 00442bae
    POP ESI                             ; 00442baf
    POP EBX                             ; 00442bb0
    RET                                 ; 00442bb1

