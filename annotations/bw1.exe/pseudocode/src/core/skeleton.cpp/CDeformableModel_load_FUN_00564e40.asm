; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_00564e40(CDeformableModel *this_ptr,char *filename)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_skeleton.cpp_getDeformableModel_FUN_0056b520 at 0056b5a1
;
; Referenced Globals:
;   undefined4 DAT_005f2011
;   TerminatedCString s_models_005f2014
;   TerminatedCString s_core_skeleton_cpp_005f201b
;   TerminatedCString s_CDeformableModel_load_Ca_005f2030
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0
;   crt_stdio.c_fclose_FUN_005c0d10
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564e40
        ;   Label: core_skeleton.cpp_CDeformableModel_load_FUN_00564e40
    PUSH ESI                            ; 00564e41
    PUSH EDI                            ; 00564e42
    MOV EDI,dword ptr [ESP + 0x10]      ; 00564e43
    MOV ESI,dword ptr [ESP + 0x14]      ; 00564e47
    PUSH 0x5f2011                       ; 00564e4b | DAT_005f2011
    PUSH ESI                            ; 00564e50
    PUSH 0x5f2014                       ; 00564e51 | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 00564e56
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00564e5b
    MOV EBX,EAX                         ; 00564e5e
    TEST EAX,EAX                        ; 00564e60
    JZ 0x00564e9b                       ; 00564e62
        ;   XREF to: 00564e9b (CONDITIONAL_JUMP)  ; LAB_00564e9b
    PUSH EBX                            ; 00564e64
        ;   Label: LAB_00564e64
    PUSH EDI                            ; 00564e65
    CALL core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0 ; 00564e66
        ;   XREF to: 00564ed0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00564e6b
    ADD EDI,0x35b0                      ; 00564e6e
    PUSH EDI                            ; 00564e74
    MOV AL,byte ptr [ESI]               ; 00564e75
        ;   Label: LAB_00564e75
    MOV byte ptr [EDI],AL               ; 00564e77
    CMP AL,0x0                          ; 00564e79
    JZ 0x00564e8d                       ; 00564e7b
        ;   XREF to: 00564e8d (CONDITIONAL_JUMP)  ; LAB_00564e8d
    MOV AL,byte ptr [ESI + 0x1]         ; 00564e7d
    ADD ESI,0x2                         ; 00564e80
    MOV byte ptr [EDI + 0x1],AL         ; 00564e83
    ADD EDI,0x2                         ; 00564e86
    CMP AL,0x0                          ; 00564e89
    JNZ 0x00564e75                      ; 00564e8b
        ;   XREF to: 00564e75 (CONDITIONAL_JUMP)  ; LAB_00564e75
    POP EDI                             ; 00564e8d
        ;   Label: LAB_00564e8d
    PUSH EBX                            ; 00564e8e
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00564e8f
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00564e94
    POP EDI                             ; 00564e97
    POP ESI                             ; 00564e98
    POP EBX                             ; 00564e99
    RET                                 ; 00564e9a
    PUSH ESI                            ; 00564e9b
        ;   Label: LAB_00564e9b
    MOV EDX,0x5f201b                    ; 00564e9c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x4ca                       ; 00564ea1
    PUSH 0x5f2030                       ; 00564ea6 | = "CDeformableModel::load - Can't open %s"
    MOV dword ptr [0x01d1d400],EDX      ; 00564eab | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00564eb1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00564eb7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00564ebc
    JMP 0x00564e64                      ; 00564ebf
        ;   XREF to: 00564e64 (UNCONDITIONAL_JUMP)  ; LAB_00564e64

