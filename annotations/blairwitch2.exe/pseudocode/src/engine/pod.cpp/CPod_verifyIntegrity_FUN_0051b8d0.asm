; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_0051b8d0(CPod *this_ptr,char *param_2)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; Called Functions:
;   engine_pod.cpp_CPodFile_ctor_FUN_00519e50
;   engine_pod.cpp_CPodFile_dtor_FUN_00519ec0
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00
;   engine_pod.cpp_FUN_0051aa80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8d0
        ;   Label: engine_pod.cpp_CPod_verifyIntegrity_FUN_0051b8d0
    SUB ESP,0x42c                       ; 0051b8d1
    MOV EAX,ESP                         ; 0051b8d7
    PUSH EAX                            ; 0051b8d9
    CALL engine_pod.cpp_CPodFile_ctor_FUN_00519e50 ; 0051b8da
        ;   XREF to: 00519e50 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_00519e50(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0051b8df
    MOV EDX,dword ptr [ESP + 0x438]     ; 0051b8e2
    PUSH EDX                            ; 0051b8e9
    LEA EAX,[ESP + 0x4]                 ; 0051b8ea
    PUSH EAX                            ; 0051b8ee
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 ; 0051b8ef
        ;   XREF to: 00519f00 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 0051b8f4
    TEST EAX,EAX                        ; 0051b8f7
    JZ 0x0051b921                       ; 0051b8f9
        ;   XREF to: 0051b921 (CONDITIONAL_JUMP)  ; LAB_0051b921
    MOV EAX,ESP                         ; 0051b8fb
    PUSH EAX                            ; 0051b8fd
    CALL engine_pod.cpp_FUN_0051aa80    ; 0051b8fe
        ;   XREF to: 0051aa80 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0051aa80()
    ADD ESP,0x4                         ; 0051b903
    PUSH 0x0                            ; 0051b906
    MOV EBX,EAX                         ; 0051b908
    LEA EAX,[ESP + 0x4]                 ; 0051b90a
    PUSH EAX                            ; 0051b90e
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00519ec0 ; 0051b90f
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00519ec0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051b914
    MOV EAX,EBX                         ; 0051b917
    ADD ESP,0x42c                       ; 0051b919
    POP EBX                             ; 0051b91f
    RET                                 ; 0051b920
    PUSH EAX                            ; 0051b921
        ;   Label: LAB_0051b921
    LEA EAX,[ESP + 0x4]                 ; 0051b922
    PUSH EAX                            ; 0051b926
    XOR EBX,EBX                         ; 0051b927
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00519ec0 ; 0051b929
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00519ec0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051b92e
    MOV EAX,EBX                         ; 0051b931
    ADD ESP,0x42c                       ; 0051b933
    POP EBX                             ; 0051b939
    RET                                 ; 0051b93a

