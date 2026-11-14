; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_locateFile_FUN_00514c20(CPod *this_ptr,undefined4 param_2,undefined4 param_3,int *param_4)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; int *            Stack[0x10]:4   param_4
;
; Called Functions:
;   engine_dosio.cpp_FUN_00465660
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514c20
        ;   Label: engine_pod.cpp_CPod_locateFile_FUN_00514c20
    PUSH ESI                            ; 00514c21
    PUSH EDI                            ; 00514c22
    PUSH EBP                            ; 00514c23
    SUB ESP,0x214                       ; 00514c24
    MOV EDI,dword ptr [ESP + 0x228]     ; 00514c2a
    MOV EDX,dword ptr [ESP + 0x230]     ; 00514c31
    PUSH EDX                            ; 00514c38
    MOV ECX,dword ptr [ESP + 0x230]     ; 00514c39
    PUSH ECX                            ; 00514c40
    LEA EAX,[ESP + 0x8]                 ; 00514c41
    PUSH EAX                            ; 00514c45
    XOR EBX,EBX                         ; 00514c46
    CALL engine_dosio.cpp_FUN_00465660  ; 00514c48
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    MOV ESI,dword ptr [EDI]             ; 00514c4d
    ADD ESP,0xc                         ; 00514c4f
    TEST ESI,ESI                        ; 00514c52
    JLE 0x00514c96                      ; 00514c54
        ;   XREF to: 00514c96 (CONDITIONAL_JUMP)  ; LAB_00514c96
    MOV ESI,EDI                         ; 00514c56
    MOV EAX,ESP                         ; 00514c58
        ;   Label: LAB_00514c58
    PUSH EAX                            ; 00514c5a
    MOV EAX,dword ptr [ESI + 0x4]       ; 00514c5b
    PUSH EAX                            ; 00514c5e
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30 ; 00514c5f
        ;   XREF to: 00513c30 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00514c64
    TEST EAX,EAX                        ; 00514c67
    JL 0x00514c8c                       ; 00514c69
        ;   XREF to: 00514c8c (CONDITIONAL_JUMP)  ; LAB_00514c8c
    MOV EDX,dword ptr [ESP + 0x234]     ; 00514c6b
    TEST EDX,EDX                        ; 00514c72
    JZ 0x00514c78                       ; 00514c74
        ;   XREF to: 00514c78 (CONDITIONAL_JUMP)  ; LAB_00514c78
    MOV dword ptr [EDX],EAX             ; 00514c76
    SHL EBX,0x2                         ; 00514c78
        ;   Label: LAB_00514c78
    LEA EAX,[EDI + EBX*0x1]             ; 00514c7b
    MOV EAX,dword ptr [EAX + 0x4]       ; 00514c7e
    ADD ESP,0x214                       ; 00514c81
    POP EBP                             ; 00514c87
    POP EDI                             ; 00514c88
    POP ESI                             ; 00514c89
    POP EBX                             ; 00514c8a
    RET                                 ; 00514c8b
    INC EBX                             ; 00514c8c
        ;   Label: LAB_00514c8c
    MOV EBP,dword ptr [EDI]             ; 00514c8d
    ADD ESI,0x4                         ; 00514c8f
    CMP EBX,EBP                         ; 00514c92
    JL 0x00514c58                       ; 00514c94
        ;   XREF to: 00514c58 (CONDITIONAL_JUMP)  ; LAB_00514c58
    XOR EAX,EAX                         ; 00514c96
        ;   Label: LAB_00514c96
    ADD ESP,0x214                       ; 00514c98
    POP EBP                             ; 00514c9e
    POP EDI                             ; 00514c9f
    POP ESI                             ; 00514ca0
    POP EBX                             ; 00514ca1
    RET                                 ; 00514ca2

