; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_0045da30(CDemonFilter *this_ptr,char *filename)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_boxactor.cpp_FUN_004232c0 at 004236b6
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0045d7c0 at 0045d891
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0 at 0045deeb
;
; Referenced Globals:
;   undefined4 DAT_005d8462
;   undefined4 DAT_005d8465
;   TerminatedCString s_core_dfilter_cpp_005d8469
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005d847d
;   undefined4 DAT_005d84a4
;   TerminatedCString s_core_dfilter_cpp_005d84a8
;   TerminatedCString s_CDemonFilter_load_Non_sq_005d84bc
;   TerminatedCString s_core_dfilter_cpp_005d84e9
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005d84fd
;   TerminatedCString s_core_dfilter_cpp_005d8525
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005d8539
;   undefined4 DAT_005d8561
;   undefined4 DAT_005d8564
;   TerminatedCString s_core_dfilter_cpp_005d8568
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005d857c
;   ... and 2 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da30
        ;   Label: core_dfilter.cpp_CDemonFilter_load_FUN_0045da30
    PUSH ESI                            ; 0045da31
    PUSH EDI                            ; 0045da32
    PUSH EBP                            ; 0045da33
    SUB ESP,0x4                         ; 0045da34
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045da37
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045da3b
    PUSH 0x5d8462                       ; 0045da3f | DAT_005d8462
    PUSH EDI                            ; 0045da44
    PUSH 0x5d8465                       ; 0045da45 | DAT_005d8465
    CALL engine_dosio.cpp_FUN_00479180  ; 0045da4a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045da4f
    MOV ESI,EAX                         ; 0045da52
    TEST EAX,EAX                        ; 0045da54
    JZ 0x0045db92                       ; 0045da56
        ;   XREF to: 0045db92 (CONDITIONAL_JUMP)  ; LAB_0045db92
    PUSH ESI                            ; 0045da5c
        ;   Label: LAB_0045da5c
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045da5d
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0045da62
    PUSH EDI                            ; 0045da65
    PUSH 0x5d84a4                       ; 0045da66 | DAT_005d84a4
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0045da6b
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0045da70
    MOV dword ptr [ESP],EAX             ; 0045da73
    MOV EDX,EAX                         ; 0045da76
    FILD dword ptr [ESP]                ; 0045da78
    FSQRT                               ; 0045da7b
    CALL crt_math.c_round_FUN_005c03a0  ; 0045da7d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,EDX                         ; 0045da82
    FISTP dword ptr [EBX]               ; 0045da84
    SAR EDX,0x1f                        ; 0045da86
    MOV ECX,dword ptr [EBX]             ; 0045da89
    IDIV ECX                            ; 0045da8b
    MOV dword ptr [EBX + 0x4],EAX       ; 0045da8d
    MOV EAX,dword ptr [EBX]             ; 0045da90
    MOV ESI,dword ptr [EBX + 0x4]       ; 0045da92
    CMP EAX,ESI                         ; 0045da95
    JZ 0x0045dabf                       ; 0045da97
        ;   XREF to: 0045dabf (CONDITIONAL_JUMP)  ; LAB_0045dabf
    PUSH ESI                            ; 0045da99
    MOV ECX,dword ptr [EBX]             ; 0045da9a
    PUSH ECX                            ; 0045da9c
    MOV EBP,0x5d84a8                    ; 0045da9d | = "..\\core\\dfilter.cpp"
    MOV EAX,0xb7                        ; 0045daa2
    PUSH 0x5d84bc                       ; 0045daa7 | = "CDemonFilter::load - Non-square filte..."
    MOV dword ptr [0x01d1d400],EBP      ; 0045daac | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045dab2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045dab7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0045dabc
    MOV ESI,dword ptr [EBX]             ; 0045dabf
        ;   Label: LAB_0045dabf
    CMP ESI,0x40                        ; 0045dac1
    JGE 0x0045dbbb                      ; 0045dac4
        ;   XREF to: 0045dbbb (CONDITIONAL_JUMP)  ; LAB_0045dbbb
    MOV ECX,dword ptr [EBX]             ; 0045daca
        ;   Label: LAB_0045daca
    PUSH ECX                            ; 0045dacc
    MOV EAX,0x5d84e9                    ; 0045dacd | = "..\\core\\dfilter.cpp"
    MOV EDX,0xb9                        ; 0045dad2
    PUSH 0x5d84fd                       ; 0045dad7 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d1d400],EAX                ; 0045dadc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0045dae1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045dae7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0045daec
    MOV ESI,dword ptr [EBX + 0x4]       ; 0045daef
        ;   Label: LAB_0045daef
    CMP ESI,0x40                        ; 0045daf2
    JGE 0x0045dbcc                      ; 0045daf5
        ;   XREF to: 0045dbcc (CONDITIONAL_JUMP)  ; LAB_0045dbcc
    MOV ECX,dword ptr [EBX + 0x4]       ; 0045dafb
        ;   Label: LAB_0045dafb
    PUSH ECX                            ; 0045dafe
    MOV EAX,0x5d8525                    ; 0045daff | = "..\\core\\dfilter.cpp"
    MOV EDX,0xbc                        ; 0045db04
    PUSH 0x5d8539                       ; 0045db09 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d1d400],EAX                ; 0045db0e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0045db13 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045db19
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0045db1e
    PUSH EBX                            ; 0045db21
        ;   Label: LAB_0045db21
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0 ; 0045db22
        ;   XREF to: 0045d9c0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0045db27
    PUSH 0x5d8561                       ; 0045db2a | DAT_005d8561
    PUSH EDI                            ; 0045db2f
    PUSH 0x5d8564                       ; 0045db30 | DAT_005d8564
    CALL engine_dosio.cpp_FUN_00479180  ; 0045db35
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045db3a
    MOV ESI,EAX                         ; 0045db3d
    TEST EAX,EAX                        ; 0045db3f
    JZ 0x0045dbdd                       ; 0045db41
        ;   XREF to: 0045dbdd (CONDITIONAL_JUMP)  ; LAB_0045dbdd
    PUSH ESI                            ; 0045db47
        ;   Label: LAB_0045db47
    MOV EDX,dword ptr [EBX + 0x4]       ; 0045db48
    PUSH EDX                            ; 0045db4b
    MOV ECX,dword ptr [EBX]             ; 0045db4c
    PUSH ECX                            ; 0045db4e
    MOV EBP,dword ptr [EBX + 0x48]      ; 0045db4f
    PUSH EBP                            ; 0045db52
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0045db53
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045db58
    PUSH ESI                            ; 0045db5b
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045db5c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0045db61
    XOR ECX,ECX                         ; 0045db64
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045db66
        ;   Label: LAB_0045db66
    MOV EDX,dword ptr [EBX]             ; 0045db69
    IMUL EDX,EAX                        ; 0045db6b
    CMP ECX,EDX                         ; 0045db6e
    JGE 0x0045dc04                      ; 0045db70
        ;   XREF to: 0045dc04 (CONDITIONAL_JUMP)  ; LAB_0045dc04
    MOV ESI,dword ptr [EBX + 0x48]      ; 0045db76
    XOR EDX,EDX                         ; 0045db79
    MOV DL,byte ptr [ECX + ESI*0x1]     ; 0045db7b
    MOV EAX,EDX                         ; 0045db7e
    SAR EDX,0x1f                        ; 0045db80
    SHL EDX,0x2                         ; 0045db83
    SBB EAX,EDX                         ; 0045db86
    SAR EAX,0x2                         ; 0045db88
    INC ECX                             ; 0045db8b
    MOV byte ptr [ECX + ESI*0x1 + -0x1],AL ; 0045db8c
    JMP 0x0045db66                      ; 0045db90
        ;   XREF to: 0045db66 (UNCONDITIONAL_JUMP)  ; LAB_0045db66
    PUSH EDI                            ; 0045db92
        ;   Label: LAB_0045db92
    MOV EDX,0x5d8469                    ; 0045db93 | = "..\\core\\dfilter.cpp"
    MOV ECX,0xab                        ; 0045db98
    PUSH 0x5d847d                       ; 0045db9d | = "CDemonFilter::load - Bad filename : %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0045dba2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045dba8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045dbae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0045dbb3
    JMP 0x0045da5c                      ; 0045dbb6
        ;   XREF to: 0045da5c (UNCONDITIONAL_JUMP)  ; LAB_0045da5c
    CMP ESI,0x100                       ; 0045dbbb
        ;   Label: LAB_0045dbbb
    JG 0x0045daca                       ; 0045dbc1
        ;   XREF to: 0045daca (CONDITIONAL_JUMP)  ; LAB_0045daca
    JMP 0x0045daef                      ; 0045dbc7
        ;   XREF to: 0045daef (UNCONDITIONAL_JUMP)  ; LAB_0045daef
    CMP ESI,0x100                       ; 0045dbcc
        ;   Label: LAB_0045dbcc
    JG 0x0045dafb                       ; 0045dbd2
        ;   XREF to: 0045dafb (CONDITIONAL_JUMP)  ; LAB_0045dafb
    JMP 0x0045db21                      ; 0045dbd8
        ;   XREF to: 0045db21 (UNCONDITIONAL_JUMP)  ; LAB_0045db21
    MOV EBP,0x5d8568                    ; 0045dbdd | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_0045dbdd
    MOV EAX,0xc6                        ; 0045dbe2
    PUSH 0x5d857c                       ; 0045dbe7 | = "CDemonFilter::load - Bad filename"
    MOV dword ptr [0x01d1d400],EBP      ; 0045dbec | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045dbf2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045dbf7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045dbfc
    JMP 0x0045db47                      ; 0045dbff
        ;   XREF to: 0045db47 (UNCONDITIONAL_JUMP)  ; LAB_0045db47
    ADD EBX,0x8                         ; 0045dc04
        ;   Label: LAB_0045dc04
    MOV ESI,EDI                         ; 0045dc07
    MOV EDI,EBX                         ; 0045dc09
    PUSH EDI                            ; 0045dc0b
    MOV AL,byte ptr [ESI]               ; 0045dc0c
        ;   Label: LAB_0045dc0c
    MOV byte ptr [EDI],AL               ; 0045dc0e
    CMP AL,0x0                          ; 0045dc10
    JZ 0x0045dc24                       ; 0045dc12
        ;   XREF to: 0045dc24 (CONDITIONAL_JUMP)  ; LAB_0045dc24
    MOV AL,byte ptr [ESI + 0x1]         ; 0045dc14
    ADD ESI,0x2                         ; 0045dc17
    MOV byte ptr [EDI + 0x1],AL         ; 0045dc1a
    ADD EDI,0x2                         ; 0045dc1d
    CMP AL,0x0                          ; 0045dc20
    JNZ 0x0045dc0c                      ; 0045dc22
        ;   XREF to: 0045dc0c (CONDITIONAL_JUMP)  ; LAB_0045dc0c
    POP EDI                             ; 0045dc24
        ;   Label: LAB_0045dc24
    ADD ESP,0x4                         ; 0045dc25
    POP EBP                             ; 0045dc28
    POP EDI                             ; 0045dc29
    POP ESI                             ; 0045dc2a
    POP EBX                             ; 0045dc2b
    RET                                 ; 0045dc2c

