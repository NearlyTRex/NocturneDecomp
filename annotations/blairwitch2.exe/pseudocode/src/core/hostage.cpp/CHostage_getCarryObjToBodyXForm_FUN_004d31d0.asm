; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   TerminatedCString s_CShotgun_005da4e0
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d31d0
        ;   Label: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0
    PUSH EDI                            ; 004d31d1
    PUSH EBP                            ; 004d31d2
    SUB ESP,0x2ac                       ; 004d31d3
    MOV EBX,dword ptr [ESP + 0x2bc]     ; 004d31d9
    MOV EBP,ESI                         ; 004d31e0
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004d31e2
    SHL EAX,0x3                         ; 004d31e9
    MOV EDX,EAX                         ; 004d31ec
    SHL EAX,0x4                         ; 004d31ee
    SUB EAX,EDX                         ; 004d31f1
    LEA ESI,[EBX + EAX*0x1]             ; 004d31f3
    MOV EDX,dword ptr [EBX + 0x246f8]   ; 004d31f6
    MOV EAX,dword ptr [ESI + 0x2620]    ; 004d31fc
    CMP EDX,0x1                         ; 004d3202
    JZ 0x004d336a                       ; 004d3205
        ;   XREF to: 004d336a (CONDITIONAL_JUMP)  ; LAB_004d336a
    MOV ECX,dword ptr [EBX + 0x246f8]   ; 004d320b
        ;   Label: LAB_004d320b
    CMP ECX,0x3                         ; 004d3211
    JNZ 0x004d3431                      ; 004d3214
        ;   XREF to: 004d3431 (CONDITIONAL_JUMP)  ; LAB_004d3431
    MOV EAX,0xbe4d1e54                  ; 004d321a
    MOV EDX,0x3d04bb36                  ; 004d321f
    MOV EDI,0x3e882d5a                  ; 004d3224
    MOV dword ptr [ESP + 0x280],EAX     ; 004d3229
    MOV dword ptr [ESP + 0x284],EDX     ; 004d3230
    LEA EAX,[ESP + 0x27c]               ; 004d3237
    LEA EDX,[ESP + 0x1f8]               ; 004d323e
    MOV dword ptr [ESP + 0x27c],EDI     ; 004d3245
    CMP EDX,EAX                         ; 004d324c
    JZ 0x004d326f                       ; 004d324e
        ;   XREF to: 004d326f (CONDITIONAL_JUMP)  ; LAB_004d326f
    MOV ESI,0xbe4d1e54                  ; 004d3250
    MOV dword ptr [ESP + 0x1f8],EDI     ; 004d3255
    MOV EDI,0x3d04bb36                  ; 004d325c
    MOV dword ptr [ESP + 0x1fc],ESI     ; 004d3261
    MOV dword ptr [ESP + 0x200],EDI     ; 004d3268
    MOV EAX,0xbef6147b                  ; 004d326f
        ;   Label: LAB_004d326f
    MOV EDX,0x3e0c27a6                  ; 004d3274
    LEA EDI,[ESP + 0x258]               ; 004d3279
    LEA ESI,[ESP + 0x1ec]               ; 004d3280
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004d3287
    MOV dword ptr [ESP + 0x1f4],EDX     ; 004d328e
    MOV dword ptr [ESP + 0x1f0],EDX     ; 004d3295
    LEA EAX,[ESP + 0x258]               ; 004d329c
    LEA EDX,[ESP + 0x204]               ; 004d32a3
    MOVSD ES:EDI,ESI                    ; 004d32aa
    MOVSD ES:EDI,ESI                    ; 004d32ab
    MOVSD ES:EDI,ESI                    ; 004d32ac
    CMP EDX,EAX                         ; 004d32ad
    JZ 0x004d32db                       ; 004d32af
        ;   XREF to: 004d32db (CONDITIONAL_JUMP)  ; LAB_004d32db
    MOV EAX,dword ptr [ESP + 0x258]     ; 004d32b1
    MOV dword ptr [ESP + 0x204],EAX     ; 004d32b8
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004d32bf
    MOV dword ptr [ESP + 0x208],EAX     ; 004d32c6
    MOV EAX,dword ptr [ESP + 0x260]     ; 004d32cd
    MOV dword ptr [ESP + 0x20c],EAX     ; 004d32d4
    LEA EAX,[ESP + 0x204]               ; 004d32db
        ;   Label: LAB_004d32db
    PUSH EAX                            ; 004d32e2
    LEA EAX,[ESP + 0x1fc]               ; 004d32e3
    PUSH EAX                            ; 004d32ea
    LEA EAX,[ESP + 0x8]                 ; 004d32eb
    PUSH EAX                            ; 004d32ef
    CALL core_xform.cpp_FUN_00591c10    ; 004d32f0
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004d32f5
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004d32f8
    SHL EAX,0x3                         ; 004d32ff
    MOV EDX,EAX                         ; 004d3302
    SHL EAX,0x4                         ; 004d3304
    SUB EAX,EDX                         ; 004d3307
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x2618] ; 004d3309
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d3310
    SUB EAX,EDX                         ; 004d3317
    ADD EBX,0x1134                      ; 004d3319
    SHL EAX,0x4                         ; 004d331f
    ADD EBX,EAX                         ; 004d3322
    PUSH EBX                            ; 004d3324
    LEA EAX,[ESP + 0x4]                 ; 004d3325
    PUSH EAX                            ; 004d3329
    LEA ESI,[ESP + 0x128]               ; 004d332a
    LEA EDI,[ESP + 0x1b8]               ; 004d3331
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d3338
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004d333d
    LEA ESI,[ESP + 0x128]               ; 004d3342
    ADD ESP,0x8                         ; 004d3349
        ;   Label: LAB_004d3349
    MOVSD.REP ES:EDI,ESI                ; 004d334c
    MOV ECX,0xc                         ; 004d334e
    LEA ESI,[ESP + 0x1b0]               ; 004d3353
    MOV EDI,EBP                         ; 004d335a
    MOVSD.REP ES:EDI,ESI                ; 004d335c
    MOV EAX,EBP                         ; 004d335e
    ADD ESP,0x2ac                       ; 004d3360
    POP EBP                             ; 004d3366
    POP EDI                             ; 004d3367
    POP EBX                             ; 004d3368
    RET                                 ; 004d3369
    PUSH 0x5da4e0                       ; 004d336a | = "CShotgun"
        ;   Label: LAB_004d336a
    PUSH EAX                            ; 004d336f
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004d3370
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d3375
    TEST EAX,EAX                        ; 004d3378
    JZ 0x004d320b                       ; 004d337a
        ;   XREF to: 004d320b (CONDITIONAL_JUMP)  ; LAB_004d320b
    MOV EDI,0x3e89ba5e                  ; 004d3380
    MOV EAX,0xbc449ba6                  ; 004d3385
    MOV EDX,0x3dbc6a7f                  ; 004d338a
    MOV dword ptr [ESP + 0x274],EAX     ; 004d338f
    MOV EAX,0x3ecf5c29                  ; 004d3396
    MOV ECX,0xbe92f1aa                  ; 004d339b
    MOV dword ptr [ESP + 0x214],EAX     ; 004d33a0
    LEA EAX,[ESP + 0x210]               ; 004d33a7
    MOV dword ptr [ESP + 0x270],EDI     ; 004d33ae
    PUSH EAX                            ; 004d33b5
    LEA EAX,[ESP + 0x274]               ; 004d33b6
    MOV dword ptr [ESP + 0x27c],EDX     ; 004d33bd
    PUSH EAX                            ; 004d33c4
    LEA EAX,[ESP + 0x98]                ; 004d33c5
    MOV EDI,0x3f9ac083                  ; 004d33cc
    PUSH EAX                            ; 004d33d1
    MOV dword ptr [ESP + 0x21c],ECX     ; 004d33d2
    MOV dword ptr [ESP + 0x224],EDI     ; 004d33d9
    CALL core_xform.cpp_FUN_00591c10    ; 004d33e0
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EDX,dword ptr [ESI + 0x2618]    ; 004d33e5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d33eb
    SUB EAX,EDX                         ; 004d33f2
    MOV EDX,EAX                         ; 004d33f4
    SHL EDX,0x4                         ; 004d33f6
    LEA EAX,[EBX + 0x1134]              ; 004d33f9
    ADD ESP,0xc                         ; 004d33ff
    ADD EAX,EDX                         ; 004d3402
    PUSH EAX                            ; 004d3404
    LEA EAX,[ESP + 0x94]                ; 004d3405
    PUSH EAX                            ; 004d340c
    LEA ESI,[ESP + 0x188]               ; 004d340d
    LEA EDI,[ESP + 0x1b8]               ; 004d3414
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d341b
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004d3420
    LEA ESI,[ESP + 0x188]               ; 004d3425
    JMP 0x004d3349                      ; 004d342c
        ;   XREF to: 004d3349 (UNCONDITIONAL_JUMP)  ; LAB_004d3349
    CMP ECX,0x5                         ; 004d3431
        ;   Label: LAB_004d3431
    JNZ 0x004d3574                      ; 004d3434
        ;   XREF to: 004d3574 (CONDITIONAL_JUMP)  ; LAB_004d3574
    MOV EAX,0x3e882d5a                  ; 004d343a
    MOV EDX,0xbe4d1e54                  ; 004d343f
    MOV ECX,0x3d04bb36                  ; 004d3444
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004d3449
    MOV dword ptr [ESP + 0x1e4],EDX     ; 004d3450
    LEA EAX,[ESP + 0x1e0]               ; 004d3457
    LEA EDX,[ESP + 0x264]               ; 004d345e
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004d3465
    CMP EDX,EAX                         ; 004d346c
    JZ 0x004d348f                       ; 004d346e
        ;   XREF to: 004d348f (CONDITIONAL_JUMP)  ; LAB_004d348f
    MOV EDI,0xbe4d1e54                  ; 004d3470
    MOV ESI,0x3e882d5a                  ; 004d3475
    MOV dword ptr [ESP + 0x26c],ECX     ; 004d347a
    MOV dword ptr [ESP + 0x268],EDI     ; 004d3481
    MOV dword ptr [ESP + 0x264],ESI     ; 004d3488
    MOV EDX,0xbef6147b                  ; 004d348f
        ;   Label: LAB_004d348f
    MOV ECX,0x3e0c27a6                  ; 004d3494
    LEA EDI,[ESP + 0x234]               ; 004d3499
    LEA ESI,[ESP + 0x240]               ; 004d34a0
    LEA EAX,[ESP + 0x234]               ; 004d34a7
    MOV dword ptr [ESP + 0x240],EDX     ; 004d34ae
    MOV dword ptr [ESP + 0x248],ECX     ; 004d34b5
    MOV dword ptr [ESP + 0x244],ECX     ; 004d34bc
    LEA EDX,[ESP + 0x228]               ; 004d34c3
    MOVSD ES:EDI,ESI                    ; 004d34ca
    MOVSD ES:EDI,ESI                    ; 004d34cb
    MOVSD ES:EDI,ESI                    ; 004d34cc
    CMP EDX,EAX                         ; 004d34cd
    JZ 0x004d34fb                       ; 004d34cf
        ;   XREF to: 004d34fb (CONDITIONAL_JUMP)  ; LAB_004d34fb
    MOV EAX,dword ptr [ESP + 0x234]     ; 004d34d1
    MOV dword ptr [ESP + 0x228],EAX     ; 004d34d8
    MOV EAX,dword ptr [ESP + 0x238]     ; 004d34df
    MOV dword ptr [ESP + 0x22c],EAX     ; 004d34e6
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004d34ed
    MOV dword ptr [ESP + 0x230],EAX     ; 004d34f4
    LEA EAX,[ESP + 0x228]               ; 004d34fb
        ;   Label: LAB_004d34fb
    PUSH EAX                            ; 004d3502
    LEA EAX,[ESP + 0x268]               ; 004d3503
    PUSH EAX                            ; 004d350a
    LEA EAX,[ESP + 0x158]               ; 004d350b
    PUSH EAX                            ; 004d3512
    CALL core_xform.cpp_FUN_00591c10    ; 004d3513
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004d3518
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004d351b
    SHL EAX,0x3                         ; 004d3522
    MOV EDX,EAX                         ; 004d3525
    SHL EAX,0x4                         ; 004d3527
    SUB EAX,EDX                         ; 004d352a
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x2618] ; 004d352c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d3533
    SUB EAX,EDX                         ; 004d353a
    ADD EBX,0x1134                      ; 004d353c
    SHL EAX,0x4                         ; 004d3542
    ADD EBX,EAX                         ; 004d3545
    PUSH EBX                            ; 004d3547
    LEA EAX,[ESP + 0x154]               ; 004d3548
    PUSH EAX                            ; 004d354f
    LEA ESI,[ESP + 0xf8]                ; 004d3550
    LEA EDI,[ESP + 0x1b8]               ; 004d3557
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d355e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004d3563
    LEA ESI,[ESP + 0xf8]                ; 004d3568
    JMP 0x004d3349                      ; 004d356f
        ;   XREF to: 004d3349 (UNCONDITIONAL_JUMP)  ; LAB_004d3349
    JNZ 0x004d36ac                      ; 004d3574
        ;   XREF to: 004d36ac (CONDITIONAL_JUMP)  ; LAB_004d36ac
        ;   Label: LAB_004d3574
    MOV EDX,0x3e882d5a                  ; 004d357a
    MOV ECX,0xbe4d1e54                  ; 004d357f
    MOV ESI,0x3d04bb36                  ; 004d3584
    LEA EAX,[ESP + 0x2a0]               ; 004d3589
    MOV dword ptr [ESP + 0x2a0],EDX     ; 004d3590
    MOV dword ptr [ESP + 0x2a4],ECX     ; 004d3597
    LEA EDX,[ESP + 0x294]               ; 004d359e
    MOV dword ptr [ESP + 0x2a8],ESI     ; 004d35a5
    CMP EDX,EAX                         ; 004d35ac
    JNZ 0x004d368d                      ; 004d35ae
        ;   XREF to: 004d368d (CONDITIONAL_JUMP)  ; LAB_004d368d
    MOV ESI,0x3e0c27a6                  ; 004d35b4
        ;   Label: LAB_004d35b4
    MOV ECX,0xbef6147b                  ; 004d35b9
    LEA EDI,[ESP + 0x288]               ; 004d35be
    LEA EAX,[ESP + 0x288]               ; 004d35c5
    MOV dword ptr [ESP + 0x224],ESI     ; 004d35cc
    MOV dword ptr [ESP + 0x220],ESI     ; 004d35d3
    LEA ESI,[ESP + 0x21c]               ; 004d35da
    MOV dword ptr [ESP + 0x21c],ECX     ; 004d35e1
    LEA EDX,[ESP + 0x24c]               ; 004d35e8
    MOVSD ES:EDI,ESI                    ; 004d35ef
    MOVSD ES:EDI,ESI                    ; 004d35f0
    MOVSD ES:EDI,ESI                    ; 004d35f1
    CMP EDX,EAX                         ; 004d35f2
    JZ 0x004d3620                       ; 004d35f4
        ;   XREF to: 004d3620 (CONDITIONAL_JUMP)  ; LAB_004d3620
    MOV EAX,dword ptr [ESP + 0x288]     ; 004d35f6
    MOV dword ptr [ESP + 0x24c],EAX     ; 004d35fd
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004d3604
    MOV dword ptr [ESP + 0x250],EAX     ; 004d360b
    MOV EAX,dword ptr [ESP + 0x290]     ; 004d3612
    MOV dword ptr [ESP + 0x254],EAX     ; 004d3619
    LEA EAX,[ESP + 0x24c]               ; 004d3620
        ;   Label: LAB_004d3620
    PUSH EAX                            ; 004d3627
    LEA EAX,[ESP + 0x298]               ; 004d3628
    PUSH EAX                            ; 004d362f
    LEA EAX,[ESP + 0x38]                ; 004d3630
    PUSH EAX                            ; 004d3634
    CALL core_xform.cpp_FUN_00591c10    ; 004d3635
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004d363a
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004d363d
    SHL EAX,0x3                         ; 004d3644
    MOV EDX,EAX                         ; 004d3647
    SHL EAX,0x4                         ; 004d3649
    SUB EAX,EDX                         ; 004d364c
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x2618] ; 004d364e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d3655
    SUB EAX,EDX                         ; 004d365c
    ADD EBX,0x1134                      ; 004d365e
    SHL EAX,0x4                         ; 004d3664
    ADD EBX,EAX                         ; 004d3667
    PUSH EBX                            ; 004d3669
    LEA EAX,[ESP + 0x34]                ; 004d366a
    PUSH EAX                            ; 004d366e
    LEA ESI,[ESP + 0x68]                ; 004d366f
    LEA EDI,[ESP + 0x1b8]               ; 004d3673
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d367a
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004d367f
    LEA ESI,[ESP + 0x68]                ; 004d3684
    JMP 0x004d3349                      ; 004d3688
        ;   XREF to: 004d3349 (UNCONDITIONAL_JUMP)  ; LAB_004d3349
    MOV EDI,0x3e882d5a                  ; 004d368d
        ;   Label: LAB_004d368d
    MOV dword ptr [ESP + 0x298],ECX     ; 004d3692
    MOV dword ptr [ESP + 0x29c],ESI     ; 004d3699
    MOV dword ptr [ESP + 0x294],EDI     ; 004d36a0
    JMP 0x004d35b4                      ; 004d36a7
        ;   XREF to: 004d35b4 (UNCONDITIONAL_JUMP)  ; LAB_004d35b4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004d36ac
        ;   Label: LAB_004d36ac
    PUSH EAX                            ; 004d36b3
    PUSH EBX                            ; 004d36b4
    LEA ESI,[ESP + 0xc8]                ; 004d36b5
    LEA EDI,[ESP + 0x1b8]               ; 004d36bc
    CALL core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120 ; 004d36c3
        ;   XREF to: 00429120 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120(CCharacter * this_ptr, int hand_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004d36c8
    LEA ESI,[ESP + 0xc8]                ; 004d36cd
    JMP 0x004d3349                      ; 004d36d4
        ;   XREF to: 004d3349 (UNCONDITIONAL_JUMP)  ; LAB_004d3349

