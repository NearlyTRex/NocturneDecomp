; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0043fef0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 0044288b
;
; Called Functions:
;   core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_00470242
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fef0
        ;   Label: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0043fef0
    PUSH ESI                            ; 0043fef1
    PUSH EDI                            ; 0043fef2
    PUSH EBP                            ; 0043fef3
    SUB ESP,0x4                         ; 0043fef4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043fef7
    MOV EAX,0xb07f58                    ; 0043fefb
    MOV EBP,0xaf5218                    ; 0043ff00
    MOV EDI,0x1                         ; 0043ff05
    ADD EAX,0x140                       ; 0043ff0a
        ;   Label: LAB_0043ff0a
    ADD EBP,0x140                       ; 0043ff0f
    MOV dword ptr [ESP],EAX             ; 0043ff15
    MOV EAX,dword ptr [ESI + 0x154]     ; 0043ff18
    DEC EAX                             ; 0043ff1e
    CMP EDI,EAX                         ; 0043ff1f
    JL 0x0043ffa8                       ; 0043ff21
        ;   XREF to: 0043ffa8 (CONDITIONAL_JUMP)  ; LAB_0043ffa8
    MOV ECX,dword ptr [ESI + 0x154]     ; 0043ff27
    XOR EDX,EDX                         ; 0043ff2d
    TEST ECX,ECX                        ; 0043ff2f
    JLE 0x0043ff60                      ; 0043ff31
        ;   XREF to: 0043ff60 (CONDITIONAL_JUMP)  ; LAB_0043ff60
    XOR EAX,EAX                         ; 0043ff33
    XOR BL,BL                           ; 0043ff35
        ;   Label: LAB_0043ff35
    MOV byte ptr [EAX + 0xb07f58],BL    ; 0043ff37
    MOV EDI,dword ptr [ESI + 0x150]     ; 0043ff3d
    MOV byte ptr [EDI + EAX*0x1 + 0xb07f57],BL ; 0043ff43
    INC EDX                             ; 0043ff4a
    MOV ECX,dword ptr [ESI + 0x154]     ; 0043ff4b
    ADD EAX,0x140                       ; 0043ff51
    CMP EDX,ECX                         ; 0043ff56
    JL 0x0043ff35                       ; 0043ff58
        ;   XREF to: 0043ff35 (CONDITIONAL_JUMP)  ; LAB_0043ff35
    LEA EAX,[EAX]                       ; 0043ff5a
    MOV EBX,dword ptr [ESI + 0x150]     ; 0043ff60
        ;   Label: LAB_0043ff60
    XOR EAX,EAX                         ; 0043ff66
    TEST EBX,EBX                        ; 0043ff68
    JLE 0x0043ffa0                      ; 0043ff6a
        ;   XREF to: 0043ffa0 (CONDITIONAL_JUMP)  ; LAB_0043ffa0
    XOR CL,CL                           ; 0043ff6c
        ;   Label: LAB_0043ff6c
    MOV byte ptr [EAX + 0xb07f58],CL    ; 0043ff6e
    MOV EDX,dword ptr [ESI + 0x154]     ; 0043ff74
    DEC EDX                             ; 0043ff7a
    IMUL EDX,EDX,0x140                  ; 0043ff7b
    MOV byte ptr [EDX + EAX*0x1 + 0xb07f58],CL ; 0043ff81
    INC EAX                             ; 0043ff88
    CMP EAX,dword ptr [ESI + 0x150]     ; 0043ff89
    JL 0x0043ff6c                       ; 0043ff8f
        ;   XREF to: 0043ff6c (CONDITIONAL_JUMP)  ; LAB_0043ff6c
    LEA EAX,[EAX]                       ; 0043ff91
    LEA EDX,[EDX]                       ; 0043ff97
    LEA EAX,[EAX]                       ; 0043ff9d
    ADD ESP,0x4                         ; 0043ffa0
        ;   Label: LAB_0043ffa0
    POP EBP                             ; 0043ffa3
    POP EDI                             ; 0043ffa4
    POP ESI                             ; 0043ffa5
    POP EBX                             ; 0043ffa6
    RET                                 ; 0043ffa7
    MOV EAX,dword ptr [ESI + 0x150]     ; 0043ffa8
        ;   Label: LAB_0043ffa8
    PUSH EAX                            ; 0043ffae
    PUSH EBP                            ; 0043ffaf
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ffb0
    PUSH EBX                            ; 0043ffb4
    CALL core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_00470242 ; 0043ffb5
        ;   XREF to: 00470242 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_00470242(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
    ADD ESP,0xc                         ; 0043ffba
    MOV EAX,dword ptr [ESP]             ; 0043ffbd
    INC EDI                             ; 0043ffc0
    JMP 0x0043ff0a                      ; 0043ffc1
        ;   XREF to: 0043ff0a (UNCONDITIONAL_JUMP)  ; LAB_0043ff0a

