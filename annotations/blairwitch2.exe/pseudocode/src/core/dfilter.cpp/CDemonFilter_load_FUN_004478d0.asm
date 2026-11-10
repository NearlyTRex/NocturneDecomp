; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004478d0(CDemonFilter *this_ptr,char *filename)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350 at 0041d746
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50 at 00447d8b
;   core_dfilter.cpp_FUN_00447660 at 00447731
;
; Referenced Globals:
;   undefined4 DAT_005ceb69
;   undefined4 DAT_005ceb6c
;   TerminatedCString s_core_dfilter_cpp_005ceb70
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005ceb84
;   undefined4 DAT_005cebab
;   TerminatedCString s_core_dfilter_cpp_005cebaf
;   TerminatedCString s_CDemonFilter_load_Non_sq_005cebc3
;   TerminatedCString s_core_dfilter_cpp_005cebf0
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005cec04
;   TerminatedCString s_core_dfilter_cpp_005cec2c
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005cec40
;   undefined4 DAT_005cec68
;   undefined4 DAT_005cec6b
;   TerminatedCString s_core_dfilter_cpp_005cec6f
;   TerminatedCString s_CDemonFilter_load_Bad_fi_005cec83
;   ... and 2 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004478d0
        ;   Label: core_dfilter.cpp_CDemonFilter_load_FUN_004478d0
    PUSH ESI                            ; 004478d1
    PUSH EDI                            ; 004478d2
    PUSH EBP                            ; 004478d3
    SUB ESP,0x4                         ; 004478d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004478d7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004478db
    PUSH 0x5ceb69                       ; 004478df | DAT_005ceb69
    PUSH EDI                            ; 004478e4
    PUSH 0x5ceb6c                       ; 004478e5 | DAT_005ceb6c
    CALL engine_dosio.cpp_FUN_00460c70  ; 004478ea
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004478ef
    MOV ESI,EAX                         ; 004478f2
    TEST EAX,EAX                        ; 004478f4
    JZ 0x00447a32                       ; 004478f6
        ;   XREF to: 00447a32 (CONDITIONAL_JUMP)  ; LAB_00447a32
    PUSH ESI                            ; 004478fc
        ;   Label: LAB_004478fc
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004478fd
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00447902
    PUSH EDI                            ; 00447905
    PUSH 0x5cebab                       ; 00447906 | DAT_005cebab
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0044790b
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00447910
    MOV dword ptr [ESP],EAX             ; 00447913
    MOV EDX,EAX                         ; 00447916
    FILD dword ptr [ESP]                ; 00447918
    FSQRT                               ; 0044791b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044791d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,EDX                         ; 00447922
    FISTP dword ptr [EBX]               ; 00447924
    SAR EDX,0x1f                        ; 00447926
    MOV ECX,dword ptr [EBX]             ; 00447929
    IDIV ECX                            ; 0044792b
    MOV dword ptr [EBX + 0x4],EAX       ; 0044792d
    MOV EAX,dword ptr [EBX]             ; 00447930
    MOV ESI,dword ptr [EBX + 0x4]       ; 00447932
    CMP EAX,ESI                         ; 00447935
    JZ 0x0044795f                       ; 00447937
        ;   XREF to: 0044795f (CONDITIONAL_JUMP)  ; LAB_0044795f
    PUSH ESI                            ; 00447939
    MOV ECX,dword ptr [EBX]             ; 0044793a
    PUSH ECX                            ; 0044793c
    MOV EBP,0x5cebaf                    ; 0044793d | = "..\\core\\dfilter.cpp"
    MOV EAX,0xb7                        ; 00447942
    PUSH 0x5cebc3                       ; 00447947 | = "CDemonFilter::load - Non-square filte..."
    MOV dword ptr [0x01d046a0],EBP      ; 0044794c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00447952 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00447957
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0044795c
    MOV ESI,dword ptr [EBX]             ; 0044795f
        ;   Label: LAB_0044795f
    CMP ESI,0x40                        ; 00447961
    JGE 0x00447a5b                      ; 00447964
        ;   XREF to: 00447a5b (CONDITIONAL_JUMP)  ; LAB_00447a5b
    MOV ECX,dword ptr [EBX]             ; 0044796a
        ;   Label: LAB_0044796a
    PUSH ECX                            ; 0044796c
    MOV EAX,0x5cebf0                    ; 0044796d | = "..\\core\\dfilter.cpp"
    MOV EDX,0xb9                        ; 00447972
    PUSH 0x5cec04                       ; 00447977 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d046a0],EAX                ; 0044797c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00447981 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00447987
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0044798c
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044798f
        ;   Label: LAB_0044798f
    CMP ESI,0x40                        ; 00447992
    JGE 0x00447a6c                      ; 00447995
        ;   XREF to: 00447a6c (CONDITIONAL_JUMP)  ; LAB_00447a6c
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044799b
        ;   Label: LAB_0044799b
    PUSH ECX                            ; 0044799e
    MOV EAX,0x5cec2c                    ; 0044799f | = "..\\core\\dfilter.cpp"
    MOV EDX,0xbc                        ; 004479a4
    PUSH 0x5cec40                       ; 004479a9 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x01d046a0],EAX                ; 004479ae | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004479b3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004479b9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004479be
    PUSH EBX                            ; 004479c1
        ;   Label: LAB_004479c1
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860 ; 004479c2
        ;   XREF to: 00447860 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004479c7
    PUSH 0x5cec68                       ; 004479ca | DAT_005cec68
    PUSH EDI                            ; 004479cf
    PUSH 0x5cec6b                       ; 004479d0 | DAT_005cec6b
    CALL engine_dosio.cpp_FUN_00460c70  ; 004479d5
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004479da
    MOV ESI,EAX                         ; 004479dd
    TEST EAX,EAX                        ; 004479df
    JZ 0x00447a7d                       ; 004479e1
        ;   XREF to: 00447a7d (CONDITIONAL_JUMP)  ; LAB_00447a7d
    PUSH ESI                            ; 004479e7
        ;   Label: LAB_004479e7
    MOV EDX,dword ptr [EBX + 0x4]       ; 004479e8
    PUSH EDX                            ; 004479eb
    MOV ECX,dword ptr [EBX]             ; 004479ec
    PUSH ECX                            ; 004479ee
    MOV EBP,dword ptr [EBX + 0x48]      ; 004479ef
    PUSH EBP                            ; 004479f2
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004479f3
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004479f8
    PUSH ESI                            ; 004479fb
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004479fc
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00447a01
    XOR ECX,ECX                         ; 00447a04
    MOV EAX,dword ptr [EBX + 0x4]       ; 00447a06
        ;   Label: LAB_00447a06
    MOV EDX,dword ptr [EBX]             ; 00447a09
    IMUL EDX,EAX                        ; 00447a0b
    CMP ECX,EDX                         ; 00447a0e
    JGE 0x00447aa4                      ; 00447a10
        ;   XREF to: 00447aa4 (CONDITIONAL_JUMP)  ; LAB_00447aa4
    MOV ESI,dword ptr [EBX + 0x48]      ; 00447a16
    XOR EDX,EDX                         ; 00447a19
    MOV DL,byte ptr [ECX + ESI*0x1]     ; 00447a1b
    MOV EAX,EDX                         ; 00447a1e
    SAR EDX,0x1f                        ; 00447a20
    SHL EDX,0x2                         ; 00447a23
    SBB EAX,EDX                         ; 00447a26
    SAR EAX,0x2                         ; 00447a28
    INC ECX                             ; 00447a2b
    MOV byte ptr [ECX + ESI*0x1 + -0x1],AL ; 00447a2c
    JMP 0x00447a06                      ; 00447a30
        ;   XREF to: 00447a06 (UNCONDITIONAL_JUMP)  ; LAB_00447a06
    PUSH EDI                            ; 00447a32
        ;   Label: LAB_00447a32
    MOV EDX,0x5ceb70                    ; 00447a33 | = "..\\core\\dfilter.cpp"
    MOV ECX,0xab                        ; 00447a38
    PUSH 0x5ceb84                       ; 00447a3d | = "CDemonFilter::load - Bad filename : %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00447a42 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00447a48 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00447a4e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00447a53
    JMP 0x004478fc                      ; 00447a56
        ;   XREF to: 004478fc (UNCONDITIONAL_JUMP)  ; LAB_004478fc
    CMP ESI,0x100                       ; 00447a5b
        ;   Label: LAB_00447a5b
    JG 0x0044796a                       ; 00447a61
        ;   XREF to: 0044796a (CONDITIONAL_JUMP)  ; LAB_0044796a
    JMP 0x0044798f                      ; 00447a67
        ;   XREF to: 0044798f (UNCONDITIONAL_JUMP)  ; LAB_0044798f
    CMP ESI,0x100                       ; 00447a6c
        ;   Label: LAB_00447a6c
    JG 0x0044799b                       ; 00447a72
        ;   XREF to: 0044799b (CONDITIONAL_JUMP)  ; LAB_0044799b
    JMP 0x004479c1                      ; 00447a78
        ;   XREF to: 004479c1 (UNCONDITIONAL_JUMP)  ; LAB_004479c1
    MOV EBP,0x5cec6f                    ; 00447a7d | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_00447a7d
    MOV EAX,0xc6                        ; 00447a82
    PUSH 0x5cec83                       ; 00447a87 | = "CDemonFilter::load - Bad filename"
    MOV dword ptr [0x01d046a0],EBP      ; 00447a8c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00447a92 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00447a97
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00447a9c
    JMP 0x004479e7                      ; 00447a9f
        ;   XREF to: 004479e7 (UNCONDITIONAL_JUMP)  ; LAB_004479e7
    ADD EBX,0x8                         ; 00447aa4
        ;   Label: LAB_00447aa4
    MOV ESI,EDI                         ; 00447aa7
    MOV EDI,EBX                         ; 00447aa9
    PUSH EDI                            ; 00447aab
    MOV AL,byte ptr [ESI]               ; 00447aac
        ;   Label: LAB_00447aac
    MOV byte ptr [EDI],AL               ; 00447aae
    CMP AL,0x0                          ; 00447ab0
    JZ 0x00447ac4                       ; 00447ab2
        ;   XREF to: 00447ac4 (CONDITIONAL_JUMP)  ; LAB_00447ac4
    MOV AL,byte ptr [ESI + 0x1]         ; 00447ab4
    ADD ESI,0x2                         ; 00447ab7
    MOV byte ptr [EDI + 0x1],AL         ; 00447aba
    ADD EDI,0x2                         ; 00447abd
    CMP AL,0x0                          ; 00447ac0
    JNZ 0x00447aac                      ; 00447ac2
        ;   XREF to: 00447aac (CONDITIONAL_JUMP)  ; LAB_00447aac
    POP EDI                             ; 00447ac4
        ;   Label: LAB_00447ac4
    ADD ESP,0x4                         ; 00447ac5
    POP EBP                             ; 00447ac8
    POP EDI                             ; 00447ac9
    POP ESI                             ; 00447aca
    POP EBX                             ; 00447acb
    RET                                 ; 00447acc

