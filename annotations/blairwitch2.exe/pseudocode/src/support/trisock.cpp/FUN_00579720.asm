; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00579720(char *param_1,char *param_2)
;
;
; XREF[3]:
;   support_trisock.cpp_FUN_00579820 at 00579866
;   support_trisock.cpp_FUN_00579890 at 0057993c
;   support_trisock.cpp_FUN_0057a480 at 0057a640
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_wsock32.c_gethostbyname
;   support_trisock.cpp_FUN_00579550
;   support_trisock.cpp_parseIPComponents_FUN_00578cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579720
        ;   Label: support_trisock.cpp_FUN_00579720
    PUSH ESI                            ; 00579721
    SUB ESP,0x4                         ; 00579722
    MOV ESI,dword ptr [ESP + 0x10]      ; 00579725
    MOV EBX,dword ptr [ESP + 0x14]      ; 00579729
    PUSH ESI                            ; 0057972d
    LEA EAX,[ESP + 0x4]                 ; 0057972e
    PUSH EAX                            ; 00579732
    CALL support_trisock.cpp_parseIPComponents_FUN_00578cf0 ; 00579733
        ;   XREF to: 00578cf0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_00578cf0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 00579738
    TEST EAX,EAX                        ; 0057973b
    JZ 0x0057978c                       ; 0057973d
        ;   XREF to: 0057978c (CONDITIONAL_JUMP)  ; LAB_0057978c
    PUSH EDI                            ; 0057973f
    PUSH 0x2b8                          ; 00579740
    PUSH 0x0                            ; 00579745
    PUSH EBX                            ; 00579747
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00579748
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057974d
    MOV EDI,EBX                         ; 00579750
    PUSH EDI                            ; 00579752
    MOV AL,byte ptr [ESI]               ; 00579753
        ;   Label: LAB_00579753
    MOV byte ptr [EDI],AL               ; 00579755
    CMP AL,0x0                          ; 00579757
    JZ 0x0057976b                       ; 00579759
        ;   XREF to: 0057976b (CONDITIONAL_JUMP)  ; LAB_0057976b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057975b
    ADD ESI,0x2                         ; 0057975e
    MOV byte ptr [EDI + 0x1],AL         ; 00579761
    ADD EDI,0x2                         ; 00579764
    CMP AL,0x0                          ; 00579767
    JNZ 0x00579753                      ; 00579769
        ;   XREF to: 00579753 (CONDITIONAL_JUMP)  ; LAB_00579753
    POP EDI                             ; 0057976b
        ;   Label: LAB_0057976b
    MOV dword ptr [EBX + 0x284],0x1     ; 0057976c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00579776
    MOV dword ptr [EBX + 0x288],EAX     ; 0057977a
    MOV EAX,0x1                         ; 00579780
    POP EDI                             ; 00579785
    ADD ESP,0x4                         ; 00579786
    POP ESI                             ; 00579789
    POP EBX                             ; 0057978a
    RET                                 ; 0057978b
    PUSH EBX                            ; 0057978c
        ;   Label: LAB_0057978c
    PUSH ESI                            ; 0057978d
    CALL crt_wsock32.c_gethostbyname    ; 0057978e
        ;   XREF to: 005c74ba (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyname(char * name)
    PUSH EAX                            ; 00579793
    CALL support_trisock.cpp_FUN_00579550 ; 00579794
        ;   XREF to: 00579550 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579550()
    ADD ESP,0x8                         ; 00579799
    ADD ESP,0x4                         ; 0057979c
    POP ESI                             ; 0057979f
    POP EBX                             ; 005797a0
    RET                                 ; 005797a1

