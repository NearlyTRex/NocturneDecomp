; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; SProjectedVertex * Stack[0xc]:4   projected_vertex
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041a840 at 0041a9bf
;   core_set.cpp_CDemonSet_renderScene_FUN_0052f2a0 at 0052f5bd
;
; Referenced Globals:
;   float g_FLOAT_005f4dcc = 256
;   int g_INT_00609fa4 = 0x40
;   int g_INT_00609fa8 = 0x40
;   int g_INT_00609fac = 0x40
;   int g_INT_006141c0 = 0x8
;   undefined4 g_UINT_ARRAY_00b6639c[64]
;   int g_INT_01467158
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c35814
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c35820
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c3582c
;   int g_INT_01c38aec
;   ulong g_ULONG_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00442d80
        ;   Label: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
    SUB ESP,0xc                         ; 00442d81
    MOV ECX,dword ptr [ESP + 0x14]      ; 00442d84
    MOV EAX,dword ptr [ESP + 0x18]      ; 00442d88
    TEST EAX,EAX                        ; 00442d8c
    JZ 0x00442da6                       ; 00442d8e
        ;   XREF to: 00442da6 (CONDITIONAL_JUMP)  ; LAB_00442da6
    CMP dword ptr [0x01467158],0x0      ; 00442d90 | g_INT_01467158
    JZ 0x00442db0                       ; 00442d97
        ;   XREF to: 00442db0 (CONDITIONAL_JUMP)  ; LAB_00442db0
    XOR EBP,EBP                         ; 00442d99
    MOV dword ptr [0x01c38aec],EBP      ; 00442d9b | g_INT_01c38aec
    ADD ESP,0xc                         ; 00442da1
    POP EBP                             ; 00442da4
    RET                                 ; 00442da5
    MOV [0x01c38aec],EAX                ; 00442da6 | g_INT_01c38aec
        ;   Label: LAB_00442da6
    ADD ESP,0xc                         ; 00442dab
    POP EBP                             ; 00442dae
    RET                                 ; 00442daf
    PUSH EDI                            ; 00442db0
        ;   Label: LAB_00442db0
    PUSH ESI                            ; 00442db1
    PUSH EBX                            ; 00442db2
    LEA EBX,[ESP + 0xc]                 ; 00442db3
    FLD float ptr [EAX]                 ; 00442db7
    FMUL float ptr [0x005f4dcc]         ; 00442db9 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00442dbf
    FLD float ptr [EAX + 0x4]           ; 00442dc1
    FMUL float ptr [0x005f4dcc]         ; 00442dc4 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00442dca
    FLD float ptr [EAX + 0x8]           ; 00442dcd
    FMUL float ptr [0x005f4dcc]         ; 00442dd0 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00442dd6
    MOV EBX,dword ptr [ESP + 0x28]      ; 00442dd9
    PUSH EBX                            ; 00442ddd
    LEA EDX,[ESP + 0x10]                ; 00442dde
    PUSH EDX                            ; 00442de2
    MOV EAX,dword ptr [ECX + 0x3c]      ; 00442de3
    PUSH ECX                            ; 00442de6
    CALL dword ptr [EAX + 0x8]          ; 00442de7
    MOV ECX,dword ptr [0x00609fa4]      ; 00442dea | g_INT_00609fa4
    MOV ESI,EAX                         ; 00442df0
    MOV EAX,[0x00609fac]                ; 00442df2 | g_INT_00609fac
    MOV EDI,dword ptr [0x006141c0]      ; 00442df7 | g_INT_006141c0
    MOV EBX,dword ptr [ECX*0x4 + 0xb6639c] ; 00442dfd | g_UINT_ARRAY_00b6639c[64]
    MOV EDX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442e04 | g_UINT_ARRAY_00b6639c[64]
    MOV EAX,[0x00609fa8]                ; 00442e0b | g_INT_00609fa8
    ADD ESP,0xc                         ; 00442e10
    AND EBX,0xff                        ; 00442e13
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442e19 | g_UINT_ARRAY_00b6639c[64]
    AND EDX,0xff                        ; 00442e20
    AND EAX,0xff                        ; 00442e26
    CMP EDI,0x20                        ; 00442e2b
    JNZ 0x00442e62                      ; 00442e2e
        ;   XREF to: 00442e62 (CONDITIONAL_JUMP)  ; LAB_00442e62
    MOV CL,byte ptr [0x01c35814]        ; 00442e30 | g_BIT_INTEGER32_01c35814
    SHL EBX,CL                          ; 00442e36
    MOV CL,byte ptr [0x01c35820]        ; 00442e38 | g_BIT_INTEGER32_01c35820
    SHL EAX,CL                          ; 00442e3e
    MOV CL,byte ptr [0x01c3582c]        ; 00442e40 | g_BIT_INTEGER32_01c3582c
    OR EBX,EAX                          ; 00442e46
    SHL EDX,CL                          ; 00442e48
    MOV ECX,EBX                         ; 00442e4a
    OR ECX,EDX                          ; 00442e4c
        ;   Label: LAB_00442e4c
    MOV dword ptr [0x01c38aec],ESI      ; 00442e4e | g_INT_01c38aec
    MOV dword ptr [0x01c38b5c],ECX      ; 00442e54 | g_ULONG_01c38b5c
    POP EBX                             ; 00442e5a
    POP ESI                             ; 00442e5b
    POP EDI                             ; 00442e5c
    ADD ESP,0xc                         ; 00442e5d
    POP EBP                             ; 00442e60
    RET                                 ; 00442e61
    MOV ECX,EBX                         ; 00442e62
        ;   Label: LAB_00442e62
    SHL EAX,0x8                         ; 00442e64
    SHL ECX,0x10                        ; 00442e67
    OR ECX,EAX                          ; 00442e6a
    JMP 0x00442e4c                      ; 00442e6c
        ;   XREF to: 00442e4c (UNCONDITIONAL_JUMP)  ; LAB_00442e4c

