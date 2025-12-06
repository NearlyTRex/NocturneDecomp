; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0(CObj * this_ptr, uint flag_mask, CVector3d * scale, CVector3d * pivot)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
; CVector3d *      Stack[0xc]:4   scale
; CVector3d *      Stack[0x10]:4   pivot
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
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2ac0
        ;   Label: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
    PUSH ESI                            ; 005d2ac1
    PUSH EDI                            ; 005d2ac2
    PUSH EBP                            ; 005d2ac3
    MOV EBP,ESP                         ; 005d2ac4
    SUB ESP,0xac                        ; 005d2ac6
    AND ESP,0xfffffff8                  ; 005d2acc
    MOV EBX,dword ptr [EBP + 0x20]      ; 005d2acf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d2ad2
    XOR ECX,ECX                         ; 005d2ad5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d2ad7
    MOV dword ptr [ESP + 0xa8],ECX      ; 005d2ada
    MOV ESI,dword ptr [EAX]             ; 005d2ae1
    MOV EDX,dword ptr [EDX + 0x4]       ; 005d2ae3
    TEST ESI,ESI                        ; 005d2ae6
    JBE 0x005d2b11                      ; 005d2ae8 | LAB_005d2b11
        ;   XREF to: 005d2b11 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d2aea
        ;   Label: LAB_005d2aea
    MOV EAX,dword ptr [EDX + 0x34]      ; 005d2aed
    AND EAX,EDI                         ; 005d2af0
    CMP EAX,EDI                         ; 005d2af2
    JZ 0x005d2b18                       ; 005d2af4 | LAB_005d2b18
        ;   XREF to: 005d2b18 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005d2af6
        ;   Label: LAB_005d2af6
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d2afd
    ADD EDX,0x38                        ; 005d2b00
    INC EDI                             ; 005d2b03
    MOV ESI,dword ptr [ECX]             ; 005d2b04
    MOV dword ptr [ESP + 0xa8],EDI      ; 005d2b06
    CMP EDI,ESI                         ; 005d2b0d
    JC 0x005d2aea                       ; 005d2b0f | LAB_005d2aea
        ;   XREF to: 005d2aea (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005d2b11
        ;   Label: LAB_005d2b11
    POP EBP                             ; 005d2b13
    POP EDI                             ; 005d2b14
    POP ESI                             ; 005d2b15
    POP EBX                             ; 005d2b16
    RET                                 ; 005d2b17
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b18
        ;   Label: LAB_005d2b18
    FLD double ptr [EDX]                ; 005d2b1b
    MOV EAX,dword ptr [EAX]             ; 005d2b1d
    FLD double ptr [EDX + 0x8]          ; 005d2b1f
    MOV dword ptr [ESP + 0x60],EAX      ; 005d2b22
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b26
    FLD double ptr [EDX + 0x10]         ; 005d2b29
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d2b2c
    MOV ECX,0x6                         ; 005d2b2f
    MOV dword ptr [ESP + 0x64],EAX      ; 005d2b34
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b38
    LEA EDI,[ESP + 0x18]                ; 005d2b3b
    MOV ESI,ESP                         ; 005d2b3f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d2b41
    FXCH ST2                            ; 005d2b44
    FSUB double ptr [EBX]               ; 005d2b46
    MOV dword ptr [ESP + 0x68],EAX      ; 005d2b48
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b4c
    FXCH                                ; 005d2b4f
    FSUB double ptr [EBX + 0x8]         ; 005d2b51
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d2b54
    FXCH ST2                            ; 005d2b57
    FSUB double ptr [EBX + 0x10]        ; 005d2b59
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d2b5c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b60
    FXCH                                ; 005d2b63
    FSTP double ptr [ESP]               ; 005d2b65
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d2b68
    FXCH                                ; 005d2b6b
    FSTP double ptr [ESP + 0x8]         ; 005d2b6d
    MOV dword ptr [ESP + 0x70],EAX      ; 005d2b71
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d2b75
    FSTP double ptr [ESP + 0x10]        ; 005d2b78
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d2b7c
    MOVSD.REP ES:EDI,ESI                ; 005d2b7f
    FLD double ptr [ESP + 0x18]         ; 005d2b81
    FMUL double ptr [ESP + 0x60]        ; 005d2b85
    FLD double ptr [ESP + 0x20]         ; 005d2b89
    FMUL double ptr [ESP + 0x68]        ; 005d2b8d
    MOV dword ptr [ESP + 0x74],EAX      ; 005d2b91
    FLD double ptr [ESP + 0x28]         ; 005d2b95
    FMUL double ptr [ESP + 0x70]        ; 005d2b99
    MOV ECX,0x6                         ; 005d2b9d
    LEA EDI,[ESP + 0x48]                ; 005d2ba2
    LEA ESI,[ESP + 0x30]                ; 005d2ba6
    FXCH ST2                            ; 005d2baa
    FSTP double ptr [ESP + 0x30]        ; 005d2bac
    FSTP double ptr [ESP + 0x38]        ; 005d2bb0
    FSTP double ptr [ESP + 0x40]        ; 005d2bb4
    MOVSD.REP ES:EDI,ESI                ; 005d2bb8
    FLD double ptr [ESP + 0x48]         ; 005d2bba
    FLD double ptr [ESP + 0x50]         ; 005d2bbe
    FLD double ptr [ESP + 0x58]         ; 005d2bc2
    MOV ECX,0x6                         ; 005d2bc6
    LEA EDI,[ESP + 0x78]                ; 005d2bcb
    LEA ESI,[ESP + 0x90]                ; 005d2bcf
    FXCH ST2                            ; 005d2bd6
    FADD double ptr [EBX]               ; 005d2bd8
    FXCH                                ; 005d2bda
    FADD double ptr [EBX + 0x8]         ; 005d2bdc
    FXCH ST2                            ; 005d2bdf
    FADD double ptr [EBX + 0x10]        ; 005d2be1
    FXCH                                ; 005d2be4
    FSTP double ptr [ESP + 0x90]        ; 005d2be6
    FXCH                                ; 005d2bed
    FSTP double ptr [ESP + 0x98]        ; 005d2bef
    FSTP double ptr [ESP + 0xa0]        ; 005d2bf6
    MOVSD.REP ES:EDI,ESI                ; 005d2bfd
    MOV EAX,dword ptr [ESP + 0x78]      ; 005d2bff
    MOV dword ptr [EDX],EAX             ; 005d2c03
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005d2c05
    MOV dword ptr [EDX + 0x4],EAX       ; 005d2c09
    MOV EAX,dword ptr [ESP + 0x80]      ; 005d2c0c
    MOV dword ptr [EDX + 0x8],EAX       ; 005d2c13
    MOV EAX,dword ptr [ESP + 0x84]      ; 005d2c16
    MOV dword ptr [EDX + 0xc],EAX       ; 005d2c1d
    MOV EAX,dword ptr [ESP + 0x88]      ; 005d2c20
    MOV dword ptr [EDX + 0x10],EAX      ; 005d2c27
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005d2c2a
    MOV dword ptr [EDX + 0x14],EAX      ; 005d2c31
    JMP 0x005d2af6                      ; 005d2c34 | LAB_005d2af6
        ;   XREF to: 005d2af6 (UNCONDITIONAL_JUMP)

