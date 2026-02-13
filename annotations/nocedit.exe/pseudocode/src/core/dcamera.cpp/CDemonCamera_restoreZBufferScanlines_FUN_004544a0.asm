; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b406
;
; Referenced Globals:
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_004b1a78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004544a0
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
    PUSH ESI                            ; 004544a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004544a2
    MOV EDX,dword ptr [ESI + 0x148]     ; 004544a6
    XOR EBX,EBX                         ; 004544ac
    TEST EDX,EDX                        ; 004544ae
    JLE 0x004544ed                      ; 004544b0
        ;   XREF to: 004544ed (CONDITIONAL_JUMP)  ; LAB_004544ed
    PUSH EDI                            ; 004544b2
    XOR EDI,EDI                         ; 004544b3
    MOV EDX,dword ptr [ESI + 0x144]     ; 004544b5
        ;   Label: LAB_004544b5
    SHL EDX,0x2                         ; 004544bb
    PUSH EDX                            ; 004544be
    MOV EDX,dword ptr [ESI + 0x144]     ; 004544bf
    IMUL EDX,EBX                        ; 004544c5
    MOV ECX,dword ptr [ESI + 0x15c]     ; 004544c8
    SHL EDX,0x2                         ; 004544ce
    ADD EDX,ECX                         ; 004544d1
    MOV ECX,dword ptr [EDI + 0x2cf7d5c] ; 004544d3 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    INC EBX                             ; 004544d9
    CALL crt_watcom.c__memcpy_FUN_004b1a78 ; 004544da
        ;   XREF to: 004b1a78 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_004b1a78(void * dest, void * src, uint size)
    MOV ECX,dword ptr [ESI + 0x148]     ; 004544df
    ADD EDI,0x4                         ; 004544e5
    CMP EBX,ECX                         ; 004544e8
    JL 0x004544b5                       ; 004544ea
        ;   XREF to: 004544b5 (CONDITIONAL_JUMP)  ; LAB_004544b5
    POP EDI                             ; 004544ec
    POP ESI                             ; 004544ed
        ;   Label: LAB_004544ed
    POP EBX                             ; 004544ee
    RET                                 ; 004544ef

