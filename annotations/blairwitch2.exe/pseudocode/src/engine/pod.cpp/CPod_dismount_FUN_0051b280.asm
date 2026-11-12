; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismount_FUN_0051b280(CPod *this_ptr,char *filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_findFileNormally_FUN_004609e0
;   engine_pod.cpp_CPod_dismountPod_FUN_0051bf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b280
        ;   Label: engine_pod.cpp_CPod_dismount_FUN_0051b280
    PUSH ESI                            ; 0051b281
    PUSH EDI                            ; 0051b282
    PUSH EBP                            ; 0051b283
    SUB ESP,0x214                       ; 0051b284
    MOV EBP,dword ptr [ESP + 0x228]     ; 0051b28a
    MOV ESI,dword ptr [ESP + 0x22c]     ; 0051b291
    MOV EDI,ESP                         ; 0051b298
    PUSH EDI                            ; 0051b29a
    MOV AL,byte ptr [ESI]               ; 0051b29b
        ;   Label: LAB_0051b29b
    MOV byte ptr [EDI],AL               ; 0051b29d
    CMP AL,0x0                          ; 0051b29f
    JZ 0x0051b2b3                       ; 0051b2a1
        ;   XREF to: 0051b2b3 (CONDITIONAL_JUMP)  ; LAB_0051b2b3
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b2a3
    ADD ESI,0x2                         ; 0051b2a6
    MOV byte ptr [EDI + 0x1],AL         ; 0051b2a9
    ADD EDI,0x2                         ; 0051b2ac
    CMP AL,0x0                          ; 0051b2af
    JNZ 0x0051b29b                      ; 0051b2b1
        ;   XREF to: 0051b29b (CONDITIONAL_JUMP)  ; LAB_0051b29b
    POP EDI                             ; 0051b2b3
        ;   Label: LAB_0051b2b3
    MOV EAX,ESP                         ; 0051b2b4
    PUSH EAX                            ; 0051b2b6
    CALL engine_dosio.cpp_findFileNormally_FUN_004609e0 ; 0051b2b7
        ;   XREF to: 004609e0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFileNormally_FUN_004609e0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 0051b2bc
    TEST EAX,EAX                        ; 0051b2bf
    JZ 0x0051b2f2                       ; 0051b2c1
        ;   XREF to: 0051b2f2 (CONDITIONAL_JUMP)  ; LAB_0051b2f2
    MOV EDX,dword ptr [EBP]             ; 0051b2c3
    XOR EBX,EBX                         ; 0051b2c6
    TEST EDX,EDX                        ; 0051b2c8
    JLE 0x0051b2f2                      ; 0051b2ca
        ;   XREF to: 0051b2f2 (CONDITIONAL_JUMP)  ; LAB_0051b2f2
    MOV ESI,EBP                         ; 0051b2cc
    LEA EAX,[ESP + 0x100]               ; 0051b2ce
        ;   Label: LAB_0051b2ce
    PUSH EAX                            ; 0051b2d5
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051b2d6
    ADD EAX,0x4                         ; 0051b2d9
    PUSH EAX                            ; 0051b2dc
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0051b2dd
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051b2e2
    TEST EAX,EAX                        ; 0051b2e5
    JZ 0x0051b2fd                       ; 0051b2e7
        ;   XREF to: 0051b2fd (CONDITIONAL_JUMP)  ; LAB_0051b2fd
    INC EBX                             ; 0051b2e9
    ADD ESI,0x4                         ; 0051b2ea
    CMP EBX,dword ptr [EBP]             ; 0051b2ed
    JL 0x0051b2ce                       ; 0051b2f0
        ;   XREF to: 0051b2ce (CONDITIONAL_JUMP)  ; LAB_0051b2ce
    ADD ESP,0x214                       ; 0051b2f2
        ;   Label: LAB_0051b2f2
    POP EBP                             ; 0051b2f8
    POP EDI                             ; 0051b2f9
    POP ESI                             ; 0051b2fa
    POP EBX                             ; 0051b2fb
    RET                                 ; 0051b2fc
    PUSH EBX                            ; 0051b2fd
        ;   Label: LAB_0051b2fd
    PUSH EBP                            ; 0051b2fe
    CALL engine_pod.cpp_CPod_dismountPod_FUN_0051bf10 ; 0051b2ff
        ;   XREF to: 0051bf10 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_0051bf10(CPod * this_ptr, int index)
    ADD ESP,0x8                         ; 0051b304
    CMP EBX,dword ptr [EBP]             ; 0051b307
    JL 0x0051b2ce                       ; 0051b30a
        ;   XREF to: 0051b2ce (CONDITIONAL_JUMP)  ; LAB_0051b2ce
    ADD ESP,0x214                       ; 0051b30c
    POP EBP                             ; 0051b312
    POP EDI                             ; 0051b313
    POP ESI                             ; 0051b314
    POP EBX                             ; 0051b315
    RET                                 ; 0051b316

