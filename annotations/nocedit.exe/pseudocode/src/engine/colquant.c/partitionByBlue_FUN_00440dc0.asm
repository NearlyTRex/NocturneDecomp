; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_colquant_c_partitionByBlue_FUN_00440dc0(SColorQuantMapper *workspace,int box_index,int new_box_index)
;
; Parameters:
; SColorQuantMapper * Stack[0x4]:4   workspace
; int              Stack[0x8]:4   box_index
; int              Stack[0xc]:4   new_box_index
; Local Variables:
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_colquant.c_quantizeColors_FUN_004406c0 at 00440946
;
; Called Functions:
;   engine_colquant.c_computeBoxStatistics_FUN_00441260
;   engine_colquant.c_refinePartitionByDistance_FUN_00441110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440dc0
        ;   Label: engine_colquant.c_partitionByBlue_FUN_00440dc0
    PUSH ESI                            ; 00440dc1
    PUSH EDI                            ; 00440dc2
    PUSH EBP                            ; 00440dc3
    SUB ESP,0x8                         ; 00440dc4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440dc7
    MOV EDI,dword ptr [ESP + 0x20]      ; 00440dcb
    SHL EDI,0x6                         ; 00440dcf
    MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 00440dd2
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044] ; 00440dd9
    MOV dword ptr [ESP + 0x4],EAX       ; 00440de0
    LEA EDX,[EAX + ECX*0x1]             ; 00440de4
    MOV EDI,dword ptr [EDI + EBX*0x1 + 0x400a] ; 00440de7
    DEC EDX                             ; 00440dee
    SAR EDI,0x10                        ; 00440def
    CMP EDX,EAX                         ; 00440df2
    JLE 0x00440e74                      ; 00440df4
        ;   XREF to: 00440e74 (CONDITIONAL_JUMP)  ; LAB_00440e74
    SHL EAX,0x2                         ; 00440dfa
    MOV dword ptr [ESP],EAX             ; 00440dfd
    MOV ESI,dword ptr [ESP]             ; 00440e00
        ;   Label: LAB_00440e00
    MOV EAX,dword ptr [EBX + 0x2004]    ; 00440e03
    ADD EAX,ESI                         ; 00440e09
    MOV AL,byte ptr [EAX + 0x2]         ; 00440e0b
    AND EAX,0xff                        ; 00440e0e
    CMP EAX,EDI                         ; 00440e13
    JLE 0x00440e5e                      ; 00440e15
        ;   XREF to: 00440e5e (CONDITIONAL_JUMP)  ; LAB_00440e5e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00440e17
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440e1b
    SHL ESI,0x2                         ; 00440e22
    CMP ESI,EAX                         ; 00440e25
        ;   Label: LAB_00440e25
    JGE 0x00440e43                      ; 00440e27
        ;   XREF to: 00440e43 (CONDITIONAL_JUMP)  ; LAB_00440e43
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440e29
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x2] ; 00440e2f
    AND ECX,0xff                        ; 00440e33
    CMP ECX,EDI                         ; 00440e39
    JLE 0x00440e43                      ; 00440e3b
        ;   XREF to: 00440e43 (CONDITIONAL_JUMP)  ; LAB_00440e43
    DEC EDX                             ; 00440e3d
    SUB EAX,0x4                         ; 00440e3e
    JMP 0x00440e25                      ; 00440e41
        ;   XREF to: 00440e25 (UNCONDITIONAL_JUMP)  ; LAB_00440e25
    MOV ECX,dword ptr [ESP]             ; 00440e43
        ;   Label: LAB_00440e43
    MOV ESI,dword ptr [EBX + 0x2004]    ; 00440e46
    ADD ECX,ESI                         ; 00440e4c
    MOV ESI,dword ptr [ESI + EDX*0x4]   ; 00440e4e
    MOV EBP,dword ptr [ECX]             ; 00440e51
    MOV dword ptr [ECX],ESI             ; 00440e53
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440e55
    MOV dword ptr [ECX + EDX*0x4],EBP   ; 00440e5b
    MOV EBP,dword ptr [ESP]             ; 00440e5e
        ;   Label: LAB_00440e5e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440e61
    ADD EBP,0x4                         ; 00440e65
    INC EAX                             ; 00440e68
    MOV dword ptr [ESP],EBP             ; 00440e69
    MOV dword ptr [ESP + 0x4],EAX       ; 00440e6c
    CMP EDX,EAX                         ; 00440e70
    JG 0x00440e00                       ; 00440e72
        ;   XREF to: 00440e00 (CONDITIONAL_JUMP)  ; LAB_00440e00
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440e74
        ;   Label: LAB_00440e74
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440e78
    SHL EAX,0x6                         ; 00440e7c
    SHL ESI,0x6                         ; 00440e7f
    MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX ; 00440e82
    MOV ECX,EDX                         ; 00440e89
    MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440e8b
    MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044] ; 00440e92
    SUB ECX,EBP                         ; 00440e99
    MOV EBP,EDI                         ; 00440e9b
    SUB EBP,ECX                         ; 00440e9d
    MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP ; 00440e9f
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440ea6
    SUB EDX,EAX                         ; 00440ead
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX ; 00440eaf
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440eb6
    PUSH EDX                            ; 00440eba
    PUSH EBX                            ; 00440ebb
    CALL engine_colquant.c_computeBoxStatistics_FUN_00441260 ; 00440ebc
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_computeBoxStatistics_FUN_00441260(SColorQuantMapper * workspace, int box_index)
    ADD ESP,0x8                         ; 00440ec1
    MOV ECX,dword ptr [ESP + 0x24]      ; 00440ec4
    PUSH ECX                            ; 00440ec8
    PUSH EBX                            ; 00440ec9
    CALL engine_colquant.c_computeBoxStatistics_FUN_00441260 ; 00440eca
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_computeBoxStatistics_FUN_00441260(SColorQuantMapper * workspace, int box_index)
    ADD ESP,0x8                         ; 00440ecf
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI ; 00440ed2
    MOV ESI,dword ptr [ESP + 0x24]      ; 00440ed9
    PUSH ESI                            ; 00440edd
    MOV EDI,dword ptr [ESP + 0x24]      ; 00440ede
    PUSH EDI                            ; 00440ee2
    PUSH EBX                            ; 00440ee3
    CALL engine_colquant.c_refinePartitionByDistance_FUN_00441110 ; 00440ee4
        ;   XREF to: 00441110 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_refinePartitionByDistance_FUN_00441110(SColorQuantMapper * workspace, int box_index, int new_box_index)
    ADD ESP,0xc                         ; 00440ee9
    ADD ESP,0x8                         ; 00440eec
    POP EBP                             ; 00440eef
    POP EDI                             ; 00440ef0
    POP ESI                             ; 00440ef1
    POP EBX                             ; 00440ef2
    RET                                 ; 00440ef3

