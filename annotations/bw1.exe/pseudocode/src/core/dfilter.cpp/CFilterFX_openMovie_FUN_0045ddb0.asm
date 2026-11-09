; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0045ddb0(CFilterFX *this_ptr,char *filename)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_filmreel.cpp_FUN_004ab6c0 at 004ab7d3
;
; Referenced Globals:
;   CFilterCache* g_CFilterCachePtr = 0152c72c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_0045d900
;   core_dfilter.cpp_FUN_0045dd90
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c08d0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ddb0
        ;   Label: core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0
    PUSH ESI                            ; 0045ddb1
    PUSH EBP                            ; 0045ddb2
    SUB ESP,0x100                       ; 0045ddb3
    MOV ESI,dword ptr [ESP + 0x110]     ; 0045ddb9
    MOV EBX,dword ptr [ESP + 0x114]     ; 0045ddc0
    PUSH ESI                            ; 0045ddc7
    CALL core_dfilter.cpp_FUN_0045dd90  ; 0045ddc8
        ;   XREF to: 0045dd90 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_FUN_0045dd90(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 0045ddcd
    TEST EBX,EBX                        ; 0045ddd0
    JZ 0x0045ded1                       ; 0045ddd2
        ;   XREF to: 0045ded1 (CONDITIONAL_JUMP)  ; LAB_0045ded1
    PUSH EDI                            ; 0045ddd8
    PUSH EBX                            ; 0045ddd9
    PUSH 0x5d85c9                       ; 0045ddda
    LEA EAX,[ESP + 0xc]                 ; 0045dddf
    PUSH EAX                            ; 0045dde3
    CALL crt_unknown.c_FUN_005bfb40     ; 0045dde4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0045dde9
    PUSH 0x5d85d0                       ; 0045ddec
    LEA EAX,[ESP + 0x8]                 ; 0045ddf1
    PUSH EAX                            ; 0045ddf5
    PUSH EBX                            ; 0045ddf6
    CALL engine_dosio.cpp_FUN_00479180  ; 0045ddf7
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045ddfc
    MOV EDI,EAX                         ; 0045ddff
    TEST EAX,EAX                        ; 0045de01
    JNZ 0x0045de29                      ; 0045de03
        ;   XREF to: 0045de29 (CONDITIONAL_JUMP)  ; LAB_0045de29
    PUSH EBX                            ; 0045de05
    MOV EDX,0x5d85d3                    ; 0045de06
    MOV ECX,0x15a                       ; 0045de0b
    PUSH 0x5d85e7                       ; 0045de10
    MOV dword ptr [0x01d1d400],EDX      ; 0045de15 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045de1b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045de21
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0045de26
    PUSH ESI                            ; 0045de29
        ;   Label: LAB_0045de29
    PUSH 0x5d85ff                       ; 0045de2a
    PUSH EDI                            ; 0045de2f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0045de30
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0045de35
    PUSH EDI                            ; 0045de38
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045de39
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EAX,dword ptr [ESI]             ; 0045de3e
    ADD ESP,0x4                         ; 0045de40
    SHL EAX,0xd                         ; 0045de43
    PUSH EAX                            ; 0045de46
    CALL crt_unknown.c_FUN_005c08d0     ; 0045de47
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0045de4c
    PUSH EBX                            ; 0045de4f
    PUSH 0x5d8603                       ; 0045de50
    MOV dword ptr [ESI + 0x4],EAX       ; 0045de55
    LEA EAX,[ESP + 0xc]                 ; 0045de58
    PUSH EAX                            ; 0045de5c
    CALL crt_unknown.c_FUN_005bfb40     ; 0045de5d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0045de62
    PUSH 0x5d860a                       ; 0045de65
    LEA EAX,[ESP + 0x8]                 ; 0045de6a
    PUSH EAX                            ; 0045de6e
    PUSH EBX                            ; 0045de6f
    CALL engine_dosio.cpp_FUN_00479180  ; 0045de70
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045de75
    MOV EDI,EAX                         ; 0045de78
    TEST EAX,EAX                        ; 0045de7a
    JZ 0x0045defd                       ; 0045de7c
        ;   XREF to: 0045defd (CONDITIONAL_JUMP)  ; LAB_0045defd
    PUSH EDI                            ; 0045de82
        ;   Label: LAB_0045de82
    MOV EDX,dword ptr [ESI]             ; 0045de83
    PUSH EDX                            ; 0045de85
    PUSH 0x2000                         ; 0045de86
    MOV ECX,dword ptr [ESI + 0x4]       ; 0045de8b
    PUSH ECX                            ; 0045de8e
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0045de8f
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0045de94
    PUSH EDI                            ; 0045de97
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045de98
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0045de9d
    XOR ECX,ECX                         ; 0045dea0
    POP EDI                             ; 0045dea2
    MOV EAX,dword ptr [ESI]             ; 0045dea3
        ;   Label: LAB_0045dea3
    SHL EAX,0xd                         ; 0045dea5
    CMP ECX,EAX                         ; 0045dea8
    JGE 0x0045df25                      ; 0045deaa
        ;   XREF to: 0045df25 (CONDITIONAL_JUMP)  ; LAB_0045df25
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045deac
    XOR EDX,EDX                         ; 0045deaf
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 0045deb1
    MOV EAX,EDX                         ; 0045deb4
    SAR EDX,0x1f                        ; 0045deb6
    SHL EDX,0x2                         ; 0045deb9
    SBB EAX,EDX                         ; 0045debc
    SAR EAX,0x2                         ; 0045debe
    MOV EDX,EAX                         ; 0045dec1
    SAR EDX,0x1f                        ; 0045dec3
    SUB EAX,EDX                         ; 0045dec6
    SAR EAX,0x1                         ; 0045dec8
    INC ECX                             ; 0045deca
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 0045decb
    JMP 0x0045dea3                      ; 0045decf
        ;   XREF to: 0045dea3 (UNCONDITIONAL_JUMP)  ; LAB_0045dea3
    PUSH 0x5d85b1                       ; 0045ded1
        ;   Label: LAB_0045ded1
    MOV EBX,dword ptr [0x00611358]      ; 0045ded6 | g_CFilterCachePtr
    PUSH EBX                            ; 0045dedc
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_0045d900 ; 0045dedd
        ;   XREF to: 0045d900 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_0045d900(CFilterCache * this_ptr, char * filter_name)
    ADD ESP,0x8                         ; 0045dee2
    PUSH 0x5d85bd                       ; 0045dee5
    PUSH EAX                            ; 0045deea
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 ; 0045deeb
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_0045da30(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0045def0
    ADD ESP,0x100                       ; 0045def3
    POP EBP                             ; 0045def9
    POP ESI                             ; 0045defa
    POP EBX                             ; 0045defb
    RET                                 ; 0045defc
    PUSH EBX                            ; 0045defd
        ;   Label: LAB_0045defd
    MOV EBP,0x5d860d                    ; 0045defe
    MOV EAX,0x166                       ; 0045df03
    PUSH 0x5d8621                       ; 0045df08
    MOV dword ptr [0x01d1d400],EBP      ; 0045df0d | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045df13 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045df18
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0045df1d
    JMP 0x0045de82                      ; 0045df20
        ;   XREF to: 0045de82 (UNCONDITIONAL_JUMP)  ; LAB_0045de82
    MOV dword ptr [ESI + 0x8],0x0       ; 0045df25
        ;   Label: LAB_0045df25
    ADD ESP,0x100                       ; 0045df2c
    POP EBP                             ; 0045df32
    POP ESI                             ; 0045df33
    POP EBX                             ; 0045df34
    RET                                 ; 0045df35

