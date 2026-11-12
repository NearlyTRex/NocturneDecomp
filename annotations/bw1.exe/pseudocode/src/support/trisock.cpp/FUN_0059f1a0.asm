; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059f1a0(char *param_1,char *param_2)
;
;
; XREF[3]:
;   support_trisock.cpp_FUN_0059cf00 at 0059cfac
;   support_trisock.cpp_FUN_0059daec at 0059dcb0
;   support_trisock.cpp_FUN_0059f2a0 at 0059f2e6
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_wsock32.c_gethostbyname
;   support_trisock.cpp_FUN_0059efd0
;   support_trisock.cpp_parseIPComponents_FUN_0059c5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f1a0
        ;   Label: support_trisock.cpp_FUN_0059f1a0
    PUSH ESI                            ; 0059f1a1
    SUB ESP,0x4                         ; 0059f1a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059f1a5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059f1a9
    PUSH ESI                            ; 0059f1ad
    LEA EAX,[ESP + 0x4]                 ; 0059f1ae
    PUSH EAX                            ; 0059f1b2
    CALL support_trisock.cpp_parseIPComponents_FUN_0059c5d0 ; 0059f1b3
        ;   XREF to: 0059c5d0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_0059c5d0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 0059f1b8
    TEST EAX,EAX                        ; 0059f1bb
    JZ 0x0059f20c                       ; 0059f1bd
        ;   XREF to: 0059f20c (CONDITIONAL_JUMP)  ; LAB_0059f20c
    PUSH EDI                            ; 0059f1bf
    PUSH 0x2b8                          ; 0059f1c0
    PUSH 0x0                            ; 0059f1c5
    PUSH EBX                            ; 0059f1c7
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059f1c8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059f1cd
    MOV EDI,EBX                         ; 0059f1d0
    PUSH EDI                            ; 0059f1d2
    MOV AL,byte ptr [ESI]               ; 0059f1d3
        ;   Label: LAB_0059f1d3
    MOV byte ptr [EDI],AL               ; 0059f1d5
    CMP AL,0x0                          ; 0059f1d7
    JZ 0x0059f1eb                       ; 0059f1d9
        ;   XREF to: 0059f1eb (CONDITIONAL_JUMP)  ; LAB_0059f1eb
    MOV AL,byte ptr [ESI + 0x1]         ; 0059f1db
    ADD ESI,0x2                         ; 0059f1de
    MOV byte ptr [EDI + 0x1],AL         ; 0059f1e1
    ADD EDI,0x2                         ; 0059f1e4
    CMP AL,0x0                          ; 0059f1e7
    JNZ 0x0059f1d3                      ; 0059f1e9
        ;   XREF to: 0059f1d3 (CONDITIONAL_JUMP)  ; LAB_0059f1d3
    POP EDI                             ; 0059f1eb
        ;   Label: LAB_0059f1eb
    MOV dword ptr [EBX + 0x284],0x1     ; 0059f1ec
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f1f6
    MOV dword ptr [EBX + 0x288],EAX     ; 0059f1fa
    MOV EAX,0x1                         ; 0059f200
    POP EDI                             ; 0059f205
    ADD ESP,0x4                         ; 0059f206
    POP ESI                             ; 0059f209
    POP EBX                             ; 0059f20a
    RET                                 ; 0059f20b
    PUSH EBX                            ; 0059f20c
        ;   Label: LAB_0059f20c
    PUSH ESI                            ; 0059f20d
    CALL crt_wsock32.c_gethostbyname    ; 0059f20e
        ;   XREF to: 005cf7c6 (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyname(char * name)
    PUSH EAX                            ; 0059f213
    CALL support_trisock.cpp_FUN_0059efd0 ; 0059f214
        ;   XREF to: 0059efd0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059efd0()
    ADD ESP,0x8                         ; 0059f219
    ADD ESP,0x4                         ; 0059f21c
    POP ESI                             ; 0059f21f
    POP EBX                             ; 0059f220
    RET                                 ; 0059f221

