; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionList_load_FUN_0052cd70(CMotionList * this_ptr, FILE * file_handle)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 at 00599ec6
;
; Referenced Globals:
;   TerminatedCString s_d_0063a547
;   TerminatedCString s_core_motion_cpp_0063a54b
;   TerminatedCString s_Error_reading_motion_lis_0063a55e
;   TerminatedCString s_core_motion_cpp_0063a579
;   TerminatedCString s_Can_t_read_motion_list_i_0063a58c
;   TerminatedCString s_d_0063a5ff
;   TerminatedCString s_s_0063a603
;   TerminatedCString s_d_0063a607
;   TerminatedCString s_f_d_d_d_0063a60b
;   TerminatedCString s_d_d_f_0063a620
;   TerminatedCString s_d_f_d_0063a62a
;   TerminatedCString s_d_f_0063a634
;   TerminatedCString s_d_0063a63b
;   TerminatedCString s_d_d_d_f_f_d_0063a63f
;   TerminatedCString s_d_0063a652
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052cd70
        ;   Label: core_motion.cpp_CMotionList_load_FUN_0052cd70
    PUSH ESI                            ; 0052cd71
    PUSH EDI                            ; 0052cd72
    PUSH EBP                            ; 0052cd73
    SUB ESP,0x28                        ; 0052cd74
    MOV EDI,dword ptr [ESP + 0x40]      ; 0052cd77
    MOV EDX,0xffffffff                  ; 0052cd7b
    MOV EBX,EDI                         ; 0052cd80
    MOV dword ptr [ESP + 0x4],EDX       ; 0052cd82
    PUSH EBX                            ; 0052cd86
        ;   Label: LAB_0052cd86
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cd87
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052cd8c
    TEST EAX,EAX                        ; 0052cd8f
    JL 0x0052cd98                       ; 0052cd91
        ;   XREF to: 0052cd98 (CONDITIONAL_JUMP)  ; LAB_0052cd98
    CMP EAX,0xa                         ; 0052cd93
    JNZ 0x0052cd86                      ; 0052cd96
        ;   XREF to: 0052cd86 (CONDITIONAL_JUMP)  ; LAB_0052cd86
    LEA EAX,[ESP + 0x4]                 ; 0052cd98
        ;   Label: LAB_0052cd98
    PUSH EAX                            ; 0052cd9c
    PUSH 0x63a547                       ; 0052cd9d | = "%d\n"
    PUSH EDI                            ; 0052cda2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cda3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0052cda8
    CMP dword ptr [ESP + 0x4],0x0       ; 0052cdab
    JL 0x0052d109                       ; 0052cdb0
        ;   XREF to: 0052d109 (CONDITIONAL_JUMP)  ; LAB_0052d109
    MOV EBP,dword ptr [ESP + 0x4]       ; 0052cdb6
        ;   Label: LAB_0052cdb6
    CMP EBP,0x2                         ; 0052cdba
    JG 0x0052d131                       ; 0052cdbd
        ;   XREF to: 0052d131 (CONDITIONAL_JUMP)  ; LAB_0052d131
    MOV EBX,EDI                         ; 0052cdc3
        ;   Label: LAB_0052cdc3
    PUSH EBX                            ; 0052cdc5
        ;   Label: LAB_0052cdc5
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cdc6
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052cdcb
    TEST EAX,EAX                        ; 0052cdce
    JL 0x0052cdd7                       ; 0052cdd0
        ;   XREF to: 0052cdd7 (CONDITIONAL_JUMP)  ; LAB_0052cdd7
    CMP EAX,0xa                         ; 0052cdd2
    JNZ 0x0052cdc5                      ; 0052cdd5
        ;   XREF to: 0052cdc5 (CONDITIONAL_JUMP)  ; LAB_0052cdc5
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0052cdd7
        ;   Label: LAB_0052cdd7
    PUSH EBX                            ; 0052cddb
    PUSH 0x63a5ff                       ; 0052cddc | = "%d\n"
    PUSH EDI                            ; 0052cde1
    XOR ESI,ESI                         ; 0052cde2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cde4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EBP,dword ptr [EBX]             ; 0052cde9
    ADD ESP,0xc                         ; 0052cdeb
    TEST EBP,EBP                        ; 0052cdee
    JLE 0x0052ce20                      ; 0052cdf0
        ;   XREF to: 0052ce20 (CONDITIONAL_JUMP)  ; LAB_0052ce20
    ADD EBX,0x4                         ; 0052cdf2
    PUSH EBX                            ; 0052cdf5
        ;   Label: LAB_0052cdf5
    PUSH 0x63a603                       ; 0052cdf6 | = "%s\n"
    PUSH EDI                            ; 0052cdfb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cdfc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0052ce01
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052ce04
    INC ESI                             ; 0052ce08
    MOV EDX,dword ptr [EAX]             ; 0052ce09
    ADD EBX,0x1e                        ; 0052ce0b
    CMP ESI,EDX                         ; 0052ce0e
    JL 0x0052cdf5                       ; 0052ce10
        ;   XREF to: 0052cdf5 (CONDITIONAL_JUMP)  ; LAB_0052cdf5
    LEA EAX,[EAX]                       ; 0052ce12
    LEA EDX,[EDX]                       ; 0052ce18
    MOV EAX,EAX                         ; 0052ce1e
    MOV EBX,EDI                         ; 0052ce20
        ;   Label: LAB_0052ce20
    PUSH EBX                            ; 0052ce22
        ;   Label: LAB_0052ce22
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052ce23
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052ce28
    TEST EAX,EAX                        ; 0052ce2b
    JL 0x0052ce34                       ; 0052ce2d
        ;   XREF to: 0052ce34 (CONDITIONAL_JUMP)  ; LAB_0052ce34
    CMP EAX,0xa                         ; 0052ce2f
    JNZ 0x0052ce22                      ; 0052ce32
        ;   XREF to: 0052ce22 (CONDITIONAL_JUMP)  ; LAB_0052ce22
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052ce34
        ;   Label: LAB_0052ce34
    ADD EAX,0x964                       ; 0052ce38
    PUSH EAX                            ; 0052ce3d
    PUSH 0x63a607                       ; 0052ce3e | = "%d\n"
    PUSH EDI                            ; 0052ce43
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052ce44
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0052ce49
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052ce4c
    XOR ECX,ECX                         ; 0052ce50
    MOV EBX,dword ptr [EAX + 0x964]     ; 0052ce52
    MOV dword ptr [ESP + 0x10],ECX      ; 0052ce58
    TEST EBX,EBX                        ; 0052ce5c
    JLE 0x0052d101                      ; 0052ce5e
        ;   XREF to: 0052d101 (CONDITIONAL_JUMP)  ; LAB_0052d101
    ADD EAX,0x968                       ; 0052ce64
    MOV dword ptr [ESP + 0xc],EAX       ; 0052ce69
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052ce6d
        ;   Label: LAB_0052ce6d
    MOV ESI,EDI                         ; 0052ce71
    PUSH ESI                            ; 0052ce73
        ;   Label: LAB_0052ce73
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052ce74
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052ce79
    TEST EAX,EAX                        ; 0052ce7c
    JL 0x0052ce85                       ; 0052ce7e
        ;   XREF to: 0052ce85 (CONDITIONAL_JUMP)  ; LAB_0052ce85
    CMP EAX,0xa                         ; 0052ce80
    JNZ 0x0052ce73                      ; 0052ce83
        ;   XREF to: 0052ce73 (CONDITIONAL_JUMP)  ; LAB_0052ce73
    LEA EAX,[EBX + 0x64]                ; 0052ce85
        ;   Label: LAB_0052ce85
    PUSH EAX                            ; 0052ce88
    LEA EAX,[EBX + 0x60]                ; 0052ce89
    PUSH EAX                            ; 0052ce8c
    LEA EAX,[EBX + 0x24]                ; 0052ce8d
    PUSH EAX                            ; 0052ce90
    LEA EAX,[EBX + 0x20]                ; 0052ce91
    PUSH EAX                            ; 0052ce94
    PUSH EBX                            ; 0052ce95
    PUSH 0x63a60b                       ; 0052ce96 | = "\"%[^\"]\",%f,%d,%d,%d\n"
    PUSH EDI                            ; 0052ce9b
    MOV ESI,EDI                         ; 0052ce9c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052ce9e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 0052cea3
    PUSH ESI                            ; 0052cea6
        ;   Label: LAB_0052cea6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cea7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052ceac
    TEST EAX,EAX                        ; 0052ceaf
    JL 0x0052ceb8                       ; 0052ceb1
        ;   XREF to: 0052ceb8 (CONDITIONAL_JUMP)  ; LAB_0052ceb8
    CMP EAX,0xa                         ; 0052ceb3
    JNZ 0x0052cea6                      ; 0052ceb6
        ;   XREF to: 0052cea6 (CONDITIONAL_JUMP)  ; LAB_0052cea6
    LEA EAX,[EBX + 0x38]                ; 0052ceb8
        ;   Label: LAB_0052ceb8
    PUSH EAX                            ; 0052cebb
    LEA EAX,[EBX + 0x34]                ; 0052cebc
    PUSH EAX                            ; 0052cebf
    LEA EAX,[EBX + 0x28]                ; 0052cec0
    PUSH EAX                            ; 0052cec3
    PUSH 0x63a620                       ; 0052cec4 | = "%d,%d,%f\n"
    PUSH EDI                            ; 0052cec9
    MOV ESI,EDI                         ; 0052ceca
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cecc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0052ced1
    PUSH ESI                            ; 0052ced4
        ;   Label: LAB_0052ced4
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052ced5
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052ceda
    TEST EAX,EAX                        ; 0052cedd
    JL 0x0052cee6                       ; 0052cedf
        ;   XREF to: 0052cee6 (CONDITIONAL_JUMP)  ; LAB_0052cee6
    CMP EAX,0xa                         ; 0052cee1
    JNZ 0x0052ced4                      ; 0052cee4
        ;   XREF to: 0052ced4 (CONDITIONAL_JUMP)  ; LAB_0052ced4
    LEA EAX,[EBX + 0x40]                ; 0052cee6
        ;   Label: LAB_0052cee6
    PUSH EAX                            ; 0052cee9
    LEA EAX,[EBX + 0x3c]                ; 0052ceea
    PUSH EAX                            ; 0052ceed
    LEA EAX,[ESP + 0x8]                 ; 0052ceee
    PUSH EAX                            ; 0052cef2
    PUSH 0x63a62a                       ; 0052cef3 | = "%d,%f,%d\n"
    PUSH EDI                            ; 0052cef8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cef9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0052cefe
    MOV EAX,dword ptr [ESP]             ; 0052cf01
    MOV ESI,EDI                         ; 0052cf04
    MOV dword ptr [EBX + 0x30],EAX      ; 0052cf06
    PUSH ESI                            ; 0052cf09
        ;   Label: LAB_0052cf09
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cf0a
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052cf0f
    TEST EAX,EAX                        ; 0052cf12
    JL 0x0052cf1b                       ; 0052cf14
        ;   XREF to: 0052cf1b (CONDITIONAL_JUMP)  ; LAB_0052cf1b
    CMP EAX,0xa                         ; 0052cf16
    JNZ 0x0052cf09                      ; 0052cf19
        ;   XREF to: 0052cf09 (CONDITIONAL_JUMP)  ; LAB_0052cf09
    LEA EAX,[EBX + 0x54]                ; 0052cf1b
        ;   Label: LAB_0052cf1b
    PUSH EAX                            ; 0052cf1e
    LEA EAX,[EBX + 0x50]                ; 0052cf1f
    PUSH EAX                            ; 0052cf22
    PUSH 0x63a634                       ; 0052cf23 | = "%d,%f\n"
    PUSH EDI                            ; 0052cf28
    MOV ESI,EDI                         ; 0052cf29
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cf2b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0052cf30
    PUSH ESI                            ; 0052cf33
        ;   Label: LAB_0052cf33
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cf34
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052cf39
    TEST EAX,EAX                        ; 0052cf3c
    JL 0x0052cf45                       ; 0052cf3e
        ;   XREF to: 0052cf45 (CONDITIONAL_JUMP)  ; LAB_0052cf45
    CMP EAX,0xa                         ; 0052cf40
    JNZ 0x0052cf33                      ; 0052cf43
        ;   XREF to: 0052cf33 (CONDITIONAL_JUMP)  ; LAB_0052cf33
    LEA EAX,[EBX + 0x68]                ; 0052cf45
        ;   Label: LAB_0052cf45
    PUSH EAX                            ; 0052cf48
    PUSH 0x63a63b                       ; 0052cf49 | = "%d\n"
    PUSH EDI                            ; 0052cf4e
    XOR ESI,ESI                         ; 0052cf4f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cf51
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EBP,dword ptr [EBX + 0x68]      ; 0052cf56
    ADD ESP,0xc                         ; 0052cf59
    TEST EBP,EBP                        ; 0052cf5c
    JLE 0x0052cff1                      ; 0052cf5e
        ;   XREF to: 0052cff1 (CONDITIONAL_JUMP)  ; LAB_0052cff1
    LEA EAX,[EBX + 0x6c]                ; 0052cf64
    MOV dword ptr [ESP + 0x14],EAX      ; 0052cf67
    LEA EAX,[EBX + 0x74]                ; 0052cf6b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052cf6e
    LEA EAX,[EBX + 0x78]                ; 0052cf72
    MOV dword ptr [ESP + 0x24],EAX      ; 0052cf75
    LEA EAX,[EBX + 0x7c]                ; 0052cf79
    MOV dword ptr [ESP + 0x20],EAX      ; 0052cf7c
    LEA EBP,[EBX + 0x80]                ; 0052cf80
    IMUL EAX,ESI,0x18                   ; 0052cf86
        ;   Label: LAB_0052cf86
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052cf89
    PUSH EBP                            ; 0052cf8d
    ADD EDX,EAX                         ; 0052cf8e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052cf90
    PUSH EAX                            ; 0052cf94
    MOV dword ptr [ESP + 0x10],EDX      ; 0052cf95
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052cf99
    PUSH EDX                            ; 0052cf9d
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052cf9e
    PUSH ECX                            ; 0052cfa2
    LEA EAX,[ESP + 0x10]                ; 0052cfa3
    PUSH EAX                            ; 0052cfa7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052cfa8
    PUSH EAX                            ; 0052cfac
    PUSH 0x63a63f                       ; 0052cfad | = "%d,%d,%d,%f,%f,%d\n"
    PUSH EDI                            ; 0052cfb2
    ADD EBP,0x18                        ; 0052cfb3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052cfb6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x20                        ; 0052cfbb
    INC ESI                             ; 0052cfbe
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052cfbf
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052cfc3
    MOV EAX,dword ptr [ESP]             ; 0052cfc7
    ADD ECX,0x18                        ; 0052cfca
    MOV dword ptr [EDX + 0x4],EAX       ; 0052cfcd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052cfd0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052cfd4
    MOV dword ptr [ESP + 0x24],ECX      ; 0052cfd8
    ADD EDX,0x18                        ; 0052cfdc
    ADD EAX,0x18                        ; 0052cfdf
    MOV dword ptr [ESP + 0x1c],EDX      ; 0052cfe2
    MOV EDX,dword ptr [EBX + 0x68]      ; 0052cfe6
    MOV dword ptr [ESP + 0x20],EAX      ; 0052cfe9
    CMP ESI,EDX                         ; 0052cfed
    JL 0x0052cf86                       ; 0052cfef
        ;   XREF to: 0052cf86 (CONDITIONAL_JUMP)  ; LAB_0052cf86
    MOV EBP,EDI                         ; 0052cff1
        ;   Label: LAB_0052cff1
    PUSH EBP                            ; 0052cff3
        ;   Label: LAB_0052cff3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cff4
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052cff9
    TEST EAX,EAX                        ; 0052cffc
    JL 0x0052d005                       ; 0052cffe
        ;   XREF to: 0052d005 (CONDITIONAL_JUMP)  ; LAB_0052d005
    CMP EAX,0xa                         ; 0052d000
    JNZ 0x0052cff3                      ; 0052d003
        ;   XREF to: 0052cff3 (CONDITIONAL_JUMP)  ; LAB_0052cff3
    LEA EAX,[EBX + 0x4a4]               ; 0052d005
        ;   Label: LAB_0052d005
    PUSH EAX                            ; 0052d00b
    PUSH 0x63a652                       ; 0052d00c | = "%d\n"
    PUSH EDI                            ; 0052d011
    XOR ESI,ESI                         ; 0052d012
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052d014
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 0052d019
    ADD ESP,0xc                         ; 0052d01f
    TEST ECX,ECX                        ; 0052d022
    JLE 0x0052d061                      ; 0052d024
        ;   XREF to: 0052d061 (CONDITIONAL_JUMP)  ; LAB_0052d061
    LEA EAX,[EBX + 0x4a8]               ; 0052d026
    LEA EBP,[EBX + 0x4ac]               ; 0052d02c
    MOV dword ptr [ESP + 0x18],EAX      ; 0052d032
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052d036
        ;   Label: LAB_0052d036
    LEA EAX,[ESI*0x8 + 0x0]             ; 0052d03a
    PUSH EBP                            ; 0052d041
    ADD EAX,EDX                         ; 0052d042
    PUSH EAX                            ; 0052d044
    PUSH 0x63a656                       ; 0052d045 | = "%d,%d\n"
    PUSH EDI                            ; 0052d04a
    ADD EBP,0x8                         ; 0052d04b
    INC ESI                             ; 0052d04e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052d04f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 0052d054
    ADD ESP,0x10                        ; 0052d05a
    CMP ESI,ECX                         ; 0052d05d
    JL 0x0052d036                       ; 0052d05f
        ;   XREF to: 0052d036 (CONDITIONAL_JUMP)  ; LAB_0052d036
    CMP dword ptr [ESP + 0x4],0x2       ; 0052d061
        ;   Label: LAB_0052d061
    JL 0x0052d15b                       ; 0052d066
        ;   XREF to: 0052d15b (CONDITIONAL_JUMP)  ; LAB_0052d15b
    MOV EBP,EDI                         ; 0052d06c
    PUSH EBP                            ; 0052d06e
        ;   Label: LAB_0052d06e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052d06f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052d074
    TEST EAX,EAX                        ; 0052d077
    JL 0x0052d080                       ; 0052d079
        ;   XREF to: 0052d080 (CONDITIONAL_JUMP)  ; LAB_0052d080
    CMP EAX,0xa                         ; 0052d07b
    JNZ 0x0052d06e                      ; 0052d07e
        ;   XREF to: 0052d06e (CONDITIONAL_JUMP)  ; LAB_0052d06e
    LEA EAX,[EBX + 0x520]               ; 0052d080
        ;   Label: LAB_0052d080
    PUSH EAX                            ; 0052d086
    PUSH 0x63a65d                       ; 0052d087 | = "%d"
    PUSH EDI                            ; 0052d08c
    XOR ESI,ESI                         ; 0052d08d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052d08f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EBP,dword ptr [EBX + 0x520]     ; 0052d094
    ADD ESP,0xc                         ; 0052d09a
    TEST EBP,EBP                        ; 0052d09d
    JLE 0x0052d0c4                      ; 0052d09f
        ;   XREF to: 0052d0c4 (CONDITIONAL_JUMP)  ; LAB_0052d0c4
    LEA EBP,[EBX + 0x524]               ; 0052d0a1
    PUSH EBP                            ; 0052d0a7
        ;   Label: LAB_0052d0a7
    PUSH 0x63a660                       ; 0052d0a8 | = "%d"
    PUSH EDI                            ; 0052d0ad
    INC ESI                             ; 0052d0ae
    ADD EBP,0x4                         ; 0052d0af
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052d0b2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x520]     ; 0052d0b7
    ADD ESP,0xc                         ; 0052d0bd
    CMP ESI,EAX                         ; 0052d0c0
    JL 0x0052d0a7                       ; 0052d0c2
        ;   XREF to: 0052d0a7 (CONDITIONAL_JUMP)  ; LAB_0052d0a7
    MOV EBP,EDI                         ; 0052d0c4
        ;   Label: LAB_0052d0c4
    PUSH EBP                            ; 0052d0c6
        ;   Label: LAB_0052d0c6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052d0c7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0052d0cc
    TEST EAX,EAX                        ; 0052d0cf
    JL 0x0052d0d8                       ; 0052d0d1
        ;   XREF to: 0052d0d8 (CONDITIONAL_JUMP)  ; LAB_0052d0d8
    CMP EAX,0xa                         ; 0052d0d3
    JNZ 0x0052d0c6                      ; 0052d0d6
        ;   XREF to: 0052d0c6 (CONDITIONAL_JUMP)  ; LAB_0052d0c6
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052d0d8
        ;   Label: LAB_0052d0d8
    MOV EBP,dword ptr [ESP + 0x10]      ; 0052d0dc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0052d0e0
    ADD ESI,0x54c                       ; 0052d0e4
    INC EBP                             ; 0052d0ea
    MOV ECX,dword ptr [EDX + 0x964]     ; 0052d0eb
    MOV dword ptr [ESP + 0xc],ESI       ; 0052d0f1
    MOV dword ptr [ESP + 0x10],EBP      ; 0052d0f5
    CMP EBP,ECX                         ; 0052d0f9
    JL 0x0052ce6d                       ; 0052d0fb
        ;   XREF to: 0052ce6d (CONDITIONAL_JUMP)  ; LAB_0052ce6d
    ADD ESP,0x28                        ; 0052d101
        ;   Label: LAB_0052d101
    POP EBP                             ; 0052d104
    POP EDI                             ; 0052d105
    POP ESI                             ; 0052d106
    POP EBX                             ; 0052d107
    RET                                 ; 0052d108
    MOV EBX,0x63a54b                    ; 0052d109 | = "..\\core\\motion.cpp"
        ;   Label: LAB_0052d109
    MOV ESI,0x5b                        ; 0052d10e
    PUSH 0x63a55e                       ; 0052d113 | = "Error reading motion list."
    MOV dword ptr [0x02f0ca48],EBX      ; 0052d118 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052d11e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d124
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052d129
    JMP 0x0052cdb6                      ; 0052d12c
        ;   XREF to: 0052cdb6 (UNCONDITIONAL_JUMP)  ; LAB_0052cdb6
    PUSH 0x2                            ; 0052d131
        ;   Label: LAB_0052d131
    PUSH EBP                            ; 0052d133
    MOV EAX,0x63a579                    ; 0052d134 | = "..\\core\\motion.cpp"
    MOV EDX,0x5d                        ; 0052d139
    PUSH 0x63a58c                       ; 0052d13e | = "Can't read motion list - it's version..."
    MOV [0x02f0ca48],EAX                ; 0052d143 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052d148 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d14e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0052d153
    JMP 0x0052cdc3                      ; 0052d156
        ;   XREF to: 0052cdc3 (UNCONDITIONAL_JUMP)  ; LAB_0052cdc3
    MOV dword ptr [EBX + 0x520],0x0     ; 0052d15b
        ;   Label: LAB_0052d15b
    JMP 0x0052d0d8                      ; 0052d165
        ;   XREF to: 0052d0d8 (UNCONDITIONAL_JUMP)  ; LAB_0052d0d8

