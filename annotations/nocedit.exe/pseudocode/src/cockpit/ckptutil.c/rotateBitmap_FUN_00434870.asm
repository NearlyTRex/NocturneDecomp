; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_rotateBitmap_FUN_00434870(uchar * source_data, int width, int height, int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   source_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_00617f25
;   TerminatedCString s_Unable_to_allocate_u_byt_00617f3b
;   TerminatedCString s_cockpit_ckptutil_c_00617f75
;   TerminatedCString s_cockpit_ckptutil_c_00617f8b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434870
        ;   Label: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
    PUSH ESI                            ; 00434871
    PUSH EDI                            ; 00434872
    PUSH EBP                            ; 00434873
    SUB ESP,0x68                        ; 00434874
    MOV EBP,dword ptr [ESP + 0x88]      ; 00434877
    MOV EAX,dword ptr [ESP + 0x80]      ; 0043487e
    IMUL EAX,EBP                        ; 00434885
    MOV EBX,dword ptr [ESP + 0x80]      ; 00434888
    IMUL EBX,dword ptr [ESP + 0x84]     ; 0043488f
    IMUL EBX,EBP                        ; 00434897
    PUSH 0x807                          ; 0043489a
    PUSH 0x617f25                       ; 0043489f | = "..\\cockpit\\ckptutil.c"
    PUSH EBX                            ; 004348a4
    MOV dword ptr [ESP + 0x6c],EAX      ; 004348a5
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004348a9
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004348ae
    MOV dword ptr [ESP + 0x54],EAX      ; 004348b1
    TEST EAX,EAX                        ; 004348b5
    JZ 0x00434970                       ; 004348b7
        ;   XREF to: 00434970 (CONDITIONAL_JUMP)  ; LAB_00434970
    CMP EBP,0x1                         ; 004348bd
        ;   Label: LAB_004348bd
    JNZ 0x004349a9                      ; 004348c0
        ;   XREF to: 004349a9 (CONDITIONAL_JUMP)  ; LAB_004349a9
    MOV EAX,dword ptr [ESP + 0x84]      ; 004348c6
    XOR ESI,ESI                         ; 004348cd
    TEST EAX,EAX                        ; 004348cf
    JBE 0x00434927                      ; 004348d1
        ;   XREF to: 00434927 (CONDITIONAL_JUMP)  ; LAB_00434927
    MOV EAX,dword ptr [ESP + 0x60]      ; 004348d3
    MOV dword ptr [ESP + 0x50],EAX      ; 004348d7
    IMUL EDI,EAX,0x0                    ; 004348db
    MOV EAX,dword ptr [ESP + 0x84]      ; 004348de
        ;   Label: LAB_004348de
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004348e5
    MOV EBX,dword ptr [ESP + 0x54]      ; 004348e9
    SUB EAX,ESI                         ; 004348ed
    MOV ECX,dword ptr [ESP + 0x60]      ; 004348ef
    DEC EAX                             ; 004348f3
    ADD EDX,EDI                         ; 004348f4
    ADD EBX,EAX                         ; 004348f6
    XOR EAX,EAX                         ; 004348f8
    TEST ECX,ECX                        ; 004348fa
    JBE 0x00434915                      ; 004348fc
        ;   XREF to: 00434915 (CONDITIONAL_JUMP)  ; LAB_00434915
    MOV CL,byte ptr [EDX]               ; 004348fe
        ;   Label: LAB_004348fe
    MOV byte ptr [EBX],CL               ; 00434900
    MOV ECX,dword ptr [ESP + 0x84]      ; 00434902
    INC EAX                             ; 00434909
    ADD EBX,ECX                         ; 0043490a
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043490c
    INC EDX                             ; 00434910
    CMP EAX,ECX                         ; 00434911
    JC 0x004348fe                       ; 00434913
        ;   XREF to: 004348fe (CONDITIONAL_JUMP)  ; LAB_004348fe
    MOV EBX,dword ptr [ESP + 0x50]      ; 00434915
        ;   Label: LAB_00434915
    MOV EAX,dword ptr [ESP + 0x84]      ; 00434919
    INC ESI                             ; 00434920
    ADD EDI,EBX                         ; 00434921
    CMP ESI,EAX                         ; 00434923
    JC 0x004348de                       ; 00434925
        ;   XREF to: 004348de (CONDITIONAL_JUMP)  ; LAB_004348de
    MOV ECX,dword ptr [ESP + 0x80]      ; 00434927
        ;   Label: LAB_00434927
    IMUL ECX,dword ptr [ESP + 0x84]     ; 0043492e
    IMUL ECX,EBP                        ; 00434936
    MOV ESI,dword ptr [ESP + 0x54]      ; 00434939
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0043493d
    PUSH EDI                            ; 00434941
    MOV EAX,ECX                         ; 00434942
    SHR ECX,0x2                         ; 00434944
    MOVSD.REP ES:EDI,ESI                ; 00434947
    MOV CL,AL                           ; 00434949
    AND CL,0x3                          ; 0043494b
    MOVSB.REP ES:EDI,ESI                ; 0043494e
    POP EDI                             ; 00434950
    PUSH 0x82b                          ; 00434951
    PUSH 0x617f8b                       ; 00434956 | = "..\\cockpit\\ckptutil.c"
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043495b
    PUSH ESI                            ; 0043495f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00434960
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00434965
    ADD ESP,0x68                        ; 00434968
    POP EBP                             ; 0043496b
    POP EDI                             ; 0043496c
    POP ESI                             ; 0043496d
    POP EBX                             ; 0043496e
    RET                                 ; 0043496f
    PUSH EBX                            ; 00434970
        ;   Label: LAB_00434970
    PUSH 0x617f3b                       ; 00434971 | = "Unable to allocate %u bytes for tempo..."
    LEA EAX,[ESP + 0x8]                 ; 00434976
    PUSH EAX                            ; 0043497a
    MOV EBX,0x80a                       ; 0043497b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00434980
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00434985
    MOV EAX,ESP                         ; 00434988
    MOV ECX,0x617f75                    ; 0043498a | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0043498f
    MOV dword ptr [0x02f0ca4c],EBX      ; 00434990 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00434996 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043499c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004349a1
    JMP 0x004348bd                      ; 004349a4
        ;   XREF to: 004348bd (UNCONDITIONAL_JUMP)  ; LAB_004348bd
    XOR ESI,ESI                         ; 004349a9
        ;   Label: LAB_004349a9
    MOV EDI,dword ptr [ESP + 0x84]      ; 004349ab
    MOV dword ptr [ESP + 0x58],ESI      ; 004349b2
    TEST EDI,EDI                        ; 004349b6
    JBE 0x00434927                      ; 004349b8
        ;   XREF to: 00434927 (CONDITIONAL_JUMP)  ; LAB_00434927
    MOV EAX,EDI                         ; 004349be
    IMUL EAX,EBP                        ; 004349c0
    MOV dword ptr [ESP + 0x5c],EAX      ; 004349c3
    MOV EDX,dword ptr [ESP + 0x58]      ; 004349c7
        ;   Label: LAB_004349c7
    IMUL EDX,dword ptr [ESP + 0x60]     ; 004349cb
    MOV EAX,dword ptr [ESP + 0x84]      ; 004349d0
    SUB EAX,dword ptr [ESP + 0x58]      ; 004349d7
    DEC EAX                             ; 004349db
    IMUL EAX,EBP                        ; 004349dc
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004349df
    MOV EBX,dword ptr [ESP + 0x54]      ; 004349e3
    MOV ECX,dword ptr [ESP + 0x60]      ; 004349e7
    ADD EBX,EAX                         ; 004349eb
    XOR EAX,EAX                         ; 004349ed
    ADD EDX,ESI                         ; 004349ef
    MOV dword ptr [ESP + 0x64],EAX      ; 004349f1
    TEST ECX,ECX                        ; 004349f5
    JBE 0x00434a28                      ; 004349f7
        ;   XREF to: 00434a28 (CONDITIONAL_JUMP)  ; LAB_00434a28
    MOV ECX,EBP                         ; 004349f9
        ;   Label: LAB_004349f9
    MOV ESI,EDX                         ; 004349fb
    MOV EDI,EBX                         ; 004349fd
    PUSH EDI                            ; 004349ff
    MOV EAX,ECX                         ; 00434a00
    SHR ECX,0x2                         ; 00434a02
    MOVSD.REP ES:EDI,ESI                ; 00434a05
    MOV CL,AL                           ; 00434a07
    AND CL,0x3                          ; 00434a09
    MOVSB.REP ES:EDI,ESI                ; 00434a0c
    POP EDI                             ; 00434a0e
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00434a0f
    MOV EDI,dword ptr [ESP + 0x64]      ; 00434a13
    MOV ECX,dword ptr [ESP + 0x60]      ; 00434a17
    ADD EDX,EBP                         ; 00434a1b
    INC EDI                             ; 00434a1d
    ADD EBX,ESI                         ; 00434a1e
    MOV dword ptr [ESP + 0x64],EDI      ; 00434a20
    CMP EDI,ECX                         ; 00434a24
    JC 0x004349f9                       ; 00434a26
        ;   XREF to: 004349f9 (CONDITIONAL_JUMP)  ; LAB_004349f9
    MOV EDX,dword ptr [ESP + 0x58]      ; 00434a28
        ;   Label: LAB_00434a28
    INC EDX                             ; 00434a2c
    MOV ECX,dword ptr [ESP + 0x84]      ; 00434a2d
    MOV dword ptr [ESP + 0x58],EDX      ; 00434a34
    CMP EDX,ECX                         ; 00434a38
    JNC 0x00434927                      ; 00434a3a
        ;   XREF to: 00434927 (CONDITIONAL_JUMP)  ; LAB_00434927
    JMP 0x004349c7                      ; 00434a40
        ;   XREF to: 004349c7 (UNCONDITIONAL_JUMP)  ; LAB_004349c7

