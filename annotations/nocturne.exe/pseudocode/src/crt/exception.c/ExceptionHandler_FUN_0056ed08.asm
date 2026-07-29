; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EXCEPTION_DISPOSITION __cdecl crt_exception_c_ExceptionHandler_FUN_0056ed08(EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord,void *DispatcherContext)
;
; Parameters:
; EXCEPTION_RECORD * Stack[0x4]:4   ExceptionRecord
; void *           Stack[0x8]:4   EstablisherFrame
; CONTEXT *        Stack[0xc]:4   ContextRecord
; void *           Stack[0x10]:4   DispatcherContext
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_exception.c_installExceptionHandler_FUN_0056eed8 at 0056ef01
;
; Referenced Globals:
;   void* switchdataD_0056ecec = 0056ed52
;   void* PTR_ExitProcess_005754b4 = 00175b8a
;   void* PTR_UnhandledExceptionFilter_005755d0 = 001760b8
;   undefined4 DAT_005c1f6c
;   undefined4 DAT_005c1f70
;   undefined4 DAT_02de5c24
;
; Called Functions:
;   crt_signal.c_raiseFPE_FUN_005716d8
;   ExitProcess
;   FUN_00571500
;   UnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ed08
        ;   Label: crt_exception.c_ExceptionHandler_FUN_0056ed08
    PUSH ESI                            ; 0056ed09
    PUSH EDI                            ; 0056ed0a
    SUB ESP,0x8                         ; 0056ed0b
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056ed0e
    MOV EDI,dword ptr [ESP + 0x20]      ; 0056ed12
    TEST byte ptr [ESI + 0x4],0x6       ; 0056ed16
    JNZ 0x0056eeca                      ; 0056ed1a
        ;   XREF to: 0056eeca (CONDITIONAL_JUMP)  ; LAB_0056eeca
    MOV EAX,dword ptr [ESI]             ; 0056ed20
    ADD EAX,0x3fffff73                  ; 0056ed22
    CMP EAX,0x6                         ; 0056ed27
    JA 0x0056ee52                       ; 0056ed2a
        ;   XREF to: 0056ee52 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x56ecec] ; 0056ed30 | caseD_c000008d | caseD_c000008e | caseD_c000008f
        ;   Label: switchD
    TEST byte ptr [EDI + 0x21],0x2      ; 0056ed38
        ;   Label: caseD_c0000092
    JZ 0x0056ed48                       ; 0056ed3c
        ;   XREF to: 0056ed48 (CONDITIONAL_JUMP)  ; LAB_0056ed48
    MOV EBX,0x8a                        ; 0056ed3e
    JMP 0x0056ee13                      ; 0056ed43
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EBX,0x8b                        ; 0056ed48
        ;   Label: LAB_0056ed48
    JMP 0x0056ee13                      ; 0056ed4d
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EBX,0x82                        ; 0056ed52
        ;   Label: caseD_c000008d
    JMP 0x0056ee13                      ; 0056ed57
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EBX,0x86                        ; 0056ed5c
        ;   Label: caseD_c000008f
    JMP 0x0056ee13                      ; 0056ed61
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EBX,0x84                        ; 0056ed66
        ;   Label: caseD_c0000091
    JMP 0x0056ee13                      ; 0056ed6b
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EBX,0x85                        ; 0056ed70
        ;   Label: caseD_c0000093
    JMP 0x0056ee13                      ; 0056ed75
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV EAX,dword ptr [EDI + 0x28]      ; 0056ed7a
        ;   Label: caseD_c0000090
    MOV DX,word ptr [EAX]               ; 0056ed7d
    MOV EBX,0x81                        ; 0056ed80
    CMP DX,0xfad9                       ; 0056ed85
    JNZ 0x0056ed96                      ; 0056ed8a
        ;   XREF to: 0056ed96 (CONDITIONAL_JUMP)  ; LAB_0056ed96
    MOV EBX,0x88                        ; 0056ed8c
    JMP 0x0056ee13                      ; 0056ed91
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    CMP DX,0xf1d9                       ; 0056ed96
        ;   Label: LAB_0056ed96
    JNZ 0x0056eda7                      ; 0056ed9b
        ;   XREF to: 0056eda7 (CONDITIONAL_JUMP)  ; LAB_0056eda7
    MOV EBX,0x8e                        ; 0056ed9d
    JMP 0x0056ee13                      ; 0056eda2
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    JNZ 0x0056edb3                      ; 0056eda7
        ;   XREF to: 0056edb3 (CONDITIONAL_JUMP)  ; LAB_0056edb3
        ;   Label: LAB_0056eda7
    MOV EBX,0x8f                        ; 0056eda9
    JMP 0x0056ee13                      ; 0056edae
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    MOV DH,byte ptr [EAX]               ; 0056edb3
        ;   Label: LAB_0056edb3
    CMP DH,0xdb                         ; 0056edb5
    JZ 0x0056edbf                       ; 0056edb8
        ;   XREF to: 0056edbf (CONDITIONAL_JUMP)  ; LAB_0056edbf
    CMP DH,0xdf                         ; 0056edba
    JNZ 0x0056edcf                      ; 0056edbd
        ;   XREF to: 0056edcf (CONDITIONAL_JUMP)  ; LAB_0056edcf
    MOV CL,byte ptr [EAX + 0x1]         ; 0056edbf
        ;   Label: LAB_0056edbf
    AND CL,0x30                         ; 0056edc2
    CMP CL,0x10                         ; 0056edc5
    JNZ 0x0056edcf                      ; 0056edc8
        ;   XREF to: 0056edcf (CONDITIONAL_JUMP)  ; LAB_0056edcf
    MOV EBX,0x8d                        ; 0056edca
    TEST byte ptr [EAX],0x1             ; 0056edcf
        ;   Label: LAB_0056edcf
    JNZ 0x0056ee0e                      ; 0056edd2
        ;   XREF to: 0056ee0e (CONDITIONAL_JUMP)  ; LAB_0056ee0e
    MOV AL,byte ptr [EAX + 0x1]         ; 0056edd4
    AND AL,0x30                         ; 0056edd7
    CMP AL,0x30                         ; 0056edd9
    JNZ 0x0056ee0e                      ; 0056eddb
        ;   XREF to: 0056ee0e (CONDITIONAL_JUMP)  ; LAB_0056ee0e
    MOV ECX,dword ptr [EDI + 0x20]      ; 0056eddd
    AND ECX,0xffff                      ; 0056ede0
    MOV EAX,dword ptr [EDI + 0x24]      ; 0056ede6
    SHL ECX,0x2                         ; 0056ede9
    AND EAX,0xffff                      ; 0056edec
    SHR CX,0xd                          ; 0056edf1
    AND ECX,0xffff                      ; 0056edf5
    ADD ECX,ECX                         ; 0056edfb
    SHR EAX,CL                          ; 0056edfd
    AND EAX,0x1                         ; 0056edff
    CMP EAX,0x1                         ; 0056ee02
    JNZ 0x0056ee0e                      ; 0056ee05
        ;   XREF to: 0056ee0e (CONDITIONAL_JUMP)  ; LAB_0056ee0e
    MOV EBX,0x83                        ; 0056ee07
        ;   Label: caseD_c000008e
    JMP 0x0056ee13                      ; 0056ee0c
        ;   XREF to: 0056ee13 (UNCONDITIONAL_JUMP)  ; LAB_0056ee13
    CMP EBX,-0x1                        ; 0056ee0e
        ;   Label: LAB_0056ee0e
    JZ 0x0056ee52                       ; 0056ee11
        ;   XREF to: 0056ee52 (CONDITIONAL_JUMP)  ; default
    MOV byte ptr [0x02de5c24],0x1       ; 0056ee13 | DAT_02de5c24
        ;   Label: LAB_0056ee13
    CALL FUN_00571500                   ; 0056ee1a
        ;   XREF to: 00571500 (UNCONDITIONAL_CALL)  ; void FUN_00571500()
    PUSH EBX                            ; 0056ee1f
    CALL crt_signal.c_raiseFPE_FUN_005716d8 ; 0056ee20
        ;   XREF to: 005716d8 (UNCONDITIONAL_CALL)  ; int crt_signal.c_raiseFPE_FUN_005716d8(int fpe_code)
    ADD ESP,0x4                         ; 0056ee25
    CMP EAX,-0x1                        ; 0056ee28
    JZ 0x0056eeab                       ; 0056ee2b
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    CMP byte ptr [0x02de5c24],0x0       ; 0056ee31 | DAT_02de5c24
    JZ 0x0056eeab                       ; 0056ee38
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    MOV BX,word ptr [EDI + 0x20]        ; 0056ee3e
    XOR BL,BL                           ; 0056ee42
    AND BH,0x7f                         ; 0056ee44
    XOR EAX,EAX                         ; 0056ee47
    MOV word ptr [EDI + 0x20],BX        ; 0056ee49
    JMP 0x0056eecf                      ; 0056ee4d
        ;   XREF to: 0056eecf (UNCONDITIONAL_JUMP)  ; LAB_0056eecf
    CMP dword ptr [0x005c1f70],0x0      ; 0056ee52 | DAT_005c1f70
        ;   Label: default
    JZ 0x0056eeab                       ; 0056ee59
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    MOV EBX,0x1                         ; 0056ee5b
    MOV ECX,dword ptr [ESI]             ; 0056ee60
        ;   Label: LAB_0056ee60
    PUSH ECX                            ; 0056ee62
    PUSH EBX                            ; 0056ee63
    CALL dword ptr [0x005c1f6c]         ; 0056ee64 | DAT_005c1f6c
    ADD ESP,0x8                         ; 0056ee6a
    TEST EAX,EAX                        ; 0056ee6d
    JZ 0x0056eea5                       ; 0056ee6f
        ;   XREF to: 0056eea5 (CONDITIONAL_JUMP)  ; LAB_0056eea5
    CMP EAX,0x1                         ; 0056ee71
    JZ 0x0056eeab                       ; 0056ee74
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    CMP EAX,0x2                         ; 0056ee76
    JZ 0x0056eeab                       ; 0056ee79
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    CMP EAX,0x3                         ; 0056ee7b
    JZ 0x0056eeab                       ; 0056ee7e
        ;   XREF to: 0056eeab (CONDITIONAL_JUMP)  ; LAB_0056eeab
    MOV DL,0x1                          ; 0056ee80
    PUSH EBX                            ; 0056ee82
    MOV byte ptr [0x02de5c24],DL        ; 0056ee83 | DAT_02de5c24
    CALL dword ptr [0x005c1f70]         ; 0056ee89 | DAT_005c1f70
    MOV DH,byte ptr [0x02de5c24]        ; 0056ee8f | DAT_02de5c24
    ADD ESP,0x4                         ; 0056ee95
    TEST DH,DH                          ; 0056ee98
    JZ 0x0056eea5                       ; 0056ee9a
        ;   XREF to: 0056eea5 (CONDITIONAL_JUMP)  ; LAB_0056eea5
    XOR EAX,EAX                         ; 0056ee9c
    ADD ESP,0x8                         ; 0056ee9e
    POP EDI                             ; 0056eea1
    POP ESI                             ; 0056eea2
    POP EBX                             ; 0056eea3
    RET                                 ; 0056eea4
    INC EBX                             ; 0056eea5
        ;   Label: LAB_0056eea5
    CMP EBX,0xc                         ; 0056eea6
    JLE 0x0056ee60                      ; 0056eea9
        ;   XREF to: 0056ee60 (CONDITIONAL_JUMP)  ; LAB_0056ee60
    MOV EAX,ESP                         ; 0056eeab
        ;   Label: LAB_0056eeab
    PUSH EAX                            ; 0056eead
    MOV dword ptr [ESP + 0x4],ESI       ; 0056eeae
    MOV dword ptr [ESP + 0x8],EDI       ; 0056eeb2
    CALL dword ptr CS:[0x5755d0]        ; 0056eeb6 | PTR_UnhandledExceptionFilter_005755d0
    TEST EAX,EAX                        ; 0056eebd
    JZ 0x0056eeca                       ; 0056eebf
        ;   XREF to: 0056eeca (CONDITIONAL_JUMP)  ; LAB_0056eeca
    PUSH -0x1                           ; 0056eec1
    CALL dword ptr CS:[0x5754b4]        ; 0056eec3 | PTR_ExitProcess_005754b4
    MOV EAX,0x1                         ; 0056eeca
        ;   Label: LAB_0056eeca
    ADD ESP,0x8                         ; 0056eecf
        ;   Label: LAB_0056eecf
    POP EDI                             ; 0056eed2
    POP ESI                             ; 0056eed3
    POP EBX                             ; 0056eed4
    RET                                 ; 0056eed5

