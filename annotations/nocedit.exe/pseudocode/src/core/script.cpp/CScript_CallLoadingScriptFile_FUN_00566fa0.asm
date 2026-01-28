; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0(void)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00562920 at 00562c68
;
; Referenced Globals:
;   TerminatedCString s_s_00644042
;
; Called Functions:
;   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566fa0
        ;   Label: core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
    PUSH ESI                            ; 00566fa1
    PUSH EDI                            ; 00566fa2
    PUSH EBP                            ; 00566fa3
    SUB ESP,0xc8                        ; 00566fa4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00566faa
    MOV EBP,dword ptr [ESP + 0xe0]      ; 00566fb1
    PUSH EDI                            ; 00566fb8
    CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 ; 00566fb9
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370()
    XOR EBX,EBX                         ; 00566fbe
    MOV EDX,dword ptr [EDI + 0x30]      ; 00566fc0
    ADD ESP,0x4                         ; 00566fc3
    TEST EDX,EDX                        ; 00566fc6
    JLE 0x00566ff4                      ; 00566fc8
        ;   XREF to: 00566ff4 (CONDITIONAL_JUMP)  ; LAB_00566ff4
    XOR ESI,ESI                         ; 00566fca
    MOV EAX,ESP                         ; 00566fcc
        ;   Label: LAB_00566fcc
    PUSH EAX                            ; 00566fce
    MOV EAX,dword ptr [EDI + 0x34]      ; 00566fcf
    PUSH 0x644042                       ; 00566fd2 | = ": %s"
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00566fd7
    PUSH EDX                            ; 00566fdb
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00566fdc
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00566fe1
    CMP EAX,0x1                         ; 00566fe4
    JZ 0x00566fff                       ; 00566fe7
        ;   XREF to: 00566fff (CONDITIONAL_JUMP)  ; LAB_00566fff
    INC EBX                             ; 00566fe9
        ;   Label: LAB_00566fe9
    MOV ECX,dword ptr [EDI + 0x30]      ; 00566fea
    ADD ESI,0x8                         ; 00566fed
    CMP EBX,ECX                         ; 00566ff0
    JL 0x00566fcc                       ; 00566ff2
        ;   XREF to: 00566fcc (CONDITIONAL_JUMP)  ; LAB_00566fcc
    ADD ESP,0xc8                        ; 00566ff4
        ;   Label: LAB_00566ff4
    POP EBP                             ; 00566ffa
    POP EDI                             ; 00566ffb
    POP ESI                             ; 00566ffc
    POP EBX                             ; 00566ffd
    RET                                 ; 00566ffe
    MOV EAX,ESP                         ; 00566fff
        ;   Label: LAB_00566fff
    PUSH EAX                            ; 00567001
    PUSH EBP                            ; 00567002
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00567003
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00567008
    JMP 0x00566fe9                      ; 0056700b
        ;   XREF to: 00566fe9 (UNCONDITIONAL_JUMP)  ; LAB_00566fe9

