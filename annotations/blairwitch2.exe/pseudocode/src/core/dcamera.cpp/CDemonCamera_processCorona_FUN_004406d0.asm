; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_004406d0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f345
;
; Referenced Globals:
;   undefined4 DAT_00b65f98
;   undefined4 DAT_013083cc
;   undefined4 DAT_01465920
;   undefined4 DAT_01465924
;   undefined4 DAT_01465928
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00442710
;   crt_watcom.c__memcpy_FUN_00492718
;   crt_watcom.c__memset_FUN_00492670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004406d0
        ;   Label: core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004406d1
    MOV EAX,dword ptr [EBX + 0x11e8]    ; 004406d5
    MOV EDX,EAX                         ; 004406db
    SAR EDX,0x1f                        ; 004406dd
    SHL EDX,0x8                         ; 004406e0
    SBB EAX,EDX                         ; 004406e3
    SAR EAX,0x8                         ; 004406e5
    MOV EDX,EAX                         ; 004406e8
    SAR EDX,0x1f                        ; 004406ea
    SHL EDX,0x2                         ; 004406ed
    SBB EAX,EDX                         ; 004406f0
    SAR EAX,0x2                         ; 004406f2
    PUSH 0x12c00                        ; 004406f5
    MOV [0x00b65f98],EAX                ; 004406fa | DAT_00b65f98
    XOR EDX,EDX                         ; 004406ff
    MOV ECX,0xaf5218                    ; 00440701
    MOV DL,byte ptr [0x00b65f98]        ; 00440706 | DAT_00b65f98
    CALL crt_watcom.c__memset_FUN_00492670 ; 0044070c
        ;   XREF to: 00492670 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_00492670(void * dest, int fill_byte, uint size)
    CMP dword ptr [0x01465928],0x1      ; 00440711 | DAT_01465928
    JG 0x00440725                       ; 00440718
        ;   XREF to: 00440725 (CONDITIONAL_JUMP)  ; LAB_00440725
    CMP dword ptr [0x013083cc],0x0      ; 0044071a | DAT_013083cc
    JNZ 0x00440742                      ; 00440721
        ;   XREF to: 00440742 (CONDITIONAL_JUMP)  ; LAB_00440742
    POP EBX                             ; 00440723
    RET                                 ; 00440724
    PUSH EDI                            ; 00440725
        ;   Label: LAB_00440725
    PUSH ESI                            ; 00440726
    MOV ESI,dword ptr [0x01465924]      ; 00440727 | DAT_01465924
    PUSH ESI                            ; 0044072d
    MOV EDI,dword ptr [0x01465920]      ; 0044072e | DAT_01465920
    PUSH EDI                            ; 00440734
    PUSH EBX                            ; 00440735
    CALL core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00442710 ; 00440736
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00442710(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)
    ADD ESP,0xc                         ; 0044073b
    POP ESI                             ; 0044073e
    POP EDI                             ; 0044073f
    POP EBX                             ; 00440740
    RET                                 ; 00440741
    PUSH 0x12c00                        ; 00440742
        ;   Label: LAB_00440742
    MOV EDX,0x1339920                   ; 00440747
    MOV ECX,0x1326d20                   ; 0044074c
    XOR EBX,EBX                         ; 00440751
    CALL crt_watcom.c__memcpy_FUN_00492718 ; 00440753
        ;   XREF to: 00492718 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00492718(void * dest, void * src, uint size)
    MOV dword ptr [0x013083cc],EBX      ; 00440758 | DAT_013083cc
    POP EBX                             ; 0044075e
    RET                                 ; 0044075f

