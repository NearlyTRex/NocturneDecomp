; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 0045008b
;
; Called Functions:
;   core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_004712b2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d6f0
        ;   Label: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0
    PUSH ESI                            ; 0044d6f1
    PUSH EDI                            ; 0044d6f2
    PUSH EBP                            ; 0044d6f3
    SUB ESP,0x4                         ; 0044d6f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044d6f7
    MOV EAX,0xb3fd08                    ; 0044d6fb
    MOV EBP,0xb2cfc8                    ; 0044d700
    MOV EDI,0x1                         ; 0044d705
    ADD EAX,0x140                       ; 0044d70a
        ;   Label: LAB_0044d70a
    ADD EBP,0x140                       ; 0044d70f
    MOV dword ptr [ESP],EAX             ; 0044d715
    MOV EAX,dword ptr [ESI + 0x154]     ; 0044d718
    DEC EAX                             ; 0044d71e
    CMP EDI,EAX                         ; 0044d71f
    JL 0x0044d7a8                       ; 0044d721
        ;   XREF to: 0044d7a8 (CONDITIONAL_JUMP)  ; LAB_0044d7a8
    MOV ECX,dword ptr [ESI + 0x154]     ; 0044d727
    XOR EDX,EDX                         ; 0044d72d
    TEST ECX,ECX                        ; 0044d72f
    JLE 0x0044d760                      ; 0044d731
        ;   XREF to: 0044d760 (CONDITIONAL_JUMP)  ; LAB_0044d760
    XOR EAX,EAX                         ; 0044d733
    XOR BL,BL                           ; 0044d735
        ;   Label: LAB_0044d735
    MOV byte ptr [EAX + 0xb3fd08],BL    ; 0044d737
    MOV EDI,dword ptr [ESI + 0x150]     ; 0044d73d
    MOV byte ptr [EDI + EAX*0x1 + 0xb3fd07],BL ; 0044d743
    INC EDX                             ; 0044d74a
    MOV ECX,dword ptr [ESI + 0x154]     ; 0044d74b
    ADD EAX,0x140                       ; 0044d751
    CMP EDX,ECX                         ; 0044d756
    JL 0x0044d735                       ; 0044d758
        ;   XREF to: 0044d735 (CONDITIONAL_JUMP)  ; LAB_0044d735
    LEA EAX,[EAX]                       ; 0044d75a
    MOV EBX,dword ptr [ESI + 0x150]     ; 0044d760
        ;   Label: LAB_0044d760
    XOR EAX,EAX                         ; 0044d766
    TEST EBX,EBX                        ; 0044d768
    JLE 0x0044d7a0                      ; 0044d76a
        ;   XREF to: 0044d7a0 (CONDITIONAL_JUMP)  ; LAB_0044d7a0
    XOR CL,CL                           ; 0044d76c
        ;   Label: LAB_0044d76c
    MOV byte ptr [EAX + 0xb3fd08],CL    ; 0044d76e
    MOV EDX,dword ptr [ESI + 0x154]     ; 0044d774
    DEC EDX                             ; 0044d77a
    IMUL EDX,EDX,0x140                  ; 0044d77b
    MOV byte ptr [EDX + EAX*0x1 + 0xb3fd08],CL ; 0044d781
    INC EAX                             ; 0044d788
    CMP EAX,dword ptr [ESI + 0x150]     ; 0044d789
    JL 0x0044d76c                       ; 0044d78f
        ;   XREF to: 0044d76c (CONDITIONAL_JUMP)  ; LAB_0044d76c
    LEA EAX,[EAX]                       ; 0044d791
    LEA EDX,[EDX]                       ; 0044d797
    LEA EAX,[EAX]                       ; 0044d79d
    ADD ESP,0x4                         ; 0044d7a0
        ;   Label: LAB_0044d7a0
    POP EBP                             ; 0044d7a3
    POP EDI                             ; 0044d7a4
    POP ESI                             ; 0044d7a5
    POP EBX                             ; 0044d7a6
    RET                                 ; 0044d7a7
    MOV EAX,dword ptr [ESI + 0x150]     ; 0044d7a8
        ;   Label: LAB_0044d7a8
    PUSH EAX                            ; 0044d7ae
    PUSH EBP                            ; 0044d7af
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044d7b0
    PUSH EBX                            ; 0044d7b4
    CALL core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_004712b2 ; 0044d7b5
        ;   XREF to: 004712b2 (UNCONDITIONAL_CALL)  ; undefined core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_004712b2()
    ADD ESP,0xc                         ; 0044d7ba
    MOV EAX,dword ptr [ESP]             ; 0044d7bd
    INC EDI                             ; 0044d7c0
    JMP 0x0044d70a                      ; 0044d7c1
        ;   XREF to: 0044d70a (UNCONDITIONAL_JUMP)  ; LAB_0044d70a

