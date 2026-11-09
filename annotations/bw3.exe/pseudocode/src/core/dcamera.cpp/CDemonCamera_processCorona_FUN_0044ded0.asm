; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00535e45
;
; Referenced Globals:
;   undefined4 DAT_00b9dd48
;   undefined4 DAT_0134017c
;   undefined4 DAT_0149d6d0
;   undefined4 DAT_0149d6d4
;   undefined4 DAT_0149d6d8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10
;   crt_watcom.c__memcpy_FUN_00495f68
;   crt_watcom.c__memset_FUN_00495ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ded0
        ;   Label: core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044ded1
    MOV EAX,dword ptr [EBX + 0x11e8]    ; 0044ded5
    MOV EDX,EAX                         ; 0044dedb
    SAR EDX,0x1f                        ; 0044dedd
    SHL EDX,0x8                         ; 0044dee0
    SBB EAX,EDX                         ; 0044dee3
    SAR EAX,0x8                         ; 0044dee5
    MOV EDX,EAX                         ; 0044dee8
    SAR EDX,0x1f                        ; 0044deea
    SHL EDX,0x2                         ; 0044deed
    SBB EAX,EDX                         ; 0044def0
    SAR EAX,0x2                         ; 0044def2
    PUSH 0x12c00                        ; 0044def5
    MOV [0x00b9dd48],EAX                ; 0044defa | DAT_00b9dd48
    XOR EDX,EDX                         ; 0044deff
    MOV ECX,0xb2cfc8                    ; 0044df01
    MOV DL,byte ptr [0x00b9dd48]        ; 0044df06 | DAT_00b9dd48
    CALL crt_watcom.c__memset_FUN_00495ec0 ; 0044df0c
        ;   XREF to: 00495ec0 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00495ec0()
    CMP dword ptr [0x0149d6d8],0x1      ; 0044df11 | DAT_0149d6d8
    JG 0x0044df25                       ; 0044df18
        ;   XREF to: 0044df25 (CONDITIONAL_JUMP)  ; LAB_0044df25
    CMP dword ptr [0x0134017c],0x0      ; 0044df1a | DAT_0134017c
    JNZ 0x0044df42                      ; 0044df21
        ;   XREF to: 0044df42 (CONDITIONAL_JUMP)  ; LAB_0044df42
    POP EBX                             ; 0044df23
    RET                                 ; 0044df24
    PUSH EDI                            ; 0044df25
        ;   Label: LAB_0044df25
    PUSH ESI                            ; 0044df26
    MOV ESI,dword ptr [0x0149d6d4]      ; 0044df27 | DAT_0149d6d4
    PUSH ESI                            ; 0044df2d
    MOV EDI,dword ptr [0x0149d6d0]      ; 0044df2e | DAT_0149d6d0
    PUSH EDI                            ; 0044df34
    PUSH EBX                            ; 0044df35
    CALL core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10 ; 0044df36
        ;   XREF to: 0044ff10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)
    ADD ESP,0xc                         ; 0044df3b
    POP ESI                             ; 0044df3e
    POP EDI                             ; 0044df3f
    POP EBX                             ; 0044df40
    RET                                 ; 0044df41
    PUSH 0x12c00                        ; 0044df42
        ;   Label: LAB_0044df42
    MOV EDX,0x13716d0                   ; 0044df47
    MOV ECX,0x135ead0                   ; 0044df4c
    XOR EBX,EBX                         ; 0044df51
    CALL crt_watcom.c__memcpy_FUN_00495f68 ; 0044df53
        ;   XREF to: 00495f68 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00495f68()
    MOV dword ptr [0x0134017c],EBX      ; 0044df58 | DAT_0134017c
    POP EBX                             ; 0044df5e
    RET                                 ; 0044df5f

