; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00404120(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a78
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404120
        ;   Label: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404120
    PUSH EDI                            ; 00404121
    PUSH EBP                            ; 00404122
    MOV EAX,dword ptr [ESP + 0x10]      ; 00404123
    ADD EAX,0x8                         ; 00404127
    MOV EBP,dword ptr [ESP + 0x10]      ; 0040412a
    PUSH EAX                            ; 0040412e
    ADD EBP,0x18                        ; 0040412f
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404132
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404137
    TEST EAX,EAX                        ; 0040413a
    JZ 0x004042ff                       ; 0040413c
        ;   XREF to: 004042ff (CONDITIONAL_JUMP)  ; LAB_004042ff
    CMP dword ptr [0x00713a78],0x0      ; 00404142 | DAT_00713a78
    JNZ 0x0040425f                      ; 00404149
        ;   XREF to: 0040425f (CONDITIONAL_JUMP)  ; LAB_0040425f
    CMP dword ptr [0x01c51d00],0x0      ; 0040414f | DAT_01c51d00
    JNZ 0x00404238                      ; 00404156
        ;   XREF to: 00404238 (CONDITIONAL_JUMP)  ; LAB_00404238
    CMP dword ptr [0x0061b4a0],0x20     ; 0040415c | DAT_0061b4a0
    JNZ 0x00404229                      ; 00404163
        ;   XREF to: 00404229 (CONDITIONAL_JUMP)  ; LAB_00404229
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00404169 | DAT_01c4f02c
        ;   Label: LAB_00404169
    MOV ESI,dword ptr [ESP + 0x10]      ; 00404173
        ;   Label: LAB_00404173
    PUSH ESI                            ; 00404177
    MOV EDI,0x13                        ; 00404178
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 0040417d
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    MOV EAX,[0x0061b4b8]                ; 00404182 | DAT_0061b4b8
    ADD ESP,0x4                         ; 00404187
    MOV dword ptr [0x01c51d14],EDI      ; 0040418a | DAT_01c51d14
    CMP EAX,0xff                        ; 00404190
    JL 0x0040429c                       ; 00404195
        ;   XREF to: 0040429c (CONDITIONAL_JUMP)  ; LAB_0040429c
    PUSH EBX                            ; 0040419b
        ;   Label: LAB_0040419b
    XOR ECX,ECX                         ; 0040419c
    XOR EDI,EDI                         ; 0040419e
    XOR EBX,EBX                         ; 004041a0
    XOR ESI,ESI                         ; 004041a2
    MOV dword ptr [0x01c51d18],ECX      ; 004041a4 | DAT_01c51d18
    MOV ECX,EBP                         ; 004041aa
    MOV EAX,dword ptr [ESP + 0x14]      ; 004041ac
        ;   Label: LAB_004041ac
    MOV EAX,dword ptr [EAX + 0x4]       ; 004041b0
    LEA EAX,[EAX + EAX*0x2]             ; 004041b3
    CMP EBX,EAX                         ; 004041b6
    JGE 0x004042f0                      ; 004041b8
        ;   XREF to: 004042f0 (CONDITIONAL_JUMP)  ; LAB_004042f0
    MOV EAX,dword ptr [ECX]             ; 004041be
    MOV dword ptr [ESI + 0x713a98],EAX  ; 004041c0 | DAT_00713a98 | DAT_00713a9c
    MOV EBP,dword ptr [0x01c50948]      ; 004041c6 | DAT_01c50948
    MOV EAX,dword ptr [ECX + 0x4]       ; 004041cc
    MOV EDX,dword ptr [ECX + 0x8]       ; 004041cf
    TEST EBP,EBP                        ; 004041d2
    JZ 0x004042b5                       ; 004041d4
        ;   XREF to: 004042b5 (CONDITIONAL_JUMP)  ; LAB_004042b5
    CMP EAX,0x20000                     ; 004041da
    JGE 0x004041e6                      ; 004041df
        ;   XREF to: 004041e6 (CONDITIONAL_JUMP)  ; LAB_004041e6
    MOV EAX,0x20000                     ; 004041e1
    CMP EDX,0x20000                     ; 004041e6
        ;   Label: LAB_004041e6
    JGE 0x004041f3                      ; 004041ec
        ;   XREF to: 004041f3 (CONDITIONAL_JUMP)  ; LAB_004041f3
    MOV EDX,0x20000                     ; 004041ee
    CMP EAX,0xfdffff                    ; 004041f3
        ;   Label: LAB_004041f3
    JLE 0x004041ff                      ; 004041f8
        ;   XREF to: 004041ff (CONDITIONAL_JUMP)  ; LAB_004041ff
    MOV EAX,0xfdffff                    ; 004041fa
    CMP EDX,0xfdffff                    ; 004041ff
        ;   Label: LAB_004041ff
    JG 0x004042ab                       ; 00404205
        ;   XREF to: 004042ab (CONDITIONAL_JUMP)  ; LAB_004042ab
    IMUL EBP,dword ptr [ECX],0x30       ; 0040420b
        ;   Label: LAB_0040420b
    MOV dword ptr [EBP + 0x62902c],EAX  ; 0040420e | DAT_0062902c
    IMUL EAX,dword ptr [ECX],0x30       ; 00404214
    ADD ESI,0x4                         ; 00404217
    INC EDI                             ; 0040421a
    ADD EBX,0x3                         ; 0040421b
    ADD ECX,0xc                         ; 0040421e
    MOV dword ptr [EAX + 0x629030],EDX  ; 00404221 | DAT_00629030
    JMP 0x004041ac                      ; 00404227
        ;   XREF to: 004041ac (UNCONDITIONAL_JUMP)  ; LAB_004041ac
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404229 | DAT_01c4f02c
        ;   Label: LAB_00404229
    JMP 0x00404173                      ; 00404233
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x0061b4a0],0x20     ; 00404238 | DAT_0061b4a0
        ;   Label: LAB_00404238
    JNZ 0x00404250                      ; 0040423f
        ;   XREF to: 00404250 (CONDITIONAL_JUMP)  ; LAB_00404250
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00404241 | DAT_01c4f02c
    JMP 0x00404173                      ; 0040424b
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404250 | DAT_01c4f02c
        ;   Label: LAB_00404250
    JMP 0x00404173                      ; 0040425a
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x01c51d00],0x0      ; 0040425f | DAT_01c51d00
        ;   Label: LAB_0040425f
    JNZ 0x00404284                      ; 00404266
        ;   XREF to: 00404284 (CONDITIONAL_JUMP)  ; LAB_00404284
    CMP dword ptr [0x0061b4a0],0x20     ; 00404268 | DAT_0061b4a0
    JZ 0x00404169                       ; 0040426f
        ;   XREF to: 00404169 (CONDITIONAL_JUMP)  ; LAB_00404169
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404275 | DAT_01c4f02c
    JMP 0x00404173                      ; 0040427f
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    CMP dword ptr [0x0061b4a0],0x20     ; 00404284 | DAT_0061b4a0
        ;   Label: LAB_00404284
    JNZ 0x00404250                      ; 0040428b
        ;   XREF to: 00404250 (CONDITIONAL_JUMP)  ; LAB_00404250
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040428d | DAT_01c4f02c
    JMP 0x00404173                      ; 00404297
        ;   XREF to: 00404173 (UNCONDITIONAL_JUMP)  ; LAB_00404173
    MOV dword ptr [0x01c51d14],0x33     ; 0040429c | DAT_01c51d14
        ;   Label: LAB_0040429c
    JMP 0x0040419b                      ; 004042a6
        ;   XREF to: 0040419b (UNCONDITIONAL_JUMP)  ; LAB_0040419b
    MOV EDX,0xfdffff                    ; 004042ab
        ;   Label: LAB_004042ab
    JMP 0x0040420b                      ; 004042b0
        ;   XREF to: 0040420b (UNCONDITIONAL_JUMP)  ; LAB_0040420b
    CMP EAX,0x10000                     ; 004042b5
        ;   Label: LAB_004042b5
    JGE 0x004042c1                      ; 004042ba
        ;   XREF to: 004042c1 (CONDITIONAL_JUMP)  ; LAB_004042c1
    MOV EAX,0x10000                     ; 004042bc
    CMP EDX,0x10000                     ; 004042c1
        ;   Label: LAB_004042c1
    JGE 0x004042ce                      ; 004042c7
        ;   XREF to: 004042ce (CONDITIONAL_JUMP)  ; LAB_004042ce
    MOV EDX,0x10000                     ; 004042c9
    CMP EAX,0xfeffff                    ; 004042ce
        ;   Label: LAB_004042ce
    JLE 0x004042da                      ; 004042d3
        ;   XREF to: 004042da (CONDITIONAL_JUMP)  ; LAB_004042da
    MOV EAX,0xfeffff                    ; 004042d5
    CMP EDX,0xfeffff                    ; 004042da
        ;   Label: LAB_004042da
    JLE 0x0040420b                      ; 004042e0
        ;   XREF to: 0040420b (CONDITIONAL_JUMP)  ; LAB_0040420b
    MOV EDX,0xfeffff                    ; 004042e6
    JMP 0x0040420b                      ; 004042eb
        ;   XREF to: 0040420b (UNCONDITIONAL_JUMP)  ; LAB_0040420b
    PUSH 0x713a98                       ; 004042f0 | DAT_00713a98
        ;   Label: LAB_004042f0
    PUSH EDI                            ; 004042f5
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004042f6
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004042fb
    POP EBX                             ; 004042fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004042ff
        ;   Label: LAB_004042ff
    MOV EDX,dword ptr [EDX + 0x4]       ; 00404303
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404306
    SUB EAX,EDX                         ; 0040430d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040430f
    SHL EAX,0x2                         ; 00404313
    ADD EDX,0x18                        ; 00404316
    ADD EAX,EDX                         ; 00404319
    POP EBP                             ; 0040431b
    POP EDI                             ; 0040431c
    POP ESI                             ; 0040431d
    RET                                 ; 0040431e

