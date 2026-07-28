; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(CDemonCamera *this_ptr,int plane_index,uint blend_alpha)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
; uint             Stack[0xc]:4   blend_alpha
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90 at 00444ff6
;
; Referenced Globals:
;   undefined4 DAT_012cecb8
;   undefined4 DAT_012e18b8
;
; Called Functions:
;   core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446fe0
        ;   Label: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
    PUSH ESI                            ; 00446fe1
    PUSH EDI                            ; 00446fe2
    PUSH EBP                            ; 00446fe3
    SUB ESP,0x4                         ; 00446fe4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00446fe7
    LEA ESI,[EBX + 0x1]                 ; 00446feb
    CMP ESI,0x10                        ; 00446fee
    JL 0x00446ff5                       ; 00446ff1
        ;   XREF to: 00446ff5 (CONDITIONAL_JUMP)  ; LAB_00446ff5
    XOR ESI,ESI                         ; 00446ff3
    MOV EDX,dword ptr [ESP + 0x20]      ; 00446ff5
        ;   Label: LAB_00446ff5
    CMP EDX,0xffff                      ; 00446ff9
    JLE 0x004470d8                      ; 00446fff
        ;   XREF to: 004470d8 (CONDITIONAL_JUMP)  ; LAB_004470d8
    MOV dword ptr [ESP + 0x20],0xffff   ; 00447005
    MOV EAX,0xffff                      ; 0044700d
        ;   Label: LAB_0044700d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00447012
    SUB EAX,EDX                         ; 00447016
    MOV dword ptr [ESP],EAX             ; 00447018
    MOV EAX,EDX                         ; 0044701b
    MOV ECX,EDX                         ; 0044701d
    SHL EAX,0x10                        ; 0044701f
    OR ECX,EAX                          ; 00447022
    MOV EAX,dword ptr [ESP]             ; 00447024
    MOV EDI,dword ptr [ESP]             ; 00447027
    SHL EAX,0x10                        ; 0044702a
    OR EDI,EAX                          ; 0044702d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044702f
    MOV dword ptr [ESP + 0x20],ECX      ; 00447033
    MOV dword ptr [ESP],EDI             ; 00447037
    MOV EBP,dword ptr [EAX + 0x154]     ; 0044703a
    XOR EDI,EDI                         ; 00447040
    TEST EBP,EBP                        ; 00447042
    JLE 0x004470d0                      ; 00447044
        ;   XREF to: 004470d0 (CONDITIONAL_JUMP)  ; LAB_004470d0
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044704a
    ADD EAX,EBX                         ; 00447051
    SHL EAX,0xa                         ; 00447053
    MOV EBX,EAX                         ; 00447056
    SHL EAX,0x4                         ; 00447058
    MOV EBP,0x12e1778                   ; 0044705b
    SUB EAX,EBX                         ; 00447060
    ADD EBP,EAX                         ; 00447062
    LEA EAX,[ESI*0x4 + 0x0]             ; 00447064
    ADD EAX,ESI                         ; 0044706b
    SHL EAX,0xa                         ; 0044706d
    MOV EBX,EAX                         ; 00447070
    SHL EAX,0x4                         ; 00447072
    SUB EAX,EBX                         ; 00447075
    MOV EBX,0x12e1778                   ; 00447077
    MOV ESI,0x12ceb78                   ; 0044707c
    ADD EBX,EAX                         ; 00447081
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447083
        ;   Label: LAB_00447083
    MOV EAX,dword ptr [EAX + 0x150]     ; 00447087
    PUSH EAX                            ; 0044708d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044708e
    PUSH EAX                            ; 00447092
    MOV EDX,dword ptr [ESP + 0x28]      ; 00447093
    PUSH EDX                            ; 00447097
    PUSH EBX                            ; 00447098 | DAT_012e18b8
    PUSH EBP                            ; 00447099
    PUSH ESI                            ; 0044709a | DAT_012cecb8
    CALL core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50 ; 0044709b
        ;   XREF to: 00465f50 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50(uint * output_buffer, uint * source1_buffer, uint * source2_buffer, uint alpha1, ...)
    ADD ESP,0x18                        ; 004470a0
    INC EDI                             ; 004470a3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004470a4
    ADD EBX,0x140                       ; 004470a8
    ADD EBP,0x140                       ; 004470ae
    MOV ECX,dword ptr [EAX + 0x154]     ; 004470b4
    ADD ESI,0x140                       ; 004470ba
    CMP EDI,ECX                         ; 004470c0
    JL 0x00447083                       ; 004470c2
        ;   XREF to: 00447083 (CONDITIONAL_JUMP)  ; LAB_00447083
    LEA EAX,[EAX]                       ; 004470c4
    LEA EDX,[EDX]                       ; 004470ca
    ADD ESP,0x4                         ; 004470d0
        ;   Label: LAB_004470d0
    POP EBP                             ; 004470d3
    POP EDI                             ; 004470d4
    POP ESI                             ; 004470d5
    POP EBX                             ; 004470d6
    RET                                 ; 004470d7
    TEST EDX,EDX                        ; 004470d8
        ;   Label: LAB_004470d8
    JGE 0x0044700d                      ; 004470da
        ;   XREF to: 0044700d (CONDITIONAL_JUMP)  ; LAB_0044700d
    XOR EDI,EDI                         ; 004470e0
    MOV dword ptr [ESP + 0x20],EDI      ; 004470e2
    JMP 0x0044700d                      ; 004470e6
        ;   XREF to: 0044700d (UNCONDITIONAL_JUMP)  ; LAB_0044700d

