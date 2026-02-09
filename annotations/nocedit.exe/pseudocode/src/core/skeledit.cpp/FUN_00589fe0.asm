; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_00589fe0(void)
;
;
; XREF[1]:
;   core_skeledit.cpp_CLodMesh_FUN_00589c20 at 00589db8
;
; Referenced Globals:
;   TerminatedCString s_anon_0064a15e
;   TerminatedCString s_d_0064a166
;   TerminatedCString s_anon_0064a16a
;   TerminatedCString s_anon_0064a172
;   TerminatedCString s_anon_0064a17a
;   TerminatedCString s_anon_0064a17d
;   TerminatedCString s_anon_0064a185
;   TerminatedCString s_anon_0064a18d
;   TerminatedCString s_anon_0064a190
;   TerminatedCString s_anon_0064a198
;   TerminatedCString s_anon_0064a1a0
;   TerminatedCString s_anon_0064a1a3
;   TerminatedCString s_d_0064a1ab
;
; Called Functions:
;   core_skeledit.cpp_FUN_00589fc0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH 0x1c                           ; 00589fe0
        ;   Label: core_skeledit.cpp_FUN_00589fe0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589fe5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 00589fea
    PUSH ESI                            ; 00589feb
    SUB ESP,0x4                         ; 00589fec
    MOV ESI,dword ptr [ESP + 0x10]      ; 00589fef
    MOV EBX,dword ptr [ESP + 0x14]      ; 00589ff3
    PUSH ESI                            ; 00589ff7
    CALL core_skeledit.cpp_FUN_00589fc0 ; 00589ff8
        ;   XREF to: 00589fc0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_FUN_00589fc0()
    ADD ESP,0x4                         ; 00589ffd
    PUSH 0x64a15e                       ; 0058a000 | = "%*[^\n]\n"
    PUSH EBX                            ; 0058a005
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a006
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a00b
    MOV EAX,ESP                         ; 0058a00e
    PUSH EAX                            ; 0058a010
    PUSH 0x64a166                       ; 0058a011 | = "%d\n"
    PUSH EBX                            ; 0058a016
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a017
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a01c
    PUSH 0x64a16a                       ; 0058a01f | = "%*[^\n]\n"
    PUSH EBX                            ; 0058a024
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a025
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a02a
    PUSH ESI                            ; 0058a02d
    PUSH 0x64a172                       ; 0058a02e | = " \"%[^\"]"
    PUSH EBX                            ; 0058a033
    MOV byte ptr [ESI],0x0              ; 0058a034
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a037
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a03c
    PUSH 0x64a17a                       ; 0058a03f | = "\"\n"
    PUSH EBX                            ; 0058a044
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a045
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a04a
    PUSH 0x64a17d                       ; 0058a04d | = "%*[^\n]\n"
    PUSH EBX                            ; 0058a052
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a053
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a058
    LEA EAX,[ESI + 0x100]               ; 0058a05b
    PUSH EAX                            ; 0058a061
    PUSH 0x64a185                       ; 0058a062 | = " \"%[^\"]"
    PUSH EBX                            ; 0058a067
    MOV byte ptr [ESI + 0x100],0x0      ; 0058a068
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a06f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a074
    PUSH 0x64a18d                       ; 0058a077 | = "\"\n"
    PUSH EBX                            ; 0058a07c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a07d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a082
    PUSH 0x64a190                       ; 0058a085 | = "%*[^\n]\n"
    PUSH EBX                            ; 0058a08a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a08b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a090
    LEA EAX,[ESI + 0x200]               ; 0058a093
    PUSH EAX                            ; 0058a099
    PUSH 0x64a198                       ; 0058a09a | = " \"%[^\"]"
    PUSH EBX                            ; 0058a09f
    MOV byte ptr [ESI + 0x200],0x0      ; 0058a0a0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a0a7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a0ac
    PUSH 0x64a1a0                       ; 0058a0af | = "\"\n"
    PUSH EBX                            ; 0058a0b4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a0b5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a0ba
    PUSH 0x64a1a3                       ; 0058a0bd | = "%*[^\n]\n"
    PUSH EBX                            ; 0058a0c2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a0c3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058a0c8
    ADD ESI,0x30c                       ; 0058a0cb
    PUSH ESI                            ; 0058a0d1
    PUSH 0x64a1ab                       ; 0058a0d2 | = "%d\n"
    PUSH EBX                            ; 0058a0d7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a0d8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a0dd
    ADD ESP,0x4                         ; 0058a0e0
    POP ESI                             ; 0058a0e3
    POP EBX                             ; 0058a0e4
    RET                                 ; 0058a0e5

