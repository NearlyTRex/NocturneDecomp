; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_CallReturnZero6_FUN_0060e880()
;
;
; XREF[1]:
;   crt_tls.c_register_thread_data_FUN_0060cbd0 at 0060cbf4
;
; Referenced Globals:
;   void* PTR_unk_ReturnZero6_FUN_0060e850_0068559c = 0060e850
;
; Called Functions:
;   crt_unknown.c_ReturnZero6_FUN_0060e850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060e880
        ;   Label: crt_unknown.c_CallReturnZero6_FUN_0060e880
    PUSH EDX                            ; 0060e884
    CALL dword ptr [0x0068559c]         ; 0060e885 | PTR_unk_ReturnZero6_FUN_0060e850_0068559c
    ADD ESP,0x4                         ; 0060e88b
    RET                                 ; 0060e88e

