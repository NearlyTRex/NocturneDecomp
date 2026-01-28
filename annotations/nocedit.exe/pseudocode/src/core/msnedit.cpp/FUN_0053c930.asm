; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_FUN_0053c930(void)
;
;
; Called Functions:
;   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c930
        ;   Label: core_msnedit.cpp_FUN_0053c930
    PUSH ESI                            ; 0053c931
    PUSH EDI                            ; 0053c932
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053c933
    MOV EDX,dword ptr [ECX + 0x18]      ; 0053c937
    MOV EBX,dword ptr [ECX + 0x20]      ; 0053c93a
    ADD EDX,EBX                         ; 0053c93d
    MOV EAX,EDX                         ; 0053c93f
    SAR EDX,0x1f                        ; 0053c941
    SUB EAX,EDX                         ; 0053c944
    SAR EAX,0x1                         ; 0053c946
    MOV ESI,dword ptr [ECX + 0x1c]      ; 0053c948
    MOV EDX,dword ptr [ECX + 0x14]      ; 0053c94b
    ADD EDX,ESI                         ; 0053c94e
    PUSH EAX                            ; 0053c950
    MOV EAX,EDX                         ; 0053c951
    SAR EDX,0x1f                        ; 0053c953
    SUB EAX,EDX                         ; 0053c956
    SAR EAX,0x1                         ; 0053c958
    PUSH EAX                            ; 0053c95a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053c95b
    PUSH EDI                            ; 0053c95f
    PUSH ECX                            ; 0053c960
    CALL core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 ; 0053c961
        ;   XREF to: 0053c970 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_BeginAndEndScene_FUN_0053c970()
    ADD ESP,0x10                        ; 0053c966
    POP EDI                             ; 0053c969
    POP ESI                             ; 0053c96a
    POP EBX                             ; 0053c96b
    RET                                 ; 0053c96c

