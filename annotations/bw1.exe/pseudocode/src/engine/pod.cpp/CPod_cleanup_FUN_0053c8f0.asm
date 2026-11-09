; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_cleanup_FUN_0053c8f0(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_FUN_00503a30 at 00503aa8
;   engine_pod.cpp_CPod_dtor_FUN_0053c5f0 at 0053c607
;
; Called Functions:
;   crt_unknown.c_FUN_005c0344
;   engine_pod.cpp_CPodFile_dtor_FUN_0053b210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c8f0
        ;   Label: engine_pod.cpp_CPod_cleanup_FUN_0053c8f0
    PUSH ESI                            ; 0053c8f1
    PUSH EDI                            ; 0053c8f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0053c8f3
    MOV EDX,dword ptr [EDI]             ; 0053c8f7
    XOR ESI,ESI                         ; 0053c8f9
    TEST EDX,EDX                        ; 0053c8fb
    JLE 0x0053c919                      ; 0053c8fd
        ;   XREF to: 0053c919 (CONDITIONAL_JUMP)  ; LAB_0053c919
    MOV EBX,EDI                         ; 0053c8ff
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053c901
        ;   Label: LAB_0053c901
    TEST EAX,EAX                        ; 0053c904
    JNZ 0x0053c923                      ; 0053c906
        ;   XREF to: 0053c923 (CONDITIONAL_JUMP)  ; LAB_0053c923
    MOV dword ptr [EBX + 0x4],0x0       ; 0053c908
        ;   Label: LAB_0053c908
    INC ESI                             ; 0053c90f
    MOV ECX,dword ptr [EDI]             ; 0053c910
    ADD EBX,0x4                         ; 0053c912
    CMP ESI,ECX                         ; 0053c915
    JL 0x0053c901                       ; 0053c917
        ;   XREF to: 0053c901 (CONDITIONAL_JUMP)  ; LAB_0053c901
    MOV dword ptr [EDI],0x0             ; 0053c919
        ;   Label: LAB_0053c919
    POP EDI                             ; 0053c91f
    POP ESI                             ; 0053c920
    POP EBX                             ; 0053c921
    RET                                 ; 0053c922
    PUSH 0x0                            ; 0053c923
        ;   Label: LAB_0053c923
    PUSH EAX                            ; 0053c925
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0053b210 ; 0053c926
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0053b210(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053c92b
    PUSH EAX                            ; 0053c92e
    CALL crt_unknown.c_FUN_005c0344     ; 0053c92f
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0053c934
    JMP 0x0053c908                      ; 0053c937
        ;   XREF to: 0053c908 (UNCONDITIONAL_JUMP)  ; LAB_0053c908

