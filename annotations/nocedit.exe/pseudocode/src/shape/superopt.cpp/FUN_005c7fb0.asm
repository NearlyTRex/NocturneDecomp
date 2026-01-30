; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_FUN_005c7fb0(void)
;
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_superopt.cpp_FUN_005c7dc0 at 005c7e6f
;
; Called Functions:
;   shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7fb0
        ;   Label: shape_superopt.cpp_FUN_005c7fb0
    PUSH ESI                            ; 005c7fb1
    PUSH EDI                            ; 005c7fb2
    PUSH EBP                            ; 005c7fb3
    MOV EBP,ESP                         ; 005c7fb4
    SUB ESP,0x90                        ; 005c7fb6
    AND ESP,0xfffffff8                  ; 005c7fbc
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c7fbf
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005c7fc2
    LEA ECX,[ESI + 0x28]                ; 005c7fc5
    LEA EDX,[EBX + 0x10]                ; 005c7fc8
    FLD double ptr [ECX]                ; 005c7fcb
    FCOMP double ptr [EDX]              ; 005c7fcd
    FNSTSW AX                           ; 005c7fcf
    SAHF                                ; 005c7fd1
    JZ 0x005c7ff0                       ; 005c7fd2
        ;   XREF to: 005c7ff0 (CONDITIONAL_JUMP)  ; LAB_005c7ff0
    LEA EDX,[ESI + 0x10]                ; 005c7fd4
        ;   Label: LAB_005c7fd4
    LEA ECX,[EBX + 0x28]                ; 005c7fd7
    FLD double ptr [EDX]                ; 005c7fda
    FCOMP double ptr [ECX]              ; 005c7fdc
    FNSTSW AX                           ; 005c7fde
    SAHF                                ; 005c7fe0
    JZ 0x005c811b                       ; 005c7fe1
        ;   XREF to: 005c811b (CONDITIONAL_JUMP)  ; LAB_005c811b
    XOR EAX,EAX                         ; 005c7fe7
        ;   Label: LAB_005c7fe7
    MOV ESP,EBP                         ; 005c7fe9
    POP EBP                             ; 005c7feb
    POP EDI                             ; 005c7fec
    POP ESI                             ; 005c7fed
    POP EBX                             ; 005c7fee
    RET                                 ; 005c7fef
    FLD double ptr [ECX + 0x8]          ; 005c7ff0
        ;   Label: LAB_005c7ff0
    FCOMP double ptr [EDX + 0x8]        ; 005c7ff3
    FNSTSW AX                           ; 005c7ff6
    SAHF                                ; 005c7ff8
    JNZ 0x005c7fd4                      ; 005c7ff9
        ;   XREF to: 005c7fd4 (CONDITIONAL_JUMP)  ; LAB_005c7fd4
    FLD double ptr [ECX + 0x10]         ; 005c7ffb
    FCOMP double ptr [EDX + 0x10]       ; 005c7ffe
    FNSTSW AX                           ; 005c8001
    SAHF                                ; 005c8003
    JNZ 0x005c7fd4                      ; 005c8004
        ;   XREF to: 005c7fd4 (CONDITIONAL_JUMP)  ; LAB_005c7fd4
    LEA EDX,[ESI + 0x28]                ; 005c8006
        ;   Label: LAB_005c8006
    MOV ECX,0x6                         ; 005c8009
    LEA EDI,[ESP + 0x48]                ; 005c800e
    FLD double ptr [EDX]                ; 005c8012
    FLD double ptr [EDX + 0x8]          ; 005c8014
    LEA EAX,[ESI + 0x10]                ; 005c8017
    FLD double ptr [EDX + 0x10]         ; 005c801a
    LEA ESI,[ESP + 0x18]                ; 005c801d
    FXCH ST2                            ; 005c8021
    FSUB double ptr [EAX]               ; 005c8023
    FXCH                                ; 005c8025
    FSUB double ptr [EAX + 0x8]         ; 005c8027
    FXCH ST2                            ; 005c802a
    FSUB double ptr [EAX + 0x10]        ; 005c802c
    FXCH                                ; 005c802f
    FSTP double ptr [ESP + 0x18]        ; 005c8031
    FXCH                                ; 005c8035
    FSTP double ptr [ESP + 0x20]        ; 005c8037
    FSTP double ptr [ESP + 0x28]        ; 005c803b
    MOVSD.REP ES:EDI,ESI                ; 005c803f
    MOV EAX,dword ptr [ESP + 0x48]      ; 005c8041
    MOV dword ptr [ESP + 0x60],EAX      ; 005c8045
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005c8049
    MOV dword ptr [ESP + 0x64],EAX      ; 005c804d
    MOV EAX,dword ptr [ESP + 0x50]      ; 005c8051
    MOV dword ptr [ESP + 0x68],EAX      ; 005c8055
    MOV EAX,dword ptr [ESP + 0x54]      ; 005c8059
    LEA EDX,[EBX + 0x28]                ; 005c805d
    MOV dword ptr [ESP + 0x6c],EAX      ; 005c8060
    MOV EAX,dword ptr [ESP + 0x58]      ; 005c8064
    MOV ECX,0x6                         ; 005c8068
    MOV dword ptr [ESP + 0x70],EAX      ; 005c806d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005c8071
    LEA EDI,[ESP + 0x78]                ; 005c8075
    MOV dword ptr [ESP + 0x74],EAX      ; 005c8079
    LEA ESI,[ESP + 0x30]                ; 005c807d
    FLD double ptr [EDX]                ; 005c8081
    FLD double ptr [EDX + 0x8]          ; 005c8083
    LEA EAX,[EBX + 0x10]                ; 005c8086
    FLD double ptr [EDX + 0x10]         ; 005c8089
    FXCH ST2                            ; 005c808c
    FSUB double ptr [EAX]               ; 005c808e
    FXCH                                ; 005c8090
    FSUB double ptr [EAX + 0x8]         ; 005c8092
    FXCH ST2                            ; 005c8095
    FSUB double ptr [EAX + 0x10]        ; 005c8097
    FXCH                                ; 005c809a
    FSTP double ptr [ESP + 0x30]        ; 005c809c
    FXCH                                ; 005c80a0
    FSTP double ptr [ESP + 0x38]        ; 005c80a2
    FSTP double ptr [ESP + 0x40]        ; 005c80a6
    MOVSD.REP ES:EDI,ESI                ; 005c80aa
    FLD double ptr [ESP + 0x50]         ; 005c80ac
    FMUL double ptr [ESP + 0x80]        ; 005c80b0
    MOV EAX,dword ptr [ESP + 0x78]      ; 005c80b7
    FLD double ptr [ESP + 0x48]         ; 005c80bb
    MOV dword ptr [ESP],EAX             ; 005c80bf
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005c80c2
    FMUL double ptr [ESP + 0x78]        ; 005c80c6
    MOV dword ptr [ESP + 0x4],EAX       ; 005c80ca
    FADDP                               ; 005c80ce
    MOV EAX,dword ptr [ESP + 0x80]      ; 005c80d0
    FLD double ptr [ESP + 0x58]         ; 005c80d7
    MOV dword ptr [ESP + 0x8],EAX       ; 005c80db
    MOV EAX,dword ptr [ESP + 0x84]      ; 005c80df
    FMUL double ptr [ESP + 0x88]        ; 005c80e6
    MOV dword ptr [ESP + 0xc],EAX       ; 005c80ed
    MOV EAX,dword ptr [ESP + 0x88]      ; 005c80f1
    FADDP                               ; 005c80f8
    MOV dword ptr [ESP + 0x10],EAX      ; 005c80fa
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005c80fe
    FLDZ                                ; 005c8105
    MOV dword ptr [ESP + 0x14],EAX      ; 005c8107
    FCOMPP                              ; 005c810b
    FNSTSW AX                           ; 005c810d
    SAHF                                ; 005c810f
    JBE 0x005c813e                      ; 005c8110
        ;   XREF to: 005c813e (CONDITIONAL_JUMP)  ; LAB_005c813e
    XOR EAX,EAX                         ; 005c8112
    MOV ESP,EBP                         ; 005c8114
    POP EBP                             ; 005c8116
    POP EDI                             ; 005c8117
    POP ESI                             ; 005c8118
    POP EBX                             ; 005c8119
    RET                                 ; 005c811a
    FLD double ptr [EDX + 0x8]          ; 005c811b
        ;   Label: LAB_005c811b
    FCOMP double ptr [ECX + 0x8]        ; 005c811e
    FNSTSW AX                           ; 005c8121
    SAHF                                ; 005c8123
    JNZ 0x005c7fe7                      ; 005c8124
        ;   XREF to: 005c7fe7 (CONDITIONAL_JUMP)  ; LAB_005c7fe7
    FLD double ptr [EDX + 0x10]         ; 005c812a
    FCOMP double ptr [ECX + 0x10]       ; 005c812d
    FNSTSW AX                           ; 005c8130
    SAHF                                ; 005c8132
    JNZ 0x005c7fe7                      ; 005c8133
        ;   XREF to: 005c7fe7 (CONDITIONAL_JUMP)  ; LAB_005c7fe7
    JMP 0x005c8006                      ; 005c8139
        ;   XREF to: 005c8006 (UNCONDITIONAL_JUMP)  ; LAB_005c8006
    MOV EAX,ESP                         ; 005c813e
        ;   Label: LAB_005c813e
    PUSH EAX                            ; 005c8140
    LEA EAX,[ESP + 0x64]                ; 005c8141
    PUSH EAX                            ; 005c8145
    CALL shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0 ; 005c8146
        ;   XREF to: 005d66e0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0(CVector3d * vec1, CVector3d * vec2)
    ADD ESP,0x8                         ; 005c814b
    MOV ESP,EBP                         ; 005c814e
    POP EBP                             ; 005c8150
    POP EDI                             ; 005c8151
    POP ESI                             ; 005c8152
    POP EBX                             ; 005c8153
    RET                                 ; 005c8154

