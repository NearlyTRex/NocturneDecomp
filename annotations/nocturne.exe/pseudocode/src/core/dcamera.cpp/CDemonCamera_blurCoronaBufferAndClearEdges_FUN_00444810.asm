; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 at 0044715b
;
; Called Functions:
;   core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444810
        ;   Label: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810
    PUSH ESI                            ; 00444811
    PUSH EDI                            ; 00444812
    PUSH EBP                            ; 00444813
    SUB ESP,0x4                         ; 00444814
    MOV ESI,dword ptr [ESP + 0x18]      ; 00444817
    MOV EAX,0xaafdb8                    ; 0044481b
    MOV EBP,0xa9d078                    ; 00444820
    MOV EDI,0x1                         ; 00444825
    ADD EAX,0x140                       ; 0044482a
        ;   Label: LAB_0044482a
    ADD EBP,0x140                       ; 0044482f
    MOV dword ptr [ESP],EAX             ; 00444835
    MOV EAX,dword ptr [ESI + 0x154]     ; 00444838
    DEC EAX                             ; 0044483e
    CMP EDI,EAX                         ; 0044483f
    JL 0x004448c8                       ; 00444841
        ;   XREF to: 004448c8 (CONDITIONAL_JUMP)  ; LAB_004448c8
    MOV ECX,dword ptr [ESI + 0x154]     ; 00444847
    XOR EDX,EDX                         ; 0044484d
    TEST ECX,ECX                        ; 0044484f
    JLE 0x00444880                      ; 00444851
        ;   XREF to: 00444880 (CONDITIONAL_JUMP)  ; LAB_00444880
    XOR EAX,EAX                         ; 00444853
    XOR BL,BL                           ; 00444855
        ;   Label: LAB_00444855
    MOV byte ptr [EAX + 0xaafdb8],BL    ; 00444857
    MOV EDI,dword ptr [ESI + 0x150]     ; 0044485d
    MOV byte ptr [EDI + EAX*0x1 + 0xaafdb7],BL ; 00444863
    INC EDX                             ; 0044486a
    MOV ECX,dword ptr [ESI + 0x154]     ; 0044486b
    ADD EAX,0x140                       ; 00444871
    CMP EDX,ECX                         ; 00444876
    JL 0x00444855                       ; 00444878
        ;   XREF to: 00444855 (CONDITIONAL_JUMP)  ; LAB_00444855
    LEA EAX,[EAX]                       ; 0044487a
    MOV EBX,dword ptr [ESI + 0x150]     ; 00444880
        ;   Label: LAB_00444880
    XOR EAX,EAX                         ; 00444886
    TEST EBX,EBX                        ; 00444888
    JLE 0x004448c0                      ; 0044488a
        ;   XREF to: 004448c0 (CONDITIONAL_JUMP)  ; LAB_004448c0
    XOR CL,CL                           ; 0044488c
        ;   Label: LAB_0044488c
    MOV byte ptr [EAX + 0xaafdb8],CL    ; 0044488e
    MOV EDX,dword ptr [ESI + 0x154]     ; 00444894
    DEC EDX                             ; 0044489a
    IMUL EDX,EDX,0x140                  ; 0044489b
    MOV byte ptr [EDX + EAX*0x1 + 0xaafdb8],CL ; 004448a1
    INC EAX                             ; 004448a8
    CMP EAX,dword ptr [ESI + 0x150]     ; 004448a9
    JL 0x0044488c                       ; 004448af
        ;   XREF to: 0044488c (CONDITIONAL_JUMP)  ; LAB_0044488c
    LEA EAX,[EAX]                       ; 004448b1
    LEA EDX,[EDX]                       ; 004448b7
    LEA EAX,[EAX]                       ; 004448bd
    ADD ESP,0x4                         ; 004448c0
        ;   Label: LAB_004448c0
    POP EBP                             ; 004448c3
    POP EDI                             ; 004448c4
    POP ESI                             ; 004448c5
    POP EBX                             ; 004448c6
    RET                                 ; 004448c7
    MOV EAX,dword ptr [ESI + 0x150]     ; 004448c8
        ;   Label: LAB_004448c8
    PUSH EAX                            ; 004448ce
    PUSH EBP                            ; 004448cf
    MOV EBX,dword ptr [ESP + 0x8]       ; 004448d0
    PUSH EBX                            ; 004448d4
    CALL core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382 ; 004448d5
        ;   XREF to: 00465382 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
    ADD ESP,0xc                         ; 004448da
    MOV EAX,dword ptr [ESP]             ; 004448dd
    INC EDI                             ; 004448e0
    JMP 0x0044482a                      ; 004448e1
        ;   XREF to: 0044482a (UNCONDITIONAL_JUMP)  ; LAB_0044482a

