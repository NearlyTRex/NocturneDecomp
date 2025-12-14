; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_box_index
; int              Stack[0xc]:4   dest_box_index
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40 at 00555c68
;
; Called Functions:
;   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
;   shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554e70
        ;   Label: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
    PUSH ESI                            ; 00554e71
    PUSH EDI                            ; 00554e72
    PUSH EBP                            ; 00554e73
    SUB ESP,0x14                        ; 00554e74
    MOV EDI,dword ptr [ESP + 0x28]      ; 00554e77
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00554e7b
    LEA EBX,[EDX*0x4 + 0x0]             ; 00554e7f
    ADD EBX,EDX                         ; 00554e86
    SHL EBX,0x3                         ; 00554e88
    LEA EAX,[EDI + EBX*0x1]             ; 00554e8b
    LEA EDX,[EDI + 0x2030]              ; 00554e8e
    MOV EBP,dword ptr [EAX + 0x2050]    ; 00554e94
    MOV ESI,dword ptr [EAX + 0x2054]    ; 00554e9a
    LEA EAX,[EDX + EBX*0x1]             ; 00554ea0
    MOV EBX,dword ptr [ESP + 0x30]      ; 00554ea3
    MOV dword ptr [ESP + 0xc],EAX       ; 00554ea7
    LEA EAX,[EBX*0x4 + 0x0]             ; 00554eab
    ADD ESI,EBP                         ; 00554eb2
    ADD EAX,EBX                         ; 00554eb4
    DEC ESI                             ; 00554eb6
    SHL EAX,0x3                         ; 00554eb7
    MOV EBX,dword ptr [EDI + 0x4]       ; 00554eba
    ADD EDX,EAX                         ; 00554ebd
    LEA EAX,[EBP*0x4 + 0x0]             ; 00554ebf
    MOV dword ptr [ESP + 0x8],EDX       ; 00554ec6
    LEA EDX,[EBX + EAX*0x1]             ; 00554eca
    LEA EAX,[ESI*0x4 + 0x0]             ; 00554ecd
    MOV dword ptr [ESP + 0x4],EDX       ; 00554ed4
    ADD EBX,EAX                         ; 00554ed8
    CMP EBP,ESI                         ; 00554eda
    JGE 0x00554f7c                      ; 00554edc
        ;   XREF to: 00554f7c (CONDITIONAL_JUMP)  ; LAB_00554f7c
    MOV ECX,dword ptr [ESP + 0x4]       ; 00554ee2
        ;   Label: LAB_00554ee2
    PUSH ECX                            ; 00554ee6
    MOV EAX,dword ptr [ESP + 0x10]      ; 00554ee7
    PUSH EAX                            ; 00554eeb
    PUSH EDI                            ; 00554eec
    CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0 ; 00554eed
        ;   XREF to: 00554ff0 (UNCONDITIONAL_CALL)  ; float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
    MOV dword ptr [ESP + 0xc],EAX       ; 00554ef2
    ADD ESP,0xc                         ; 00554ef6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00554ef9
    PUSH EDX                            ; 00554efd
    MOV ECX,dword ptr [ESP + 0xc]       ; 00554efe
    PUSH ECX                            ; 00554f02
    PUSH EDI                            ; 00554f03
    CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0 ; 00554f04
        ;   XREF to: 00554ff0 (UNCONDITIONAL_CALL)  ; float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00554f09
    FLD float ptr [ESP + 0x1c]          ; 00554f0d
    ADD ESP,0xc                         ; 00554f11
    FCOMP float ptr [ESP]               ; 00554f14
    FNSTSW AX                           ; 00554f17
    SAHF                                ; 00554f19
    JNC 0x00554f68                      ; 00554f1a
        ;   XREF to: 00554f68 (CONDITIONAL_JUMP)  ; LAB_00554f68
    CMP EBP,ESI                         ; 00554f1c
        ;   Label: LAB_00554f1c
    JGE 0x00554f58                      ; 00554f1e
        ;   XREF to: 00554f58 (CONDITIONAL_JUMP)  ; LAB_00554f58
    PUSH EBX                            ; 00554f20
    MOV EAX,dword ptr [ESP + 0x10]      ; 00554f21
    PUSH EAX                            ; 00554f25
    PUSH EDI                            ; 00554f26
    CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0 ; 00554f27
        ;   XREF to: 00554ff0 (UNCONDITIONAL_CALL)  ; float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
    MOV dword ptr [ESP + 0xc],EAX       ; 00554f2c
    ADD ESP,0xc                         ; 00554f30
    PUSH EBX                            ; 00554f33
    MOV EDX,dword ptr [ESP + 0xc]       ; 00554f34
    PUSH EDX                            ; 00554f38
    PUSH EDI                            ; 00554f39
    CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0 ; 00554f3a
        ;   XREF to: 00554ff0 (UNCONDITIONAL_CALL)  ; float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00554f3f
    FLD float ptr [ESP + 0x1c]          ; 00554f43
    ADD ESP,0xc                         ; 00554f47
    FCOMP float ptr [ESP]               ; 00554f4a
    FNSTSW AX                           ; 00554f4d
    SAHF                                ; 00554f4f
    JNC 0x00554f58                      ; 00554f50
        ;   XREF to: 00554f58 (CONDITIONAL_JUMP)  ; LAB_00554f58
    SUB EBX,0x4                         ; 00554f52
    DEC ESI                             ; 00554f55
    JMP 0x00554f1c                      ; 00554f56
        ;   XREF to: 00554f1c (UNCONDITIONAL_JUMP)  ; LAB_00554f1c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00554f58
        ;   Label: LAB_00554f58
    MOV ECX,dword ptr [ESP + 0x4]       ; 00554f5c
    MOV EDX,dword ptr [EBX]             ; 00554f60
    MOV EAX,dword ptr [EAX]             ; 00554f62
    MOV dword ptr [ECX],EDX             ; 00554f64
    MOV dword ptr [EBX],EAX             ; 00554f66
    MOV EDX,dword ptr [ESP + 0x4]       ; 00554f68
        ;   Label: LAB_00554f68
    ADD EDX,0x4                         ; 00554f6c
    INC EBP                             ; 00554f6f
    MOV dword ptr [ESP + 0x4],EDX       ; 00554f70
    CMP EBP,ESI                         ; 00554f74
    JL 0x00554ee2                       ; 00554f76
        ;   XREF to: 00554ee2 (CONDITIONAL_JUMP)  ; LAB_00554ee2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00554f7c
        ;   Label: LAB_00554f7c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00554f80
    ADD EAX,EDX                         ; 00554f87
    SHL EAX,0x3                         ; 00554f89
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00554f8c
    LEA EBX,[EDI + EAX*0x1]             ; 00554f90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00554f93
    ADD EAX,EDX                         ; 00554f9a
    MOV dword ptr [EBX + 0x2050],ESI    ; 00554f9c
    MOV EDX,ESI                         ; 00554fa2
    MOV ECX,dword ptr [EDI + EAX*0x8 + 0x2050] ; 00554fa4
    MOV EBP,dword ptr [EDI + EAX*0x8 + 0x2054] ; 00554fab
    SUB EDX,ECX                         ; 00554fb2
    SUB EBP,EDX                         ; 00554fb4
    MOV dword ptr [EBX + 0x2054],EBP    ; 00554fb6
    MOV EBX,dword ptr [EDI + EAX*0x8 + 0x2050] ; 00554fbc
    SUB ESI,EBX                         ; 00554fc3
    MOV dword ptr [EDI + EAX*0x8 + 0x2054],ESI ; 00554fc5
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00554fcc
    PUSH ESI                            ; 00554fd0
    PUSH EDI                            ; 00554fd1
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00554fd2
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00554fd7
    MOV EBP,dword ptr [ESP + 0x30]      ; 00554fda
    PUSH EBP                            ; 00554fde
    PUSH EDI                            ; 00554fdf
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00554fe0
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00554fe5
    ADD ESP,0x14                        ; 00554fe8
    POP EBP                             ; 00554feb
    POP EDI                             ; 00554fec
    POP ESI                             ; 00554fed
    POP EBX                             ; 00554fee
    RET                                 ; 00554fef

