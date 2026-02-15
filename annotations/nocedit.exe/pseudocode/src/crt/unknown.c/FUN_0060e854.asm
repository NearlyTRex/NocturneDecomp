; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0060e854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   void* PTR_crt_thread.c_create_thread_with_sync_FUN_0060f960_00685594 = 0060f960
;
; Called Functions:
;   crt_thread.c_create_thread_with_sync_FUN_0060f960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e854
        ;   Label: crt_unknown.c_FUN_0060e854
    PUSH ESI                            ; 0060e855
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060e856
    PUSH EDX                            ; 0060e85a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060e85b
    PUSH EBX                            ; 0060e85f
    MOV ECX,dword ptr [ESP + 0x18]      ; 0060e860
    PUSH ECX                            ; 0060e864
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060e865
    PUSH ESI                            ; 0060e869
    CALL dword ptr [0x00685594]         ; 0060e86a | PTR_crt_thread.c_create_thread_with_sync_FUN_0060f960_00685594
    ADD ESP,0x10                        ; 0060e870
    POP ESI                             ; 0060e873
    POP EBX                             ; 0060e874
    RET                                 ; 0060e875

