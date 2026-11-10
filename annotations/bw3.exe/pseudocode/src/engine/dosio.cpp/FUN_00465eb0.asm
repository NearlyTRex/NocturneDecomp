; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_FUN_00465eb0(char *input_path,char *drive,char *output_path)
;
; Parameters:
; char *           Stack[0x4]:4   input_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   output_path
;
; XREF[1]:
;   unkafter_dosio.cpp_FUN_00466040 at 004660ca
;
; Called Functions:
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465eb0
        ;   Label: engine_dosio.cpp_FUN_00465eb0
    PUSH EDI                            ; 00465eb1
    SUB ESP,0x300                       ; 00465eb2
    MOV EBX,dword ptr [ESP + 0x314]     ; 00465eb8
    MOV ECX,ESP                         ; 00465ebf
    PUSH ECX                            ; 00465ec1
    LEA ECX,[ESP + 0x204]               ; 00465ec2
    PUSH ECX                            ; 00465ec9
    LEA ECX,[ESP + 0x108]               ; 00465eca
    PUSH ECX                            ; 00465ed1
    MOV EDX,dword ptr [ESP + 0x31c]     ; 00465ed2
    PUSH EDX                            ; 00465ed9
    MOV ECX,dword ptr [ESP + 0x31c]     ; 00465eda
    PUSH ECX                            ; 00465ee1
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00465ee2
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00465ee7
    MOV ECX,ESP                         ; 00465eea
    PUSH ECX                            ; 00465eec
    LEA ECX,[ESP + 0x204]               ; 00465eed
    PUSH ECX                            ; 00465ef4
    LEA ECX,[ESP + 0x108]               ; 00465ef5
    PUSH ECX                            ; 00465efc
    PUSH 0x0                            ; 00465efd
    PUSH EBX                            ; 00465eff
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 00465f00
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00465f05
    TEST EBX,EBX                        ; 00465f08
    JZ 0x00465f11                       ; 00465f0a
        ;   XREF to: 00465f11 (CONDITIONAL_JUMP)  ; LAB_00465f11
    CMP byte ptr [EBX],0x0              ; 00465f0c
    JNZ 0x00465f1a                      ; 00465f0f
        ;   XREF to: 00465f1a (CONDITIONAL_JUMP)  ; LAB_00465f1a
    ADD ESP,0x300                       ; 00465f11
        ;   Label: LAB_00465f11
    POP EDI                             ; 00465f17
    POP EBX                             ; 00465f18
    RET                                 ; 00465f19
    MOV EDI,EBX                         ; 00465f1a
        ;   Label: LAB_00465f1a
    SUB ECX,ECX                         ; 00465f1c
    DEC ECX                             ; 00465f1e
    XOR EAX,EAX                         ; 00465f1f
    SCASB.REPNE ES:EDI                  ; 00465f21
    NOT ECX                             ; 00465f23
    DEC ECX                             ; 00465f25
    ADD ECX,EBX                         ; 00465f26
    MOV DL,byte ptr [ECX + -0x1]        ; 00465f28
    CMP DL,0x5c                         ; 00465f2b
    JZ 0x00465f11                       ; 00465f2e
        ;   XREF to: 00465f11 (CONDITIONAL_JUMP)  ; LAB_00465f11
    CMP DL,0x2f                         ; 00465f30
    JZ 0x00465f11                       ; 00465f33
        ;   XREF to: 00465f11 (CONDITIONAL_JUMP)  ; LAB_00465f11
    PUSH ESI                            ; 00465f35
    MOV ESI,0x5bc042                    ; 00465f36
    MOV EDI,EBX                         ; 00465f3b
    PUSH EDI                            ; 00465f3d
    SUB ECX,ECX                         ; 00465f3e
    DEC ECX                             ; 00465f40
    MOV AL,0x0                          ; 00465f41
    SCASB.REPNE ES:EDI                  ; 00465f43
    DEC EDI                             ; 00465f45
    MOV AL,byte ptr [ESI]               ; 00465f46
        ;   Label: LAB_00465f46
    MOV byte ptr [EDI],AL               ; 00465f48
    CMP AL,0x0                          ; 00465f4a
    JZ 0x00465f5e                       ; 00465f4c
        ;   XREF to: 00465f5e (CONDITIONAL_JUMP)  ; LAB_00465f5e
    MOV AL,byte ptr [ESI + 0x1]         ; 00465f4e
    ADD ESI,0x2                         ; 00465f51
    MOV byte ptr [EDI + 0x1],AL         ; 00465f54
    ADD EDI,0x2                         ; 00465f57
    CMP AL,0x0                          ; 00465f5a
    JNZ 0x00465f46                      ; 00465f5c
        ;   XREF to: 00465f46 (CONDITIONAL_JUMP)  ; LAB_00465f46
    POP EDI                             ; 00465f5e
        ;   Label: LAB_00465f5e
    POP ESI                             ; 00465f5f
    ADD ESP,0x300                       ; 00465f60
    POP EDI                             ; 00465f66
    POP EBX                             ; 00465f67
    RET                                 ; 00465f68

