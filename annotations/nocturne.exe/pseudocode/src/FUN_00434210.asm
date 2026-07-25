; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434210(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_004341cc = 0043448c
;   undefined1* PTR_caseD_1_004341d0 = 0043471e
;   undefined1* PTR_caseD_3_004341d8 = 004344b6
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c5024
;   undefined4 DAT_006b0280
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766ca4
;   ... and 16 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   wincore_windll.cpp_drawPolygon2_FUN_00532650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434210
        ;   Label: FUN_00434210
    PUSH ESI                            ; 00434211
    PUSH EDI                            ; 00434212
    PUSH EBP                            ; 00434213
    SUB ESP,0x1c                        ; 00434214
    MOV EBP,dword ptr [ESP + 0x30]      ; 00434217
    MOV ECX,0xffffffff                  ; 0043421b
    XOR EBX,EBX                         ; 00434220
    XOR ESI,ESI                         ; 00434222
    TEST EBP,EBP                        ; 00434224
    JLE 0x00434248                      ; 00434226
        ;   XREF to: 00434248 (CONDITIONAL_JUMP)  ; LAB_00434248
    MOV EAX,dword ptr [ESP + 0x34]      ; 00434228
    IMUL EDX,dword ptr [EAX],0x30       ; 0043422c
        ;   Label: LAB_0043422c
    MOV EDX,dword ptr [EDX + 0x5c5024]  ; 0043422f | DAT_005c5024
    TEST EDX,0x80000000                 ; 00434235
    JZ 0x0043423e                       ; 0043423b
        ;   XREF to: 0043423e (CONDITIONAL_JUMP)  ; LAB_0043423e
    INC ESI                             ; 0043423d
    ADD EAX,0x4                         ; 0043423e
        ;   Label: LAB_0043423e
    INC EBX                             ; 00434241
    AND ECX,EDX                         ; 00434242
    CMP EBX,EBP                         ; 00434244
    JL 0x0043422c                       ; 00434246
        ;   XREF to: 0043422c (CONDITIONAL_JUMP)  ; LAB_0043422c
    CMP ESI,EBP                         ; 00434248
        ;   Label: LAB_00434248
    JNZ 0x00434255                      ; 0043424a
        ;   XREF to: 00434255 (CONDITIONAL_JUMP)  ; LAB_00434255
    TEST CL,0xff                        ; 0043424c
    JNZ 0x004342f1                      ; 0043424f
        ;   XREF to: 004342f1 (CONDITIONAL_JUMP)  ; LAB_004342f1
    TEST ESI,ESI                        ; 00434255
        ;   Label: LAB_00434255
    JNZ 0x004343ba                      ; 00434257
        ;   XREF to: 004343ba (CONDITIONAL_JUMP)  ; LAB_004343ba
    CMP dword ptr [0x01c02594],0x0      ; 0043425d | DAT_01c02594
    JZ 0x0043435f                       ; 00434264
        ;   XREF to: 0043435f (CONDITIONAL_JUMP)  ; LAB_0043435f
    XOR EAX,EAX                         ; 0043426a
    TEST EBP,EBP                        ; 0043426c
    JLE 0x00434290                      ; 0043426e
        ;   XREF to: 00434290 (CONDITIONAL_JUMP)  ; LAB_00434290
    MOV EBX,dword ptr [ESP + 0x34]      ; 00434270
    IMUL EDX,dword ptr [EBX],0x30       ; 00434274
        ;   Label: LAB_00434274
    INC EAX                             ; 00434277
    ADD EDX,0x5c5014                    ; 00434278 | DAT_005c5014
    ADD EBX,0x4                         ; 0043427e
    MOV dword ptr [EAX*0x4 + 0x767270],EDX ; 00434281 | DAT_00767274 | DAT_00767278
    CMP EAX,EBP                         ; 00434288
    JL 0x00434274                       ; 0043428a
        ;   XREF to: 00434274 (CONDITIONAL_JUMP)  ; LAB_00434274
    LEA EAX,[EAX]                       ; 0043428c
    CMP dword ptr [0x006b0280],0x0      ; 00434290 | DAT_006b0280
        ;   Label: LAB_00434290
    JZ 0x00434330                       ; 00434297
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    CMP EBP,0x3                         ; 0043429d
    JLE 0x00434303                      ; 004342a0
        ;   XREF to: 00434303 (CONDITIONAL_JUMP)  ; LAB_00434303
    LEA EAX,[EBP + -0x2]                ; 004342a2
    XOR EBX,EBX                         ; 004342a5
    MOV dword ptr [ESP],EAX             ; 004342a7
    LEA EDI,[EAX*0x4 + 0x0]             ; 004342aa
    XOR ESI,ESI                         ; 004342b1
    TEST EDI,EDI                        ; 004342b3
    JLE 0x004342df                      ; 004342b5
        ;   XREF to: 004342df (CONDITIONAL_JUMP)  ; LAB_004342df
    MOV EAX,dword ptr [EBX + 0x76727c]  ; 004342b7 | DAT_0076727c | DAT_00767280
        ;   Label: LAB_004342b7
    PUSH EAX                            ; 004342bd
    MOV EDX,dword ptr [EBX + 0x767278]  ; 004342be | DAT_00767278 | DAT_0076727c
    PUSH EDX                            ; 004342c4
    MOV ECX,dword ptr [0x00767274]      ; 004342c5 | DAT_00767274
    PUSH ECX                            ; 004342cb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004342cc
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10()
    ADD ESP,0xc                         ; 004342d1
    TEST EAX,EAX                        ; 004342d4
    JZ 0x00434300                       ; 004342d6
        ;   XREF to: 00434300 (CONDITIONAL_JUMP)  ; LAB_00434300
    ADD EBX,0x4                         ; 004342d8
        ;   Label: LAB_004342d8
    CMP EBX,EDI                         ; 004342db
    JL 0x004342b7                       ; 004342dd
        ;   XREF to: 004342b7 (CONDITIONAL_JUMP)  ; LAB_004342b7
    CMP ESI,dword ptr [ESP]             ; 004342df
        ;   Label: LAB_004342df
    JNZ 0x00434330                      ; 004342e2
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    MOV EAX,0x1                         ; 004342e4
    ADD ESP,0x1c                        ; 004342e9
        ;   Label: LAB_004342e9
    POP EBP                             ; 004342ec
    POP EDI                             ; 004342ed
    POP ESI                             ; 004342ee
    POP EBX                             ; 004342ef
    RET                                 ; 004342f0
    XOR EDX,EDX                         ; 004342f1
        ;   Label: LAB_004342f1
    MOV EAX,0x1                         ; 004342f3
    MOV dword ptr [0x00766c70],EDX      ; 004342f8 | DAT_00766c70
    JMP 0x004342e9                      ; 004342fe
        ;   XREF to: 004342e9 (UNCONDITIONAL_JUMP)  ; LAB_004342e9
    INC ESI                             ; 00434300
        ;   Label: LAB_00434300
    JMP 0x004342d8                      ; 00434301
        ;   XREF to: 004342d8 (UNCONDITIONAL_JUMP)  ; LAB_004342d8
    MOV EAX,[0x0076727c]                ; 00434303 | DAT_0076727c
        ;   Label: LAB_00434303
    PUSH EAX                            ; 00434308
    MOV EDX,dword ptr [0x00767278]      ; 00434309 | DAT_00767278
    PUSH EDX                            ; 0043430f
    MOV ECX,dword ptr [0x00767274]      ; 00434310 | DAT_00767274
    PUSH ECX                            ; 00434316
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00434317
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10()
    ADD ESP,0xc                         ; 0043431c
    TEST EAX,EAX                        ; 0043431f
    JNZ 0x00434330                      ; 00434321
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    MOV EAX,0x1                         ; 00434323
    ADD ESP,0x1c                        ; 00434328
    POP EBP                             ; 0043432b
    POP EDI                             ; 0043432c
    POP ESI                             ; 0043432d
    POP EBX                             ; 0043432e
    RET                                 ; 0043432f
    MOV EBX,dword ptr [0x01c039a0]      ; 00434330 | DAT_01c039a0
        ;   Label: LAB_00434330
    PUSH EBX                            ; 00434336
    MOV ESI,dword ptr [0x01e52ef8]      ; 00434337 | DAT_01e52ef8
    PUSH EBP                            ; 0043433d
    INC ESI                             ; 0043433e
    PUSH 0x767274                       ; 0043433f | DAT_00767274
    MOV dword ptr [0x01e52ef8],ESI      ; 00434344 | DAT_01e52ef8
    CALL wincore_windll.cpp_drawPolygon2_FUN_00532650 ; 0043434a
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_drawPolygon2_FUN_00532650()
    MOV EAX,0x1                         ; 0043434f
    ADD ESP,0xc                         ; 00434354
    ADD ESP,0x1c                        ; 00434357
    POP EBP                             ; 0043435a
    POP EDI                             ; 0043435b
    POP ESI                             ; 0043435c
    POP EBX                             ; 0043435d
    RET                                 ; 0043435e
    MOV dword ptr [ESP + 0x8],ESI       ; 0043435f
        ;   Label: LAB_0043435f
    MOV dword ptr [0x00766c70],EBP      ; 00434363 | DAT_00766c70
    TEST EBP,EBP                        ; 00434369
    JLE 0x004343b0                      ; 0043436b
        ;   XREF to: 004343b0 (CONDITIONAL_JUMP)  ; LAB_004343b0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043436d
    MOV EDX,0x766c74                    ; 00434371 | DAT_00766c74
    IMUL ESI,dword ptr [EBX],0x30       ; 00434376
        ;   Label: LAB_00434376
    MOV ECX,0x30                        ; 00434379
    ADD ESI,0x5c5014                    ; 0043437e | DAT_005c5014
    MOV EDI,EDX                         ; 00434384
    PUSH EDI                            ; 00434386 | DAT_00766c74 | DAT_00766ca4
    MOV EAX,ECX                         ; 00434387
    SHR ECX,0x2                         ; 00434389
    MOVSD.REP ES:EDI,ESI                ; 0043438c | DAT_005c5014 | DAT_00766c74 | DAT_005c5018
    MOV CL,AL                           ; 0043438e
    AND CL,0x3                          ; 00434390
    MOVSB.REP ES:EDI,ESI                ; 00434393 | DAT_005c5018 | DAT_00766c78
    POP EDI                             ; 00434395
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434396
    ADD EBX,0x4                         ; 0043439a
    INC EAX                             ; 0043439d
    ADD EDX,0x30                        ; 0043439e
    MOV dword ptr [ESP + 0x8],EAX       ; 004343a1
    CMP EBP,EAX                         ; 004343a5
    JG 0x00434376                       ; 004343a7
        ;   XREF to: 00434376 (CONDITIONAL_JUMP)  ; LAB_00434376
    LEA EAX,[EAX]                       ; 004343a9
    NOP                                 ; 004343af
    XOR EAX,EAX                         ; 004343b0
        ;   Label: LAB_004343b0
    ADD ESP,0x1c                        ; 004343b2
    POP EBP                             ; 004343b5
    POP EDI                             ; 004343b6
    POP ESI                             ; 004343b7
    POP EBX                             ; 004343b8
    RET                                 ; 004343b9
    MOV dword ptr [0x00767b3c],EBP      ; 004343ba | DAT_00767b3c
        ;   Label: LAB_004343ba
    XOR EDX,EDX                         ; 004343c0
    XOR EBX,EBX                         ; 004343c2
    MOV dword ptr [0x00767b40],EDX      ; 004343c4 | DAT_00767b40
    MOV dword ptr [0x00767b44],EDX      ; 004343ca | DAT_00767b44
    MOV dword ptr [0x00767b48],EDX      ; 004343d0 | DAT_00767b48
    MOV dword ptr [0x00766c70],EDX      ; 004343d6 | DAT_00766c70
    TEST EBP,EBP                        ; 004343dc
    JLE 0x00434430                      ; 004343de
        ;   XREF to: 00434430 (CONDITIONAL_JUMP)  ; LAB_00434430
    MOV EAX,dword ptr [ESP + 0x34]      ; 004343e0
    MOV EDX,0x76814c                    ; 004343e4 | DAT_0076814c
    MOV dword ptr [ESP + 0x4],EAX       ; 004343e9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004343ed
        ;   Label: LAB_004343ed
    IMUL ESI,dword ptr [EAX],0x30       ; 004343f1
    MOV EDI,EDX                         ; 004343f4
    MOV ECX,0x30                        ; 004343f6
    ADD ESI,0x5c5014                    ; 004343fb | DAT_005c5014
    PUSH EDI                            ; 00434401 | DAT_0076814c | DAT_0076817c
    MOV EAX,ECX                         ; 00434402
    SHR ECX,0x2                         ; 00434404
    MOVSD.REP ES:EDI,ESI                ; 00434407 | DAT_005c5014 | DAT_0076814c | DAT_005c5018
    MOV CL,AL                           ; 00434409
    AND CL,0x3                          ; 0043440b
    MOVSB.REP ES:EDI,ESI                ; 0043440e | DAT_005c5018 | DAT_00768150
    POP EDI                             ; 00434410
    MOV ESI,dword ptr [ESP + 0x4]       ; 00434411
    INC EBX                             ; 00434415
    ADD ESI,0x4                         ; 00434416
    ADD EDX,0x30                        ; 00434419
    MOV dword ptr [ESP + 0x4],ESI       ; 0043441c
    CMP EBX,EBP                         ; 00434420
    JL 0x004343ed                       ; 00434422
        ;   XREF to: 004343ed (CONDITIONAL_JUMP)  ; LAB_004343ed
    LEA EAX,[EAX]                       ; 00434424
    LEA EDX,[EDX]                       ; 0043442a | DAT_0076817c
    XOR EDI,EDI                         ; 00434430
        ;   Label: LAB_00434430
    MOV EBP,dword ptr [0x00767b3c]      ; 00434432 | DAT_00767b3c
    MOV dword ptr [ESP + 0x18],EDI      ; 00434438
    TEST EBP,EBP                        ; 0043443c
    JLE 0x004344d0                      ; 0043443e
        ;   XREF to: 004344d0 (CONDITIONAL_JUMP)  ; LAB_004344d0
    MOV EBX,0x76814c                    ; 00434444 | DAT_0076814c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00434449
        ;   Label: LAB_00434449
    MOV EDI,dword ptr [0x00767b3c]      ; 0043444d | DAT_00767b3c
    INC EAX                             ; 00434453
    CMP EAX,EDI                         ; 00434454
    JNZ 0x0043445a                      ; 00434456
        ;   XREF to: 0043445a (CONDITIONAL_JUMP)  ; LAB_0043445a
    XOR EAX,EDI                         ; 00434458
    IMUL EAX,EAX,0x30                   ; 0043445a
        ;   Label: LAB_0043445a
    MOV EBP,0x76814c                    ; 0043445d | DAT_0076814c
    MOV EDX,EBX                         ; 00434462
    MOV ECX,dword ptr [EBX]             ; 00434464 | DAT_0076814c | DAT_0076817c
    MOV ESI,dword ptr [EBX + 0x8]       ; 00434466 | DAT_00768154 | DAT_00768184
    ADD EBP,EAX                         ; 00434469
    XOR EAX,EAX                         ; 0043446b
    CMP ECX,ESI                         ; 0043446d
    JL 0x00434476                       ; 0043446f
        ;   XREF to: 00434476 (CONDITIONAL_JUMP)  ; LAB_00434476
    MOV EAX,0x1                         ; 00434471
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434476 | DAT_00768154
        ;   Label: LAB_00434476
    CMP EDI,dword ptr [EBP]             ; 00434479 | DAT_0076814c
    JG 0x00434480                       ; 0043447c
        ;   XREF to: 00434480 (CONDITIONAL_JUMP)  ; LAB_00434480
    OR AL,0x2                           ; 0043447e
    CMP EAX,0x3                         ; 00434480
        ;   Label: LAB_00434480
    JA 0x004344b6                       ; 00434483
        ;   XREF to: 004344b6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341cc]  ; 00434485 | = "k=@{v" | caseD_1 | caseD_2
        ;   Label: switchD

