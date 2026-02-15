; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004532db
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurOutputBuffer
;   undefined4 DAT_00ba8db8
;   undefined4 DAT_00bbb9b7
;   char[241][320] g_CoronaBlurWorkBuffer
;   undefined4 DAT_00bbb9b9
;   undefined4 DAT_00bbbaf7
;   undefined4 DAT_00bbbaf8
;   undefined4 DAT_00bbbc38
;
; Called Functions:
;   core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004509b0
        ;   Label: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
    PUSH ESI                            ; 004509b1
    PUSH EDI                            ; 004509b2
    PUSH EBP                            ; 004509b3
    SUB ESP,0x4                         ; 004509b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004509b7
    MOV EAX,0xbbb9b8                    ; 004509bb | g_CoronaBlurWorkBuffer
    MOV EBP,0xba8c78                    ; 004509c0 | g_CoronaBlurOutputBuffer
    MOV EDI,0x1                         ; 004509c5
    ADD EAX,0x140                       ; 004509ca
        ;   Label: LAB_004509ca
    ADD EBP,0x140                       ; 004509cf
    MOV dword ptr [ESP],EAX             ; 004509d5 | DAT_00bbbaf8 | DAT_00bbbc38
    MOV EAX,dword ptr [ESI + 0x154]     ; 004509d8
    DEC EAX                             ; 004509de
    CMP EDI,EAX                         ; 004509df
    JL 0x00450a68                       ; 004509e1
        ;   XREF to: 00450a68 (CONDITIONAL_JUMP)  ; LAB_00450a68
    MOV ECX,dword ptr [ESI + 0x154]     ; 004509e7
    XOR EDX,EDX                         ; 004509ed
    TEST ECX,ECX                        ; 004509ef
    JLE 0x00450a20                      ; 004509f1
        ;   XREF to: 00450a20 (CONDITIONAL_JUMP)  ; LAB_00450a20
    XOR EAX,EAX                         ; 004509f3
    XOR BL,BL                           ; 004509f5
        ;   Label: LAB_004509f5
    MOV byte ptr [EAX + 0xbbb9b8],BL    ; 004509f7 | g_CoronaBlurWorkBuffer | DAT_00bbbaf8
    MOV EDI,dword ptr [ESI + 0x150]     ; 004509fd
    MOV byte ptr [EDI + EAX*0x1 + 0xbbb9b7],BL ; 00450a03 | DAT_00bbb9b7 | DAT_00bbbaf7
    INC EDX                             ; 00450a0a
    MOV ECX,dword ptr [ESI + 0x154]     ; 00450a0b
    ADD EAX,0x140                       ; 00450a11
    CMP EDX,ECX                         ; 00450a16
    JL 0x004509f5                       ; 00450a18
        ;   XREF to: 004509f5 (CONDITIONAL_JUMP)  ; LAB_004509f5
    LEA EAX,[EAX]                       ; 00450a1a
    MOV EBX,dword ptr [ESI + 0x150]     ; 00450a20
        ;   Label: LAB_00450a20
    XOR EAX,EAX                         ; 00450a26
    TEST EBX,EBX                        ; 00450a28
    JLE 0x00450a60                      ; 00450a2a
        ;   XREF to: 00450a60 (CONDITIONAL_JUMP)  ; LAB_00450a60
    XOR CL,CL                           ; 00450a2c
        ;   Label: LAB_00450a2c
    MOV byte ptr [EAX + 0xbbb9b8],CL    ; 00450a2e | g_CoronaBlurWorkBuffer | DAT_00bbb9b9
    MOV EDX,dword ptr [ESI + 0x154]     ; 00450a34
    DEC EDX                             ; 00450a3a
    IMUL EDX,EDX,0x140                  ; 00450a3b
    MOV byte ptr [EDX + EAX*0x1 + 0xbbb9b8],CL ; 00450a41 | g_CoronaBlurWorkBuffer | DAT_00bbb9b9
    INC EAX                             ; 00450a48
    CMP EAX,dword ptr [ESI + 0x150]     ; 00450a49
    JL 0x00450a2c                       ; 00450a4f
        ;   XREF to: 00450a2c (CONDITIONAL_JUMP)  ; LAB_00450a2c
    LEA EAX,[EAX]                       ; 00450a51
    LEA EDX,[EDX]                       ; 00450a57
    LEA EAX,[EAX]                       ; 00450a5d
    ADD ESP,0x4                         ; 00450a60
        ;   Label: LAB_00450a60
    POP EBP                             ; 00450a63
    POP EDI                             ; 00450a64
    POP ESI                             ; 00450a65
    POP EBX                             ; 00450a66
    RET                                 ; 00450a67
    MOV EAX,dword ptr [ESI + 0x150]     ; 00450a68
        ;   Label: LAB_00450a68
    PUSH EAX                            ; 00450a6e
    PUSH EBP                            ; 00450a6f | DAT_00ba8db8
    MOV EBX,dword ptr [ESP + 0x8]       ; 00450a70 | DAT_00bbbaf8
    PUSH EBX                            ; 00450a74 | DAT_00bbbaf8
    CALL core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042 ; 00450a75
        ;   XREF to: 00492042 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
    ADD ESP,0xc                         ; 00450a7a
    MOV EAX,dword ptr [ESP]             ; 00450a7d
    INC EDI                             ; 00450a80
    JMP 0x004509ca                      ; 00450a81
        ;   XREF to: 004509ca (UNCONDITIONAL_JUMP)  ; LAB_004509ca

