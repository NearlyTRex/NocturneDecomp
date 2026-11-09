; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e495
;
; Referenced Globals:
;   undefined4 DAT_01c2b64c
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_00492718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443a50
        ;   Label: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50
    PUSH ESI                            ; 00443a51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00443a52
    MOV EDX,dword ptr [ESI + 0x148]     ; 00443a56
    XOR EBX,EBX                         ; 00443a5c
    TEST EDX,EDX                        ; 00443a5e
    JLE 0x00443a9d                      ; 00443a60
        ;   XREF to: 00443a9d (CONDITIONAL_JUMP)  ; LAB_00443a9d
    PUSH EDI                            ; 00443a62
    XOR EDI,EDI                         ; 00443a63
    MOV ECX,dword ptr [ESI + 0x144]     ; 00443a65
        ;   Label: LAB_00443a65
    IMUL ECX,EBX                        ; 00443a6b
    MOV EDX,dword ptr [ESI + 0x144]     ; 00443a6e
    SHL EDX,0x2                         ; 00443a74
    MOV EAX,dword ptr [ESI + 0x15c]     ; 00443a77
    PUSH EDX                            ; 00443a7d
    SHL ECX,0x2                         ; 00443a7e
    MOV EDX,dword ptr [EDI + 0x1c2b64c] ; 00443a81 | DAT_01c2b64c
    ADD ECX,EAX                         ; 00443a87
    INC EBX                             ; 00443a89
    CALL crt_watcom.c__memcpy_FUN_00492718 ; 00443a8a
        ;   XREF to: 00492718 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00492718()
    MOV ECX,dword ptr [ESI + 0x148]     ; 00443a8f
    ADD EDI,0x4                         ; 00443a95
    CMP EBX,ECX                         ; 00443a98
    JL 0x00443a65                       ; 00443a9a
        ;   XREF to: 00443a65 (CONDITIONAL_JUMP)  ; LAB_00443a65
    POP EDI                             ; 00443a9c
    POP ESI                             ; 00443a9d
        ;   Label: LAB_00443a9d
    POP EBX                             ; 00443a9e
    RET                                 ; 00443a9f

