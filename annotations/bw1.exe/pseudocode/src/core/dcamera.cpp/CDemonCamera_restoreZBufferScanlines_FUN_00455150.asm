; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f7aa
;
; Referenced Globals:
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_004ab0c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455150
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150
    PUSH ESI                            ; 00455151
    MOV ESI,dword ptr [ESP + 0xc]       ; 00455152
    MOV EDX,dword ptr [ESI + 0x148]     ; 00455156
    XOR EBX,EBX                         ; 0045515c
    TEST EDX,EDX                        ; 0045515e
    JLE 0x0045519d                      ; 00455160
        ;   XREF to: 0045519d (CONDITIONAL_JUMP)  ; LAB_0045519d
    PUSH EDI                            ; 00455162
    XOR EDI,EDI                         ; 00455163
    MOV EDX,dword ptr [ESI + 0x144]     ; 00455165
        ;   Label: LAB_00455165
    SHL EDX,0x2                         ; 0045516b
    PUSH EDX                            ; 0045516e
    MOV EDX,dword ptr [ESI + 0x144]     ; 0045516f
    IMUL EDX,EBX                        ; 00455175
    MOV ECX,dword ptr [ESI + 0x15c]     ; 00455178
    SHL EDX,0x2                         ; 0045517e
    ADD EDX,ECX                         ; 00455181
    MOV ECX,dword ptr [EDI + 0x1c4480c] ; 00455183 | DAT_01c4480c | DAT_01c44810
    INC EBX                             ; 00455189
    CALL crt_watcom.c__memcpy_FUN_004ab0c8 ; 0045518a
        ;   XREF to: 004ab0c8 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_004ab0c8()
    MOV ECX,dword ptr [ESI + 0x148]     ; 0045518f
    ADD EDI,0x4                         ; 00455195
    CMP EBX,ECX                         ; 00455198
    JL 0x00455165                       ; 0045519a
        ;   XREF to: 00455165 (CONDITIONAL_JUMP)  ; LAB_00455165
    POP EDI                             ; 0045519c
    POP ESI                             ; 0045519d
        ;   Label: LAB_0045519d
    POP EBX                             ; 0045519e
    RET                                 ; 0045519f

