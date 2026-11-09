; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00460fa0(char *param_1,byte *param_2)
;
;
; XREF[2]:
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0 at 00460f26
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 at 00460e9f
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_005d0c95
;   TerminatedCString s_CFileFinder_convertStruc_005d0ca7
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_FUN_005b9d26
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460fa0
        ;   Label: engine_dosio.cpp_FUN_00460fa0
    PUSH ESI                            ; 00460fa1
    PUSH EDI                            ; 00460fa2
    PUSH EBP                            ; 00460fa3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00460fa4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00460fa8
    PUSH 0x100                          ; 00460fac
    PUSH 0x0                            ; 00460fb1
    PUSH ESI                            ; 00460fb3
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00460fb4
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00460fb9
    PUSH 0xff                           ; 00460fbc
    MOV EBX,EDI                         ; 00460fc1
    LEA EAX,[EDI + 0x2c]                ; 00460fc3
    PUSH EAX                            ; 00460fc6
    PUSH ESI                            ; 00460fc7
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 00460fc8
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    MOV dword ptr [ESI + 0x100],0x0     ; 00460fcd
    MOV AH,byte ptr [EDI]               ; 00460fd7
    ADD ESP,0xc                         ; 00460fd9
    TEST AH,0x20                        ; 00460fdc
    JNZ 0x0046103f                      ; 00460fdf
        ;   XREF to: 0046103f (CONDITIONAL_JUMP)  ; LAB_0046103f
    TEST byte ptr [EBX],0x2             ; 00460fe1
        ;   Label: LAB_00460fe1
    JZ 0x00460fed                       ; 00460fe4
        ;   XREF to: 00460fed (CONDITIONAL_JUMP)  ; LAB_00460fed
    OR byte ptr [ESI + 0x100],0x2       ; 00460fe6
    TEST byte ptr [EBX],0x10            ; 00460fed
        ;   Label: LAB_00460fed
    JZ 0x00460ff9                       ; 00460ff0
        ;   XREF to: 00460ff9 (CONDITIONAL_JUMP)  ; LAB_00460ff9
    OR byte ptr [ESI + 0x100],0x4       ; 00460ff2
    TEST byte ptr [EBX],0x1             ; 00460ff9
        ;   Label: LAB_00460ff9
    JZ 0x00461005                       ; 00460ffc
        ;   XREF to: 00461005 (CONDITIONAL_JUMP)  ; LAB_00461005
    OR byte ptr [ESI + 0x100],0x8       ; 00460ffe
    CMP dword ptr [EBX + 0x1c],0x0      ; 00461005
        ;   Label: LAB_00461005
    JNZ 0x00461048                      ; 00461009
        ;   XREF to: 00461048 (CONDITIONAL_JUMP)  ; LAB_00461048
    CMP dword ptr [EBX + 0x20],0x7fffffff ; 0046100b
    JA 0x00461048                       ; 00461012
        ;   XREF to: 00461048 (CONDITIONAL_JUMP)  ; LAB_00461048
    MOV EAX,dword ptr [EBX + 0x20]      ; 00461014
        ;   Label: LAB_00461014
    MOV dword ptr [ESI + 0x104],EAX     ; 00461017
    XOR ECX,ECX                         ; 0046101d
    MOV EAX,dword ptr [EBX + 0x14]      ; 0046101f
    MOV EDX,dword ptr [EBX + 0x18]      ; 00461022
    MOV EBX,0x989680                    ; 00461025
    CALL crt_unknown.c_FUN_005b9d26     ; 0046102a
        ;   XREF to: 005b9d26 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d26()
    SUB EAX,0xb61082f0                  ; 0046102f
    MOV dword ptr [ESI + 0x108],EAX     ; 00461034
    POP EBP                             ; 0046103a
    POP EDI                             ; 0046103b
    POP ESI                             ; 0046103c
    POP EBX                             ; 0046103d
    RET                                 ; 0046103e
    OR byte ptr [ESI + 0x100],0x1       ; 0046103f
        ;   Label: LAB_0046103f
    JMP 0x00460fe1                      ; 00461046
        ;   XREF to: 00460fe1 (UNCONDITIONAL_JUMP)  ; LAB_00460fe1
    MOV EDI,0x5d0c95                    ; 00461048 | = "..\\engine\\dosio.c"
        ;   Label: LAB_00461048
    MOV EBP,0x2ff                       ; 0046104d
    PUSH 0x5d0ca7                       ; 00461052 | = "CFileFinder::convertStruct - file too..."
    MOV dword ptr [0x01d046a0],EDI      ; 00461057 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0046105d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00461063
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00461068
    JMP 0x00461014                      ; 0046106b
        ;   XREF to: 00461014 (UNCONDITIONAL_JUMP)  ; LAB_00461014

