; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0(CPoly * this_ptr, CPoly * other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
; Local Variables:
; undefined8       Stack[-0x140]:8  local_140
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00654312 = 0.00390625
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d0ee0
        ;   Label: shape_superopt.cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0
    PUSH ESI                            ; 005d0ee1
    PUSH EDI                            ; 005d0ee2
    PUSH EBP                            ; 005d0ee3
    MOV EBP,ESP                         ; 005d0ee4
    SUB ESP,0x12c                       ; 005d0ee6
    AND ESP,0xfffffff8                  ; 005d0eec
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d0eef
    MOV ECX,dword ptr [EBP + 0x18]      ; 005d0ef2
    MOV EAX,0x3f700000                  ; 005d0ef5
    LEA EBX,[EDX + 0x4]                 ; 005d0efa
    LEA ESI,[ECX + 0x4]                 ; 005d0efd
    XOR EDI,EDI                         ; 005d0f00
    ADD EDX,0x10                        ; 005d0f02
    MOV dword ptr [ESP],EDI             ; 005d0f05
    MOV dword ptr [ESP + 0x4],EAX       ; 005d0f08
    MOV EAX,dword ptr [EBX]             ; 005d0f0c
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d0f0e
    ADD ECX,0x10                        ; 005d0f11
    CMP EAX,EDI                         ; 005d0f14
    JNZ 0x005d0f63                      ; 005d0f16
        ;   XREF to: 005d0f63 (CONDITIONAL_JUMP)  ; LAB_005d0f63
    MOV EDI,dword ptr [ESI]             ; 005d0f18
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d0f1a
    JNZ 0x005d0f63                      ; 005d0f1d
        ;   XREF to: 005d0f63 (CONDITIONAL_JUMP)  ; LAB_005d0f63
    LEA EAX,[ECX + 0x10]                ; 005d0f1f
    FLD double ptr [EAX]                ; 005d0f22
    FSUB double ptr [EDX]               ; 005d0f24
    FMUL ST0                            ; 005d0f26
    FLD double ptr [EAX + 0x8]          ; 005d0f28
    FSUB double ptr [EDX + 0x8]         ; 005d0f2b
    FMUL ST0                            ; 005d0f2e
    FADDP                               ; 005d0f30
    FSQRT                               ; 005d0f32
    FCOMP double ptr [0x00654312]       ; 005d0f34 | DOUBLE_00654312
    FNSTSW AX                           ; 005d0f3a
    SAHF                                ; 005d0f3c
    JNC 0x005d0f63                      ; 005d0f3d
        ;   XREF to: 005d0f63 (CONDITIONAL_JUMP)  ; LAB_005d0f63
    LEA EAX,[EDX + 0x10]                ; 005d0f3f
    FLD double ptr [ECX]                ; 005d0f42
    FSUB double ptr [EAX]               ; 005d0f44
    FMUL ST0                            ; 005d0f46
    FLD double ptr [ECX + 0x8]          ; 005d0f48
    FSUB double ptr [EAX + 0x8]         ; 005d0f4b
    FMUL ST0                            ; 005d0f4e
    FADDP                               ; 005d0f50
    FSQRT                               ; 005d0f52
    FCOMP double ptr [0x00654312]       ; 005d0f54 | DOUBLE_00654312
    FNSTSW AX                           ; 005d0f5a
    SAHF                                ; 005d0f5c
    JC 0x005d1217                       ; 005d0f5d
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d0f63
        ;   Label: LAB_005d0f63
    CMP EDI,dword ptr [EBX]             ; 005d0f66
    JNZ 0x005d0fc1                      ; 005d0f68
        ;   XREF to: 005d0fc1 (CONDITIONAL_JUMP)  ; LAB_005d0fc1
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d0f6a
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d0f6d
    JNZ 0x005d0fc1                      ; 005d0f70
        ;   XREF to: 005d0fc1 (CONDITIONAL_JUMP)  ; LAB_005d0fc1
    LEA EAX,[ECX + 0x20]                ; 005d0f72
    FLD double ptr [EAX]                ; 005d0f75
    FSUB double ptr [EDX]               ; 005d0f77
    FMUL ST0                            ; 005d0f79
    FLD double ptr [EAX + 0x8]          ; 005d0f7b
    FSUB double ptr [EDX + 0x8]         ; 005d0f7e
    FMUL ST0                            ; 005d0f81
    FADDP                               ; 005d0f83
    FSQRT                               ; 005d0f85
    FCOMP double ptr [ESP]              ; 005d0f87
    FNSTSW AX                           ; 005d0f8a
    SAHF                                ; 005d0f8c
    JNC 0x005d0fc1                      ; 005d0f8d
        ;   XREF to: 005d0fc1 (CONDITIONAL_JUMP)  ; LAB_005d0fc1
    LEA EAX,[EDX + 0x10]                ; 005d0f8f
    MOV dword ptr [ESP + 0x128],EAX     ; 005d0f92
    LEA EAX,[ECX + 0x10]                ; 005d0f99
    MOV EDI,dword ptr [ESP + 0x128]     ; 005d0f9c
    FLD double ptr [EAX]                ; 005d0fa3
    FSUB double ptr [EDI]               ; 005d0fa5
    FMUL ST0                            ; 005d0fa7
    FLD double ptr [EAX + 0x8]          ; 005d0fa9
    FSUB double ptr [EDI + 0x8]         ; 005d0fac
    FMUL ST0                            ; 005d0faf
    FADDP                               ; 005d0fb1
    FSQRT                               ; 005d0fb3
    FCOMP double ptr [ESP]              ; 005d0fb5
    FNSTSW AX                           ; 005d0fb8
    SAHF                                ; 005d0fba
    JC 0x005d1217                       ; 005d0fbb
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI]             ; 005d0fc1
        ;   Label: LAB_005d0fc1
    CMP EDI,dword ptr [EBX]             ; 005d0fc3
    JNZ 0x005d101b                      ; 005d0fc5
        ;   XREF to: 005d101b (CONDITIONAL_JUMP)  ; LAB_005d101b
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d0fc7
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d0fca
    JNZ 0x005d101b                      ; 005d0fcd
        ;   XREF to: 005d101b (CONDITIONAL_JUMP)  ; LAB_005d101b
    FLD double ptr [ECX]                ; 005d0fcf
    FSUB double ptr [EDX]               ; 005d0fd1
    FMUL ST0                            ; 005d0fd3
    FLD double ptr [ECX + 0x8]          ; 005d0fd5
    FSUB double ptr [EDX + 0x8]         ; 005d0fd8
    FMUL ST0                            ; 005d0fdb
    FADDP                               ; 005d0fdd
    FSQRT                               ; 005d0fdf
    FCOMP double ptr [ESP]              ; 005d0fe1
    FNSTSW AX                           ; 005d0fe4
    SAHF                                ; 005d0fe6
    JNC 0x005d101b                      ; 005d0fe7
        ;   XREF to: 005d101b (CONDITIONAL_JUMP)  ; LAB_005d101b
    LEA EAX,[EDX + 0x10]                ; 005d0fe9
    MOV dword ptr [ESP + 0x128],EAX     ; 005d0fec
    LEA EAX,[ECX + 0x20]                ; 005d0ff3
    MOV EDI,dword ptr [ESP + 0x128]     ; 005d0ff6
    FLD double ptr [EAX]                ; 005d0ffd
    FSUB double ptr [EDI]               ; 005d0fff
    FMUL ST0                            ; 005d1001
    FLD double ptr [EAX + 0x8]          ; 005d1003
    FSUB double ptr [EDI + 0x8]         ; 005d1006
    FMUL ST0                            ; 005d1009
    FADDP                               ; 005d100b
    FSQRT                               ; 005d100d
    FCOMP double ptr [ESP]              ; 005d100f
    FNSTSW AX                           ; 005d1012
    SAHF                                ; 005d1014
    JC 0x005d1217                       ; 005d1015
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d101b
        ;   Label: LAB_005d101b
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d101e
    JNZ 0x005d108b                      ; 005d1021
        ;   XREF to: 005d108b (CONDITIONAL_JUMP)  ; LAB_005d108b
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d1023
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d1026
    JNZ 0x005d108b                      ; 005d1029
        ;   XREF to: 005d108b (CONDITIONAL_JUMP)  ; LAB_005d108b
    LEA EAX,[EDX + 0x10]                ; 005d102b
    MOV dword ptr [ESP + 0x128],EAX     ; 005d102e
    LEA EAX,[ECX + 0x20]                ; 005d1035
    MOV EDI,dword ptr [ESP + 0x128]     ; 005d1038
    FLD double ptr [EAX]                ; 005d103f
    FSUB double ptr [EDI]               ; 005d1041
    FMUL ST0                            ; 005d1043
    FLD double ptr [EAX + 0x8]          ; 005d1045
    FSUB double ptr [EDI + 0x8]         ; 005d1048
    FMUL ST0                            ; 005d104b
    FADDP                               ; 005d104d
    FSQRT                               ; 005d104f
    FCOMP double ptr [ESP]              ; 005d1051
    FNSTSW AX                           ; 005d1054
    SAHF                                ; 005d1056
    JNC 0x005d108b                      ; 005d1057
        ;   XREF to: 005d108b (CONDITIONAL_JUMP)  ; LAB_005d108b
    LEA EAX,[EDX + 0x20]                ; 005d1059
    MOV dword ptr [ESP + 0x128],EAX     ; 005d105c
    LEA EAX,[ECX + 0x10]                ; 005d1063
    MOV EDI,dword ptr [ESP + 0x128]     ; 005d1066
    FLD double ptr [EAX]                ; 005d106d
    FSUB double ptr [EDI]               ; 005d106f
    FMUL ST0                            ; 005d1071
    FLD double ptr [EAX + 0x8]          ; 005d1073
    FSUB double ptr [EDI + 0x8]         ; 005d1076
    FMUL ST0                            ; 005d1079
    FADDP                               ; 005d107b
    FSQRT                               ; 005d107d
    FCOMP double ptr [ESP]              ; 005d107f
    FNSTSW AX                           ; 005d1082
    SAHF                                ; 005d1084
    JC 0x005d1217                       ; 005d1085
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI]             ; 005d108b
        ;   Label: LAB_005d108b
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d108d
    JNZ 0x005d10db                      ; 005d1090
        ;   XREF to: 005d10db (CONDITIONAL_JUMP)  ; LAB_005d10db
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d1092
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d1095
    JNZ 0x005d10db                      ; 005d1098
        ;   XREF to: 005d10db (CONDITIONAL_JUMP)  ; LAB_005d10db
    LEA EAX,[EDX + 0x10]                ; 005d109a
    FLD double ptr [ECX]                ; 005d109d
    FSUB double ptr [EAX]               ; 005d109f
    FMUL ST0                            ; 005d10a1
    FLD double ptr [ECX + 0x8]          ; 005d10a3
    FSUB double ptr [EAX + 0x8]         ; 005d10a6
    FMUL ST0                            ; 005d10a9
    FADDP                               ; 005d10ab
    FSQRT                               ; 005d10ad
    FCOMP double ptr [ESP]              ; 005d10af
    FNSTSW AX                           ; 005d10b2
    SAHF                                ; 005d10b4
    JNC 0x005d10db                      ; 005d10b5
        ;   XREF to: 005d10db (CONDITIONAL_JUMP)  ; LAB_005d10db
    LEA EDI,[ECX + 0x20]                ; 005d10b7
    LEA EAX,[EDX + 0x20]                ; 005d10ba
    FLD double ptr [EDI]                ; 005d10bd
    FSUB double ptr [EAX]               ; 005d10bf
    FMUL ST0                            ; 005d10c1
    FLD double ptr [EDI + 0x8]          ; 005d10c3
    FSUB double ptr [EAX + 0x8]         ; 005d10c6
    FMUL ST0                            ; 005d10c9
    FADDP                               ; 005d10cb
    FSQRT                               ; 005d10cd
    FCOMP double ptr [ESP]              ; 005d10cf
    FNSTSW AX                           ; 005d10d2
    SAHF                                ; 005d10d4
    JC 0x005d1217                       ; 005d10d5
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d10db
        ;   Label: LAB_005d10db
    CMP EDI,dword ptr [EBX + 0x4]       ; 005d10de
    JNZ 0x005d112b                      ; 005d10e1
        ;   XREF to: 005d112b (CONDITIONAL_JUMP)  ; LAB_005d112b
    MOV EDI,dword ptr [ESI]             ; 005d10e3
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d10e5
    JNZ 0x005d112b                      ; 005d10e8
        ;   XREF to: 005d112b (CONDITIONAL_JUMP)  ; LAB_005d112b
    LEA EDI,[ECX + 0x10]                ; 005d10ea
    LEA EAX,[EDX + 0x10]                ; 005d10ed
    FLD double ptr [EDI]                ; 005d10f0
    FSUB double ptr [EAX]               ; 005d10f2
    FMUL ST0                            ; 005d10f4
    FLD double ptr [EDI + 0x8]          ; 005d10f6
    FSUB double ptr [EAX + 0x8]         ; 005d10f9
    FMUL ST0                            ; 005d10fc
    FADDP                               ; 005d10fe
    FSQRT                               ; 005d1100
    FCOMP double ptr [ESP]              ; 005d1102
    FNSTSW AX                           ; 005d1105
    SAHF                                ; 005d1107
    JNC 0x005d112b                      ; 005d1108
        ;   XREF to: 005d112b (CONDITIONAL_JUMP)  ; LAB_005d112b
    LEA EAX,[EDX + 0x20]                ; 005d110a
    FLD double ptr [ECX]                ; 005d110d
    FSUB double ptr [EAX]               ; 005d110f
    FMUL ST0                            ; 005d1111
    FLD double ptr [ECX + 0x8]          ; 005d1113
    FSUB double ptr [EAX + 0x8]         ; 005d1116
    FMUL ST0                            ; 005d1119
    FADDP                               ; 005d111b
    FSQRT                               ; 005d111d
    FCOMP double ptr [ESP]              ; 005d111f
    FNSTSW AX                           ; 005d1122
    SAHF                                ; 005d1124
    JC 0x005d1217                       ; 005d1125
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI]             ; 005d112b
        ;   Label: LAB_005d112b
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d112d
    JNZ 0x005d1177                      ; 005d1130
        ;   XREF to: 005d1177 (CONDITIONAL_JUMP)  ; LAB_005d1177
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d1132
    CMP EDI,dword ptr [EBX]             ; 005d1135
    JNZ 0x005d1177                      ; 005d1137
        ;   XREF to: 005d1177 (CONDITIONAL_JUMP)  ; LAB_005d1177
    LEA EAX,[EDX + 0x20]                ; 005d1139
    FLD double ptr [ECX]                ; 005d113c
    FSUB double ptr [EAX]               ; 005d113e
    FMUL ST0                            ; 005d1140
    FLD double ptr [ECX + 0x8]          ; 005d1142
    FSUB double ptr [EAX + 0x8]         ; 005d1145
    FMUL ST0                            ; 005d1148
    FADDP                               ; 005d114a
    FSQRT                               ; 005d114c
    FCOMP double ptr [ESP]              ; 005d114e
    FNSTSW AX                           ; 005d1151
    SAHF                                ; 005d1153
    JNC 0x005d1177                      ; 005d1154
        ;   XREF to: 005d1177 (CONDITIONAL_JUMP)  ; LAB_005d1177
    LEA EAX,[ECX + 0x20]                ; 005d1156
    FLD double ptr [EAX]                ; 005d1159
    FSUB double ptr [EDX]               ; 005d115b
    FMUL ST0                            ; 005d115d
    FLD double ptr [EAX + 0x8]          ; 005d115f
    FSUB double ptr [EDX + 0x8]         ; 005d1162
    FMUL ST0                            ; 005d1165
    FADDP                               ; 005d1167
    FSQRT                               ; 005d1169
    FCOMP double ptr [ESP]              ; 005d116b
    FNSTSW AX                           ; 005d116e
    SAHF                                ; 005d1170
    JC 0x005d1217                       ; 005d1171
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d1177
        ;   Label: LAB_005d1177
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d117a
    JNZ 0x005d11cd                      ; 005d117d
        ;   XREF to: 005d11cd (CONDITIONAL_JUMP)  ; LAB_005d11cd
    MOV EDI,dword ptr [ESI]             ; 005d117f
    CMP EDI,dword ptr [EBX]             ; 005d1181
    JNZ 0x005d11cd                      ; 005d1183
        ;   XREF to: 005d11cd (CONDITIONAL_JUMP)  ; LAB_005d11cd
    LEA EAX,[EDX + 0x20]                ; 005d1185
    MOV dword ptr [ESP + 0x128],EAX     ; 005d1188
    LEA EAX,[ECX + 0x10]                ; 005d118f
    MOV EDI,dword ptr [ESP + 0x128]     ; 005d1192
    FLD double ptr [EAX]                ; 005d1199
    FSUB double ptr [EDI]               ; 005d119b
    FMUL ST0                            ; 005d119d
    FLD double ptr [EAX + 0x8]          ; 005d119f
    FSUB double ptr [EDI + 0x8]         ; 005d11a2
    FMUL ST0                            ; 005d11a5
    FADDP                               ; 005d11a7
    FSQRT                               ; 005d11a9
    FCOMP double ptr [ESP]              ; 005d11ab
    FNSTSW AX                           ; 005d11ae
    SAHF                                ; 005d11b0
    JNC 0x005d11cd                      ; 005d11b1
        ;   XREF to: 005d11cd (CONDITIONAL_JUMP)  ; LAB_005d11cd
    FLD double ptr [ECX]                ; 005d11b3
    FSUB double ptr [EDX]               ; 005d11b5
    FMUL ST0                            ; 005d11b7
    FLD double ptr [ECX + 0x8]          ; 005d11b9
    FSUB double ptr [EDX + 0x8]         ; 005d11bc
    FMUL ST0                            ; 005d11bf
    FADDP                               ; 005d11c1
    FSQRT                               ; 005d11c3
    FCOMP double ptr [ESP]              ; 005d11c5
    FNSTSW AX                           ; 005d11c8
    SAHF                                ; 005d11ca
    JC 0x005d1217                       ; 005d11cb
        ;   XREF to: 005d1217 (CONDITIONAL_JUMP)  ; LAB_005d1217
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d11cd
        ;   Label: LAB_005d11cd
    CMP EDI,dword ptr [EBX + 0x8]       ; 005d11d0
    JNZ 0x005d1223                      ; 005d11d3
        ;   XREF to: 005d1223 (CONDITIONAL_JUMP)  ; LAB_005d1223
    MOV EAX,dword ptr [EBX]             ; 005d11d5
    CMP EAX,dword ptr [ESI + 0x4]       ; 005d11d7
    JNZ 0x005d1223                      ; 005d11da
        ;   XREF to: 005d1223 (CONDITIONAL_JUMP)  ; LAB_005d1223
    LEA EAX,[ECX + 0x20]                ; 005d11dc
    LEA EBX,[EDX + 0x20]                ; 005d11df
    FLD double ptr [EAX]                ; 005d11e2
    FSUB double ptr [EBX]               ; 005d11e4
    FMUL ST0                            ; 005d11e6
    FLD double ptr [EAX + 0x8]          ; 005d11e8
    FSUB double ptr [EBX + 0x8]         ; 005d11eb
    FMUL ST0                            ; 005d11ee
    FADDP                               ; 005d11f0
    FSQRT                               ; 005d11f2
    FCOMP double ptr [ESP]              ; 005d11f4
    FNSTSW AX                           ; 005d11f7
    SAHF                                ; 005d11f9
    JNC 0x005d1223                      ; 005d11fa
        ;   XREF to: 005d1223 (CONDITIONAL_JUMP)  ; LAB_005d1223
    FLD double ptr [ECX + 0x10]         ; 005d11fc
    FSUB double ptr [EDX]               ; 005d11ff
    FMUL ST0                            ; 005d1201
    FLD double ptr [ECX + 0x18]         ; 005d1203
    FSUB double ptr [EDX + 0x8]         ; 005d1206
    FMUL ST0                            ; 005d1209
    FADDP                               ; 005d120b
    FSQRT                               ; 005d120d
    FCOMP double ptr [ESP]              ; 005d120f
    FNSTSW AX                           ; 005d1212
    SAHF                                ; 005d1214
    JNC 0x005d1223                      ; 005d1215
        ;   XREF to: 005d1223 (CONDITIONAL_JUMP)  ; LAB_005d1223
    MOV EAX,0x1                         ; 005d1217
        ;   Label: LAB_005d1217
    MOV ESP,EBP                         ; 005d121c
    POP EBP                             ; 005d121e
    POP EDI                             ; 005d121f
    POP ESI                             ; 005d1220
    POP EBX                             ; 005d1221
    RET                                 ; 005d1222
    XOR EAX,EAX                         ; 005d1223
        ;   Label: LAB_005d1223
    MOV ESP,EBP                         ; 005d1225
    POP EBP                             ; 005d1227
    POP EDI                             ; 005d1228
    POP ESI                             ; 005d1229
    POP EBX                             ; 005d122a
    RET                                 ; 005d122b

