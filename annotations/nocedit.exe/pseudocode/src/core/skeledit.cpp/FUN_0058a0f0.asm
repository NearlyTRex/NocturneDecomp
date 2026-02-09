; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_0058a0f0(void)
;
;
; XREF[3]:
;   core_skeledit.cpp_CLodMesh_FUN_00589c20 at 00589e78
;   core_skeledit.cpp_FUN_00589bb0 at 00589bdf
;   core_skeledit.cpp_FUN_0058c190 at 0058d15d
;
; Referenced Globals:
;   TerminatedCString s_version_0064a1af
;   TerminatedCString s_s_1_0064a1bb
;   TerminatedCString s_posFilename_0064a1be
;   TerminatedCString s_s_0064a1ce
;   TerminatedCString s_sklFilename_0064a1d4
;   TerminatedCString s_s_0064a1e4
;   TerminatedCString s_s3dFilename_0064a1ea
;   TerminatedCString s_s_0064a1fa
;   TerminatedCString s_forShadows_0064a200
;   TerminatedCString s_d_0064a20f
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x18                           ; 0058a0f0
        ;   Label: core_skeledit.cpp_FUN_0058a0f0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058a0f5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058a0fa
    PUSH ESI                            ; 0058a0fb
    MOV ESI,dword ptr [ESP + 0xc]       ; 0058a0fc
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058a100
    PUSH 0x64a1af                       ; 0058a104 | = "// version\n"
    PUSH EBX                            ; 0058a109
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a10a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a10f
    PUSH 0x64a1bb                       ; 0058a112 | = "1\n"
    PUSH EBX                            ; 0058a117
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a118
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a11d
    PUSH 0x64a1be                       ; 0058a120 | = "// posFilename\n"
    PUSH EBX                            ; 0058a125
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a126
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a12b
    PUSH ESI                            ; 0058a12e
    PUSH 0x64a1ce                       ; 0058a12f | = "\"%s\"\n"
    PUSH EBX                            ; 0058a134
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a135
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a13a
    PUSH 0x64a1d4                       ; 0058a13d | = "// sklFilename\n"
    PUSH EBX                            ; 0058a142
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a143
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a148
    LEA EAX,[ESI + 0x100]               ; 0058a14b
    PUSH EAX                            ; 0058a151
    PUSH 0x64a1e4                       ; 0058a152 | = "\"%s\"\n"
    PUSH EBX                            ; 0058a157
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a158
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a15d
    PUSH 0x64a1ea                       ; 0058a160 | = "// s3dFilename\n"
    PUSH EBX                            ; 0058a165
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a166
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a16b
    LEA EAX,[ESI + 0x200]               ; 0058a16e
    PUSH EAX                            ; 0058a174
    PUSH 0x64a1fa                       ; 0058a175 | = "\"%s\"\n"
    PUSH EBX                            ; 0058a17a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a17b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a180
    PUSH 0x64a200                       ; 0058a183 | = "// forShadows\n"
    PUSH EBX                            ; 0058a188
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a189
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a18e
    MOV EDX,dword ptr [ESI + 0x30c]     ; 0058a191
    PUSH EDX                            ; 0058a197
    PUSH 0x64a20f                       ; 0058a198 | = "%d\n"
    PUSH EBX                            ; 0058a19d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a19e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a1a3
    POP ESI                             ; 0058a1a6
    POP EBX                             ; 0058a1a7
    RET                                 ; 0058a1a8

