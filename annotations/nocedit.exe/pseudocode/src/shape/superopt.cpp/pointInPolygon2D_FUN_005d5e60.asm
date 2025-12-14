; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point)
;
; Parameters:
; CVector2d *      Stack[0x4]:4   vertices
; uint             Stack[0x8]:4   vertex_count
; CVector2d *      Stack[0xc]:4   test_point
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0 at 005d5df7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d5e60
        ;   Label: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
    PUSH ESI                            ; 005d5e61
    PUSH EDI                            ; 005d5e62
    PUSH EBP                            ; 005d5e63
    MOV EBP,ESP                         ; 005d5e64
    SUB ESP,0x5c                        ; 005d5e66
    AND ESP,0xfffffff8                  ; 005d5e69
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d5e6c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005d5e6f
    MOV ESI,dword ptr [EBP + 0x18]      ; 005d5e72
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d5e75
    SHL ESI,0x4                         ; 005d5e78
    XOR EBX,EBX                         ; 005d5e7b
    SUB ESI,0x10                        ; 005d5e7d
    MOV dword ptr [ESP + 0x58],EBX      ; 005d5e80
    ADD ESI,ECX                         ; 005d5e84
    TEST EAX,EAX                        ; 005d5e86
    JBE 0x005d5f0b                      ; 005d5e88
        ;   XREF to: 005d5f0b (CONDITIONAL_JUMP)  ; LAB_005d5f0b
    LEA EDI,[ESP + 0x18]                ; 005d5e8e
        ;   Label: LAB_005d5e8e
    MOVSD ES:EDI,ESI                    ; 005d5e92
    MOVSD ES:EDI,ESI                    ; 005d5e93
    MOVSD ES:EDI,ESI                    ; 005d5e94
    MOVSD ES:EDI,ESI                    ; 005d5e95
    LEA EDI,[ESP + 0x28]                ; 005d5e96
    MOV ESI,ECX                         ; 005d5e9a
    MOVSD ES:EDI,ESI                    ; 005d5e9c
    MOVSD ES:EDI,ESI                    ; 005d5e9d
    MOVSD ES:EDI,ESI                    ; 005d5e9e
    MOVSD ES:EDI,ESI                    ; 005d5e9f
    FLD double ptr [ESP + 0x20]         ; 005d5ea0
    FCOMP double ptr [ESP + 0x30]       ; 005d5ea4
    FNSTSW AX                           ; 005d5ea8
    SAHF                                ; 005d5eaa
    JA 0x005d5f1d                       ; 005d5eab
        ;   XREF to: 005d5f1d (CONDITIONAL_JUMP)  ; LAB_005d5f1d
    FLD double ptr [ESP + 0x20]         ; 005d5ead
        ;   Label: LAB_005d5ead
    FCOMP double ptr [EDX + 0x8]        ; 005d5eb1
    FNSTSW AX                           ; 005d5eb4
    SAHF                                ; 005d5eb6
    JA 0x005d5ef4                       ; 005d5eb7
        ;   XREF to: 005d5ef4 (CONDITIONAL_JUMP)  ; LAB_005d5ef4
    FLD double ptr [ESP + 0x30]         ; 005d5eb9
    FCOMP double ptr [EDX + 0x8]        ; 005d5ebd
    FNSTSW AX                           ; 005d5ec0
    SAHF                                ; 005d5ec2
    JC 0x005d5ef4                       ; 005d5ec3
        ;   XREF to: 005d5ef4 (CONDITIONAL_JUMP)  ; LAB_005d5ef4
    FLD double ptr [EDX + 0x8]          ; 005d5ec5
    FCOMP double ptr [ESP + 0x20]       ; 005d5ec8
    FNSTSW AX                           ; 005d5ecc
    SAHF                                ; 005d5ece
    JZ 0x005d5f80                       ; 005d5ecf
        ;   XREF to: 005d5f80 (CONDITIONAL_JUMP)  ; LAB_005d5f80
    FLD double ptr [ESP + 0x18]         ; 005d5ed5
        ;   Label: LAB_005d5ed5
    FCOMP double ptr [EDX]              ; 005d5ed9
    FNSTSW AX                           ; 005d5edb
    SAHF                                ; 005d5edd
    JA 0x005d5f95                       ; 005d5ede
        ;   XREF to: 005d5f95 (CONDITIONAL_JUMP)  ; LAB_005d5f95
    FLD double ptr [ESP + 0x28]         ; 005d5ee4
    FCOMP double ptr [EDX]              ; 005d5ee8
    FNSTSW AX                           ; 005d5eea
    SAHF                                ; 005d5eec
    JA 0x005d5f95                       ; 005d5eed
        ;   XREF to: 005d5f95 (CONDITIONAL_JUMP)  ; LAB_005d5f95
    INC EBX                             ; 005d5ef3
        ;   Label: LAB_005d5ef3
    MOV EDI,dword ptr [ESP + 0x58]      ; 005d5ef4
        ;   Label: LAB_005d5ef4
    INC EDI                             ; 005d5ef8
    MOV ESI,ECX                         ; 005d5ef9
    MOV dword ptr [ESP + 0x58],EDI      ; 005d5efb
    MOV EAX,EDI                         ; 005d5eff
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d5f01
    ADD ECX,0x10                        ; 005d5f04
    CMP EAX,EDI                         ; 005d5f07
    JC 0x005d5e8e                       ; 005d5f09
        ;   XREF to: 005d5e8e (CONDITIONAL_JUMP)  ; LAB_005d5e8e
    TEST BL,0x1                         ; 005d5f0b
        ;   Label: LAB_005d5f0b
    SETNZ AL                            ; 005d5f0e
    AND EAX,0xff                        ; 005d5f11
    MOV ESP,EBP                         ; 005d5f16
    POP EBP                             ; 005d5f18
    POP EDI                             ; 005d5f19
    POP ESI                             ; 005d5f1a
    POP EBX                             ; 005d5f1b
    RET                                 ; 005d5f1c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d5f1d
        ;   Label: LAB_005d5f1d
    MOV dword ptr [ESP],EAX             ; 005d5f21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d5f24
    MOV dword ptr [ESP + 0x4],EAX       ; 005d5f28
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d5f2c
    MOV dword ptr [ESP + 0x8],EAX       ; 005d5f30
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d5f34
    MOV dword ptr [ESP + 0xc],EAX       ; 005d5f38
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d5f3c
    MOV dword ptr [ESP + 0x18],EAX      ; 005d5f40
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005d5f44
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d5f48
    MOV EAX,dword ptr [ESP + 0x30]      ; 005d5f4c
    MOV dword ptr [ESP + 0x20],EAX      ; 005d5f50
    MOV EAX,dword ptr [ESP + 0x34]      ; 005d5f54
    MOV dword ptr [ESP + 0x24],EAX      ; 005d5f58
    MOV EAX,dword ptr [ESP]             ; 005d5f5c
    MOV dword ptr [ESP + 0x28],EAX      ; 005d5f5f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d5f63
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d5f67
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d5f6b
    MOV dword ptr [ESP + 0x30],EAX      ; 005d5f6f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d5f73
    MOV dword ptr [ESP + 0x34],EAX      ; 005d5f77
    JMP 0x005d5ead                      ; 005d5f7b
        ;   XREF to: 005d5ead (UNCONDITIONAL_JUMP)  ; LAB_005d5ead
    FLD double ptr [EDX + 0x8]          ; 005d5f80
        ;   Label: LAB_005d5f80
    FCOMP double ptr [ESP + 0x30]       ; 005d5f83
    FNSTSW AX                           ; 005d5f87
    SAHF                                ; 005d5f89
    JNZ 0x005d5ed5                      ; 005d5f8a
        ;   XREF to: 005d5ed5 (CONDITIONAL_JUMP)  ; LAB_005d5ed5
    JMP 0x005d5ef4                      ; 005d5f90
        ;   XREF to: 005d5ef4 (UNCONDITIONAL_JUMP)  ; LAB_005d5ef4
    FLD double ptr [ESP + 0x28]         ; 005d5f95
        ;   Label: LAB_005d5f95
    FLD double ptr [ESP + 0x30]         ; 005d5f99
    LEA EDI,[ESP + 0x48]                ; 005d5f9d
    LEA ESI,[ESP + 0x38]                ; 005d5fa1
    XOR EAX,EAX                         ; 005d5fa5
    FXCH                                ; 005d5fa7
    FSUB double ptr [ESP + 0x18]        ; 005d5fa9
    FXCH                                ; 005d5fad
    FSUB double ptr [ESP + 0x20]        ; 005d5faf
    MOV dword ptr [ESP + 0x10],EAX      ; 005d5fb3
    FSTP double ptr [ESP + 0x40]        ; 005d5fb7
    FSTP double ptr [ESP + 0x38]        ; 005d5fbb
    MOVSD ES:EDI,ESI                    ; 005d5fbf
    MOVSD ES:EDI,ESI                    ; 005d5fc0
    MOVSD ES:EDI,ESI                    ; 005d5fc1
    MOVSD ES:EDI,ESI                    ; 005d5fc2
    MOV dword ptr [ESP + 0x14],EAX      ; 005d5fc3
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005d5fc7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d5fcb
    TEST EDI,0x7fffffff                 ; 005d5fcf
    JNZ 0x005d5fdb                      ; 005d5fd5
        ;   XREF to: 005d5fdb (CONDITIONAL_JUMP)  ; LAB_005d5fdb
    TEST EAX,EAX                        ; 005d5fd7
    JZ 0x005d5ffb                       ; 005d5fd9
        ;   XREF to: 005d5ffb (CONDITIONAL_JUMP)  ; LAB_005d5ffb
    MOV ESI,dword ptr [ESP + 0x54]      ; 005d5fdb
        ;   Label: LAB_005d5fdb
    MOV EDI,dword ptr [ESP + 0x50]      ; 005d5fdf
    TEST ESI,0x7fffffff                 ; 005d5fe3
    JNZ 0x005d5fef                      ; 005d5fe9
        ;   XREF to: 005d5fef (CONDITIONAL_JUMP)  ; LAB_005d5fef
    TEST EDI,EDI                        ; 005d5feb
    JZ 0x005d5ffb                       ; 005d5fed
        ;   XREF to: 005d5ffb (CONDITIONAL_JUMP)  ; LAB_005d5ffb
    FLD double ptr [ESP + 0x48]         ; 005d5fef
        ;   Label: LAB_005d5fef
    FDIV double ptr [ESP + 0x50]        ; 005d5ff3
    FSTP double ptr [ESP + 0x10]        ; 005d5ff7
    FLD double ptr [EDX + 0x8]          ; 005d5ffb
        ;   Label: LAB_005d5ffb
    FSUB double ptr [ESP + 0x20]        ; 005d5ffe
    FMUL double ptr [ESP + 0x10]        ; 005d6002
    FADD double ptr [ESP + 0x18]        ; 005d6006
    FCOMP double ptr [EDX]              ; 005d600a
    FNSTSW AX                           ; 005d600c
    SAHF                                ; 005d600e
    JNC 0x005d5ef4                      ; 005d600f
        ;   XREF to: 005d5ef4 (CONDITIONAL_JUMP)  ; LAB_005d5ef4
    JMP 0x005d5ef3                      ; 005d6015
        ;   XREF to: 005d5ef3 (UNCONDITIONAL_JUMP)  ; LAB_005d5ef3

