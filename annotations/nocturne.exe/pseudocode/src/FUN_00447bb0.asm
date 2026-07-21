; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447bb0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004470f0 at 004474c0
;
; Referenced Globals:
;   undefined4 DAT_01bd2fa0
;
; Called Functions:
;   core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447bb0
        ;   Label: FUN_00447bb0
    PUSH ESI                            ; 00447bb1
    PUSH EDI                            ; 00447bb2
    PUSH EBP                            ; 00447bb3
    SUB ESP,0x4                         ; 00447bb4
    MOV ECX,dword ptr [ESP + 0x18]      ; 00447bb7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00447bbb
    MOV EDX,dword ptr [ESP + 0x20]      ; 00447bbf
    MOV EAX,dword ptr [ECX + 0x148]     ; 00447bc3
    MOV ESI,dword ptr [ECX + 0x144]     ; 00447bc9
    ADD EAX,EDX                         ; 00447bcf
    SHL ESI,0x2                         ; 00447bd1
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 00447bd4 | DAT_01bd2fa0
    ADD ESI,EAX                         ; 00447bdb
    LEA EAX,[EBX*0x4 + 0x0]             ; 00447bdd
    ADD ESI,EAX                         ; 00447be4
    MOV dword ptr [ESP],ESI             ; 00447be6
    MOV ESI,dword ptr [ECX + 0x13c]     ; 00447be9
    IMUL ESI,EDX                        ; 00447bef
    MOV EDI,dword ptr [ECX + 0x158]     ; 00447bf2
    SHL ESI,0x2                         ; 00447bf8
    ADD ESI,EDI                         ; 00447bfb
    LEA EDI,[ESI + EAX*0x1]             ; 00447bfd
    MOV EAX,EDX                         ; 00447c00
    MOV ESI,dword ptr [ECX + 0x14c]     ; 00447c02
    SAR EDX,0x1f                        ; 00447c08
    IDIV ESI                            ; 00447c0b
    MOV EDX,EBX                         ; 00447c0d
    LEA ESI,[EAX*0x4 + 0x0]             ; 00447c0f
    SAR EDX,0x1f                        ; 00447c16
    ADD ESI,EAX                         ; 00447c19
    MOV EAX,EBX                         ; 00447c1b
    IDIV dword ptr [ECX + 0x14c]        ; 00447c1d
    MOV EBP,0xaafdb8                    ; 00447c23
    SHL ESI,0x6                         ; 00447c28
    ADD EBP,ESI                         ; 00447c2b
    LEA EDX,[EAX + EBP*0x1]             ; 00447c2d
    ADD ESI,0x12ceb78                   ; 00447c30
    MOV EBP,dword ptr [ESP + 0x24]      ; 00447c36
    ADD EAX,ESI                         ; 00447c3a
    ADD EAX,EBP                         ; 00447c3c
    PUSH EAX                            ; 00447c3e
    ADD EDX,EBP                         ; 00447c3f
    PUSH EDX                            ; 00447c41
    PUSH EDI                            ; 00447c42
    MOV EBX,dword ptr [ESP + 0xc]       ; 00447c43
    PUSH EBX                            ; 00447c47
    CALL core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0 ; 00447c48
        ;   XREF to: 004652d0 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0()
    ADD ESP,0x10                        ; 00447c4d
    ADD ESP,0x4                         ; 00447c50
    POP EBP                             ; 00447c53
    POP EDI                             ; 00447c54
    POP ESI                             ; 00447c55
    POP EBX                             ; 00447c56
    RET                                 ; 00447c57

