; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004e50f0(int pitch,int yaw,int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba44
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   ... and 4 more
;
; Called Functions:
;   engine_matrix.c_FUN_004e4d90
;   engine_matrix.c_FUN_004e4dd0
;   engine_matrix.c_invertTransformMatrix_FUN_004e4e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e50f0
        ;   Label: engine_matrix.c_buildRotationMatrix_FUN_004e50f0
    PUSH ESI                            ; 004e50f1
    PUSH EBP                            ; 004e50f2
    SUB ESP,0x8                         ; 004e50f3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e50f6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e50fa
    PUSH EDI                            ; 004e50fe
    PUSH EBX                            ; 004e50ff
    CALL engine_matrix.c_FUN_004e4d90   ; 004e5100
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    ADD ESP,0x4                         ; 004e5105
    PUSH EBX                            ; 004e5108
    MOV EBP,EAX                         ; 004e5109
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e510b
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004e5110
    ADD ESP,0x4                         ; 004e5114
    PUSH ESI                            ; 004e5117
    CALL engine_matrix.c_FUN_004e4d90   ; 004e5118
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    ADD ESP,0x4                         ; 004e511d
    PUSH ESI                            ; 004e5120
    MOV EBX,EAX                         ; 004e5121
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e5123
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    ADD ESP,0x4                         ; 004e5128
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e512b
    PUSH EDX                            ; 004e512f
    MOV ESI,EAX                         ; 004e5130
    CALL engine_matrix.c_FUN_004e4d90   ; 004e5132
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    ADD ESP,0x4                         ; 004e5137
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e513a
    PUSH ECX                            ; 004e513e
    MOV EDI,EAX                         ; 004e513f
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e5141
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    MOV ECX,EAX                         ; 004e5146
    ADD ESP,0x4                         ; 004e5148
    MOV EAX,ESI                         ; 004e514b
    MOV EDX,ECX                         ; 004e514d
    IMUL EDX                            ; 004e514f
    SHRD EAX,EDX,0x10                   ; 004e5151
    MOV dword ptr [ESP + 0x4],EAX       ; 004e5155
    MOV EDX,EBP                         ; 004e5159
    MOV EAX,EBX                         ; 004e515b
    IMUL EDX                            ; 004e515d
    SHRD EAX,EDX,0x10                   ; 004e515f
    MOV EDX,EDI                         ; 004e5163
    IMUL EDX                            ; 004e5165
    SHRD EAX,EDX,0x10                   ; 004e5167
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e516b
    ADD EDX,EAX                         ; 004e516f
    MOV dword ptr [0x01c6e2fc],EDX      ; 004e5171 | DAT_01c6e2fc
    MOV EDX,ECX                         ; 004e5177
    MOV EAX,EBX                         ; 004e5179
    NEG EDX                             ; 004e517b
    IMUL EDX                            ; 004e517d
    SHRD EAX,EDX,0x10                   ; 004e517f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e5183
    MOV EDX,EBP                         ; 004e5187
    MOV EAX,ESI                         ; 004e5189
    IMUL EDX                            ; 004e518b
    SHRD EAX,EDX,0x10                   ; 004e518d
    MOV EDX,EDI                         ; 004e5191
    IMUL EDX                            ; 004e5193
    SHRD EAX,EDX,0x10                   ; 004e5195
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5199
    ADD EDX,EAX                         ; 004e519d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e519f
    MOV dword ptr [0x01c6e300],EDX      ; 004e51a3 | DAT_01c6e300
    MOV EDX,EDI                         ; 004e51a9
    IMUL EDX                            ; 004e51ab
    SHRD EAX,EDX,0x10                   ; 004e51ad
    MOV [0x01c6e304],EAX                ; 004e51b1 | DAT_01c6e304
    MOV EDX,EBX                         ; 004e51b6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e51b8
    IMUL EDX                            ; 004e51bc
    SHRD EAX,EDX,0x10                   ; 004e51be
    MOV [0x01c6e308],EAX                ; 004e51c2 | DAT_01c6e308
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e51c7
    MOV EDX,ESI                         ; 004e51cb
    IMUL EDX                            ; 004e51cd
    SHRD EAX,EDX,0x10                   ; 004e51cf
    MOV [0x01c6e30c],EAX                ; 004e51d3 | DAT_01c6e30c
    MOV dword ptr [0x01c6e310],EBP      ; 004e51d8 | DAT_01c6e310
    MOV EAX,EBP                         ; 004e51de
    MOV EDX,EDI                         ; 004e51e0
    NEG EAX                             ; 004e51e2
    NEG EDX                             ; 004e51e4
    MOV [0x01c6e310],EAX                ; 004e51e6 | DAT_01c6e310
    MOV EAX,ESI                         ; 004e51eb
    IMUL EDX                            ; 004e51ed
    SHRD EAX,EDX,0x10                   ; 004e51ef
    MOV dword ptr [ESP + 0x4],EAX       ; 004e51f3
    MOV EDX,EBP                         ; 004e51f7
    MOV EAX,EBX                         ; 004e51f9
    IMUL EDX                            ; 004e51fb
    SHRD EAX,EDX,0x10                   ; 004e51fd
    MOV EDX,ECX                         ; 004e5201
    IMUL EDX                            ; 004e5203
    SHRD EAX,EDX,0x10                   ; 004e5205
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5209
    ADD EDX,EAX                         ; 004e520d
    MOV dword ptr [0x01c6e314],EDX      ; 004e520f | DAT_01c6e314
    MOV EAX,EDI                         ; 004e5215
    MOV EDX,EBX                         ; 004e5217
    IMUL EDX                            ; 004e5219
    SHRD EAX,EDX,0x10                   ; 004e521b
    MOV EBX,EAX                         ; 004e521f
    MOV EDX,EBP                         ; 004e5221
    MOV EAX,ESI                         ; 004e5223
    IMUL EDX                            ; 004e5225
    SHRD EAX,EDX,0x10                   ; 004e5227
    MOV EDX,ECX                         ; 004e522b
    IMUL EDX                            ; 004e522d
    SHRD EAX,EDX,0x10                   ; 004e522f
    MOV EDX,ECX                         ; 004e5233
    ADD EBX,EAX                         ; 004e5235
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e5237
    MOV dword ptr [0x01c6e318],EBX      ; 004e523b | DAT_01c6e318
    IMUL EDX                            ; 004e5241
    SHRD EAX,EDX,0x10                   ; 004e5243
    MOV [0x01c6e31c],EAX                ; 004e5247 | DAT_01c6e31c
    MOV EAX,[0x005fba1c]                ; 004e524c | DAT_005fba1c
    CMP EAX,0xc8                        ; 004e5251
    JC 0x004e53f6                       ; 004e5256
        ;   XREF to: 004e53f6 (CONDITIONAL_JUMP)  ; LAB_004e53f6
    JA 0x004e53ef                       ; 004e525c
        ;   XREF to: 004e53ef (CONDITIONAL_JUMP)  ; LAB_004e53ef
    MOV dword ptr [0x01d7269c],0x15555  ; 004e5262 | DAT_01d7269c
    MOV EAX,0x10000                     ; 004e526c
        ;   Label: LAB_004e526c
    MOV EBX,dword ptr [0x01c6b598]      ; 004e5271 | DAT_01c6b598
    MOV EDX,dword ptr [0x01c6b59c]      ; 004e5277 | DAT_01c6b59c
    IMUL EDX                            ; 004e527d
    IDIV EBX                            ; 004e527f
    MOV ECX,EAX                         ; 004e5281
    MOV EDX,dword ptr [0x005fba18]      ; 004e5283 | DAT_005fba18
    NEG ECX                             ; 004e5289
    IMUL EDX,ECX                        ; 004e528b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e528e
    SUB EAX,EDX                         ; 004e5295
    MOV ECX,dword ptr [0x005fba1c]      ; 004e5297 | DAT_005fba1c
    MOV EDX,EAX                         ; 004e529d
    SHL ECX,0x2                         ; 004e529f
    SAR EDX,0x1f                        ; 004e52a2
    IDIV ECX                            ; 004e52a5
    MOV EDX,dword ptr [0x01c6e2fc]      ; 004e52a7 | DAT_01c6e2fc
    MOV ECX,EAX                         ; 004e52ad
    IMUL EDX                            ; 004e52af
    SHRD EAX,EDX,0x10                   ; 004e52b1
    MOV EDX,dword ptr [0x01c6e308]      ; 004e52b5 | DAT_01c6e308
    MOV [0x01c6e2fc],EAX                ; 004e52bb | DAT_01c6e2fc
    MOV EAX,ECX                         ; 004e52c0
    IMUL EDX                            ; 004e52c2
    SHRD EAX,EDX,0x10                   ; 004e52c4
    MOV EDX,dword ptr [0x01c6e314]      ; 004e52c8 | DAT_01c6e314
    MOV [0x01c6e308],EAX                ; 004e52ce | DAT_01c6e308
    MOV EAX,ECX                         ; 004e52d3
    IMUL EDX                            ; 004e52d5
    SHRD EAX,EDX,0x10                   ; 004e52d7
    MOV ESI,dword ptr [0x01c6b5a8]      ; 004e52db | DAT_01c6b5a8
    MOV [0x01c6e314],EAX                ; 004e52e1 | DAT_01c6e314
    MOV EAX,[0x01c6b5b0]                ; 004e52e6 | DAT_01c6b5b0
    SUB EAX,ESI                         ; 004e52eb
    LEA EDX,[EAX*0x4 + 0x0]             ; 004e52ed
    ADD EDX,EAX                         ; 004e52f4
    SHL EDX,0x7                         ; 004e52f6
    MOV EDI,dword ptr [0x005fba18]      ; 004e52f9 | DAT_005fba18
    MOV EAX,EDX                         ; 004e52ff
    SAR EDX,0x1f                        ; 004e5301
    IDIV EDI                            ; 004e5304
    MOV ECX,dword ptr [0x01c6b5b4]      ; 004e5306 | DAT_01c6b5b4
    SUB ECX,dword ptr [0x01c6b5ac]      ; 004e530c | DAT_01c6b5ac
    SHL ECX,0x5                         ; 004e5312
    MOV EDX,ECX                         ; 004e5315
    LEA EBX,[EAX*0x4 + 0x0]             ; 004e5317
    SHL EDX,0x4                         ; 004e531e
    SUB EBX,EAX                         ; 004e5321
    SUB EDX,ECX                         ; 004e5323
    MOV ECX,dword ptr [0x005fba1c]      ; 004e5325 | DAT_005fba1c
    MOV EAX,EDX                         ; 004e532b
    SAR EDX,0x1f                        ; 004e532d
    IDIV ECX                            ; 004e5330
    SHL EBX,0x10                        ; 004e5332
    MOV ECX,EAX                         ; 004e5335
    MOV EDX,EBX                         ; 004e5337
    MOV EAX,EBX                         ; 004e5339
    SAR EDX,0x1f                        ; 004e533b
    IDIV ECX                            ; 004e533e
    MOV EDX,EAX                         ; 004e5340
    SAR EDX,0x1f                        ; 004e5342
    SHL EDX,0x2                         ; 004e5345
    SBB EAX,EDX                         ; 004e5348
    SAR EAX,0x2                         ; 004e534a
    MOV EBX,dword ptr [0x005fba44]      ; 004e534d | DAT_005fba44
    MOV ECX,EAX                         ; 004e5353
    MOV EAX,[0x01c6e2fc]                ; 004e5355 | DAT_01c6e2fc
    MOV EDX,ECX                         ; 004e535a
    IMUL EDX                            ; 004e535c
    IDIV EBX                            ; 004e535e
    MOV EBX,dword ptr [0x005fba44]      ; 004e5360 | DAT_005fba44
    MOV [0x01c6e2fc],EAX                ; 004e5366 | DAT_01c6e2fc
    MOV EDX,ECX                         ; 004e536b
    MOV EAX,[0x01c6e300]                ; 004e536d | DAT_01c6e300
    IMUL EDX                            ; 004e5372
    IDIV EBX                            ; 004e5374
    MOV EBX,dword ptr [0x005fba44]      ; 004e5376 | DAT_005fba44
    MOV [0x01c6e300],EAX                ; 004e537c | DAT_01c6e300
    MOV EDX,ECX                         ; 004e5381
    MOV EAX,[0x01c6e308]                ; 004e5383 | DAT_01c6e308
    IMUL EDX                            ; 004e5388
    IDIV EBX                            ; 004e538a
    MOV EBX,dword ptr [0x005fba44]      ; 004e538c | DAT_005fba44
    MOV [0x01c6e308],EAX                ; 004e5392 | DAT_01c6e308
    MOV EDX,ECX                         ; 004e5397
    MOV EAX,[0x01c6e30c]                ; 004e5399 | DAT_01c6e30c
    IMUL EDX                            ; 004e539e
    IDIV EBX                            ; 004e53a0
    MOV [0x01c6e30c],EAX                ; 004e53a2 | DAT_01c6e30c
    POP EDI                             ; 004e53a7
    MOV EBX,dword ptr [0x005fba44]      ; 004e53a8 | DAT_005fba44
    MOV EAX,[0x01c6e314]                ; 004e53ae | DAT_01c6e314
    MOV EDX,ECX                         ; 004e53b3
    IMUL EDX                            ; 004e53b5
    IDIV EBX                            ; 004e53b7
    MOV EBX,dword ptr [0x005fba44]      ; 004e53b9 | DAT_005fba44
    MOV [0x01c6e314],EAX                ; 004e53bf | DAT_01c6e314
    MOV EDX,ECX                         ; 004e53c4
    MOV EAX,[0x01c6e318]                ; 004e53c6 | DAT_01c6e318
    IMUL EDX                            ; 004e53cb
    IDIV EBX                            ; 004e53cd
    MOV [0x01c6e318],EAX                ; 004e53cf | DAT_01c6e318
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e4e10 ; 004e53d4
        ;   XREF to: 004e4e10 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e4e10()
    ADD ESP,0x8                         ; 004e53d9
    POP EBP                             ; 004e53dc
    POP ESI                             ; 004e53dd
    POP EBX                             ; 004e53de
    RET                                 ; 004e53df
    MOV dword ptr [0x01d7269c],0xaaaa   ; 004e53e0 | DAT_01d7269c
        ;   Label: LAB_004e53e0
    JMP 0x004e526c                      ; 004e53ea
        ;   XREF to: 004e526c (UNCONDITIONAL_JUMP)  ; LAB_004e526c
    CMP EAX,0x190                       ; 004e53ef
        ;   Label: LAB_004e53ef
    JZ 0x004e53e0                       ; 004e53f4
        ;   XREF to: 004e53e0 (CONDITIONAL_JUMP)  ; LAB_004e53e0
    MOV dword ptr [0x01d7269c],0x10000  ; 004e53f6 | DAT_01d7269c
        ;   Label: LAB_004e53f6
    JMP 0x004e526c                      ; 004e5400
        ;   XREF to: 004e526c (UNCONDITIONAL_JUMP)  ; LAB_004e526c

