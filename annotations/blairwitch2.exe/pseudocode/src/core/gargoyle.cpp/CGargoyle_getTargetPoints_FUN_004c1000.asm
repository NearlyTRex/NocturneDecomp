; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004c1000(CGargoyle *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01cb8120
;   undefined4 DAT_01cb8134
;   undefined4 DAT_01cb8138
;   undefined4 DAT_01cb8144
;   undefined4 DAT_01cb814c
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1000
        ;   Label: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004c1000
    PUSH ESI                            ; 004c1001
    PUSH EDI                            ; 004c1002
    PUSH EBP                            ; 004c1003
    SUB ESP,0x78                        ; 004c1004
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004c1007
    MOV EDX,dword ptr [0x01cb8120]      ; 004c100e | DAT_01cb8120
    PUSH EDX                            ; 004c1014
    LEA EAX,[EBP + 0x2b4]               ; 004c1015
    MOV EBX,0x1                         ; 004c101b
    PUSH EAX                            ; 004c1020
    LEA ESI,[ESP + 0x5c]                ; 004c1021
    LEA EDI,[ESP + 0x20]                ; 004c1025
    CALL core_skeleton.cpp_FUN_00546a90 ; 004c1029
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x5c]                ; 004c102e
    ADD ESP,0x8                         ; 004c1032
    LEA EAX,[ESP + 0x18]                ; 004c1035
    MOV ECX,dword ptr [ESP + 0x90]      ; 004c1039
    MOVSD ES:EDI,ESI                    ; 004c1040
    MOVSD ES:EDI,ESI                    ; 004c1041
    MOVSD ES:EDI,ESI                    ; 004c1042
    CMP EAX,ECX                         ; 004c1043
    JNZ 0x004c1198                      ; 004c1045
        ;   XREF to: 004c1198 (CONDITIONAL_JUMP)  ; LAB_004c1198
    MOV EAX,dword ptr [EBP + 0x10af8]   ; 004c104b
        ;   Label: LAB_004c104b
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004c1051
    JZ 0x004c10b2                       ; 004c1059
        ;   XREF to: 004c10b2 (CONDITIONAL_JUMP)  ; LAB_004c10b2
    MOV EDI,dword ptr [0x01cb8134]      ; 004c105b | DAT_01cb8134
    PUSH EDI                            ; 004c1061
    LEA EAX,[EBP + 0x2b4]               ; 004c1062
    PUSH EAX                            ; 004c1068
    LEA ESI,[ESP + 0x2c]                ; 004c1069
    LEA EDI,[ESP + 0x14]                ; 004c106d
    CALL core_skeleton.cpp_FUN_00546a90 ; 004c1071
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c1076
    ADD ESP,0x8                         ; 004c107d
    SUB EAX,EBX                         ; 004c1080
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c1082
    SHL EAX,0x2                         ; 004c1089
    LEA ESI,[ESP + 0x24]                ; 004c108c
    ADD EDX,EAX                         ; 004c1090
    LEA EAX,[ESP + 0xc]                 ; 004c1092
    MOVSD ES:EDI,ESI                    ; 004c1096
    MOVSD ES:EDI,ESI                    ; 004c1097
    MOVSD ES:EDI,ESI                    ; 004c1098
    CMP EDX,EAX                         ; 004c1099
    JZ 0x004c10b1                       ; 004c109b
        ;   XREF to: 004c10b1 (CONDITIONAL_JUMP)  ; LAB_004c10b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c109d
    MOV dword ptr [EDX],EAX             ; 004c10a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c10a3
    MOV dword ptr [EDX + 0x4],EAX       ; 004c10a7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c10aa
    MOV dword ptr [EDX + 0x8],EAX       ; 004c10ae
    INC EBX                             ; 004c10b1
        ;   Label: LAB_004c10b1
    MOV EAX,dword ptr [EBP + 0x10b00]   ; 004c10b2
        ;   Label: LAB_004c10b2
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004c10b8
    JZ 0x004c1117                       ; 004c10c0
        ;   XREF to: 004c1117 (CONDITIONAL_JUMP)  ; LAB_004c1117
    MOV ECX,dword ptr [0x01cb8138]      ; 004c10c2 | DAT_01cb8138
    PUSH ECX                            ; 004c10c8
    LEA EAX,[EBP + 0x2b4]               ; 004c10c9
    PUSH EAX                            ; 004c10cf
    LEA ESI,[ESP + 0x8]                 ; 004c10d0
    LEA EDI,[ESP + 0x68]                ; 004c10d4
    CALL core_skeleton.cpp_FUN_00546a90 ; 004c10d8
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c10dd
    ADD ESP,0x8                         ; 004c10e4
    SUB EAX,EBX                         ; 004c10e7
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c10e9
    SHL EAX,0x2                         ; 004c10f0
    MOV ESI,ESP                         ; 004c10f3
    ADD EDX,EAX                         ; 004c10f5
    LEA EAX,[ESP + 0x60]                ; 004c10f7
    MOVSD ES:EDI,ESI                    ; 004c10fb
    MOVSD ES:EDI,ESI                    ; 004c10fc
    MOVSD ES:EDI,ESI                    ; 004c10fd
    CMP EDX,EAX                         ; 004c10fe
    JZ 0x004c1116                       ; 004c1100
        ;   XREF to: 004c1116 (CONDITIONAL_JUMP)  ; LAB_004c1116
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c1102
    MOV dword ptr [EDX],EAX             ; 004c1106
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c1108
    MOV dword ptr [EDX + 0x4],EAX       ; 004c110c
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c110f
    MOV dword ptr [EDX + 0x8],EAX       ; 004c1113
    INC EBX                             ; 004c1116
        ;   Label: LAB_004c1116
    MOV EAX,dword ptr [EBP + 0x10b18]   ; 004c1117
        ;   Label: LAB_004c1117
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004c111d
    JZ 0x004c117e                       ; 004c1125
        ;   XREF to: 004c117e (CONDITIONAL_JUMP)  ; LAB_004c117e
    MOV EDI,dword ptr [0x01cb8144]      ; 004c1127 | DAT_01cb8144
    PUSH EDI                            ; 004c112d
    LEA EAX,[EBP + 0x2b4]               ; 004c112e
    PUSH EAX                            ; 004c1134
    LEA ESI,[ESP + 0x74]                ; 004c1135
    LEA EDI,[ESP + 0x44]                ; 004c1139
    CALL core_skeleton.cpp_FUN_00546a90 ; 004c113d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c1142
    ADD ESP,0x8                         ; 004c1149
    SUB EAX,EBX                         ; 004c114c
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c114e
    SHL EAX,0x2                         ; 004c1155
    LEA ESI,[ESP + 0x6c]                ; 004c1158
    ADD EDX,EAX                         ; 004c115c
    LEA EAX,[ESP + 0x3c]                ; 004c115e
    MOVSD ES:EDI,ESI                    ; 004c1162
    MOVSD ES:EDI,ESI                    ; 004c1163
    MOVSD ES:EDI,ESI                    ; 004c1164
    CMP EDX,EAX                         ; 004c1165
    JZ 0x004c117d                       ; 004c1167
        ;   XREF to: 004c117d (CONDITIONAL_JUMP)  ; LAB_004c117d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c1169
    MOV dword ptr [EDX],EAX             ; 004c116d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c116f
    MOV dword ptr [EDX + 0x4],EAX       ; 004c1173
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c1176
    MOV dword ptr [EDX + 0x8],EAX       ; 004c117a
    INC EBX                             ; 004c117d
        ;   Label: LAB_004c117d
    MOV EAX,dword ptr [EBP + 0x10b1c]   ; 004c117e
        ;   Label: LAB_004c117e
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004c1184
    JNZ 0x004c11b1                      ; 004c118c
        ;   XREF to: 004c11b1 (CONDITIONAL_JUMP)  ; LAB_004c11b1
    MOV EAX,EBX                         ; 004c118e
    ADD ESP,0x78                        ; 004c1190
    POP EBP                             ; 004c1193
    POP EDI                             ; 004c1194
    POP ESI                             ; 004c1195
    POP EBX                             ; 004c1196
    RET                                 ; 004c1197
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c1198
        ;   Label: LAB_004c1198
    MOV dword ptr [ECX],EAX             ; 004c119c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c119e
    MOV dword ptr [ECX + 0x4],EAX       ; 004c11a2
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c11a5
    MOV dword ptr [ECX + 0x8],EAX       ; 004c11a9
    JMP 0x004c104b                      ; 004c11ac
        ;   XREF to: 004c104b (UNCONDITIONAL_JUMP)  ; LAB_004c104b
    MOV ECX,dword ptr [0x01cb814c]      ; 004c11b1 | DAT_01cb814c
        ;   Label: LAB_004c11b1
    PUSH ECX                            ; 004c11b7
    ADD EBP,0x2b4                       ; 004c11b8
    PUSH EBP                            ; 004c11be
    LEA ESI,[ESP + 0x50]                ; 004c11bf
    LEA EDI,[ESP + 0x38]                ; 004c11c3
    CALL core_skeleton.cpp_FUN_00546a90 ; 004c11c7
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c11cc
    ADD ESP,0x8                         ; 004c11d3
    SUB EAX,EBX                         ; 004c11d6
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c11d8
    SHL EAX,0x2                         ; 004c11df
    LEA ESI,[ESP + 0x48]                ; 004c11e2
    ADD EDX,EAX                         ; 004c11e6
    LEA EAX,[ESP + 0x30]                ; 004c11e8
    MOVSD ES:EDI,ESI                    ; 004c11ec
    MOVSD ES:EDI,ESI                    ; 004c11ed
    MOVSD ES:EDI,ESI                    ; 004c11ee
    CMP EDX,EAX                         ; 004c11ef
    JZ 0x004c1207                       ; 004c11f1
        ;   XREF to: 004c1207 (CONDITIONAL_JUMP)  ; LAB_004c1207
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c11f3
    MOV dword ptr [EDX],EAX             ; 004c11f7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c11f9
    MOV dword ptr [EDX + 0x4],EAX       ; 004c11fd
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c1200
    MOV dword ptr [EDX + 0x8],EAX       ; 004c1204
    INC EBX                             ; 004c1207
        ;   Label: LAB_004c1207
    MOV EAX,EBX                         ; 004c1208
    ADD ESP,0x78                        ; 004c120a
    POP EBP                             ; 004c120d
    POP EDI                             ; 004c120e
    POP ESI                             ; 004c120f
    POP EBX                             ; 004c1210
    RET                                 ; 004c1211

