; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_box_cpp_FUN_00420dc0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380 at 005663c3
;
; Referenced Globals:
;   undefined4 DAT_005d4bc4
;   undefined4 DAT_005d4bc8
;   undefined4 DAT_005fce08
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4effc
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420dc0
        ;   Label: core_box.cpp_FUN_00420dc0
    PUSH ESI                            ; 00420dc1
    PUSH EDI                            ; 00420dc2
    PUSH EBP                            ; 00420dc3
    MOV EBP,ESP                         ; 00420dc4
    SUB ESP,0x48                        ; 00420dc6
    AND ESP,0xfffffff8                  ; 00420dc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00420dcc
    MOV EDX,EAX                         ; 00420dcf
    LEA EDI,[ESP + 0x24]                ; 00420dd1
    LEA ESI,[ESP + 0x18]                ; 00420dd5
    FLD float ptr [EDX]                 ; 00420dd9
    FLD float ptr [EDX + 0x4]           ; 00420ddb
    FLD float ptr [EDX + 0x8]           ; 00420dde
    FXCH ST2                            ; 00420de1
    FADD float ptr [EAX + 0xc]          ; 00420de3
    FXCH                                ; 00420de6
    FADD float ptr [EAX + 0x10]         ; 00420de8
    FXCH ST2                            ; 00420deb
    FADD float ptr [EAX + 0x14]         ; 00420ded
    FXCH                                ; 00420df0
    FSTP float ptr [ESP + 0x18]         ; 00420df2
    FXCH                                ; 00420df6
    FSTP float ptr [ESP + 0x1c]         ; 00420df8
    FSTP float ptr [ESP + 0x20]         ; 00420dfc
    MOVSD ES:EDI,ESI                    ; 00420e00
    MOVSD ES:EDI,ESI                    ; 00420e01
    MOVSD ES:EDI,ESI                    ; 00420e02
    FLD float ptr [0x005d4bc4]          ; 00420e03 | DAT_005d4bc4
    FLD float ptr [ESP + 0x24]          ; 00420e09
    FMUL ST1                            ; 00420e0d
    FLD float ptr [ESP + 0x28]          ; 00420e0f
    FMUL ST2                            ; 00420e13
    FLD float ptr [ESP + 0x2c]          ; 00420e15
    FMULP ST3                           ; 00420e19
    LEA EBX,[ESP + 0x30]                ; 00420e1b
    MOV EDX,dword ptr [0x00612560]      ; 00420e1f | DAT_00612560
    MOV EAX,ESP                         ; 00420e25
    MOV EDI,ESP                         ; 00420e27
    LEA ESI,[ESP + 0xc]                 ; 00420e29
    FXCH                                ; 00420e2d
    FSTP float ptr [ESP + 0xc]          ; 00420e2f
    FSTP float ptr [ESP + 0x10]         ; 00420e33
    FSTP float ptr [ESP + 0x14]         ; 00420e37
    MOVSD ES:EDI,ESI                    ; 00420e3b
    MOVSD ES:EDI,ESI                    ; 00420e3c
    MOVSD ES:EDI,ESI                    ; 00420e3d
    FLD float ptr [EAX]                 ; 00420e3e
    FMUL float ptr [0x005fce08]         ; 00420e40 | DAT_005fce08
    FISTP dword ptr [EBX]               ; 00420e46
    FLD float ptr [EAX + 0x4]           ; 00420e48
    FMUL float ptr [0x005fce08]         ; 00420e4b | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 00420e51
    FLD float ptr [EAX + 0x8]           ; 00420e54
    FMUL float ptr [0x005fce08]         ; 00420e57 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 00420e5d
    LEA EAX,[ESP + 0x30]                ; 00420e60
    PUSH EAX                            ; 00420e64
    MOV EAX,dword ptr [EDX]             ; 00420e65 | DAT_01bc120c
    ADD EAX,0xea5d0                     ; 00420e67
    PUSH EAX                            ; 00420e6c
    CALL engine_special.cpp_FUN_00580173 ; 00420e6d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00420e72 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 00420e77 | DAT_01bc120c
    MOV EAX,dword ptr [EAX + 0xea5d8]   ; 00420e79
    ADD ESP,0x8                         ; 00420e7f
    TEST EAX,EAX                        ; 00420e82
    JLE 0x00420ec8                      ; 00420e84
        ;   XREF to: 00420ec8 (CONDITIONAL_JUMP)  ; LAB_00420ec8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00420e86
    FLD float ptr [EDX + 0x10]          ; 00420e89
    FSUB float ptr [EDX + 0x4]          ; 00420e8c
    MOV dword ptr [ESP + 0x44],EAX      ; 00420e8f
    FILD dword ptr [ESP + 0x44]         ; 00420e93
    FMUL double ptr [0x005d4bc8]        ; 00420e97 | DAT_005d4bc8
    FDIVP                               ; 00420e9d
    FILD dword ptr [0x01c4effc]         ; 00420e9f | DAT_01c4effc
    FMULP                               ; 00420ea5
    FILD dword ptr [0x0061b4c4]         ; 00420ea7 | DAT_0061b4c4
    FDIVP                               ; 00420ead
    FABS                                ; 00420eaf
    FSTP float ptr [ESP + 0x3c]         ; 00420eb1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00420eb5
    MOV dword ptr [ESP + 0x40],EAX      ; 00420eb9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00420ebd
    MOV ESP,EBP                         ; 00420ec1
    POP EBP                             ; 00420ec3
    POP EDI                             ; 00420ec4
    POP ESI                             ; 00420ec5
    POP EBX                             ; 00420ec6
    RET                                 ; 00420ec7
    MOV dword ptr [ESP + 0x40],0x47c34f80 ; 00420ec8
        ;   Label: LAB_00420ec8
    MOV EAX,dword ptr [ESP + 0x40]      ; 00420ed0
    MOV ESP,EBP                         ; 00420ed4
    POP EBP                             ; 00420ed6
    POP EDI                             ; 00420ed7
    POP ESI                             ; 00420ed8
    POP EBX                             ; 00420ed9
    RET                                 ; 00420eda

