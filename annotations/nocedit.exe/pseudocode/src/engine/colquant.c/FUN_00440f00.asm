; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined engine_colquant.c_FUN_00440f00()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_colquant.c_FUN_004406c0 at 00440956
;
; Called Functions:
;   engine_colquant.c_FUN_00441110
;   engine_colquant.c_FUN_00441260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440f00
        ;   Label: engine_colquant.c_FUN_00440f00
    PUSH ESI                            ; 00440f01
    PUSH EDI                            ; 00440f02
    PUSH EBP                            ; 00440f03
    SUB ESP,0x8                         ; 00440f04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440f07
    MOV EDI,dword ptr [ESP + 0x20]      ; 00440f0b
    SHL EDI,0x6                         ; 00440f0f
    MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 00440f12
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044] ; 00440f19
    MOV dword ptr [ESP + 0x4],EAX       ; 00440f20
    LEA EDX,[EAX + ECX*0x1]             ; 00440f24
    MOV EDI,dword ptr [EDI + EBX*0x1 + 0x400c] ; 00440f27
    DEC EDX                             ; 00440f2e
    SAR EDI,0x10                        ; 00440f2f
    CMP EDX,EAX                         ; 00440f32
    JLE 0x00440fb4                      ; 00440f34 | LAB_00440fb4
        ;   XREF to: 00440fb4 (CONDITIONAL_JUMP)
    SHL EAX,0x2                         ; 00440f3a
    MOV dword ptr [ESP],EAX             ; 00440f3d
    MOV ESI,dword ptr [ESP]             ; 00440f40
        ;   Label: LAB_00440f40
    MOV EAX,dword ptr [EBX + 0x2004]    ; 00440f43
    ADD EAX,ESI                         ; 00440f49
    MOV AL,byte ptr [EAX + 0x3]         ; 00440f4b
    AND EAX,0xff                        ; 00440f4e
    CMP EAX,EDI                         ; 00440f53
    JLE 0x00440f9e                      ; 00440f55 | LAB_00440f9e
        ;   XREF to: 00440f9e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x4]       ; 00440f57
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440f5b
    SHL ESI,0x2                         ; 00440f62
    CMP ESI,EAX                         ; 00440f65
        ;   Label: LAB_00440f65
    JGE 0x00440f83                      ; 00440f67 | LAB_00440f83
        ;   XREF to: 00440f83 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440f69
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x3] ; 00440f6f
    AND ECX,0xff                        ; 00440f73
    CMP ECX,EDI                         ; 00440f79
    JLE 0x00440f83                      ; 00440f7b | LAB_00440f83
        ;   XREF to: 00440f83 (CONDITIONAL_JUMP)
    DEC EDX                             ; 00440f7d
    SUB EAX,0x4                         ; 00440f7e
    JMP 0x00440f65                      ; 00440f81 | LAB_00440f65
        ;   XREF to: 00440f65 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 00440f83
        ;   Label: LAB_00440f83
    MOV ESI,dword ptr [EBX + 0x2004]    ; 00440f86
    ADD ECX,ESI                         ; 00440f8c
    MOV ESI,dword ptr [ESI + EDX*0x4]   ; 00440f8e
    MOV EBP,dword ptr [ECX]             ; 00440f91
    MOV dword ptr [ECX],ESI             ; 00440f93
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440f95
    MOV dword ptr [ECX + EDX*0x4],EBP   ; 00440f9b
    MOV EBP,dword ptr [ESP]             ; 00440f9e
        ;   Label: LAB_00440f9e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440fa1
    ADD EBP,0x4                         ; 00440fa5
    INC EAX                             ; 00440fa8
    MOV dword ptr [ESP],EBP             ; 00440fa9
    MOV dword ptr [ESP + 0x4],EAX       ; 00440fac
    CMP EDX,EAX                         ; 00440fb0
    JG 0x00440f40                       ; 00440fb2 | LAB_00440f40
        ;   XREF to: 00440f40 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440fb4
        ;   Label: LAB_00440fb4
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440fb8
    SHL EAX,0x6                         ; 00440fbc
    SHL ESI,0x6                         ; 00440fbf
    MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX ; 00440fc2
    MOV ECX,EDX                         ; 00440fc9
    MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440fcb
    MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044] ; 00440fd2
    SUB ECX,EBP                         ; 00440fd9
    MOV EBP,EDI                         ; 00440fdb
    SUB EBP,ECX                         ; 00440fdd
    MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP ; 00440fdf
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440fe6
    SUB EDX,EAX                         ; 00440fed
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX ; 00440fef
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440ff6
    PUSH EDX                            ; 00440ffa
    PUSH EBX                            ; 00440ffb
    CALL engine_colquant.c_FUN_00441260 ; 00440ffc | undefined engine_colquant.c_FUN_00441260()
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00441001
    MOV ECX,dword ptr [ESP + 0x24]      ; 00441004
    PUSH ECX                            ; 00441008
    PUSH EBX                            ; 00441009
    CALL engine_colquant.c_FUN_00441260 ; 0044100a | undefined engine_colquant.c_FUN_00441260()
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044100f
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI ; 00441012
    MOV ESI,dword ptr [ESP + 0x24]      ; 00441019
    PUSH ESI                            ; 0044101d
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044101e
    PUSH EDI                            ; 00441022
    PUSH EBX                            ; 00441023
    CALL engine_colquant.c_FUN_00441110 ; 00441024 | undefined engine_colquant.c_FUN_00441110()
        ;   XREF to: 00441110 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00441029
    ADD ESP,0x8                         ; 0044102c
    POP EBP                             ; 0044102f
    POP EDI                             ; 00441030
    POP ESI                             ; 00441031
    POP EBX                             ; 00441032
    RET                                 ; 00441033

