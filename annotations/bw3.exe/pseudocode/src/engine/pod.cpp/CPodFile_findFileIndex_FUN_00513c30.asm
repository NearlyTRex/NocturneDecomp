; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_00513c30(CPodFile *this_ptr,char *filename)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   engine_pod.cpp_CPod_findFile_FUN_00514cb0 at 00514ccb
;   engine_pod.cpp_CPod_locateFile_FUN_00514c20 at 00514c5f
;   engine_pod.cpp_findFilesByExtension_FUN_005146a0 at 005147ed
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513c30
        ;   Label: engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30
    PUSH ESI                            ; 00513c31
    PUSH EDI                            ; 00513c32
    PUSH EBP                            ; 00513c33
    MOV EBP,dword ptr [ESP + 0x14]      ; 00513c34
    MOV ESI,dword ptr [EBP + 0x410]     ; 00513c38
    DEC ESI                             ; 00513c3e
    XOR EDI,EDI                         ; 00513c3f
    TEST ESI,ESI                        ; 00513c41
    JL 0x00513c7a                       ; 00513c43
        ;   XREF to: 00513c7a (CONDITIONAL_JUMP)  ; LAB_00513c7a
    LEA EDX,[EDI + ESI*0x1]             ; 00513c45
        ;   Label: LAB_00513c45
    MOV EAX,EDX                         ; 00513c48
    SAR EDX,0x1f                        ; 00513c4a
    SUB EAX,EDX                         ; 00513c4d
    SAR EAX,0x1                         ; 00513c4f
    MOV EBX,EAX                         ; 00513c51
    IMUL EAX,EAX,0x14                   ; 00513c53
    MOV EDX,dword ptr [EBP + 0x414]     ; 00513c56
    MOV ECX,dword ptr [EDX + EAX*0x1]   ; 00513c5c
    PUSH ECX                            ; 00513c5f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00513c60
    PUSH EAX                            ; 00513c64
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00513c65
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00513c6a
    TEST EAX,EAX                        ; 00513c6d
    JZ 0x00513c84                       ; 00513c6f
        ;   XREF to: 00513c84 (CONDITIONAL_JUMP)  ; LAB_00513c84
    JL 0x00513c8b                       ; 00513c71
        ;   XREF to: 00513c8b (CONDITIONAL_JUMP)  ; LAB_00513c8b
    LEA EDI,[EBX + 0x1]                 ; 00513c73
    CMP EDI,ESI                         ; 00513c76
    JLE 0x00513c45                      ; 00513c78
        ;   XREF to: 00513c45 (CONDITIONAL_JUMP)  ; LAB_00513c45
    MOV EAX,0xffffffff                  ; 00513c7a
        ;   Label: LAB_00513c7a
    POP EBP                             ; 00513c7f
    POP EDI                             ; 00513c80
    POP ESI                             ; 00513c81
    POP EBX                             ; 00513c82
    RET                                 ; 00513c83
    MOV EAX,EBX                         ; 00513c84
        ;   Label: LAB_00513c84
    POP EBP                             ; 00513c86
    POP EDI                             ; 00513c87
    POP ESI                             ; 00513c88
    POP EBX                             ; 00513c89
    RET                                 ; 00513c8a
    LEA ESI,[EBX + -0x1]                ; 00513c8b
        ;   Label: LAB_00513c8b
    CMP EDI,ESI                         ; 00513c8e
    JLE 0x00513c45                      ; 00513c90
        ;   XREF to: 00513c45 (CONDITIONAL_JUMP)  ; LAB_00513c45
    MOV EAX,0xffffffff                  ; 00513c92
    POP EBP                             ; 00513c97
    POP EDI                             ; 00513c98
    POP ESI                             ; 00513c99
    POP EBX                             ; 00513c9a
    RET                                 ; 00513c9b

