; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hotdemon_cpp_FUN_004d61c0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d5baec
;   undefined4 DAT_01d5bb10
;   undefined4 DAT_01d5bb18
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d61c0
        ;   Label: core_hotdemon.cpp_FUN_004d61c0
    PUSH ESI                            ; 004d61c1
    PUSH EDI                            ; 004d61c2
    PUSH EBP                            ; 004d61c3
    SUB ESP,0x48                        ; 004d61c4
    MOV EBX,dword ptr [ESP + 0x60]      ; 004d61c7
    MOV EDX,dword ptr [0x01d5baec]      ; 004d61cb | DAT_01d5baec
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d61d1
    PUSH EDX                            ; 004d61d5
    ADD EAX,0x158                       ; 004d61d6
    MOV EBP,0x3                         ; 004d61db
    PUSH EAX                            ; 004d61e0
    LEA ESI,[ESP + 0x44]                ; 004d61e1
    LEA EDI,[ESP + 0x38]                ; 004d61e5
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d61e9
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 004d61ee
    ADD ESP,0x8                         ; 004d61f2
    LEA EAX,[ESP + 0x30]                ; 004d61f5
    MOVSD ES:EDI,ESI                    ; 004d61f9
    MOVSD ES:EDI,ESI                    ; 004d61fa
    MOVSD ES:EDI,ESI                    ; 004d61fb
    CMP EBX,EAX                         ; 004d61fc
    JZ 0x004d6214                       ; 004d61fe
        ;   XREF to: 004d6214 (CONDITIONAL_JUMP)  ; LAB_004d6214
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d6200
    MOV dword ptr [EBX],EAX             ; 004d6204
    MOV EAX,dword ptr [ESP + 0x34]      ; 004d6206
    MOV dword ptr [EBX + 0x4],EAX       ; 004d620a
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d620d
    MOV dword ptr [EBX + 0x8],EAX       ; 004d6211
    MOV ECX,dword ptr [0x01d5bb10]      ; 004d6214 | DAT_01d5bb10
        ;   Label: LAB_004d6214
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d621a
    PUSH ECX                            ; 004d621e
    ADD EAX,0x158                       ; 004d621f
    PUSH EAX                            ; 004d6224
    LEA ESI,[ESP + 0x14]                ; 004d6225
    LEA EDI,[ESP + 0x20]                ; 004d6229
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d622d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x14]                ; 004d6232
    LEA EAX,[ESP + 0x20]                ; 004d6236
    ADD ESP,0x8                         ; 004d623a
    LEA EDX,[EBX + 0xc]                 ; 004d623d
    MOVSD ES:EDI,ESI                    ; 004d6240
    MOVSD ES:EDI,ESI                    ; 004d6241
    MOVSD ES:EDI,ESI                    ; 004d6242
    CMP EDX,EAX                         ; 004d6243
    JZ 0x004d625b                       ; 004d6245
        ;   XREF to: 004d625b (CONDITIONAL_JUMP)  ; LAB_004d625b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d6247
    MOV dword ptr [EDX],EAX             ; 004d624b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d624d
    MOV dword ptr [EDX + 0x4],EAX       ; 004d6251
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d6254
    MOV dword ptr [EDX + 0x8],EAX       ; 004d6258
    MOV ESI,dword ptr [0x01d5bb18]      ; 004d625b | DAT_01d5bb18
        ;   Label: LAB_004d625b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004d6261
    PUSH ESI                            ; 004d6265
    ADD EAX,0x158                       ; 004d6266
    LEA EDI,[ESP + 0x4]                 ; 004d626b
    PUSH EAX                            ; 004d626f
    LEA ESI,[ESP + 0x2c]                ; 004d6270
    ADD EBX,0x18                        ; 004d6274
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004d6277
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x2c]                ; 004d627c
    ADD ESP,0x8                         ; 004d6280
    MOV EAX,ESP                         ; 004d6283
    MOVSD ES:EDI,ESI                    ; 004d6285
    MOVSD ES:EDI,ESI                    ; 004d6286
    MOVSD ES:EDI,ESI                    ; 004d6287
    CMP EBX,EAX                         ; 004d6288
    JNZ 0x004d6296                      ; 004d628a
        ;   XREF to: 004d6296 (CONDITIONAL_JUMP)  ; LAB_004d6296
    MOV EAX,EBP                         ; 004d628c
    ADD ESP,0x48                        ; 004d628e
    POP EBP                             ; 004d6291
    POP EDI                             ; 004d6292
    POP ESI                             ; 004d6293
    POP EBX                             ; 004d6294
    RET                                 ; 004d6295
    MOV EAX,dword ptr [ESP]             ; 004d6296
        ;   Label: LAB_004d6296
    MOV dword ptr [EBX],EAX             ; 004d6299
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d629b
    MOV dword ptr [EBX + 0x4],EAX       ; 004d629f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d62a2
    MOV dword ptr [EBX + 0x8],EAX       ; 004d62a6
    MOV EAX,EBP                         ; 004d62a9
    ADD ESP,0x48                        ; 004d62ab
    POP EBP                             ; 004d62ae
    POP EDI                             ; 004d62af
    POP ESI                             ; 004d62b0
    POP EBX                             ; 004d62b1
    RET                                 ; 004d62b2

