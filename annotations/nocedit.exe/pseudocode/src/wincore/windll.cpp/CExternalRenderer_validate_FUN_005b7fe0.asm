; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl bool wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; CExternalRenderer * Stack[0x8]:4   capabilities
;
; XREF[2]:
;   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 at 005b5f34
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 at 005b67f5
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7fe0
        ;   Label: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
    PUSH ESI                            ; 005b7fe1
    PUSH EDI                            ; 005b7fe2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b7fe3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b7fe7
    TEST ESI,ESI                        ; 005b7feb
    SETZ AL                             ; 005b7fed
    XOR EBX,EBX                         ; 005b7ff0
    MOV BL,AL                           ; 005b7ff2
    TEST ESI,ESI                        ; 005b7ff4
    JZ 0x005b80f8                       ; 005b7ff6 | LAB_005b80f8
        ;   XREF to: 005b80f8 (CONDITIONAL_JUMP)
    MOV DX,word ptr [EDI + 0x204]       ; 005b7ffc
    CMP DX,word ptr [ESI + 0x204]       ; 005b8003
    JNZ 0x005b80fe                      ; 005b800a | LAB_005b80fe
        ;   XREF to: 005b80fe (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005b8010
        ;   Label: LAB_005b8010
    MOV EBX,EAX                         ; 005b8015
        ;   Label: LAB_005b8015
    TEST EAX,EAX                        ; 005b8017
    JZ 0x005b8031                       ; 005b8019 | LAB_005b8031
        ;   XREF to: 005b8031 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x208]     ; 005b801b
    MOV EDX,dword ptr [ESI + 0x208]     ; 005b8021
    NOT EAX                             ; 005b8027
    AND EAX,EDX                         ; 005b8029
    JNZ 0x005b810f                      ; 005b802b | LAB_005b810f
        ;   XREF to: 005b810f (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 005b8031
        ;   Label: LAB_005b8031
    JZ 0x005b808f                       ; 005b8033 | LAB_005b808f
        ;   XREF to: 005b808f (CONDITIONAL_JUMP)
    CMP word ptr [ESI + 0x200],0x0      ; 005b8035
    JZ 0x005b8060                       ; 005b803d | LAB_005b8060
        ;   XREF to: 005b8060 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x1fe]     ; 005b803f
    MOV EDX,dword ptr [ESI + 0x1fe]     ; 005b8045
    SAR EAX,0x10                        ; 005b804b
    SAR EDX,0x10                        ; 005b804e
    SAR EAX,0x8                         ; 005b8051
    SAR EDX,0x8                         ; 005b8054
    XOR EBX,EBX                         ; 005b8057
    CMP EAX,EDX                         ; 005b8059
    SETZ AL                             ; 005b805b
    MOV BL,AL                           ; 005b805e
    TEST EBX,EBX                        ; 005b8060
        ;   Label: LAB_005b8060
    JZ 0x005b808f                       ; 005b8062 | LAB_005b808f
        ;   XREF to: 005b808f (CONDITIONAL_JUMP)
    CMP word ptr [ESI + 0x202],0x0      ; 005b8064
    JZ 0x005b808f                       ; 005b806c | LAB_005b808f
        ;   XREF to: 005b808f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x200]     ; 005b806e
    MOV EAX,dword ptr [ESI + 0x200]     ; 005b8074
    SAR EDX,0x10                        ; 005b807a
    SAR EAX,0x10                        ; 005b807d
    SAR EDX,0x8                         ; 005b8080
    SAR EAX,0x8                         ; 005b8083
    XOR EBX,EBX                         ; 005b8086
    CMP EDX,EAX                         ; 005b8088
    SETZ AL                             ; 005b808a
    MOV BL,AL                           ; 005b808d
    TEST EBX,EBX                        ; 005b808f
        ;   Label: LAB_005b808f
    JZ 0x005b80bb                       ; 005b8091 | LAB_005b80bb
        ;   XREF to: 005b80bb (CONDITIONAL_JUMP)
    CMP byte ptr [ESI + 0x100],0x0      ; 005b8093
    JZ 0x005b80bb                       ; 005b809a | LAB_005b80bb
        ;   XREF to: 005b80bb (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x100]               ; 005b809c
    PUSH EAX                            ; 005b80a2
    LEA EAX,[ESI + 0x100]               ; 005b80a3
    PUSH EAX                            ; 005b80a9
    XOR EBX,EBX                         ; 005b80aa
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005b80ac | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b80b1
    TEST EAX,EAX                        ; 005b80b4
    SETZ AL                             ; 005b80b6
    MOV BL,AL                           ; 005b80b9
    TEST EBX,EBX                        ; 005b80bb
        ;   Label: LAB_005b80bb
    JZ 0x005b80f8                       ; 005b80bd | LAB_005b80f8
        ;   XREF to: 005b80f8 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x20c],0x10    ; 005b80bf
    JNZ 0x005b810f                      ; 005b80c6 | LAB_005b810f
        ;   XREF to: 005b810f (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005b80c8
    TEST EBX,EBX                        ; 005b80ca
    JZ 0x005b80f8                       ; 005b80cc | LAB_005b80f8
        ;   XREF to: 005b80f8 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 005b80ce
    MOV ECX,EDI                         ; 005b80d0
    MOV EDI,dword ptr [ECX + 0x210]     ; 005b80d2
        ;   Label: LAB_005b80d2
    MOV ESI,dword ptr [EAX + 0x210]     ; 005b80d8
    ADD ECX,0x4                         ; 005b80de
    CMP ESI,EDI                         ; 005b80e1
    SETZ BL                             ; 005b80e3
    ADD EAX,0x4                         ; 005b80e6
    MOVZX ESI,BL                        ; 005b80e9
    INC EDX                             ; 005b80ec
    MOV EBX,ESI                         ; 005b80ed
    CMP EDX,0x10                        ; 005b80ef
    JGE 0x005b80f8                      ; 005b80f2 | LAB_005b80f8
        ;   XREF to: 005b80f8 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005b80f4
    JNZ 0x005b80d2                      ; 005b80f6 | LAB_005b80d2
        ;   XREF to: 005b80d2 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005b80f8
        ;   Label: LAB_005b80f8
    POP EDI                             ; 005b80fa
    POP ESI                             ; 005b80fb
    POP EBX                             ; 005b80fc
    RET                                 ; 005b80fd
    CMP DX,-0x1                         ; 005b80fe
        ;   Label: LAB_005b80fe
    JZ 0x005b8010                       ; 005b8102 | LAB_005b8010
        ;   XREF to: 005b8010 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b8108
    JMP 0x005b8015                      ; 005b810a | LAB_005b8015
        ;   XREF to: 005b8015 (UNCONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005b810f
        ;   Label: LAB_005b810f
    MOV EAX,EBX                         ; 005b8111
    POP EDI                             ; 005b8113
    POP ESI                             ; 005b8114
    POP EBX                             ; 005b8115
    RET                                 ; 005b8116

