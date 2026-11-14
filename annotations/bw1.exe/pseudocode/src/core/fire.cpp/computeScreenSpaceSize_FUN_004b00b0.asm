; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(float depth,float min_size)
;
; Parameters:
; float            Stack[0x4]:4   depth
; float            Stack[0x8]:4   min_size
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b0ab7
;
; Referenced Globals:
;   undefined4 DAT_005df2b4
;   undefined4 DAT_005df2bc
;   undefined4 DAT_005df2c4
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b00b0
        ;   Label: core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0
    SUB ESP,0x30                        ; 004b00b1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b00b4
    XOR EDX,EDX                         ; 004b00b8
    MOV EBX,ESP                         ; 004b00ba
    MOV dword ptr [ESP + 0xc],EDX       ; 004b00bc
    MOV dword ptr [ESP + 0x10],EDX      ; 004b00c0
    MOV dword ptr [ESP + 0x14],EAX      ; 004b00c4
    LEA EAX,[ESP + 0xc]                 ; 004b00c8
    MOV EDX,dword ptr [0x00612560]      ; 004b00cc | DAT_00612560
    FLD float ptr [EAX]                 ; 004b00d2
    FMUL float ptr [0x005fff94]         ; 004b00d4 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b00da
    FLD float ptr [EAX + 0x4]           ; 004b00dc
    FMUL float ptr [0x005fff94]         ; 004b00df | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b00e5
    FLD float ptr [EAX + 0x8]           ; 004b00e8
    FMUL float ptr [0x005fff94]         ; 004b00eb | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b00f1
    MOV EAX,ESP                         ; 004b00f4
    PUSH EAX                            ; 004b00f6
    MOV EAX,dword ptr [EDX]             ; 004b00f7 | DAT_01bc120c
    PUSH EAX                            ; 004b00f9
    CALL engine_special.cpp_FUN_00580173 ; 004b00fa
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b00ff | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004b0104 | DAT_01bc120c
    FILD dword ptr [EAX + 0x8]          ; 004b0106
    FMUL double ptr [0x005df2b4]        ; 004b0109 | DAT_005df2b4
    FLD double ptr [0x005df2bc]         ; 004b010f | DAT_005df2bc
    FILD dword ptr [0x0061b4c4]         ; 004b0115 | DAT_0061b4c4
    FMUL ST1                            ; 004b011b
    FDIVP ST2,ST0                       ; 004b011d
    FILD dword ptr [0x01c4eff8]         ; 004b011f | DAT_01c4eff8
    FMUL ST1                            ; 004b0125
    ADD ESP,0x8                         ; 004b0127
    FXCH ST2                            ; 004b012a
    FMUL float ptr [0x005df2c4]         ; 004b012c | DAT_005df2c4
    FXCH ST2                            ; 004b0132
    FDIVR ST0,ST2                       ; 004b0134
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b0136
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b013a
    FABS                                ; 004b013e
    FILD dword ptr [0x01c4effc]         ; 004b0140 | DAT_01c4effc
    FMULP ST2                           ; 004b0146
    FXCH                                ; 004b0148
    FDIVP ST2,ST0                       ; 004b014a
    FXCH                                ; 004b014c
    FABS                                ; 004b014e
    FLD float ptr [ESP + 0x3c]          ; 004b0150
    FXCH ST2                            ; 004b0154
    FSTP float ptr [ESP + 0x28]         ; 004b0156
    FSTP float ptr [ESP + 0x24]         ; 004b015a
    FCOMP float ptr [ESP + 0x28]        ; 004b015e
    FNSTSW AX                           ; 004b0162
    SAHF                                ; 004b0164
    JC 0x004b017d                       ; 004b0165
        ;   XREF to: 004b017d (CONDITIONAL_JUMP)  ; LAB_004b017d
    FLD float ptr [ESP + 0x2c]          ; 004b0167
        ;   Label: LAB_004b0167
    FCOMP float ptr [ESP + 0x24]        ; 004b016b
    FNSTSW AX                           ; 004b016f
    SAHF                                ; 004b0171
    JC 0x004b0187                       ; 004b0172
        ;   XREF to: 004b0187 (CONDITIONAL_JUMP)  ; LAB_004b0187
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b0174
    ADD ESP,0x30                        ; 004b0178
    POP EBX                             ; 004b017b
    RET                                 ; 004b017c
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b017d
        ;   Label: LAB_004b017d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b0181
    JMP 0x004b0167                      ; 004b0185
        ;   XREF to: 004b0167 (UNCONDITIONAL_JUMP)  ; LAB_004b0167
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b0187
        ;   Label: LAB_004b0187
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b018b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b018f
    ADD ESP,0x30                        ; 004b0193
    POP EBX                             ; 004b0196
    RET                                 ; 004b0197

