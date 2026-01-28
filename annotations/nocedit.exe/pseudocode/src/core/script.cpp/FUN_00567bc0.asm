; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_FUN_00567bc0(void)
;
; Local Variables:
; undefined1       Stack[-0x2274]:1  local_2274
; undefined4       Stack[-0x21a8]:4  local_21a8
; undefined1       Stack[-0x21a4]:1  local_21a4
; undefined1       Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_FUN_0053ec80 at 0053edb1
;
; Referenced Globals:
;   TerminatedCString s_s_Script_line_d_006441ae
;   void* PTR_s_label_006441c0_00680e28 = 006441c0
;   void* PTR_s_anon_006441c9_00680e2c = 006441c9
;
; Called Functions:
;   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
;   core_script.cpp_SCmdParse_parse_FUN_00561fd0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567bc0
        ;   Label: core_script.cpp_FUN_00567bc0
    PUSH ESI                            ; 00567bc1
    PUSH EDI                            ; 00567bc2
    PUSH EBP                            ; 00567bc3
    SUB ESP,0x2264                      ; 00567bc4
    MOV EDI,dword ptr [ESP + 0x2278]    ; 00567bca
    PUSH EDI                            ; 00567bd1
    CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 ; 00567bd2
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370()
    ADD ESP,0x4                         ; 00567bd7
    XOR EDX,EDX                         ; 00567bda
    MOV ECX,dword ptr [EDI + 0x30]      ; 00567bdc
    MOV dword ptr [ESP + 0x2254],EDX    ; 00567bdf
    TEST ECX,ECX                        ; 00567be6
    JLE 0x00567cf0                      ; 00567be8
        ;   XREF to: 00567cf0 (CONDITIONAL_JUMP)  ; LAB_00567cf0
    MOV dword ptr [ESP + 0x2258],EDX    ; 00567bee
    MOV EBP,dword ptr [ESP + 0x2258]    ; 00567bf5
        ;   Label: LAB_00567bf5
    XOR EDX,EDX                         ; 00567bfc
    MOV dword ptr [ESP + 0x225c],EBP    ; 00567bfe
    MOV dword ptr [ESP + 0x2260],EDX    ; 00567c05
    MOV EAX,dword ptr [ESP + 0x2260]    ; 00567c0c
        ;   Label: LAB_00567c0c
    MOV EBX,dword ptr [ESP + 0x225c]    ; 00567c13
    MOV ECX,dword ptr [EAX + 0x680e28]  ; 00567c1a | PTR_s_label_006441c0_00680e28 | PTR_s_anon_006441c9_00680e2c
    MOV EAX,dword ptr [EDI + 0x34]      ; 00567c20
    ADD EAX,EBX                         ; 00567c23
    PUSH ECX                            ; 00567c25
    MOV ESI,dword ptr [EAX + 0x4]       ; 00567c26
    PUSH ESI                            ; 00567c29
    LEA EAX,[ESP + 0x8]                 ; 00567c2a
    PUSH EAX                            ; 00567c2e
    CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0 ; 00567c2f
        ;   XREF to: 00561fd0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_SCmdParse_parse_FUN_00561fd0()
    ADD ESP,0xc                         ; 00567c34
    CMP EAX,0x3                         ; 00567c37
    JL 0x00567ca8                       ; 00567c3a
        ;   XREF to: 00567ca8 (CONDITIONAL_JUMP)  ; LAB_00567ca8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00567c3c
    XOR ESI,ESI                         ; 00567c43
    TEST EAX,EAX                        ; 00567c45
    JLE 0x00567ca8                      ; 00567c47
        ;   XREF to: 00567ca8 (CONDITIONAL_JUMP)  ; LAB_00567ca8
    XOR EBX,EBX                         ; 00567c49
    CMP dword ptr [ESP + EBX*0x1 + 0x328],0xd ; 00567c4b
        ;   Label: LAB_00567c4b
    JNZ 0x00567c96                      ; 00567c53
        ;   XREF to: 00567c96 (CONDITIONAL_JUMP)  ; LAB_00567c96
    MOV EAX,dword ptr [EDI + 0x34]      ; 00567c55
    MOV EDX,dword ptr [EAX + EBP*0x1]   ; 00567c58
    LEA EAX,[ESP + 0xd0]                ; 00567c5b
    ADD EAX,EBX                         ; 00567c62
    PUSH EDX                            ; 00567c64
    ADD EAX,0x64                        ; 00567c65
    PUSH EAX                            ; 00567c68
    PUSH 0x6441ae                       ; 00567c69 | = "%s\tScript line %d"
    LEA EAX,[ESP + 0x2134]              ; 00567c6e
    PUSH EAX                            ; 00567c75
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00567c76
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00567c7b
    LEA EAX,[ESP + 0x2128]              ; 00567c7e
    PUSH EAX                            ; 00567c85
    MOV ECX,dword ptr [ESP + 0x2280]    ; 00567c86
    PUSH ECX                            ; 00567c8d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00567c8e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00567c93
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00567c96
        ;   Label: LAB_00567c96
    INC ESI                             ; 00567c9d
    ADD EBX,0x328                       ; 00567c9e
    CMP ESI,EDX                         ; 00567ca4
    JL 0x00567c4b                       ; 00567ca6
        ;   XREF to: 00567c4b (CONDITIONAL_JUMP)  ; LAB_00567c4b
    MOV EBX,dword ptr [ESP + 0x2260]    ; 00567ca8
        ;   Label: LAB_00567ca8
    ADD EBX,0x4                         ; 00567caf
    MOV dword ptr [ESP + 0x2260],EBX    ; 00567cb2
    CMP EBX,0x1e0                       ; 00567cb9
    JNZ 0x00567c0c                      ; 00567cbf
        ;   XREF to: 00567c0c (CONDITIONAL_JUMP)  ; LAB_00567c0c
    MOV EBX,dword ptr [ESP + 0x2258]    ; 00567cc5
    MOV ESI,dword ptr [ESP + 0x2254]    ; 00567ccc
    MOV EBP,dword ptr [EDI + 0x30]      ; 00567cd3
    ADD EBX,0x8                         ; 00567cd6
    INC ESI                             ; 00567cd9
    MOV dword ptr [ESP + 0x2258],EBX    ; 00567cda
    MOV dword ptr [ESP + 0x2254],ESI    ; 00567ce1
    CMP ESI,EBP                         ; 00567ce8
    JL 0x00567bf5                       ; 00567cea
        ;   XREF to: 00567bf5 (CONDITIONAL_JUMP)  ; LAB_00567bf5
    ADD ESP,0x2264                      ; 00567cf0
        ;   Label: LAB_00567cf0
    POP EBP                             ; 00567cf6
    POP EDI                             ; 00567cf7
    POP ESI                             ; 00567cf8
    POP EBX                             ; 00567cf9
    RET                                 ; 00567cfa

