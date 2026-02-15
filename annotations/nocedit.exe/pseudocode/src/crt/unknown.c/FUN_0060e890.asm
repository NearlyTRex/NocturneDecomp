; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0060e890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   void* PTR_crt_thread.c_create_thread_with_sync_FUN_0060f960_00685594 = 0060f960
;   void* PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598 = 0060fa58
;   void* PTR_unk_ReturnZero6_FUN_0060e850_0068559c = 0060e850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e890
        ;   Label: crt_unknown.c_FUN_0060e890
    PUSH ESI                            ; 0060e891
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060e892
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060e896
    MOV ECX,dword ptr [ESP + 0x14]      ; 0060e89a
    TEST EBX,EBX                        ; 0060e89e
    JZ 0x0060e8b1                       ; 0060e8a0
        ;   XREF to: 0060e8b1 (CONDITIONAL_JUMP)  ; LAB_0060e8b1
    MOV EAX,dword ptr [EBX]             ; 0060e8a2
    MOV EDX,dword ptr [0x00685594]      ; 0060e8a4 | PTR_crt_thread.c_create_thread_with_sync_FUN_0060f960_00685594
    MOV [0x00685594],EAX                ; 0060e8aa | PTR_crt_thread.c_create_thread_with_sync_FUN_0060f960_00685594
    MOV dword ptr [EBX],EDX             ; 0060e8af
    TEST ESI,ESI                        ; 0060e8b1
        ;   Label: LAB_0060e8b1
    JZ 0x0060e8c4                       ; 0060e8b3
        ;   XREF to: 0060e8c4 (CONDITIONAL_JUMP)  ; LAB_0060e8c4
    MOV EAX,dword ptr [ESI]             ; 0060e8b5
    MOV EDX,dword ptr [0x00685598]      ; 0060e8b7 | PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598
    MOV [0x00685598],EAX                ; 0060e8bd | PTR_crt_thread.c_exit_thread_FUN_0060fa58_00685598
    MOV dword ptr [ESI],EDX             ; 0060e8c2
    TEST ECX,ECX                        ; 0060e8c4
        ;   Label: LAB_0060e8c4
    JZ 0x0060e8d7                       ; 0060e8c6
        ;   XREF to: 0060e8d7 (CONDITIONAL_JUMP)  ; LAB_0060e8d7
    MOV EAX,dword ptr [ECX]             ; 0060e8c8
    MOV EDX,dword ptr [0x0068559c]      ; 0060e8ca | PTR_unk_ReturnZero6_FUN_0060e850_0068559c
    MOV [0x0068559c],EAX                ; 0060e8d0 | PTR_unk_ReturnZero6_FUN_0060e850_0068559c
    MOV dword ptr [ECX],EDX             ; 0060e8d5
    POP ESI                             ; 0060e8d7
        ;   Label: LAB_0060e8d7
    POP EBX                             ; 0060e8d8
    RET                                 ; 0060e8d9

