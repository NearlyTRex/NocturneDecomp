; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   scale
; CVector3d *      Stack[0xc]:4   pivot
; Local Variables:
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2940
        ;   Label: shape_superopt.cpp_CObj_scale_FUN_005d2940
    PUSH ESI                            ; 005d2941
    PUSH EDI                            ; 005d2942
    PUSH EBP                            ; 005d2943
    MOV EBP,ESP                         ; 005d2944
    SUB ESP,0xac                        ; 005d2946
    AND ESP,0xfffffff8                  ; 005d294c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d294f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2952
    XOR ECX,ECX                         ; 005d2955
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2957
    MOV dword ptr [ESP + 0xa8],ECX      ; 005d295a
    MOV ESI,dword ptr [EAX]             ; 005d2961
    MOV EDX,dword ptr [EDX + 0x4]       ; 005d2963
    TEST ESI,ESI                        ; 005d2966
    JBE 0x005d2ab0                      ; 005d2968
        ;   XREF to: 005d2ab0 (CONDITIONAL_JUMP)  ; LAB_005d2ab0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d296e
        ;   Label: LAB_005d296e
    FLD double ptr [EDX]                ; 005d2971
    MOV EAX,dword ptr [EAX]             ; 005d2973
    FLD double ptr [EDX + 0x8]          ; 005d2975
    MOV dword ptr [ESP + 0x30],EAX      ; 005d2978
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d297c
    FLD double ptr [EDX + 0x10]         ; 005d297f
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d2982
    MOV ECX,0x6                         ; 005d2985
    MOV dword ptr [ESP + 0x34],EAX      ; 005d298a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d298e
    LEA EDI,[ESP + 0x60]                ; 005d2991
    LEA ESI,[ESP + 0x48]                ; 005d2995
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d2999
    FXCH ST2                            ; 005d299c
    FSUB double ptr [EBX]               ; 005d299e
    MOV dword ptr [ESP + 0x38],EAX      ; 005d29a0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d29a4
    FXCH                                ; 005d29a7
    FSUB double ptr [EBX + 0x8]         ; 005d29a9
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d29ac
    FXCH ST2                            ; 005d29af
    FSUB double ptr [EBX + 0x10]        ; 005d29b1
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d29b4
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d29b8
    FXCH                                ; 005d29bb
    FSTP double ptr [ESP + 0x48]        ; 005d29bd
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d29c1
    FXCH                                ; 005d29c4
    FSTP double ptr [ESP + 0x50]        ; 005d29c6
    MOV dword ptr [ESP + 0x40],EAX      ; 005d29ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d29ce
    FSTP double ptr [ESP + 0x58]        ; 005d29d1
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d29d5
    MOVSD.REP ES:EDI,ESI                ; 005d29d8
    FLD double ptr [ESP + 0x60]         ; 005d29da
    FMUL double ptr [ESP + 0x30]        ; 005d29de
    FLD double ptr [ESP + 0x68]         ; 005d29e2
    FMUL double ptr [ESP + 0x38]        ; 005d29e6
    MOV dword ptr [ESP + 0x44],EAX      ; 005d29ea
    FLD double ptr [ESP + 0x70]         ; 005d29ee
    FMUL double ptr [ESP + 0x40]        ; 005d29f2
    MOV ECX,0x6                         ; 005d29f6
    MOV EDI,ESP                         ; 005d29fb
    LEA ESI,[ESP + 0x78]                ; 005d29fd
    FXCH ST2                            ; 005d2a01
    FSTP double ptr [ESP + 0x78]        ; 005d2a03
    FSTP double ptr [ESP + 0x80]        ; 005d2a07
    FSTP double ptr [ESP + 0x88]        ; 005d2a0e
    MOVSD.REP ES:EDI,ESI                ; 005d2a15
    FLD double ptr [ESP]                ; 005d2a17
    FLD double ptr [ESP + 0x8]          ; 005d2a1a
    FLD double ptr [ESP + 0x10]         ; 005d2a1e
    MOV ECX,0x6                         ; 005d2a22
    LEA EDI,[ESP + 0x90]                ; 005d2a27
    LEA ESI,[ESP + 0x18]                ; 005d2a2e
    FXCH ST2                            ; 005d2a32
    FADD double ptr [EBX]               ; 005d2a34
    FXCH                                ; 005d2a36
    FADD double ptr [EBX + 0x8]         ; 005d2a38
    FXCH ST2                            ; 005d2a3b
    FADD double ptr [EBX + 0x10]        ; 005d2a3d
    FXCH                                ; 005d2a40
    FSTP double ptr [ESP + 0x18]        ; 005d2a42
    FXCH                                ; 005d2a46
    FSTP double ptr [ESP + 0x20]        ; 005d2a48
    FSTP double ptr [ESP + 0x28]        ; 005d2a4c
    MOVSD.REP ES:EDI,ESI                ; 005d2a50
    ADD EDX,0x38                        ; 005d2a52
    MOV EAX,dword ptr [ESP + 0x90]      ; 005d2a55
    MOV dword ptr [EDX + -0x38],EAX     ; 005d2a5c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005d2a5f
    MOV dword ptr [EDX + -0x34],EAX     ; 005d2a66
    MOV EAX,dword ptr [ESP + 0x98]      ; 005d2a69
    MOV dword ptr [EDX + -0x30],EAX     ; 005d2a70
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d2a73
    MOV dword ptr [EDX + -0x2c],EAX     ; 005d2a7a
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005d2a7d
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005d2a84
    MOV dword ptr [EDX + -0x28],EAX     ; 005d2a8b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005d2a8e
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d2a95
    MOV dword ptr [EDX + -0x24],EAX     ; 005d2a98
    INC EDI                             ; 005d2a9b
    MOV ESI,dword ptr [ECX]             ; 005d2a9c
    MOV dword ptr [ESP + 0xa8],EDI      ; 005d2a9e
    CMP EDI,ESI                         ; 005d2aa5
    JC 0x005d296e                       ; 005d2aa7
        ;   XREF to: 005d296e (CONDITIONAL_JUMP)  ; LAB_005d296e
    LEA EAX,[EAX]                       ; 005d2aad
    MOV ESP,EBP                         ; 005d2ab0
        ;   Label: LAB_005d2ab0
    POP EBP                             ; 005d2ab2
    POP EDI                             ; 005d2ab3
    POP ESI                             ; 005d2ab4
    POP EBX                             ; 005d2ab5
    RET                                 ; 005d2ab6

