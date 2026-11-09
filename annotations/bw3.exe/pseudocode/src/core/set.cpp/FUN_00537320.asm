; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00537320(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042f510 at 0042f6a1
;
; Referenced Globals:
;   undefined4 DAT_0203ad30
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537320
        ;   Label: core_set.cpp_FUN_00537320
    PUSH ESI                            ; 00537321
    PUSH EDI                            ; 00537322
    PUSH EBP                            ; 00537323
    MOV ESI,dword ptr [ESP + 0x18]      ; 00537324
    MOV EDX,dword ptr [0x0203ad30]      ; 00537328 | DAT_0203ad30
    XOR ECX,ECX                         ; 0053732e
    TEST EDX,EDX                        ; 00537330
    JLE 0x00537351                      ; 00537332
        ;   XREF to: 00537351 (CONDITIONAL_JUMP)  ; LAB_00537351
    LEA EBX,[EDX*0x4 + 0x0]             ; 00537334
    XOR EAX,EAX                         ; 0053733b
    MOV EDI,dword ptr [EAX + 0x203ad34] ; 0053733d
        ;   Label: LAB_0053733d
    LEA EDX,[EAX + 0x4]                 ; 00537343
    CMP ESI,EDI                         ; 00537346
    JZ 0x00537356                       ; 00537348
        ;   XREF to: 00537356 (CONDITIONAL_JUMP)  ; LAB_00537356
    MOV EAX,EDX                         ; 0053734a
    INC ECX                             ; 0053734c
    CMP EDX,EBX                         ; 0053734d
    JL 0x0053733d                       ; 0053734f
        ;   XREF to: 0053733d (CONDITIONAL_JUMP)  ; LAB_0053733d
    POP EBP                             ; 00537351
        ;   Label: LAB_00537351
    POP EDI                             ; 00537352
    POP ESI                             ; 00537353
    POP EBX                             ; 00537354
    RET                                 ; 00537355
    MOV EBP,dword ptr [0x0203ad30]      ; 00537356 | DAT_0203ad30
        ;   Label: LAB_00537356
    DEC EBP                             ; 0053735c
    MOV EBX,EBP                         ; 0053735d
    SUB EBX,ECX                         ; 0053735f
    LEA ECX,[EBX*0x4 + 0x0]             ; 00537361
    PUSH ECX                            ; 00537368
    ADD EDX,0x203ad34                   ; 00537369
    PUSH EDX                            ; 0053736f
    ADD EAX,0x203ad34                   ; 00537370
    PUSH EAX                            ; 00537375
    MOV dword ptr [0x0203ad30],EBP      ; 00537376 | DAT_0203ad30
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0053737c
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00537381
    POP EBP                             ; 00537384
    POP EDI                             ; 00537385
    POP ESI                             ; 00537386
    POP EBX                             ; 00537387
    RET                                 ; 00537388

