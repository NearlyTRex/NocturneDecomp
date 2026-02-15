; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50(CKeyFramedModel *this_ptr,char *source_drive,char *source_directory,char *destination_drive,char *destination_directory)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   source_drive
; char *           Stack[0xc]:4   source_directory
; char *           Stack[0x10]:4   destination_drive
; char *           Stack[0x14]:4   destination_directory
; Local Variables:
; undefined1       Stack[-0x318]:1  local_318
; undefined1       Stack[-0x214]:1  local_214
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dad6
;
; Referenced Globals:
;   TerminatedCString s_raw_0062064f
;   TerminatedCString s_raw_00620653
;   TerminatedCString s_act_00620657
;   TerminatedCString s_act_0062065b
;   TerminatedCString s_opa_0062065f
;   TerminatedCString s_opa_00620663
;
; Called Functions:
;   core_dmodel.cpp_copyFile_FUN_0047c930
;   crt_file.c_makepath_FUN_005febfc
;   crt_string.c_splitpath_FUN_005ff178
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ca50
        ;   Label: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
    PUSH ESI                            ; 0047ca51
    PUSH EDI                            ; 0047ca52
    PUSH EBP                            ; 0047ca53
    SUB ESP,0x308                       ; 0047ca54
    MOV EBX,dword ptr [ESP + 0x320]     ; 0047ca5a
    MOV EDI,dword ptr [ESP + 0x324]     ; 0047ca61
    MOV EBP,dword ptr [ESP + 0x328]     ; 0047ca68
    MOV ESI,dword ptr [ESP + 0x32c]     ; 0047ca6f
    PUSH 0x0                            ; 0047ca76
    LEA EAX,[ESP + 0x20c]               ; 0047ca78
    PUSH EAX                            ; 0047ca7f
    PUSH 0x0                            ; 0047ca80
    PUSH 0x0                            ; 0047ca82
    MOV EDX,dword ptr [ESP + 0x32c]     ; 0047ca84
    PUSH EDX                            ; 0047ca8b
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047ca8c
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0047ca91
    PUSH 0x62064f                       ; 0047ca94 | = "raw"
    LEA EAX,[ESP + 0x20c]               ; 0047ca99
    PUSH EAX                            ; 0047caa0
    PUSH EDI                            ; 0047caa1
    PUSH EBX                            ; 0047caa2
    LEA EAX,[ESP + 0x10]                ; 0047caa3
    PUSH EAX                            ; 0047caa7
    CALL crt_file.c_makepath_FUN_005febfc ; 0047caa8
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047caad
    PUSH 0x620653                       ; 0047cab0 | = "raw"
    LEA EAX,[ESP + 0x20c]               ; 0047cab5
    PUSH EAX                            ; 0047cabc
    PUSH ESI                            ; 0047cabd
    PUSH EBP                            ; 0047cabe
    LEA EAX,[ESP + 0x114]               ; 0047cabf
    PUSH EAX                            ; 0047cac6
    CALL crt_file.c_makepath_FUN_005febfc ; 0047cac7
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cacc
    PUSH 0x1                            ; 0047cacf
    LEA EAX,[ESP + 0x108]               ; 0047cad1
    PUSH EAX                            ; 0047cad8
    LEA EAX,[ESP + 0x8]                 ; 0047cad9
    PUSH EAX                            ; 0047cadd
    CALL core_dmodel.cpp_copyFile_FUN_0047c930 ; 0047cade
        ;   XREF to: 0047c930 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)
    ADD ESP,0xc                         ; 0047cae3
    TEST EAX,EAX                        ; 0047cae6
    JNZ 0x0047caf5                      ; 0047cae8
        ;   XREF to: 0047caf5 (CONDITIONAL_JUMP)  ; LAB_0047caf5
    ADD ESP,0x308                       ; 0047caea
        ;   Label: LAB_0047caea
    POP EBP                             ; 0047caf0
    POP EDI                             ; 0047caf1
    POP ESI                             ; 0047caf2
    POP EBX                             ; 0047caf3
    RET                                 ; 0047caf4
    PUSH 0x620657                       ; 0047caf5 | = "act"
        ;   Label: LAB_0047caf5
    LEA EAX,[ESP + 0x20c]               ; 0047cafa
    PUSH EAX                            ; 0047cb01
    PUSH EDI                            ; 0047cb02
    PUSH EBX                            ; 0047cb03
    LEA EAX,[ESP + 0x10]                ; 0047cb04
    PUSH EAX                            ; 0047cb08
    CALL crt_file.c_makepath_FUN_005febfc ; 0047cb09
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cb0e
    PUSH 0x62065b                       ; 0047cb11 | = "act"
    LEA EAX,[ESP + 0x20c]               ; 0047cb16
    PUSH EAX                            ; 0047cb1d
    PUSH ESI                            ; 0047cb1e
    PUSH EBP                            ; 0047cb1f
    LEA EAX,[ESP + 0x114]               ; 0047cb20
    PUSH EAX                            ; 0047cb27
    CALL crt_file.c_makepath_FUN_005febfc ; 0047cb28
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cb2d
    PUSH 0x1                            ; 0047cb30
    LEA EAX,[ESP + 0x108]               ; 0047cb32
    PUSH EAX                            ; 0047cb39
    LEA EAX,[ESP + 0x8]                 ; 0047cb3a
    PUSH EAX                            ; 0047cb3e
    CALL core_dmodel.cpp_copyFile_FUN_0047c930 ; 0047cb3f
        ;   XREF to: 0047c930 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)
    ADD ESP,0xc                         ; 0047cb44
    TEST EAX,EAX                        ; 0047cb47
    JZ 0x0047caea                       ; 0047cb49
        ;   XREF to: 0047caea (CONDITIONAL_JUMP)  ; LAB_0047caea
    PUSH 0x62065f                       ; 0047cb4b | = "opa"
    LEA EAX,[ESP + 0x20c]               ; 0047cb50
    PUSH EAX                            ; 0047cb57
    PUSH EDI                            ; 0047cb58
    PUSH EBX                            ; 0047cb59
    LEA EAX,[ESP + 0x10]                ; 0047cb5a
    PUSH EAX                            ; 0047cb5e
    CALL crt_file.c_makepath_FUN_005febfc ; 0047cb5f
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cb64
    PUSH 0x620663                       ; 0047cb67 | = "opa"
    LEA EAX,[ESP + 0x20c]               ; 0047cb6c
    PUSH EAX                            ; 0047cb73
    PUSH ESI                            ; 0047cb74
    PUSH EBP                            ; 0047cb75
    LEA EAX,[ESP + 0x114]               ; 0047cb76
    PUSH EAX                            ; 0047cb7d
    CALL crt_file.c_makepath_FUN_005febfc ; 0047cb7e
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047cb83
    PUSH 0x0                            ; 0047cb86
    LEA EAX,[ESP + 0x108]               ; 0047cb88
    PUSH EAX                            ; 0047cb8f
    LEA EAX,[ESP + 0x8]                 ; 0047cb90
    PUSH EAX                            ; 0047cb94
    CALL core_dmodel.cpp_copyFile_FUN_0047c930 ; 0047cb95
        ;   XREF to: 0047c930 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)
    ADD ESP,0xc                         ; 0047cb9a
    TEST EAX,EAX                        ; 0047cb9d
    JZ 0x0047caea                       ; 0047cb9f
        ;   XREF to: 0047caea (CONDITIONAL_JUMP)  ; LAB_0047caea
    MOV EAX,0x1                         ; 0047cba5
    ADD ESP,0x308                       ; 0047cbaa
    POP EBP                             ; 0047cbb0
    POP EDI                             ; 0047cbb1
    POP ESI                             ; 0047cbb2
    POP EBX                             ; 0047cbb3
    RET                                 ; 0047cbb4

