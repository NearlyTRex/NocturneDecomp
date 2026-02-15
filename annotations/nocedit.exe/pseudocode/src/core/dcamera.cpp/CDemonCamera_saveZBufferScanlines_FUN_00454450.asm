; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b3c8
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

    PUSH EBX                            ; 00454450
        ;   Label: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
    PUSH ESI                            ; 00454451
    MOV ESI,dword ptr [ESP + 0xc]       ; 00454452
    MOV EDX,dword ptr [ESI + 0x148]     ; 00454456
    XOR EBX,EBX                         ; 0045445c
    TEST EDX,EDX                        ; 0045445e
    JLE 0x0045449d                      ; 00454460
        ;   XREF to: 0045449d (CONDITIONAL_JUMP)  ; LAB_0045449d
    PUSH EDI                            ; 00454462
    XOR EDI,EDI                         ; 00454463
    MOV ECX,dword ptr [ESI + 0x144]     ; 00454465
        ;   Label: LAB_00454465
    IMUL ECX,EBX                        ; 0045446b
    MOV EDX,dword ptr [ESI + 0x144]     ; 0045446e
    SHL EDX,0x2                         ; 00454474
    MOV EAX,dword ptr [ESI + 0x15c]     ; 00454477
    PUSH EDX                            ; 0045447d
    SHL ECX,0x2                         ; 0045447e
    MOV EDX,dword ptr [EDI + 0x2cf7d5c] ; 00454481 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    ADD ECX,EAX                         ; 00454487
    INC EBX                             ; 00454489
    CALL crt_watcom.c__memcpy_FUN_004b1a78 ; 0045448a
        ;   XREF to: 004b1a78 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_004b1a78(void * dest, void * src, uint size)
    MOV ECX,dword ptr [ESI + 0x148]     ; 0045448f
    ADD EDI,0x4                         ; 00454495
    CMP EBX,ECX                         ; 00454498
    JL 0x00454465                       ; 0045449a
        ;   XREF to: 00454465 (CONDITIONAL_JUMP)  ; LAB_00454465
    POP EDI                             ; 0045449c
    POP ESI                             ; 0045449d
        ;   Label: LAB_0045449d
    POP EBX                             ; 0045449e
    RET                                 ; 0045449f

