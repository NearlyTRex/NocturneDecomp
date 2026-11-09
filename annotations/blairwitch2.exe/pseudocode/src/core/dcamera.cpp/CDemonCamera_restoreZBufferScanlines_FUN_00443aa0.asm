; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e4ca
;
; Referenced Globals:
;   undefined4 DAT_01c2b64c
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_00492718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443aa0
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0
    PUSH ESI                            ; 00443aa1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00443aa2
    MOV EDX,dword ptr [ESI + 0x148]     ; 00443aa6
    XOR EBX,EBX                         ; 00443aac
    TEST EDX,EDX                        ; 00443aae
    JLE 0x00443aed                      ; 00443ab0
        ;   XREF to: 00443aed (CONDITIONAL_JUMP)  ; LAB_00443aed
    PUSH EDI                            ; 00443ab2
    XOR EDI,EDI                         ; 00443ab3
    MOV EDX,dword ptr [ESI + 0x144]     ; 00443ab5
        ;   Label: LAB_00443ab5
    SHL EDX,0x2                         ; 00443abb
    PUSH EDX                            ; 00443abe
    MOV EDX,dword ptr [ESI + 0x144]     ; 00443abf
    IMUL EDX,EBX                        ; 00443ac5
    MOV ECX,dword ptr [ESI + 0x15c]     ; 00443ac8
    SHL EDX,0x2                         ; 00443ace
    ADD EDX,ECX                         ; 00443ad1
    MOV ECX,dword ptr [EDI + 0x1c2b64c] ; 00443ad3 | DAT_01c2b64c
    INC EBX                             ; 00443ad9
    CALL crt_watcom.c__memcpy_FUN_00492718 ; 00443ada
        ;   XREF to: 00492718 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00492718()
    MOV ECX,dword ptr [ESI + 0x148]     ; 00443adf
    ADD EDI,0x4                         ; 00443ae5
    CMP EBX,ECX                         ; 00443ae8
    JL 0x00443ab5                       ; 00443aea
        ;   XREF to: 00443ab5 (CONDITIONAL_JUMP)  ; LAB_00443ab5
    POP EDI                             ; 00443aec
    POP ESI                             ; 00443aed
        ;   Label: LAB_00443aed
    POP EBX                             ; 00443aee
    RET                                 ; 00443aef

