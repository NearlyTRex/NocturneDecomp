; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0 at 00519af0
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591aee
;   TerminatedCString s_Bug_00591b03
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b280
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
    PUSH ESI                            ; 0051b281
    PUSH EDI                            ; 0051b282
    PUSH EBP                            ; 0051b283
    SUB ESP,0x24                        ; 0051b284
    MOV EBP,dword ptr [ESP + 0x38]      ; 0051b287
    PUSH EBP                            ; 0051b28b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051b28c
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130()
    ADD ESP,0x4                         ; 0051b291
    MOV dword ptr [ESP + 0x14],EAX      ; 0051b294
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051b298
    XOR ESI,ESI                         ; 0051b29e
    MOV dword ptr [ESP + 0x20],EAX      ; 0051b2a0
    TEST EAX,EAX                        ; 0051b2a4
    JLE 0x0051b2e0                      ; 0051b2a6
        ;   XREF to: 0051b2e0 (CONDITIONAL_JUMP)  ; LAB_0051b2e0
    LEA EDI,[EBP + 0x1c0c]              ; 0051b2a8
    MOV EBX,EBP                         ; 0051b2ae
    PUSH EDI                            ; 0051b2b0
        ;   Label: LAB_0051b2b0
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0 ; 0051b2b1
        ;   XREF to: 0041dbc0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0()
    ADD EBX,0x4                         ; 0051b2b6
    INC ESI                             ; 0051b2b9
    ADD ESP,0x4                         ; 0051b2ba
    ADD EDI,0x18                        ; 0051b2bd
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051b2c0
    MOV dword ptr [EBX + 0x2568],0x0    ; 0051b2c4
    CMP ESI,ECX                         ; 0051b2ce
    JL 0x0051b2b0                       ; 0051b2d0
        ;   XREF to: 0051b2b0 (CONDITIONAL_JUMP)  ; LAB_0051b2b0
    LEA EAX,[EAX]                       ; 0051b2d2
    LEA EDX,[EDX]                       ; 0051b2d8
    MOV EAX,EAX                         ; 0051b2de
    XOR EBX,EBX                         ; 0051b2e0
        ;   Label: LAB_0051b2e0
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0051b2e2
    MOV dword ptr [ESP + 0x8],EBX       ; 0051b2e5
    TEST ESI,ESI                        ; 0051b2e9
    JLE 0x0051b33a                      ; 0051b2eb
        ;   XREF to: 0051b33a (CONDITIONAL_JUMP)  ; LAB_0051b33a
    LEA EAX,[EBP + 0x1c0c]              ; 0051b2ed
    MOV dword ptr [ESP + 0x4],EBX       ; 0051b2f3
    MOV dword ptr [ESP + 0x10],EAX      ; 0051b2f7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051b2fb
        ;   Label: LAB_0051b2fb
    MOV EAX,dword ptr [EBP + 0x40]      ; 0051b2ff
    ADD EDX,EAX                         ; 0051b302
    MOV dword ptr [ESP + 0x18],EDX      ; 0051b304
    LEA ESI,[EDX + 0x10]                ; 0051b308
    XOR EDI,EDI                         ; 0051b30b
    MOV EBX,EDX                         ; 0051b30d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051b30f
        ;   Label: LAB_0051b30f
    XOR EAX,EAX                         ; 0051b313
    MOV AL,byte ptr [EDX]               ; 0051b315
    CMP EDI,EAX                         ; 0051b317
    JL 0x0051b38d                       ; 0051b319
        ;   XREF to: 0051b38d (CONDITIONAL_JUMP)  ; LAB_0051b38d
    MOV EDI,dword ptr [ESP + 0x4]       ; 0051b31f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051b323
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0051b327
    ADD EDI,0x34                        ; 0051b32a
    INC EAX                             ; 0051b32d
    MOV dword ptr [ESP + 0x4],EDI       ; 0051b32e
    MOV dword ptr [ESP + 0x8],EAX       ; 0051b332
    CMP EAX,EDX                         ; 0051b336
    JL 0x0051b2fb                       ; 0051b338
        ;   XREF to: 0051b2fb (CONDITIONAL_JUMP)  ; LAB_0051b2fb
    XOR ECX,ECX                         ; 0051b33a
        ;   Label: LAB_0051b33a
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051b33c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0051b340
    TEST EBX,EBX                        ; 0051b344
    JLE 0x0051b385                      ; 0051b346
        ;   XREF to: 0051b385 (CONDITIONAL_JUMP)  ; LAB_0051b385
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051b348
    MOV dword ptr [ESP + 0xc],EBP       ; 0051b34c
    MOV dword ptr [ESP],EAX             ; 0051b350
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b353
        ;   Label: LAB_0051b353
    CMP dword ptr [EAX + 0x256c],0x1    ; 0051b357
    JZ 0x0051b3be                       ; 0051b35e
        ;   XREF to: 0051b3be (CONDITIONAL_JUMP)  ; LAB_0051b3be
    MOV ECX,dword ptr [ESP]             ; 0051b360
        ;   Label: LAB_0051b360
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b363
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051b367
    MOV EDI,dword ptr [ESP + 0x20]      ; 0051b36b
    ADD ECX,0x24                        ; 0051b36f
    ADD EBX,0x4                         ; 0051b372
    INC ESI                             ; 0051b375
    MOV dword ptr [ESP],ECX             ; 0051b376
    MOV dword ptr [ESP + 0xc],EBX       ; 0051b379
    MOV dword ptr [ESP + 0x1c],ESI      ; 0051b37d
    CMP ESI,EDI                         ; 0051b381
    JL 0x0051b353                       ; 0051b383
        ;   XREF to: 0051b353 (CONDITIONAL_JUMP)  ; LAB_0051b353
    ADD ESP,0x24                        ; 0051b385
        ;   Label: LAB_0051b385
    POP EBP                             ; 0051b388
    POP EDI                             ; 0051b389
    POP ESI                             ; 0051b38a
    POP EBX                             ; 0051b38b
    RET                                 ; 0051b38c
    XOR EAX,EAX                         ; 0051b38d
        ;   Label: LAB_0051b38d
    MOV AL,byte ptr [EBX + 0x1]         ; 0051b38f
    IMUL EAX,EAX,0x18                   ; 0051b392
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051b395
    PUSH ESI                            ; 0051b399
    ADD EAX,EDX                         ; 0051b39a
    PUSH EAX                            ; 0051b39c
    INC EBX                             ; 0051b39d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0051b39e
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    XOR EAX,EAX                         ; 0051b3a3
    INC EDI                             ; 0051b3a5
    MOV AL,byte ptr [EBX]               ; 0051b3a6
    ADD ESI,0xc                         ; 0051b3a8
    ADD ESP,0x8                         ; 0051b3ab
    MOV dword ptr [EBP + EAX*0x4 + 0x256c],0x1 ; 0051b3ae
    JMP 0x0051b30f                      ; 0051b3b9
        ;   XREF to: 0051b30f (UNCONDITIONAL_JUMP)  ; LAB_0051b30f
    MOV EAX,dword ptr [ESP]             ; 0051b3be
        ;   Label: LAB_0051b3be
    CMP dword ptr [EAX + 0x2857c],0x0   ; 0051b3c1
    JL 0x0051b421                       ; 0051b3c8
        ;   XREF to: 0051b421 (CONDITIONAL_JUMP)  ; LAB_0051b421
    MOV ESI,dword ptr [ESP + 0x20]      ; 0051b3ca
    XOR EBX,EBX                         ; 0051b3ce
    TEST ESI,ESI                        ; 0051b3d0
    JLE 0x0051b3ef                      ; 0051b3d2
        ;   XREF to: 0051b3ef (CONDITIONAL_JUMP)  ; LAB_0051b3ef
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051b3d4
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051b3d8
    MOV EDI,EBP                         ; 0051b3dc
    CMP EDX,dword ptr [ESI + 0x2857c]   ; 0051b3de
        ;   Label: LAB_0051b3de
    JNZ 0x0051b434                      ; 0051b3e4
        ;   XREF to: 0051b434 (CONDITIONAL_JUMP)  ; LAB_0051b434
    CMP dword ptr [EDI + 0x256c],0x0    ; 0051b3e6
    JZ 0x0051b434                       ; 0051b3ed
        ;   XREF to: 0051b434 (CONDITIONAL_JUMP)  ; LAB_0051b434
    CMP EBX,dword ptr [ESP + 0x20]      ; 0051b3ef
        ;   Label: LAB_0051b3ef
    JGE 0x0051b421                      ; 0051b3f3
        ;   XREF to: 0051b421 (CONDITIONAL_JUMP)  ; LAB_0051b421
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051b3f5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051b3f9
    XOR ESI,ESI                         ; 0051b3fd
    IMUL EBX,EBX,0x24                   ; 0051b3ff
        ;   Label: LAB_0051b3ff
    ADD EBX,EDI                         ; 0051b402
    MOV EBX,dword ptr [EBX + 0x2857c]   ; 0051b404
    TEST EBX,EBX                        ; 0051b40a
    JL 0x0051b44d                       ; 0051b40c
        ;   XREF to: 0051b44d (CONDITIONAL_JUMP)  ; LAB_0051b44d
    CMP dword ptr [EBP + EBX*0x4 + 0x256c],0x2 ; 0051b40e
        ;   Label: LAB_0051b40e
    JNZ 0x0051b445                      ; 0051b416
        ;   XREF to: 0051b445 (CONDITIONAL_JUMP)  ; LAB_0051b445
    CMP ESI,0x2                         ; 0051b418
        ;   Label: LAB_0051b418
    JL 0x0051b360                       ; 0051b41b
        ;   XREF to: 0051b360 (CONDITIONAL_JUMP)  ; LAB_0051b360
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b421
        ;   Label: LAB_0051b421
    MOV dword ptr [EAX + 0x256c],0x2    ; 0051b425
    JMP 0x0051b360                      ; 0051b42f
        ;   XREF to: 0051b360 (UNCONDITIONAL_JUMP)  ; LAB_0051b360
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051b434
        ;   Label: LAB_0051b434
    ADD ESI,0x24                        ; 0051b438
    INC EBX                             ; 0051b43b
    ADD EDI,0x4                         ; 0051b43c
    CMP EBX,EAX                         ; 0051b43f
    JL 0x0051b3de                       ; 0051b441
        ;   XREF to: 0051b3de (CONDITIONAL_JUMP)  ; LAB_0051b3de
    JMP 0x0051b3ef                      ; 0051b443
        ;   XREF to: 0051b3ef (UNCONDITIONAL_JUMP)  ; LAB_0051b3ef
    INC ESI                             ; 0051b445
        ;   Label: LAB_0051b445
    CMP ESI,0x2                         ; 0051b446
    JL 0x0051b3ff                       ; 0051b449
        ;   XREF to: 0051b3ff (CONDITIONAL_JUMP)  ; LAB_0051b3ff
    JMP 0x0051b418                      ; 0051b44b
        ;   XREF to: 0051b418 (UNCONDITIONAL_JUMP)  ; LAB_0051b418
    MOV EAX,0x591aee                    ; 0051b44d | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051b44d
    MOV EDX,0x86b                       ; 0051b452
    PUSH 0x591b03                       ; 0051b457 | = "Bug!"
    MOV [0x01cc4800],EAX                ; 0051b45c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0051b461 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051b467
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051b46c
    JMP 0x0051b40e                      ; 0051b46f
        ;   XREF to: 0051b40e (UNCONDITIONAL_JUMP)  ; LAB_0051b40e

