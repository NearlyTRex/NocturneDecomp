; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00451250(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534f35
;
; Referenced Globals:
;   undefined4 DAT_01c60dac
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_00495f68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451250
        ;   Label: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00451250
    PUSH ESI                            ; 00451251
    MOV ESI,dword ptr [ESP + 0xc]       ; 00451252
    MOV EDX,dword ptr [ESI + 0x148]     ; 00451256
    XOR EBX,EBX                         ; 0045125c
    TEST EDX,EDX                        ; 0045125e
    JLE 0x0045129d                      ; 00451260
        ;   XREF to: 0045129d (CONDITIONAL_JUMP)  ; LAB_0045129d
    PUSH EDI                            ; 00451262
    XOR EDI,EDI                         ; 00451263
    MOV ECX,dword ptr [ESI + 0x144]     ; 00451265
        ;   Label: LAB_00451265
    IMUL ECX,EBX                        ; 0045126b
    MOV EDX,dword ptr [ESI + 0x144]     ; 0045126e
    SHL EDX,0x2                         ; 00451274
    MOV EAX,dword ptr [ESI + 0x15c]     ; 00451277
    PUSH EDX                            ; 0045127d
    SHL ECX,0x2                         ; 0045127e
    MOV EDX,dword ptr [EDI + 0x1c60dac] ; 00451281 | DAT_01c60dac
    ADD ECX,EAX                         ; 00451287
    INC EBX                             ; 00451289
    CALL crt_watcom.c__memcpy_FUN_00495f68 ; 0045128a
        ;   XREF to: 00495f68 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00495f68(void * dest, void * src, uint size)
    MOV ECX,dword ptr [ESI + 0x148]     ; 0045128f
    ADD EDI,0x4                         ; 00451295
    CMP EBX,ECX                         ; 00451298
    JL 0x00451265                       ; 0045129a
        ;   XREF to: 00451265 (CONDITIONAL_JUMP)  ; LAB_00451265
    POP EDI                             ; 0045129c
    POP ESI                             ; 0045129d
        ;   Label: LAB_0045129d
    POP EBX                             ; 0045129e
    RET                                 ; 0045129f

