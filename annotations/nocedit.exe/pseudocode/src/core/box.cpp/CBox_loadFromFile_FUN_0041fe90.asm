; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_actor.cpp_serializeSimBox_FUN_0040bd70 at 0040bda9
;
; Referenced Globals:
;   TerminatedCString s_d_00616527
;   TerminatedCString s_f_f_f_0061652c
;   TerminatedCString s_f_f_f_00616537
;   TerminatedCString s_f_f_f_00616542
;   TerminatedCString s_f_0061654d
;   TerminatedCString s_f_f_f_00616552
;   TerminatedCString s_f_f_f_0061655d
;   TerminatedCString s_d_00616568
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fe90
        ;   Label: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
    PUSH ESI                            ; 0041fe91
    PUSH EDI                            ; 0041fe92
    SUB ESP,0x138                       ; 0041fe93
    MOV ESI,dword ptr [ESP + 0x148]     ; 0041fe99
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0041fea0
    PUSH EBX                            ; 0041fea7
    PUSH 0xff                           ; 0041fea8
    LEA EAX,[ESP + 0x8]                 ; 0041fead
    PUSH EAX                            ; 0041feb1
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0041feb2
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0041feb7
    LEA EAX,[ESP + 0x134]               ; 0041feba
    PUSH EAX                            ; 0041fec1
    PUSH 0x616527                       ; 0041fec2 | = " %d\n"
    PUSH EBX                            ; 0041fec7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041fec8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0041fecd
    PUSH EBX                            ; 0041fed0
    PUSH 0xff                           ; 0041fed1
    LEA EAX,[ESP + 0x8]                 ; 0041fed6
    PUSH EAX                            ; 0041feda
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0041fedb
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0041fee0
    LEA EAX,[ESP + 0x12c]               ; 0041fee3
    PUSH EAX                            ; 0041feea
    LEA EAX,[ESP + 0x12c]               ; 0041feeb
    PUSH EAX                            ; 0041fef2
    LEA EAX,[ESP + 0x12c]               ; 0041fef3
    PUSH EAX                            ; 0041fefa
    PUSH 0x61652c                       ; 0041fefb | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041ff00
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ff01
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0041ff06
    LEA EAX,[ESP + 0x11c]               ; 0041ff09
    PUSH EAX                            ; 0041ff10
    LEA EAX,[ESP + 0x124]               ; 0041ff11
    PUSH EAX                            ; 0041ff18
    LEA EAX,[ESP + 0x120]               ; 0041ff19
    PUSH EAX                            ; 0041ff20
    PUSH 0x616537                       ; 0041ff21 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041ff26
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ff27
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0041ff2c
    LEA EAX,[ESP + 0x108]               ; 0041ff2f
    PUSH EAX                            ; 0041ff36
    LEA EAX,[ESP + 0x108]               ; 0041ff37
    PUSH EAX                            ; 0041ff3e
    LEA EAX,[ESP + 0x108]               ; 0041ff3f
    PUSH EAX                            ; 0041ff46
    PUSH 0x616542                       ; 0041ff47 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041ff4c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ff4d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0041ff52
    LEA EAX,[ESP + 0x130]               ; 0041ff55
    PUSH EAX                            ; 0041ff5c
    PUSH 0x61654d                       ; 0041ff5d | = " %f\n"
    PUSH EBX                            ; 0041ff62
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ff63
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0041ff68
    LEA EAX,[ESP + 0x100]               ; 0041ff6b
    PUSH dword ptr [ESP + 0x130]        ; 0041ff72
    PUSH EAX                            ; 0041ff79
    LEA EAX,[ESP + 0x120]               ; 0041ff7a
    PUSH EAX                            ; 0041ff81
    LEA EAX,[ESP + 0x130]               ; 0041ff82
    PUSH EAX                            ; 0041ff89
    PUSH ESI                            ; 0041ff8a
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 0041ff8b
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0041ff90
    LEA EAX,[ESI + 0x54]                ; 0041ff93
    PUSH EAX                            ; 0041ff96
    LEA EAX,[ESI + 0x50]                ; 0041ff97
    PUSH EAX                            ; 0041ff9a
    LEA EDI,[ESI + 0x4c]                ; 0041ff9b
    PUSH EDI                            ; 0041ff9e
    PUSH 0x616552                       ; 0041ff9f | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041ffa4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ffa5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0041ffaa
    LEA EAX,[ESI + 0x78]                ; 0041ffad
    PUSH EAX                            ; 0041ffb0
    LEA EAX,[ESI + 0x74]                ; 0041ffb1
    PUSH EAX                            ; 0041ffb4
    LEA EAX,[ESI + 0x70]                ; 0041ffb5
    PUSH EAX                            ; 0041ffb8
    PUSH 0x61655d                       ; 0041ffb9 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041ffbe
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ffbf
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0041ffc4
    LEA EAX,[ESI + 0x254]               ; 0041ffc7
    PUSH EAX                            ; 0041ffcd
    PUSH 0x616568                       ; 0041ffce | = " %d\n"
    PUSH EBX                            ; 0041ffd3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0041ffd4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0041ffd9
    PUSH EDI                            ; 0041ffdc
    LEA EAX,[ESP + 0x110]               ; 0041ffdd
    PUSH EAX                            ; 0041ffe4
    LEA EAX,[ESI + 0x18]                ; 0041ffe5
    PUSH EAX                            ; 0041ffe8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0041ffe9
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESI,0x40                        ; 0041ffee
    ADD ESP,0xc                         ; 0041fff1
    CMP ESI,EAX                         ; 0041fff4
    JNZ 0x00420002                      ; 0041fff6
        ;   XREF to: 00420002 (CONDITIONAL_JUMP)  ; LAB_00420002
    ADD ESP,0x138                       ; 0041fff8
    POP EDI                             ; 0041fffe
    POP ESI                             ; 0041ffff
    POP EBX                             ; 00420000
    RET                                 ; 00420001
    MOV EDX,dword ptr [EAX]             ; 00420002
        ;   Label: LAB_00420002
    MOV dword ptr [ESI],EDX             ; 00420004
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420006
    MOV dword ptr [ESI + 0x4],EDX       ; 00420009
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042000c
    MOV dword ptr [ESI + 0x8],EDX       ; 0042000f
    ADD ESP,0x138                       ; 00420012
    POP EDI                             ; 00420018
    POP ESI                             ; 00420019
    POP EBX                             ; 0042001a
    RET                                 ; 0042001b

