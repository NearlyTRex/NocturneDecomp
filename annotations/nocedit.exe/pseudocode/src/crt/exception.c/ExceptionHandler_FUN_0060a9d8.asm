; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EXCEPTION_DISPOSITION __cdecl crt_exception_c_ExceptionHandler_FUN_0060a9d8(EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord,void *DispatcherContext)
;
; Parameters:
; EXCEPTION_RECORD * Stack[0x4]:4   ExceptionRecord
; void *           Stack[0x8]:4   EstablisherFrame
; CONTEXT *        Stack[0xc]:4   ContextRecord
; void *           Stack[0x10]:4   DispatcherContext
; Local Variables:
; PEXCEPTION_RECORD Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_exception.c_installExceptionHandler_FUN_0060aba8 at 0060abd1
;
; Referenced Globals:
;   void*[7] g_FPExceptionJumpTable
;   EXIT_PROCESS_FUNC* g_ExitProcessFunc = 00211d12
;   UNHANDLED_EXCEPTION_FILTER_FUNC* g_UnhandledExceptionFilterFunc = 0021227a
;   EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = 00000000
;   EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = 00000000
;   BYTE g_SignalHandlingActive
;
; Called Functions:
;   crt_fpu.c_ClearFPUExceptions_FUN_0060ce50
;   crt_signal.c_raiseFPE_FUN_0060d028
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a9d8
        ;   Label: crt_exception.c_ExceptionHandler_FUN_0060a9d8
    PUSH ESI                            ; 0060a9d9
    PUSH EDI                            ; 0060a9da
    SUB ESP,0x8                         ; 0060a9db
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060a9de
    MOV EDI,dword ptr [ESP + 0x20]      ; 0060a9e2
    TEST byte ptr [ESI + 0x4],0x6       ; 0060a9e6
    JNZ 0x0060ab9a                      ; 0060a9ea
        ;   XREF to: 0060ab9a (CONDITIONAL_JUMP)  ; LAB_0060ab9a
    MOV EAX,dword ptr [ESI]             ; 0060a9f0
    ADD EAX,0x3fffff73                  ; 0060a9f2
    CMP EAX,0x6                         ; 0060a9f7
    JA 0x0060ab22                       ; 0060a9fa
        ;   XREF to: 0060ab22 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x60a9bc] ; 0060aa00 | caseD_c0000092 | caseD_c000008d | caseD_c000008f
        ;   Label: switchD
    TEST byte ptr [EDI + 0x21],0x2      ; 0060aa08
        ;   Label: caseD_c0000092
    JZ 0x0060aa18                       ; 0060aa0c
        ;   XREF to: 0060aa18 (CONDITIONAL_JUMP)  ; LAB_0060aa18
    MOV EBX,0x8a                        ; 0060aa0e
    JMP 0x0060aae3                      ; 0060aa13
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EBX,0x8b                        ; 0060aa18
        ;   Label: LAB_0060aa18
    JMP 0x0060aae3                      ; 0060aa1d
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EBX,0x82                        ; 0060aa22
        ;   Label: caseD_c000008d
    JMP 0x0060aae3                      ; 0060aa27
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EBX,0x86                        ; 0060aa2c
        ;   Label: caseD_c000008f
    JMP 0x0060aae3                      ; 0060aa31
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EBX,0x84                        ; 0060aa36
        ;   Label: caseD_c0000091
    JMP 0x0060aae3                      ; 0060aa3b
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EBX,0x85                        ; 0060aa40
        ;   Label: caseD_c0000093
    JMP 0x0060aae3                      ; 0060aa45
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV EAX,dword ptr [EDI + 0x28]      ; 0060aa4a
        ;   Label: caseD_c0000090
    MOV DX,word ptr [EAX]               ; 0060aa4d
    MOV EBX,0x81                        ; 0060aa50
    CMP DX,0xfad9                       ; 0060aa55
    JNZ 0x0060aa66                      ; 0060aa5a
        ;   XREF to: 0060aa66 (CONDITIONAL_JUMP)  ; LAB_0060aa66
    MOV EBX,0x88                        ; 0060aa5c
    JMP 0x0060aae3                      ; 0060aa61
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    CMP DX,0xf1d9                       ; 0060aa66
        ;   Label: LAB_0060aa66
    JNZ 0x0060aa77                      ; 0060aa6b
        ;   XREF to: 0060aa77 (CONDITIONAL_JUMP)  ; LAB_0060aa77
    MOV EBX,0x8e                        ; 0060aa6d
    JMP 0x0060aae3                      ; 0060aa72
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    JNZ 0x0060aa83                      ; 0060aa77
        ;   XREF to: 0060aa83 (CONDITIONAL_JUMP)  ; LAB_0060aa83
        ;   Label: LAB_0060aa77
    MOV EBX,0x8f                        ; 0060aa79
    JMP 0x0060aae3                      ; 0060aa7e
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    MOV DH,byte ptr [EAX]               ; 0060aa83
        ;   Label: LAB_0060aa83
    CMP DH,0xdb                         ; 0060aa85
    JZ 0x0060aa8f                       ; 0060aa88
        ;   XREF to: 0060aa8f (CONDITIONAL_JUMP)  ; LAB_0060aa8f
    CMP DH,0xdf                         ; 0060aa8a
    JNZ 0x0060aa9f                      ; 0060aa8d
        ;   XREF to: 0060aa9f (CONDITIONAL_JUMP)  ; LAB_0060aa9f
    MOV CL,byte ptr [EAX + 0x1]         ; 0060aa8f
        ;   Label: LAB_0060aa8f
    AND CL,0x30                         ; 0060aa92
    CMP CL,0x10                         ; 0060aa95
    JNZ 0x0060aa9f                      ; 0060aa98
        ;   XREF to: 0060aa9f (CONDITIONAL_JUMP)  ; LAB_0060aa9f
    MOV EBX,0x8d                        ; 0060aa9a
    TEST byte ptr [EAX],0x1             ; 0060aa9f
        ;   Label: LAB_0060aa9f
    JNZ 0x0060aade                      ; 0060aaa2
        ;   XREF to: 0060aade (CONDITIONAL_JUMP)  ; LAB_0060aade
    MOV AL,byte ptr [EAX + 0x1]         ; 0060aaa4
    AND AL,0x30                         ; 0060aaa7
    CMP AL,0x30                         ; 0060aaa9
    JNZ 0x0060aade                      ; 0060aaab
        ;   XREF to: 0060aade (CONDITIONAL_JUMP)  ; LAB_0060aade
    MOV ECX,dword ptr [EDI + 0x20]      ; 0060aaad
    AND ECX,0xffff                      ; 0060aab0
    MOV EAX,dword ptr [EDI + 0x24]      ; 0060aab6
    SHL ECX,0x2                         ; 0060aab9
    AND EAX,0xffff                      ; 0060aabc
    SHR CX,0xd                          ; 0060aac1
    AND ECX,0xffff                      ; 0060aac5
    ADD ECX,ECX                         ; 0060aacb
    SHR EAX,CL                          ; 0060aacd
    AND EAX,0x1                         ; 0060aacf
    CMP EAX,0x1                         ; 0060aad2
    JNZ 0x0060aade                      ; 0060aad5
        ;   XREF to: 0060aade (CONDITIONAL_JUMP)  ; LAB_0060aade
    MOV EBX,0x83                        ; 0060aad7
        ;   Label: caseD_c000008e
    JMP 0x0060aae3                      ; 0060aadc
        ;   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)  ; LAB_0060aae3
    CMP EBX,-0x1                        ; 0060aade
        ;   Label: LAB_0060aade
    JZ 0x0060ab22                       ; 0060aae1
        ;   XREF to: 0060ab22 (CONDITIONAL_JUMP)  ; default
    MOV byte ptr [0x03f9c014],0x1       ; 0060aae3 | g_SignalHandlingActive
        ;   Label: LAB_0060aae3
    CALL crt_fpu.c_ClearFPUExceptions_FUN_0060ce50 ; 0060aaea
        ;   XREF to: 0060ce50 (UNCONDITIONAL_CALL)  ; void crt_fpu.c_ClearFPUExceptions_FUN_0060ce50()
    PUSH EBX                            ; 0060aaef
    CALL crt_signal.c_raiseFPE_FUN_0060d028 ; 0060aaf0
        ;   XREF to: 0060d028 (UNCONDITIONAL_CALL)  ; int crt_signal.c_raiseFPE_FUN_0060d028(int fpe_code)
    ADD ESP,0x4                         ; 0060aaf5
    CMP EAX,-0x1                        ; 0060aaf8
    JZ 0x0060ab7b                       ; 0060aafb
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    CMP byte ptr [0x03f9c014],0x0       ; 0060ab01 | g_SignalHandlingActive
    JZ 0x0060ab7b                       ; 0060ab08
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    MOV BX,word ptr [EDI + 0x20]        ; 0060ab0e
    XOR BL,BL                           ; 0060ab12
    AND BH,0x7f                         ; 0060ab14
    XOR EAX,EAX                         ; 0060ab17
    MOV word ptr [EDI + 0x20],BX        ; 0060ab19
    JMP 0x0060ab9f                      ; 0060ab1d
        ;   XREF to: 0060ab9f (UNCONDITIONAL_JUMP)  ; LAB_0060ab9f
    CMP dword ptr [0x006853f4],0x0      ; 0060ab22 | g_ExceptionCleanup
        ;   Label: default
    JZ 0x0060ab7b                       ; 0060ab29
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    MOV EBX,0x1                         ; 0060ab2b
    MOV ECX,dword ptr [ESI]             ; 0060ab30
        ;   Label: LAB_0060ab30
    PUSH ECX                            ; 0060ab32
    PUSH EBX                            ; 0060ab33
    CALL dword ptr [0x006853f0]         ; 0060ab34 | g_UserExceptionFilter
    ADD ESP,0x8                         ; 0060ab3a
    TEST EAX,EAX                        ; 0060ab3d
    JZ 0x0060ab75                       ; 0060ab3f
        ;   XREF to: 0060ab75 (CONDITIONAL_JUMP)  ; LAB_0060ab75
    CMP EAX,0x1                         ; 0060ab41
    JZ 0x0060ab7b                       ; 0060ab44
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    CMP EAX,0x2                         ; 0060ab46
    JZ 0x0060ab7b                       ; 0060ab49
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    CMP EAX,0x3                         ; 0060ab4b
    JZ 0x0060ab7b                       ; 0060ab4e
        ;   XREF to: 0060ab7b (CONDITIONAL_JUMP)  ; LAB_0060ab7b
    MOV DL,0x1                          ; 0060ab50
    PUSH EBX                            ; 0060ab52
    MOV byte ptr [0x03f9c014],DL        ; 0060ab53 | g_SignalHandlingActive
    CALL dword ptr [0x006853f4]         ; 0060ab59 | g_ExceptionCleanup
    MOV DH,byte ptr [0x03f9c014]        ; 0060ab5f | g_SignalHandlingActive
    ADD ESP,0x4                         ; 0060ab65
    TEST DH,DH                          ; 0060ab68
    JZ 0x0060ab75                       ; 0060ab6a
        ;   XREF to: 0060ab75 (CONDITIONAL_JUMP)  ; LAB_0060ab75
    XOR EAX,EAX                         ; 0060ab6c
    ADD ESP,0x8                         ; 0060ab6e
    POP EDI                             ; 0060ab71
    POP ESI                             ; 0060ab72
    POP EBX                             ; 0060ab73
    RET                                 ; 0060ab74
    INC EBX                             ; 0060ab75
        ;   Label: LAB_0060ab75
    CMP EBX,0xc                         ; 0060ab76
    JLE 0x0060ab30                      ; 0060ab79
        ;   XREF to: 0060ab30 (CONDITIONAL_JUMP)  ; LAB_0060ab30
    MOV EAX,ESP                         ; 0060ab7b
        ;   Label: LAB_0060ab7b
    PUSH EAX                            ; 0060ab7d
    MOV dword ptr [ESP + 0x4],ESI       ; 0060ab7e
    MOV dword ptr [ESP + 0x8],EDI       ; 0060ab82
    CALL dword ptr CS:[0x61165c]        ; 0060ab86 | g_UnhandledExceptionFilterFunc
    TEST EAX,EAX                        ; 0060ab8d
    JZ 0x0060ab9a                       ; 0060ab8f
        ;   XREF to: 0060ab9a (CONDITIONAL_JUMP)  ; LAB_0060ab9a
    PUSH -0x1                           ; 0060ab91
    CALL dword ptr CS:[0x611534]        ; 0060ab93 | g_ExitProcessFunc
    MOV EAX,0x1                         ; 0060ab9a
        ;   Label: LAB_0060ab9a
    ADD ESP,0x8                         ; 0060ab9f
        ;   Label: LAB_0060ab9f
    POP EDI                             ; 0060aba2
    POP ESI                             ; 0060aba3
    POP EBX                             ; 0060aba4
    RET                                 ; 0060aba5

