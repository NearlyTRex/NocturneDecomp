; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160(CDemonCamera *this_ptr,int plane_index,uint blend_alpha)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
; uint             Stack[0xc]:4   blend_alpha
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 at 00451196
;
; Referenced Globals:
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   undefined4 DAT_013da8b8
;   SFogImagePlane[16] g_CameraImageDecompressBuffer
;   undefined4 DAT_013ed4b8
;
; Called Functions:
;   core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453160
        ;   Label: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
    PUSH ESI                            ; 00453161
    PUSH EDI                            ; 00453162
    PUSH EBP                            ; 00453163
    SUB ESP,0x4                         ; 00453164
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00453167
    LEA ESI,[EBX + 0x1]                 ; 0045316b
    CMP ESI,0x10                        ; 0045316e
    JL 0x00453175                       ; 00453171
        ;   XREF to: 00453175 (CONDITIONAL_JUMP)  ; LAB_00453175
    XOR ESI,ESI                         ; 00453173
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453175
        ;   Label: LAB_00453175
    CMP EDX,0xffff                      ; 00453179
    JLE 0x00453258                      ; 0045317f
        ;   XREF to: 00453258 (CONDITIONAL_JUMP)  ; LAB_00453258
    MOV dword ptr [ESP + 0x20],0xffff   ; 00453185
    MOV EAX,0xffff                      ; 0045318d
        ;   Label: LAB_0045318d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453192
    SUB EAX,EDX                         ; 00453196
    MOV dword ptr [ESP],EAX             ; 00453198
    MOV EAX,EDX                         ; 0045319b
    MOV ECX,EDX                         ; 0045319d
    SHL EAX,0x10                        ; 0045319f
    OR ECX,EAX                          ; 004531a2
    MOV EAX,dword ptr [ESP]             ; 004531a4
    MOV EDI,dword ptr [ESP]             ; 004531a7
    SHL EAX,0x10                        ; 004531aa
    OR EDI,EAX                          ; 004531ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 004531af
    MOV dword ptr [ESP + 0x20],ECX      ; 004531b3
    MOV dword ptr [ESP],EDI             ; 004531b7
    MOV EBP,dword ptr [EAX + 0x154]     ; 004531ba
    XOR EDI,EDI                         ; 004531c0
    TEST EBP,EBP                        ; 004531c2
    JLE 0x00453250                      ; 004531c4
        ;   XREF to: 00453250 (CONDITIONAL_JUMP)  ; LAB_00453250
    LEA EAX,[EBX*0x4 + 0x0]             ; 004531ca
    ADD EAX,EBX                         ; 004531d1
    SHL EAX,0xa                         ; 004531d3
    MOV EBX,EAX                         ; 004531d6
    SHL EAX,0x4                         ; 004531d8
    MOV EBP,0x13ed378                   ; 004531db | g_CameraImageDecompressBuffer
    SUB EAX,EBX                         ; 004531e0
    ADD EBP,EAX                         ; 004531e2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004531e4
    ADD EAX,ESI                         ; 004531eb
    SHL EAX,0xa                         ; 004531ed
    MOV EBX,EAX                         ; 004531f0
    SHL EAX,0x4                         ; 004531f2
    SUB EAX,EBX                         ; 004531f5
    MOV EBX,0x13ed378                   ; 004531f7 | g_CameraImageDecompressBuffer
    MOV ESI,0x13da778                   ; 004531fc | g_CameraPlaneWorkBuffer
    ADD EBX,EAX                         ; 00453201 | g_CameraImageDecompressBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453203
        ;   Label: LAB_00453203
    MOV EAX,dword ptr [EAX + 0x150]     ; 00453207
    PUSH EAX                            ; 0045320d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045320e
    PUSH EAX                            ; 00453212
    MOV EDX,dword ptr [ESP + 0x28]      ; 00453213
    PUSH EDX                            ; 00453217
    PUSH EBX                            ; 00453218 | g_CameraImageDecompressBuffer | DAT_013ed4b8
    PUSH EBP                            ; 00453219
    PUSH ESI                            ; 0045321a | g_CameraPlaneWorkBuffer | DAT_013da8b8
    CALL core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a ; 0045321b
        ;   XREF to: 00492e8a (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint * output_buffer, uint * source1_buffer, uint * source2_buffer, uint alpha1, ...)
    ADD ESP,0x18                        ; 00453220
    INC EDI                             ; 00453223
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453224
    ADD EBX,0x140                       ; 00453228 | DAT_013ed4b8
    ADD EBP,0x140                       ; 0045322e
    MOV ECX,dword ptr [EAX + 0x154]     ; 00453234
    ADD ESI,0x140                       ; 0045323a
    CMP EDI,ECX                         ; 00453240
    JL 0x00453203                       ; 00453242
        ;   XREF to: 00453203 (CONDITIONAL_JUMP)  ; LAB_00453203
    LEA EAX,[EAX]                       ; 00453244
    LEA EDX,[EDX]                       ; 0045324a
    ADD ESP,0x4                         ; 00453250
        ;   Label: LAB_00453250
    POP EBP                             ; 00453253
    POP EDI                             ; 00453254
    POP ESI                             ; 00453255
    POP EBX                             ; 00453256
    RET                                 ; 00453257
    TEST EDX,EDX                        ; 00453258
        ;   Label: LAB_00453258
    JGE 0x0045318d                      ; 0045325a
        ;   XREF to: 0045318d (CONDITIONAL_JUMP)  ; LAB_0045318d
    XOR EDI,EDI                         ; 00453260
    MOV dword ptr [ESP + 0x20],EDI      ; 00453262
    JMP 0x0045318d                      ; 00453266
        ;   XREF to: 0045318d (UNCONDITIONAL_JUMP)  ; LAB_0045318d

