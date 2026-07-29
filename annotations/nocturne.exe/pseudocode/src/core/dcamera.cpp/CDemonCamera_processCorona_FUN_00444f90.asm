; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00509a80 at 00509b2d
;
; Referenced Globals:
;   undefined4 DAT_00b0ddf8
;   undefined4 DAT_012b022c
;   undefined4 DAT_0140d778
;   undefined4 DAT_0140d77c
;   undefined4 DAT_0140d780
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
;   crt_watcom.c__memcpy_FUN_00481a28
;   crt_watcom.c__memset_FUN_00481980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444f90
        ;   Label: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444f91
    MOV EAX,dword ptr [EBX + 0x11e8]    ; 00444f95
    MOV EDX,EAX                         ; 00444f9b
    SAR EDX,0x1f                        ; 00444f9d
    SHL EDX,0x8                         ; 00444fa0
    SBB EAX,EDX                         ; 00444fa3
    SAR EAX,0x8                         ; 00444fa5
    MOV EDX,EAX                         ; 00444fa8
    SAR EDX,0x1f                        ; 00444faa
    SHL EDX,0x2                         ; 00444fad
    SBB EAX,EDX                         ; 00444fb0
    SAR EAX,0x2                         ; 00444fb2
    PUSH 0x12c00                        ; 00444fb5
    MOV [0x00b0ddf8],EAX                ; 00444fba | DAT_00b0ddf8
    XOR EDX,EDX                         ; 00444fbf
    MOV ECX,0xa9d078                    ; 00444fc1
    MOV DL,byte ptr [0x00b0ddf8]        ; 00444fc6 | DAT_00b0ddf8
    CALL crt_watcom.c__memset_FUN_00481980 ; 00444fcc
        ;   XREF to: 00481980 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00481980()
    CMP dword ptr [0x0140d780],0x1      ; 00444fd1 | DAT_0140d780
    JG 0x00444fe5                       ; 00444fd8
        ;   XREF to: 00444fe5 (CONDITIONAL_JUMP)  ; LAB_00444fe5
    CMP dword ptr [0x012b022c],0x0      ; 00444fda | DAT_012b022c
    JNZ 0x00445002                      ; 00444fe1
        ;   XREF to: 00445002 (CONDITIONAL_JUMP)  ; LAB_00445002
    POP EBX                             ; 00444fe3
    RET                                 ; 00444fe4
    PUSH EDI                            ; 00444fe5
        ;   Label: LAB_00444fe5
    PUSH ESI                            ; 00444fe6
    MOV ESI,dword ptr [0x0140d77c]      ; 00444fe7 | DAT_0140d77c
    PUSH ESI                            ; 00444fed
    MOV EDI,dword ptr [0x0140d778]      ; 00444fee | DAT_0140d778
    PUSH EDI                            ; 00444ff4
    PUSH EBX                            ; 00444ff5
    CALL core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0 ; 00444ff6
        ;   XREF to: 00446fe0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)
    ADD ESP,0xc                         ; 00444ffb
    POP ESI                             ; 00444ffe
    POP EDI                             ; 00444fff
    POP EBX                             ; 00445000
    RET                                 ; 00445001
    PUSH 0x12c00                        ; 00445002
        ;   Label: LAB_00445002
    MOV EDX,0x12e1778                   ; 00445007
    MOV ECX,0x12ceb78                   ; 0044500c
    XOR EBX,EBX                         ; 00445011
    CALL crt_watcom.c__memcpy_FUN_00481a28 ; 00445013
        ;   XREF to: 00481a28 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00481a28()
    MOV dword ptr [0x012b022c],EBX      ; 00445018 | DAT_012b022c
    POP EBX                             ; 0044501e
    RET                                 ; 0044501f

