; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10(CDemonCamera *this_ptr,int plane_index,uint blend_alpha)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
; uint             Stack[0xc]:4   blend_alpha
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0 at 0044df36
;
; Referenced Globals:
;   undefined4 DAT_0135ec10
;   undefined4 DAT_01371810
;
; Called Functions:
;   core_dstrendr.cpp_alphaBlendPixelsMMX_FUN_004720fa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ff10
        ;   Label: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10
    PUSH ESI                            ; 0044ff11
    PUSH EDI                            ; 0044ff12
    PUSH EBP                            ; 0044ff13
    SUB ESP,0x4                         ; 0044ff14
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044ff17
    LEA ESI,[EBX + 0x1]                 ; 0044ff1b
    CMP ESI,0x10                        ; 0044ff1e
    JL 0x0044ff25                       ; 0044ff21
        ;   XREF to: 0044ff25 (CONDITIONAL_JUMP)  ; LAB_0044ff25
    XOR ESI,ESI                         ; 0044ff23
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044ff25
        ;   Label: LAB_0044ff25
    CMP EDX,0xffff                      ; 0044ff29
    JLE 0x00450008                      ; 0044ff2f
        ;   XREF to: 00450008 (CONDITIONAL_JUMP)  ; LAB_00450008
    MOV dword ptr [ESP + 0x20],0xffff   ; 0044ff35
    MOV EAX,0xffff                      ; 0044ff3d
        ;   Label: LAB_0044ff3d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044ff42
    SUB EAX,EDX                         ; 0044ff46
    MOV dword ptr [ESP],EAX             ; 0044ff48
    MOV EAX,EDX                         ; 0044ff4b
    MOV ECX,EDX                         ; 0044ff4d
    SHL EAX,0x10                        ; 0044ff4f
    OR ECX,EAX                          ; 0044ff52
    MOV EAX,dword ptr [ESP]             ; 0044ff54
    MOV EDI,dword ptr [ESP]             ; 0044ff57
    SHL EAX,0x10                        ; 0044ff5a
    OR EDI,EAX                          ; 0044ff5d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ff5f
    MOV dword ptr [ESP + 0x20],ECX      ; 0044ff63
    MOV dword ptr [ESP],EDI             ; 0044ff67
    MOV EBP,dword ptr [EAX + 0x154]     ; 0044ff6a
    XOR EDI,EDI                         ; 0044ff70
    TEST EBP,EBP                        ; 0044ff72
    JLE 0x00450000                      ; 0044ff74
        ;   XREF to: 00450000 (CONDITIONAL_JUMP)  ; LAB_00450000
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044ff7a
    ADD EAX,EBX                         ; 0044ff81
    SHL EAX,0xa                         ; 0044ff83
    MOV EBX,EAX                         ; 0044ff86
    SHL EAX,0x4                         ; 0044ff88
    MOV EBP,0x13716d0                   ; 0044ff8b
    SUB EAX,EBX                         ; 0044ff90
    ADD EBP,EAX                         ; 0044ff92
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ff94
    ADD EAX,ESI                         ; 0044ff9b
    SHL EAX,0xa                         ; 0044ff9d
    MOV EBX,EAX                         ; 0044ffa0
    SHL EAX,0x4                         ; 0044ffa2
    SUB EAX,EBX                         ; 0044ffa5
    MOV EBX,0x13716d0                   ; 0044ffa7
    MOV ESI,0x135ead0                   ; 0044ffac
    ADD EBX,EAX                         ; 0044ffb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ffb3
        ;   Label: LAB_0044ffb3
    MOV EAX,dword ptr [EAX + 0x150]     ; 0044ffb7
    PUSH EAX                            ; 0044ffbd
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044ffbe
    PUSH EAX                            ; 0044ffc2
    MOV EDX,dword ptr [ESP + 0x28]      ; 0044ffc3
    PUSH EDX                            ; 0044ffc7
    PUSH EBX                            ; 0044ffc8 | DAT_01371810
    PUSH EBP                            ; 0044ffc9
    PUSH ESI                            ; 0044ffca | DAT_0135ec10
    CALL core_dstrendr.cpp_alphaBlendPixelsMMX_FUN_004720fa ; 0044ffcb
        ;   XREF to: 004720fa (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_alphaBlendPixelsMMX_FUN_004720fa(uint * output_buffer, uint * source1_buffer, uint * source2_buffer, uint alpha1, ...)
    ADD ESP,0x18                        ; 0044ffd0
    INC EDI                             ; 0044ffd3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ffd4
    ADD EBX,0x140                       ; 0044ffd8
    ADD EBP,0x140                       ; 0044ffde
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044ffe4
    ADD ESI,0x140                       ; 0044ffea
    CMP EDI,ECX                         ; 0044fff0
    JL 0x0044ffb3                       ; 0044fff2
        ;   XREF to: 0044ffb3 (CONDITIONAL_JUMP)  ; LAB_0044ffb3
    LEA EAX,[EAX]                       ; 0044fff4
    LEA EDX,[EDX]                       ; 0044fffa
    ADD ESP,0x4                         ; 00450000
        ;   Label: LAB_00450000
    POP EBP                             ; 00450003
    POP EDI                             ; 00450004
    POP ESI                             ; 00450005
    POP EBX                             ; 00450006
    RET                                 ; 00450007
    TEST EDX,EDX                        ; 00450008
        ;   Label: LAB_00450008
    JGE 0x0044ff3d                      ; 0045000a
        ;   XREF to: 0044ff3d (CONDITIONAL_JUMP)  ; LAB_0044ff3d
    XOR EDI,EDI                         ; 00450010
    MOV dword ptr [ESP + 0x20],EDI      ; 00450012
    JMP 0x0044ff3d                      ; 00450016
        ;   XREF to: 0044ff3d (UNCONDITIONAL_JUMP)  ; LAB_0044ff3d

