; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x224]:1  local_224
; undefined1       Stack[-0x223]:1  local_223
; undefined1       Stack[-0x124]:1  local_124
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_pod.cpp_CPod_dismountPod_FUN_005518c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550b90
        ;   Label: engine_pod.cpp_CPod_dismount_FUN_00550b90
    PUSH ESI                            ; 00550b91
    PUSH EDI                            ; 00550b92
    PUSH EBP                            ; 00550b93
    SUB ESP,0x214                       ; 00550b94
    MOV EBP,dword ptr [ESP + 0x228]     ; 00550b9a
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00550ba1
    MOV EDI,ESP                         ; 00550ba8
    PUSH EDI                            ; 00550baa
    MOV AL,byte ptr [ESI]               ; 00550bab
        ;   Label: LAB_00550bab
    MOV byte ptr [EDI],AL               ; 00550bad
    CMP AL,0x0                          ; 00550baf
    JZ 0x00550bc3                       ; 00550bb1
        ;   XREF to: 00550bc3 (CONDITIONAL_JUMP)  ; LAB_00550bc3
    MOV AL,byte ptr [ESI + 0x1]         ; 00550bb3
    ADD ESI,0x2                         ; 00550bb6
    MOV byte ptr [EDI + 0x1],AL         ; 00550bb9
    ADD EDI,0x2                         ; 00550bbc
    CMP AL,0x0                          ; 00550bbf
    JNZ 0x00550bab                      ; 00550bc1
        ;   XREF to: 00550bab (CONDITIONAL_JUMP)  ; LAB_00550bab
    POP EDI                             ; 00550bc3
        ;   Label: LAB_00550bc3
    MOV EAX,ESP                         ; 00550bc4
    PUSH EAX                            ; 00550bc6
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 00550bc7
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 00550bcc
    TEST EAX,EAX                        ; 00550bcf
    JZ 0x00550c02                       ; 00550bd1
        ;   XREF to: 00550c02 (CONDITIONAL_JUMP)  ; LAB_00550c02
    MOV EDX,dword ptr [EBP]             ; 00550bd3
    XOR EBX,EBX                         ; 00550bd6
    TEST EDX,EDX                        ; 00550bd8
    JLE 0x00550c02                      ; 00550bda
        ;   XREF to: 00550c02 (CONDITIONAL_JUMP)  ; LAB_00550c02
    MOV ESI,EBP                         ; 00550bdc
    LEA EAX,[ESP + 0x100]               ; 00550bde
        ;   Label: LAB_00550bde
    PUSH EAX                            ; 00550be5
    MOV EAX,dword ptr [ESI + 0x4]       ; 00550be6
    ADD EAX,0x4                         ; 00550be9
    PUSH EAX                            ; 00550bec
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00550bed
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00550bf2
    TEST EAX,EAX                        ; 00550bf5
    JZ 0x00550c0d                       ; 00550bf7
        ;   XREF to: 00550c0d (CONDITIONAL_JUMP)  ; LAB_00550c0d
    INC EBX                             ; 00550bf9
    ADD ESI,0x4                         ; 00550bfa
    CMP EBX,dword ptr [EBP]             ; 00550bfd
    JL 0x00550bde                       ; 00550c00
        ;   XREF to: 00550bde (CONDITIONAL_JUMP)  ; LAB_00550bde
    ADD ESP,0x214                       ; 00550c02
        ;   Label: LAB_00550c02
    POP EBP                             ; 00550c08
    POP EDI                             ; 00550c09
    POP ESI                             ; 00550c0a
    POP EBX                             ; 00550c0b
    RET                                 ; 00550c0c
    PUSH EBX                            ; 00550c0d
        ;   Label: LAB_00550c0d
    PUSH EBP                            ; 00550c0e
    CALL engine_pod.cpp_CPod_dismountPod_FUN_005518c0 ; 00550c0f
        ;   XREF to: 005518c0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_005518c0(CPod * this_ptr, int index)
    ADD ESP,0x8                         ; 00550c14
    CMP EBX,dword ptr [EBP]             ; 00550c17
    JL 0x00550bde                       ; 00550c1a
        ;   XREF to: 00550bde (CONDITIONAL_JUMP)  ; LAB_00550bde
    ADD ESP,0x214                       ; 00550c1c
    POP EBP                             ; 00550c22
    POP EDI                             ; 00550c23
    POP ESI                             ; 00550c24
    POP EBX                             ; 00550c25
    RET                                 ; 00550c26

