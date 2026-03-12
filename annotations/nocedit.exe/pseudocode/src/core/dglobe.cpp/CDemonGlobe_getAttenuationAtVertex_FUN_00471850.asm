; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850(CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   vertex_position
; CVector3i *      Stack[0xc]:4   surface_normal
; Local Variables:
; float[6]         Stack[-0x48]:24  local_48
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 at 0056dc5f
;
; Referenced Globals:
;   float FLOAT_0065c8c8 = 0.00390625
;   float FLOAT_0065c8cc = 0.00001525879
;   int g_LightAttenuationMax
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471850
        ;   Label: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
    PUSH ESI                            ; 00471851
    PUSH EDI                            ; 00471852
    PUSH EBP                            ; 00471853
    MOV EBP,ESP                         ; 00471854
    SUB ESP,0x38                        ; 00471856
    MOV EDX,dword ptr [EBP + 0x14]      ; 00471859
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047185c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0047185f
    LEA EBX,[EBP + -0x20]               ; 00471862
    FILD dword ptr [EAX]                ; 00471865
    FMUL float ptr [0x0065c8c8]         ; 00471867 | FLOAT_0065c8c8
    FSTP float ptr [EBX]                ; 0047186d
    FILD dword ptr [EAX + 0x4]          ; 0047186f
    FMUL float ptr [0x0065c8c8]         ; 00471872 | FLOAT_0065c8c8
    FSTP float ptr [EBX + 0x4]          ; 00471878
    FILD dword ptr [EAX + 0x8]          ; 0047187b
    FMUL float ptr [0x0065c8c8]         ; 0047187e | FLOAT_0065c8c8
    FSTP float ptr [EBX + 0x8]          ; 00471884
    FLD float ptr [EBP + -0x20]         ; 00471887
    LEA EAX,[EDX + 0x24]                ; 0047188a
    FLD float ptr [EBP + -0x1c]         ; 0047188d
    FXCH                                ; 00471890
    FSUB float ptr [EAX]                ; 00471892
    FLD float ptr [EBP + -0x18]         ; 00471894
    FXCH                                ; 00471897
    FSTP float ptr [EBP + -0x38]        ; 00471899
    FXCH                                ; 0047189c
    FSUB float ptr [EAX + 0x4]          ; 0047189e
    LEA EBX,[EBP + -0x20]               ; 004718a1
    FSTP float ptr [EBP + -0x34]        ; 004718a4
    FSUB float ptr [EAX + 0x8]          ; 004718a7
    LEA EAX,[EBP + -0x38]               ; 004718aa
    FSTP float ptr [EBP + -0x30]        ; 004718ad
    CMP EBX,EAX                         ; 004718b0
    JNZ 0x0047198a                      ; 004718b2
        ;   XREF to: 0047198a (CONDITIONAL_JUMP)  ; LAB_0047198a
    FLD float ptr [EBP + -0x1c]         ; 004718b8
        ;   Label: LAB_004718b8
    FMUL ST0                            ; 004718bb
    FLD float ptr [EBP + -0x20]         ; 004718bd
    FMUL ST0                            ; 004718c0
    FADDP                               ; 004718c2
    FLD float ptr [EBP + -0x18]         ; 004718c4
    FMUL ST0                            ; 004718c7
    FADDP                               ; 004718c9
    FST float ptr [EBP + -0x4]          ; 004718cb
    FCOMP float ptr [EDX + 0x18]        ; 004718ce
    FNSTSW AX                           ; 004718d1
    SAHF                                ; 004718d3
    JA 0x004719a1                       ; 004718d4
        ;   XREF to: 004719a1 (CONDITIONAL_JUMP)  ; LAB_004719a1
    FLD float ptr [EDX + 0x18]          ; 004718da
    FSUB float ptr [EBP + -0x4]         ; 004718dd
    FMUL float ptr [EDX + 0x38]         ; 004718e0
    FILD dword ptr [EDX + 0x3c]         ; 004718e3
    FMULP                               ; 004718e6
    FSTP float ptr [EBP + -0x10]        ; 004718e8
    TEST ECX,ECX                        ; 004718eb
    JZ 0x00471974                       ; 004718ed
        ;   XREF to: 00471974 (CONDITIONAL_JUMP)  ; LAB_00471974
    MOV EAX,dword ptr [EBP + -0x4]      ; 004718f3
    MOV EDX,dword ptr [0x02d7a7bc]      ; 004718f6 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 004718fc
    SUB EDX,EAX                         ; 004718fe
    MOV dword ptr [EBP + -0xc],EDX      ; 00471900
    FLD float ptr [EBP + -0x20]         ; 00471903
    FMUL float ptr [EBP + -0xc]         ; 00471906
    FLD float ptr [EBP + -0x1c]         ; 00471909
    FMUL float ptr [EBP + -0xc]         ; 0047190c
    FLD float ptr [EBP + -0x18]         ; 0047190f
    FMUL float ptr [EBP + -0xc]         ; 00471912
    LEA EBX,[EBP + -0x2c]               ; 00471915
    MOV EAX,ECX                         ; 00471918
    FXCH ST2                            ; 0047191a
    FSTP float ptr [EBP + -0x20]        ; 0047191c
    FSTP float ptr [EBP + -0x1c]        ; 0047191f
    FSTP float ptr [EBP + -0x18]        ; 00471922
    FILD dword ptr [EAX]                ; 00471925
    FMUL float ptr [0x0065c8cc]         ; 00471927 | FLOAT_0065c8cc
    FSTP float ptr [EBX]                ; 0047192d
    FILD dword ptr [EAX + 0x4]          ; 0047192f
    FMUL float ptr [0x0065c8cc]         ; 00471932 | FLOAT_0065c8cc
    FSTP float ptr [EBX + 0x4]          ; 00471938
    FILD dword ptr [EAX + 0x8]          ; 0047193b
    FMUL float ptr [0x0065c8cc]         ; 0047193e | FLOAT_0065c8cc
    FSTP float ptr [EBX + 0x8]          ; 00471944
    FLD float ptr [EBP + -0x1c]         ; 00471947
    FMUL float ptr [EBP + -0x28]        ; 0047194a
    FLD float ptr [EBP + -0x20]         ; 0047194d
    FMUL float ptr [EBP + -0x2c]        ; 00471950
    FADDP                               ; 00471953
    FLD float ptr [EBP + -0x18]         ; 00471955
    FMUL float ptr [EBP + -0x24]        ; 00471958
    FADDP                               ; 0047195b
    FST float ptr [EBP + -0x8]          ; 0047195d
    FLDZ                                ; 00471960
    FCOMPP                              ; 00471962
    FNSTSW AX                           ; 00471964
    SAHF                                ; 00471966
    JC 0x004719a1                       ; 00471967
        ;   XREF to: 004719a1 (CONDITIONAL_JUMP)  ; LAB_004719a1
    FLD float ptr [EBP + -0x8]          ; 00471969
    FCHS                                ; 0047196c
    FMUL float ptr [EBP + -0x10]        ; 0047196e
    FSTP float ptr [EBP + -0x10]        ; 00471971
    FLD float ptr [EBP + 0xfffffff0]    ; 00471974
        ;   Label: LAB_00471974
    FISTP dword ptr [EBP + 0xffffffec]  ; 0047197a
    MOV EAX,dword ptr [EBP + -0x14]     ; 00471980
    MOV ESP,EBP                         ; 00471983
    POP EBP                             ; 00471985
    POP EDI                             ; 00471986
    POP ESI                             ; 00471987
    POP EBX                             ; 00471988
    RET                                 ; 00471989
    MOV EAX,dword ptr [EBP + -0x38]     ; 0047198a
        ;   Label: LAB_0047198a
    MOV dword ptr [EBP + -0x20],EAX     ; 0047198d
    MOV EAX,dword ptr [EBP + -0x34]     ; 00471990
    MOV dword ptr [EBP + -0x1c],EAX     ; 00471993
    MOV EAX,dword ptr [EBP + -0x30]     ; 00471996
    MOV dword ptr [EBP + -0x18],EAX     ; 00471999
    JMP 0x004718b8                      ; 0047199c
        ;   XREF to: 004718b8 (UNCONDITIONAL_JUMP)  ; LAB_004718b8
    XOR EAX,EAX                         ; 004719a1
        ;   Label: LAB_004719a1
    MOV ESP,EBP                         ; 004719a3
    POP EBP                             ; 004719a5
    POP EDI                             ; 004719a6
    POP ESI                             ; 004719a7
    POP EBX                             ; 004719a8
    RET                                 ; 004719a9

