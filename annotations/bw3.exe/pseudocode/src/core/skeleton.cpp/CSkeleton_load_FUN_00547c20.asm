; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00547c20(CSkeleton *this_ptr,char *filename)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_skeleton.cpp_loadSkeleton_FUN_005501e0 at 0055026e
;
; Referenced Globals:
;   undefined4 DAT_005d166c
;   undefined4 DAT_005d166f
;   TerminatedCString s_core_skeleton_cpp_005d1674
;   TerminatedCString s_CSkeleton_load_Can_t_ope_005d1689
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0
;   crt_stdio.c_fclose_FUN_005a3a90
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547c20
        ;   Label: core_skeleton.cpp_CSkeleton_load_FUN_00547c20
    PUSH ESI                            ; 00547c21
    PUSH EDI                            ; 00547c22
    MOV EDI,dword ptr [ESP + 0x10]      ; 00547c23
    MOV ESI,dword ptr [ESP + 0x14]      ; 00547c27
    PUSH 0x5d166c                       ; 00547c2b | DAT_005d166c
    PUSH ESI                            ; 00547c30
    PUSH 0x5d166f                       ; 00547c31 | DAT_005d166f
    CALL engine_dosio.cpp_FUN_004659c0  ; 00547c36
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00547c3b
    MOV EBX,EAX                         ; 00547c3e
    TEST EAX,EAX                        ; 00547c40
    JZ 0x00547c7b                       ; 00547c42
        ;   XREF to: 00547c7b (CONDITIONAL_JUMP)  ; LAB_00547c7b
    PUSH EBX                            ; 00547c44
        ;   Label: LAB_00547c44
    PUSH EDI                            ; 00547c45
    CALL core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0 ; 00547c46
        ;   XREF to: 00547cb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0(CSkeleton * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00547c4b
    ADD EDI,0x1de28                     ; 00547c4e
    PUSH EDI                            ; 00547c54
    MOV AL,byte ptr [ESI]               ; 00547c55
        ;   Label: LAB_00547c55
    MOV byte ptr [EDI],AL               ; 00547c57
    CMP AL,0x0                          ; 00547c59
    JZ 0x00547c6d                       ; 00547c5b
        ;   XREF to: 00547c6d (CONDITIONAL_JUMP)  ; LAB_00547c6d
    MOV AL,byte ptr [ESI + 0x1]         ; 00547c5d
    ADD ESI,0x2                         ; 00547c60
    MOV byte ptr [EDI + 0x1],AL         ; 00547c63
    ADD EDI,0x2                         ; 00547c66
    CMP AL,0x0                          ; 00547c69
    JNZ 0x00547c55                      ; 00547c6b
        ;   XREF to: 00547c55 (CONDITIONAL_JUMP)  ; LAB_00547c55
    POP EDI                             ; 00547c6d
        ;   Label: LAB_00547c6d
    PUSH EBX                            ; 00547c6e
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00547c6f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00547c74
    POP EDI                             ; 00547c77
    POP ESI                             ; 00547c78
    POP EBX                             ; 00547c79
    RET                                 ; 00547c7a
    PUSH ESI                            ; 00547c7b
        ;   Label: LAB_00547c7b
    MOV EDX,0x5d1674                    ; 00547c7c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x101                       ; 00547c81
    PUSH 0x5d1689                       ; 00547c86 | = "CSkeleton::load - Can't open %s"
    MOV dword ptr [0x01d71de0],EDX      ; 00547c8b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00547c91 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00547c97
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00547c9c
    JMP 0x00547c44                      ; 00547c9f
        ;   XREF to: 00547c44 (UNCONDITIONAL_JUMP)  ; LAB_00547c44

