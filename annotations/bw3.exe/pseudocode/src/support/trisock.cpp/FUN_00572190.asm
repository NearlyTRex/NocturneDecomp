; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00572190(char *param_1,char *param_2)
;
;
; XREF[3]:
;   support_trisock.cpp_FUN_0056fef0 at 0056ff9c
;   support_trisock.cpp_FUN_00570adc at 00570ca0
;   support_trisock.cpp_FUN_00572290 at 005722d6
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_wsock32.c_gethostbyname
;   support_trisock.cpp_FUN_00571fc0
;   support_trisock.cpp_parseIPComponents_FUN_0056f5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572190
        ;   Label: support_trisock.cpp_FUN_00572190
    PUSH ESI                            ; 00572191
    SUB ESP,0x4                         ; 00572192
    MOV ESI,dword ptr [ESP + 0x10]      ; 00572195
    MOV EBX,dword ptr [ESP + 0x14]      ; 00572199
    PUSH ESI                            ; 0057219d
    LEA EAX,[ESP + 0x4]                 ; 0057219e
    PUSH EAX                            ; 005721a2
    CALL support_trisock.cpp_parseIPComponents_FUN_0056f5c0 ; 005721a3
        ;   XREF to: 0056f5c0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_0056f5c0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 005721a8
    TEST EAX,EAX                        ; 005721ab
    JZ 0x005721fc                       ; 005721ad
        ;   XREF to: 005721fc (CONDITIONAL_JUMP)  ; LAB_005721fc
    PUSH EDI                            ; 005721af
    PUSH 0x2b8                          ; 005721b0
    PUSH 0x0                            ; 005721b5
    PUSH EBX                            ; 005721b7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005721b8
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005721bd
    MOV EDI,EBX                         ; 005721c0
    PUSH EDI                            ; 005721c2
    MOV AL,byte ptr [ESI]               ; 005721c3
        ;   Label: LAB_005721c3
    MOV byte ptr [EDI],AL               ; 005721c5
    CMP AL,0x0                          ; 005721c7
    JZ 0x005721db                       ; 005721c9
        ;   XREF to: 005721db (CONDITIONAL_JUMP)  ; LAB_005721db
    MOV AL,byte ptr [ESI + 0x1]         ; 005721cb
    ADD ESI,0x2                         ; 005721ce
    MOV byte ptr [EDI + 0x1],AL         ; 005721d1
    ADD EDI,0x2                         ; 005721d4
    CMP AL,0x0                          ; 005721d7
    JNZ 0x005721c3                      ; 005721d9
        ;   XREF to: 005721c3 (CONDITIONAL_JUMP)  ; LAB_005721c3
    POP EDI                             ; 005721db
        ;   Label: LAB_005721db
    MOV dword ptr [EBX + 0x284],0x1     ; 005721dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 005721e6
    MOV dword ptr [EBX + 0x288],EAX     ; 005721ea
    MOV EAX,0x1                         ; 005721f0
    POP EDI                             ; 005721f5
    ADD ESP,0x4                         ; 005721f6
    POP ESI                             ; 005721f9
    POP EBX                             ; 005721fa
    RET                                 ; 005721fb
    PUSH EBX                            ; 005721fc
        ;   Label: LAB_005721fc
    PUSH ESI                            ; 005721fd
    CALL crt_wsock32.c_gethostbyname    ; 005721fe
        ;   XREF to: 005b2556 (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyname(char * name)
    PUSH EAX                            ; 00572203
    CALL support_trisock.cpp_FUN_00571fc0 ; 00572204
        ;   XREF to: 00571fc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00571fc0()
    ADD ESP,0x8                         ; 00572209
    ADD ESP,0x4                         ; 0057220c
    POP ESI                             ; 0057220f
    POP EBX                             ; 00572210
    RET                                 ; 00572211

