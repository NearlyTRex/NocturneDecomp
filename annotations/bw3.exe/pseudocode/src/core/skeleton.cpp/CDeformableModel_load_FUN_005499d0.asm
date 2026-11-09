; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005499d0(CDeformableModel *this_ptr,char *filename)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_skeleton.cpp_FUN_005500b0 at 00550131
;
; Referenced Globals:
;   undefined4 DAT_005d1b14
;   TerminatedCString s_models_005d1b17
;   TerminatedCString s_core_skeleton_cpp_005d1b1e
;   TerminatedCString s_CDeformableModel_load_Ca_005d1b33
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60
;   crt_stdio.c_fclose_FUN_005a3a90
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005499d0
        ;   Label: core_skeleton.cpp_CDeformableModel_load_FUN_005499d0
    PUSH ESI                            ; 005499d1
    PUSH EDI                            ; 005499d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005499d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005499d7
    PUSH 0x5d1b14                       ; 005499db | DAT_005d1b14
    PUSH ESI                            ; 005499e0
    PUSH 0x5d1b17                       ; 005499e1 | = "models"
    CALL engine_dosio.cpp_FUN_004659c0  ; 005499e6
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005499eb
    MOV EBX,EAX                         ; 005499ee
    TEST EAX,EAX                        ; 005499f0
    JZ 0x00549a2b                       ; 005499f2
        ;   XREF to: 00549a2b (CONDITIONAL_JUMP)  ; LAB_00549a2b
    PUSH EBX                            ; 005499f4
        ;   Label: LAB_005499f4
    PUSH EDI                            ; 005499f5
    CALL core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60 ; 005499f6
        ;   XREF to: 00549a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005499fb
    ADD EDI,0x35b0                      ; 005499fe
    PUSH EDI                            ; 00549a04
    MOV AL,byte ptr [ESI]               ; 00549a05
        ;   Label: LAB_00549a05
    MOV byte ptr [EDI],AL               ; 00549a07
    CMP AL,0x0                          ; 00549a09
    JZ 0x00549a1d                       ; 00549a0b
        ;   XREF to: 00549a1d (CONDITIONAL_JUMP)  ; LAB_00549a1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00549a0d
    ADD ESI,0x2                         ; 00549a10
    MOV byte ptr [EDI + 0x1],AL         ; 00549a13
    ADD EDI,0x2                         ; 00549a16
    CMP AL,0x0                          ; 00549a19
    JNZ 0x00549a05                      ; 00549a1b
        ;   XREF to: 00549a05 (CONDITIONAL_JUMP)  ; LAB_00549a05
    POP EDI                             ; 00549a1d
        ;   Label: LAB_00549a1d
    PUSH EBX                            ; 00549a1e
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00549a1f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00549a24
    POP EDI                             ; 00549a27
    POP ESI                             ; 00549a28
    POP EBX                             ; 00549a29
    RET                                 ; 00549a2a
    PUSH ESI                            ; 00549a2b
        ;   Label: LAB_00549a2b
    MOV EDX,0x5d1b1e                    ; 00549a2c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x4c1                       ; 00549a31
    PUSH 0x5d1b33                       ; 00549a36 | = "CDeformableModel::load - Can't open %s"
    MOV dword ptr [0x01d71de0],EDX      ; 00549a3b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00549a41 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00549a47
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00549a4c
    JMP 0x005499f4                      ; 00549a4f
        ;   XREF to: 005499f4 (UNCONDITIONAL_JUMP)  ; LAB_005499f4

