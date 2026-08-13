; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_004f9100(CPod *this_ptr,char *pod_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
;
; Called Functions:
;   engine_pod.cpp_CPodFile_ctor_FUN_004f7a80
;   engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
;   engine_pod.cpp_CPodFile_FUN_004f7ae0
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9100
        ;   Label: engine_pod.cpp_CPod_verifyIntegrity_FUN_004f9100
    SUB ESP,0x21c                       ; 004f9101
    MOV EAX,ESP                         ; 004f9107
    PUSH EAX                            ; 004f9109
    CALL engine_pod.cpp_CPodFile_ctor_FUN_004f7a80 ; 004f910a
        ;   XREF to: 004f7a80 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_004f7a80(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f910f
    MOV EDX,dword ptr [ESP + 0x228]     ; 004f9112
    PUSH EDX                            ; 004f9119
    LEA EAX,[ESP + 0x4]                 ; 004f911a
    PUSH EAX                            ; 004f911e
    CALL engine_pod.cpp_CPodFile_FUN_004f7ae0 ; 004f911f
        ;   XREF to: 004f7ae0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_FUN_004f7ae0(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f9124
    TEST EAX,EAX                        ; 004f9127
    JZ 0x004f9151                       ; 004f9129
        ;   XREF to: 004f9151 (CONDITIONAL_JUMP)  ; LAB_004f9151
    MOV EAX,ESP                         ; 004f912b
    PUSH EAX                            ; 004f912d
    CALL engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 ; 004f912e
        ;   XREF to: 004f8240 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f9133
    PUSH 0x0                            ; 004f9136
    MOV EBX,EAX                         ; 004f9138
    LEA EAX,[ESP + 0x4]                 ; 004f913a
    PUSH EAX                            ; 004f913e
    CALL engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0 ; 004f913f
        ;   XREF to: 004f7ac0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f9144
    MOV EAX,EBX                         ; 004f9147
    ADD ESP,0x21c                       ; 004f9149
    POP EBX                             ; 004f914f
    RET                                 ; 004f9150
    PUSH EAX                            ; 004f9151
        ;   Label: LAB_004f9151
    LEA EAX,[ESP + 0x4]                 ; 004f9152
    PUSH EAX                            ; 004f9156
    XOR EBX,EBX                         ; 004f9157
    CALL engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0 ; 004f9159
        ;   XREF to: 004f7ac0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f915e
    MOV EAX,EBX                         ; 004f9161
    ADD ESP,0x21c                       ; 004f9163
    POP EBX                             ; 004f9169
    RET                                 ; 004f916a

