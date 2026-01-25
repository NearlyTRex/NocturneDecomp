; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   dependency_file
; int              Stack[0xc]:4   skip_raw_files
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[10]:
;   core_anvil.cpp_CAnvil_FUN_00412090 at 004120cf
;   core_battery.cpp_FUN_00418110 at 0041814f
;   core_boxactor.cpp_CBoxActor_FUN_00422900 at 00422938
;   core_cloth.cpp_FUN_0043e0a0 at 0043e0c5
;   core_crate.cpp_FUN_00448b60 at 00448b9f
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 at 0047ee1c
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 at 0047eea7
;   core_filmreel.cpp_FUN_004be9b0 at 004be9ef
;   core_flamecan.cpp_FUN_004cb750 at 004cb78f
;   core_gasmask.cpp_FUN_004e5ef0 at 004e5f2f
;
; Referenced Globals:
;   TerminatedCString s_ART_s_RAW_00620f0b
;   TerminatedCString s_ART_s_ACT_00620f17
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ed00
        ;   Label: core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
    PUSH ESI                            ; 0047ed01
    PUSH EDI                            ; 0047ed02
    PUSH EBP                            ; 0047ed03
    SUB ESP,0xc8                        ; 0047ed04
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0047ed0a
    MOV EDX,dword ptr [EBX + 0x120]     ; 0047ed11
    XOR EBP,EBP                         ; 0047ed17
    TEST EDX,EDX                        ; 0047ed19
    JLE 0x0047edb8                      ; 0047ed1b
        ;   XREF to: 0047edb8 (CONDITIONAL_JUMP)  ; LAB_0047edb8
    ADD EBX,0x12c                       ; 0047ed21
    MOV EDI,ESP                         ; 0047ed27
        ;   Label: LAB_0047ed27
    MOV ESI,EBX                         ; 0047ed29
    MOV DL,0x2e                         ; 0047ed2b
    PUSH EDI                            ; 0047ed2d
    MOV AL,byte ptr [ESI]               ; 0047ed2e
        ;   Label: LAB_0047ed2e
    MOV byte ptr [EDI],AL               ; 0047ed30
    CMP AL,0x0                          ; 0047ed32
    JZ 0x0047ed46                       ; 0047ed34
        ;   XREF to: 0047ed46 (CONDITIONAL_JUMP)  ; LAB_0047ed46
    MOV AL,byte ptr [ESI + 0x1]         ; 0047ed36
    ADD ESI,0x2                         ; 0047ed39
    MOV byte ptr [EDI + 0x1],AL         ; 0047ed3c
    ADD EDI,0x2                         ; 0047ed3f
    CMP AL,0x0                          ; 0047ed42
    JNZ 0x0047ed2e                      ; 0047ed44
        ;   XREF to: 0047ed2e (CONDITIONAL_JUMP)  ; LAB_0047ed2e
    POP EDI                             ; 0047ed46
        ;   Label: LAB_0047ed46
    MOV ESI,ESP                         ; 0047ed47
    MOV AL,byte ptr [ESI]               ; 0047ed49
        ;   Label: LAB_0047ed49
    CMP AL,DL                           ; 0047ed4b
    JZ 0x0047ed61                       ; 0047ed4d
        ;   XREF to: 0047ed61 (CONDITIONAL_JUMP)  ; LAB_0047ed61
    CMP AL,0x0                          ; 0047ed4f
    JZ 0x0047ed5f                       ; 0047ed51
        ;   XREF to: 0047ed5f (CONDITIONAL_JUMP)  ; LAB_0047ed5f
    INC ESI                             ; 0047ed53
    MOV AL,byte ptr [ESI]               ; 0047ed54
    CMP AL,DL                           ; 0047ed56
    JZ 0x0047ed61                       ; 0047ed58
        ;   XREF to: 0047ed61 (CONDITIONAL_JUMP)  ; LAB_0047ed61
    INC ESI                             ; 0047ed5a
    CMP AL,0x0                          ; 0047ed5b
    JNZ 0x0047ed49                      ; 0047ed5d
        ;   XREF to: 0047ed49 (CONDITIONAL_JUMP)  ; LAB_0047ed49
    SUB ESI,ESI                         ; 0047ed5f
        ;   Label: LAB_0047ed5f
    TEST ESI,ESI                        ; 0047ed61
        ;   Label: LAB_0047ed61
    JNZ 0x0047edc3                      ; 0047ed63
        ;   XREF to: 0047edc3 (CONDITIONAL_JUMP)  ; LAB_0047edc3
    CMP dword ptr [ESP + 0xe4],0x0      ; 0047ed65
        ;   Label: LAB_0047ed65
    JNZ 0x0047ed87                      ; 0047ed6d
        ;   XREF to: 0047ed87 (CONDITIONAL_JUMP)  ; LAB_0047ed87
    MOV ESI,ESP                         ; 0047ed6f
    PUSH ESI                            ; 0047ed71
    PUSH 0x620f0b                       ; 0047ed72 | = "ART\\%s.RAW\n"
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0047ed77
    PUSH EDX                            ; 0047ed7e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047ed7f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0047ed84
    MOV ESI,ESP                         ; 0047ed87
        ;   Label: LAB_0047ed87
    PUSH ESI                            ; 0047ed89
    PUSH 0x620f17                       ; 0047ed8a | = "ART\\%s.ACT\n"
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0047ed8f
    PUSH ECX                            ; 0047ed96
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047ed97
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0047ed9c
    MOV ESI,dword ptr [ESP + 0xdc]      ; 0047ed9f
    INC EBP                             ; 0047eda6
    MOV EDI,dword ptr [ESI + 0x120]     ; 0047eda7
    ADD EBX,0x48                        ; 0047edad
    CMP EBP,EDI                         ; 0047edb0
    JL 0x0047ed27                       ; 0047edb2
        ;   XREF to: 0047ed27 (CONDITIONAL_JUMP)  ; LAB_0047ed27
    ADD ESP,0xc8                        ; 0047edb8
        ;   Label: LAB_0047edb8
    POP EBP                             ; 0047edbe
    POP EDI                             ; 0047edbf
    POP ESI                             ; 0047edc0
    POP EBX                             ; 0047edc1
    RET                                 ; 0047edc2
    MOV byte ptr [ESI],0x0              ; 0047edc3
        ;   Label: LAB_0047edc3
    JMP 0x0047ed65                      ; 0047edc6
        ;   XREF to: 0047ed65 (UNCONDITIONAL_JUMP)  ; LAB_0047ed65

