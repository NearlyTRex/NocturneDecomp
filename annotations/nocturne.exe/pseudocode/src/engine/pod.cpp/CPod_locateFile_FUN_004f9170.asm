; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_pod_cpp_CPod_locateFile_FUN_004f9170(int *param_1,char *param_2,char *param_3,int *param_4)
;
; Local Variables:
; undefined        Stack[-0x224]:1  local_224
;
; Called Functions:
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9170
        ;   Label: engine_pod.cpp_CPod_locateFile_FUN_004f9170
    PUSH ESI                            ; 004f9171
    PUSH EDI                            ; 004f9172
    PUSH EBP                            ; 004f9173
    SUB ESP,0x214                       ; 004f9174
    MOV EDI,dword ptr [ESP + 0x228]     ; 004f917a
    MOV EDX,dword ptr [ESP + 0x230]     ; 004f9181
    PUSH EDX                            ; 004f9188
    MOV ECX,dword ptr [ESP + 0x230]     ; 004f9189
    PUSH ECX                            ; 004f9190
    LEA EAX,[ESP + 0x8]                 ; 004f9191
    PUSH EAX                            ; 004f9195
    XOR EBX,EBX                         ; 004f9196
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 004f9198
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_getRelativeFilePath_FUN_00456700(char * dest_path, char * directory, char * filename)
    MOV ESI,dword ptr [EDI]             ; 004f919d
    ADD ESP,0xc                         ; 004f919f
    TEST ESI,ESI                        ; 004f91a2
    JLE 0x004f91e6                      ; 004f91a4
        ;   XREF to: 004f91e6 (CONDITIONAL_JUMP)  ; LAB_004f91e6
    MOV ESI,EDI                         ; 004f91a6
    MOV EAX,ESP                         ; 004f91a8
        ;   Label: LAB_004f91a8
    PUSH EAX                            ; 004f91aa
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f91ab
    PUSH EAX                            ; 004f91ae
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150 ; 004f91af
        ;   XREF to: 004f8150 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f91b4
    TEST EAX,EAX                        ; 004f91b7
    JL 0x004f91dc                       ; 004f91b9
        ;   XREF to: 004f91dc (CONDITIONAL_JUMP)  ; LAB_004f91dc
    MOV EDX,dword ptr [ESP + 0x234]     ; 004f91bb
    TEST EDX,EDX                        ; 004f91c2
    JZ 0x004f91c8                       ; 004f91c4
        ;   XREF to: 004f91c8 (CONDITIONAL_JUMP)  ; LAB_004f91c8
    MOV dword ptr [EDX],EAX             ; 004f91c6
    SHL EBX,0x2                         ; 004f91c8
        ;   Label: LAB_004f91c8
    LEA EAX,[EDI + EBX*0x1]             ; 004f91cb
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f91ce
    ADD ESP,0x214                       ; 004f91d1
    POP EBP                             ; 004f91d7
    POP EDI                             ; 004f91d8
    POP ESI                             ; 004f91d9
    POP EBX                             ; 004f91da
    RET                                 ; 004f91db
    INC EBX                             ; 004f91dc
        ;   Label: LAB_004f91dc
    MOV EBP,dword ptr [EDI]             ; 004f91dd
    ADD ESI,0x4                         ; 004f91df
    CMP EBX,EBP                         ; 004f91e2
    JL 0x004f91a8                       ; 004f91e4
        ;   XREF to: 004f91a8 (CONDITIONAL_JUMP)  ; LAB_004f91a8
    XOR EAX,EAX                         ; 004f91e6
        ;   Label: LAB_004f91e6
    ADD ESP,0x214                       ; 004f91e8
    POP EBP                             ; 004f91ee
    POP EDI                             ; 004f91ef
    POP ESI                             ; 004f91f0
    POP EBX                             ; 004f91f1
    RET                                 ; 004f91f2

