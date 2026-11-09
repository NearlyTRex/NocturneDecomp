; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b11b0(uint param_1,uint param_2,uint param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   undefined4 DAT_01d1ad62
;   undefined4 DAT_01d1ad64
;   undefined4 DAT_01d1ad68
;   undefined4 DAT_01d1ad6c
;   undefined4 DAT_01d1ad70
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b11b0
        ;   Label: engine_font.cpp_FUN_004b11b0
    PUSH ESI                            ; 004b11b1
    PUSH EDI                            ; 004b11b2
    PUSH EBP                            ; 004b11b3
    SUB ESP,0xc                         ; 004b11b4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b11b7
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b11bb
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b11bf
    MOV EDX,dword ptr [0x005fba20]      ; 004b11c3 | DAT_005fba20
    CMP EDX,0x8                         ; 004b11c9
    JZ 0x004b120e                       ; 004b11cc
        ;   XREF to: 004b120e (CONDITIONAL_JUMP)  ; LAB_004b120e
    CMP EDX,0x10                        ; 004b11ce
    JZ 0x004b1228                       ; 004b11d1
        ;   XREF to: 004b1228 (CONDITIONAL_JUMP)  ; LAB_004b1228
    CMP EDX,0x20                        ; 004b11d3
    JNZ 0x004b12aa                      ; 004b11d6
        ;   XREF to: 004b12aa (CONDITIONAL_JUMP)  ; LAB_004b12aa
    CMP EDX,EDX                         ; 004b11dc
    JNZ 0x004b1297                      ; 004b11de
        ;   XREF to: 004b1297 (CONDITIONAL_JUMP)  ; LAB_004b1297
    MOV CL,byte ptr [0x01c6af74]        ; 004b11e4 | DAT_01c6af74
    MOV EAX,EDI                         ; 004b11ea
    MOV EDX,EBX                         ; 004b11ec
    SHL EAX,CL                          ; 004b11ee
    MOV CL,byte ptr [0x01c6af80]        ; 004b11f0 | DAT_01c6af80
    SHL EDX,CL                          ; 004b11f6
    MOV CL,byte ptr [0x01c6af8c]        ; 004b11f8 | DAT_01c6af8c
    OR EAX,EDX                          ; 004b11fe
    MOV EDX,ESI                         ; 004b1200
    SHL EDX,CL                          ; 004b1202
    MOV ECX,EDX                         ; 004b1204
    OR ECX,EAX                          ; 004b1206
    MOV dword ptr [0x01d1ad64],ECX      ; 004b1208 | DAT_01d1ad64
        ;   Label: LAB_004b1208
    MOV dword ptr [0x01d1ad6c],EBX      ; 004b120e | DAT_01d1ad6c
        ;   Label: LAB_004b120e
    MOV dword ptr [0x01d1ad70],ESI      ; 004b1214 | DAT_01d1ad70
    MOV dword ptr [0x01d1ad68],EDI      ; 004b121a | DAT_01d1ad68
    ADD ESP,0xc                         ; 004b1220
    POP EBP                             ; 004b1223
    POP EDI                             ; 004b1224
    POP ESI                             ; 004b1225
    POP EBX                             ; 004b1226
    RET                                 ; 004b1227
    MOV EBP,dword ptr [0x01c6af78]      ; 004b1228 | DAT_01c6af78
        ;   Label: LAB_004b1228
    MOV EAX,EDI                         ; 004b122e
    XOR EDX,EDX                         ; 004b1230
    DIV EBP                             ; 004b1232
    MOV dword ptr [ESP],EDI             ; 004b1234
    MOV ECX,dword ptr [0x01c6af84]      ; 004b1237 | DAT_01c6af84
    MOV dword ptr [ESP],EAX             ; 004b123d
    XOR EDX,EDX                         ; 004b1240
    MOV EAX,EBX                         ; 004b1242
    DIV ECX                             ; 004b1244
    MOV dword ptr [ESP + 0x4],EBX       ; 004b1246
    MOV EBP,dword ptr [0x01c6af90]      ; 004b124a | DAT_01c6af90
    MOV dword ptr [ESP + 0x4],EAX       ; 004b1250
    XOR EDX,EDX                         ; 004b1254
    MOV EAX,ESI                         ; 004b1256
    DIV EBP                             ; 004b1258
    MOV dword ptr [ESP + 0x8],ESI       ; 004b125a
    MOV CL,byte ptr [0x01c6af74]        ; 004b125e | DAT_01c6af74
    MOV dword ptr [ESP + 0x8],EAX       ; 004b1264
    MOV EAX,dword ptr [ESP]             ; 004b1268
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b126b
    SHL EAX,CL                          ; 004b126f
    MOV CL,byte ptr [0x01c6af80]        ; 004b1271 | DAT_01c6af80
    SHL EDX,CL                          ; 004b1277
    MOV CL,byte ptr [0x01c6af8c]        ; 004b1279 | DAT_01c6af8c
    OR EAX,EDX                          ; 004b127f
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b1281
    SHL EDX,CL                          ; 004b1285
    MOV ECX,EDX                         ; 004b1287
    OR ECX,EAX                          ; 004b1289
    MOV word ptr [0x01d1ad62],CX        ; 004b128b | DAT_01d1ad62
    JMP 0x004b120e                      ; 004b1292
        ;   XREF to: 004b120e (UNCONDITIONAL_JUMP)  ; LAB_004b120e
    MOV EAX,EBX                         ; 004b1297
        ;   Label: LAB_004b1297
    MOV ECX,EDI                         ; 004b1299
    SHL EAX,0x8                         ; 004b129b
    SHL ECX,0x10                        ; 004b129e
    OR ECX,EAX                          ; 004b12a1
    OR ECX,ESI                          ; 004b12a3
    JMP 0x004b1208                      ; 004b12a5
        ;   XREF to: 004b1208 (UNCONDITIONAL_JUMP)  ; LAB_004b1208
    MOV EAX,0x5c207c                    ; 004b12aa
        ;   Label: LAB_004b12aa
    MOV EDX,0x4c0                       ; 004b12af
    PUSH 0x5c208f                       ; 004b12b4
    MOV [0x01d71de0],EAX                ; 004b12b9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004b12be | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004b12c4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004b12c9
    JMP 0x004b120e                      ; 004b12cc
        ;   XREF to: 004b120e (UNCONDITIONAL_JUMP)  ; LAB_004b120e

