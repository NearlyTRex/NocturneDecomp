; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_0053bed0(CPodFile *this_ptr,char *filename)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   engine_pod.cpp_CPod_findFile_FUN_0053cf50 at 0053cf6b
;   engine_pod.cpp_findFilesByExtension_FUN_0053c940 at 0053ca8d
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bed0
        ;   Label: engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0
    PUSH ESI                            ; 0053bed1
    PUSH EDI                            ; 0053bed2
    PUSH EBP                            ; 0053bed3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0053bed4
    MOV ESI,dword ptr [EBP + 0x410]     ; 0053bed8
    DEC ESI                             ; 0053bede
    XOR EDI,EDI                         ; 0053bedf
    TEST ESI,ESI                        ; 0053bee1
    JL 0x0053bf1a                       ; 0053bee3
        ;   XREF to: 0053bf1a (CONDITIONAL_JUMP)  ; LAB_0053bf1a
    LEA EDX,[EDI + ESI*0x1]             ; 0053bee5
        ;   Label: LAB_0053bee5
    MOV EAX,EDX                         ; 0053bee8
    SAR EDX,0x1f                        ; 0053beea
    SUB EAX,EDX                         ; 0053beed
    SAR EAX,0x1                         ; 0053beef
    MOV EBX,EAX                         ; 0053bef1
    IMUL EAX,EAX,0x14                   ; 0053bef3
    MOV EDX,dword ptr [EBP + 0x414]     ; 0053bef6
    MOV ECX,dword ptr [EDX + EAX*0x1]   ; 0053befc
    PUSH ECX                            ; 0053beff
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053bf00
    PUSH EAX                            ; 0053bf04
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053bf05
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053bf0a
    TEST EAX,EAX                        ; 0053bf0d
    JZ 0x0053bf24                       ; 0053bf0f
        ;   XREF to: 0053bf24 (CONDITIONAL_JUMP)  ; LAB_0053bf24
    JL 0x0053bf2b                       ; 0053bf11
        ;   XREF to: 0053bf2b (CONDITIONAL_JUMP)  ; LAB_0053bf2b
    LEA EDI,[EBX + 0x1]                 ; 0053bf13
    CMP EDI,ESI                         ; 0053bf16
    JLE 0x0053bee5                      ; 0053bf18
        ;   XREF to: 0053bee5 (CONDITIONAL_JUMP)  ; LAB_0053bee5
    MOV EAX,0xffffffff                  ; 0053bf1a
        ;   Label: LAB_0053bf1a
    POP EBP                             ; 0053bf1f
    POP EDI                             ; 0053bf20
    POP ESI                             ; 0053bf21
    POP EBX                             ; 0053bf22
    RET                                 ; 0053bf23
    MOV EAX,EBX                         ; 0053bf24
        ;   Label: LAB_0053bf24
    POP EBP                             ; 0053bf26
    POP EDI                             ; 0053bf27
    POP ESI                             ; 0053bf28
    POP EBX                             ; 0053bf29
    RET                                 ; 0053bf2a
    LEA ESI,[EBX + -0x1]                ; 0053bf2b
        ;   Label: LAB_0053bf2b
    CMP EDI,ESI                         ; 0053bf2e
    JLE 0x0053bee5                      ; 0053bf30
        ;   XREF to: 0053bee5 (CONDITIONAL_JUMP)  ; LAB_0053bee5
    MOV EAX,0xffffffff                  ; 0053bf32
    POP EBP                             ; 0053bf37
    POP EDI                             ; 0053bf38
    POP ESI                             ; 0053bf39
    POP EBX                             ; 0053bf3a
    RET                                 ; 0053bf3b

