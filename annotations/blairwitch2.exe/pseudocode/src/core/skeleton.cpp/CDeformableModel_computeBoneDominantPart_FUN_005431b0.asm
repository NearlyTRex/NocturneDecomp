; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 00544868
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e7059
;   TerminatedCString s_Out_of_memory_005e706e
;   undefined4 DAT_005fb9a0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   core_skeleton.cpp_FUN_005469a0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005431b0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0
    PUSH EDI                            ; 005431b1
    PUSH EBP                            ; 005431b2
    SUB ESP,0x6c                        ; 005431b3
    MOV EBP,dword ptr [ESP + 0x80]      ; 005431b6
    MOV EBX,0x7149f2ca                  ; 005431bd
    XOR EDX,EDX                         ; 005431c2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005431c4
    MOV dword ptr [ESP + 0x38],EDX      ; 005431c8
    MOV dword ptr [ESP + 0x30],EBX      ; 005431cc
    MOV dword ptr [ESP + 0x48],EDX      ; 005431d0
    MOV EDI,dword ptr [EAX + 0xc00]     ; 005431d4
    MOV dword ptr [ESP + 0x34],EDX      ; 005431da
    CMP EDI,0x2                         ; 005431de
    JGE 0x005431ec                      ; 005431e1
        ;   XREF to: 005431ec (CONDITIONAL_JUMP)  ; LAB_005431ec
    XOR EAX,EAX                         ; 005431e3
    ADD ESP,0x6c                        ; 005431e5
    POP EBP                             ; 005431e8
    POP EDI                             ; 005431e9
    POP EBX                             ; 005431ea
    RET                                 ; 005431eb
    PUSH 0x22b4                         ; 005431ec
        ;   Label: LAB_005431ec
    CALL crt_unknown.c_FUN_005b8be2     ; 005431f1
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 005431f6
    TEST EAX,EAX                        ; 005431f9
    JZ 0x00543206                       ; 005431fb
        ;   XREF to: 00543206 (CONDITIONAL_JUMP)  ; LAB_00543206
    PUSH EAX                            ; 005431fd
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 005431fe
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543203
    MOV dword ptr [ESP + 0x54],EAX      ; 00543206
        ;   Label: LAB_00543206
    TEST EAX,EAX                        ; 0054320a
    JNZ 0x00543230                      ; 0054320c
        ;   XREF to: 00543230 (CONDITIONAL_JUMP)  ; LAB_00543230
    MOV EAX,0x5e7059                    ; 0054320e | = "..\\core\\skeleton.cpp"
    MOV EDX,0x5ff                       ; 00543213
    PUSH 0x5e706e                       ; 00543218 | = "Out of memory"
    MOV [0x01d046a0],EAX                ; 0054321d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00543222 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00543228
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054322d
    PUSH ESI                            ; 00543230
        ;   Label: LAB_00543230
    MOV ECX,dword ptr [ESP + 0x80]      ; 00543231
    PUSH ECX                            ; 00543238
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00543239
    PUSH EBX                            ; 0054323d
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 ; 0054323e
        ;   XREF to: 005474b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 00543243
    PUSH EBX                            ; 00543246
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60 ; 00543247
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054324c
    PUSH EBX                            ; 0054324f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00543250
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543255
    PUSH 0x0                            ; 00543258
    PUSH EBX                            ; 0054325a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 0054325b
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00543260
    PUSH EBP                            ; 00543263
    PUSH EBX                            ; 00543264
    LEA ESI,[ESP + 0x18]                ; 00543265
    LEA EDI,[ESP + 0xc]                 ; 00543269
    CALL core_skeleton.cpp_FUN_005469a0 ; 0054326d
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 00543272
    LEA ESI,[ESP + 0x10]                ; 00543275
    MOV EAX,dword ptr [ESP + 0x80]      ; 00543279
    MOVSD ES:EDI,ESI                    ; 00543280
    MOVSD ES:EDI,ESI                    ; 00543281
    MOVSD ES:EDI,ESI                    ; 00543282
    XOR ECX,ECX                         ; 00543283
    MOV EBX,dword ptr [EAX + 0xc00]     ; 00543285
    MOV dword ptr [ESP + 0x44],ECX      ; 0054328b
    TEST EBX,EBX                        ; 0054328f
    JLE 0x00543470                      ; 00543291
        ;   XREF to: 00543470 (CONDITIONAL_JUMP)  ; LAB_00543470
    MOV dword ptr [ESP + 0x40],EAX      ; 00543297
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054329b
        ;   Label: LAB_0054329b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054329f
    MOV dword ptr [ESP + 0x48],EAX      ; 005432a3
    IMUL EAX,EBX,0x12                   ; 005432a7
    XOR EDI,EDI                         ; 005432aa
    MOV dword ptr [ESP + 0x64],EDI      ; 005432ac
    MOV dword ptr [ESP + 0x54],EAX      ; 005432b0
    MOV EAX,dword ptr [ESP + 0x40]      ; 005432b4
    MOV dword ptr [ESP + 0x60],EDI      ; 005432b8
    MOV dword ptr [ESP + 0x50],EDI      ; 005432bc
    MOV ESI,dword ptr [EAX + 0xc24]     ; 005432c0
    MOV dword ptr [ESP + 0x68],EDI      ; 005432c6
    TEST ESI,ESI                        ; 005432ca
    JLE 0x00543352                      ; 005432cc
        ;   XREF to: 00543352 (CONDITIONAL_JUMP)  ; LAB_00543352
    MOV EAX,dword ptr [ESP + 0x80]      ; 005432d2
        ;   Label: LAB_005432d2
    MOV ESI,dword ptr [ESP + 0x54]      ; 005432d9
    MOV EAX,dword ptr [EAX + 0x7c]      ; 005432dd
    ADD EAX,ESI                         ; 005432e0
    MOV EDI,EAX                         ; 005432e2
    ADD EAX,0x6                         ; 005432e4
    MOV dword ptr [ESP + 0x5c],EAX      ; 005432e7
    XOR EAX,EAX                         ; 005432eb
        ;   Label: LAB_005432eb
    MOV AX,word ptr [EDI]               ; 005432ed
    IMUL EAX,EAX,0x34                   ; 005432f0
    MOV ESI,dword ptr [ESP + 0x80]      ; 005432f3
    MOV ESI,dword ptr [ESI + 0x40]      ; 005432fa
    ADD ESI,EAX                         ; 005432fd
    MOV EBX,ESI                         ; 005432ff
    MOV EDX,ESI                         ; 00543301
    XOR EAX,EAX                         ; 00543303
    XOR ECX,ECX                         ; 00543305
        ;   Label: LAB_00543305
    MOV CL,byte ptr [ESI]               ; 00543307
    CMP EAX,ECX                         ; 00543309
    JGE 0x00543378                      ; 0054330b
        ;   XREF to: 00543378 (CONDITIONAL_JUMP)  ; LAB_00543378
    XOR ECX,ECX                         ; 00543311
    MOV CL,byte ptr [EBX + 0x1]         ; 00543313
    CMP ECX,EBP                         ; 00543316
    JZ 0x005433fb                       ; 00543318
        ;   XREF to: 005433fb (CONDITIONAL_JUMP)  ; LAB_005433fb
    ADD EDX,0x4                         ; 0054331e
    INC EAX                             ; 00543321
    INC EBX                             ; 00543322
    JMP 0x00543305                      ; 00543323
        ;   XREF to: 00543305 (UNCONDITIONAL_JUMP)  ; LAB_00543305
    MOV EDI,dword ptr [ESP + 0x54]      ; 00543325
        ;   Label: LAB_00543325
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00543329
    MOV EDX,dword ptr [ESP + 0x50]      ; 0054332d
    INC EAX                             ; 00543331
    INC EDX                             ; 00543332
    MOV dword ptr [ESP + 0x4c],EAX      ; 00543333
    MOV dword ptr [ESP + 0x50],EDX      ; 00543337
    MOV EAX,EDX                         ; 0054333b
    MOV EDX,dword ptr [ESP + 0x48]      ; 0054333d
    ADD EDI,0x12                        ; 00543341
    MOV ECX,dword ptr [EDX + 0xc24]     ; 00543344
    MOV dword ptr [ESP + 0x54],EDI      ; 0054334a
    CMP EAX,ECX                         ; 0054334e
    JL 0x005432d2                       ; 00543350
        ;   XREF to: 005432d2 (CONDITIONAL_JUMP)  ; LAB_005432d2
    FLD float ptr [ESP + 0x68]          ; 00543352
        ;   Label: LAB_00543352
    FCOMP float ptr [ESP + 0x3c]        ; 00543356
    FNSTSW AX                           ; 0054335a
    SAHF                                ; 0054335c
    JBE 0x00543410                      ; 0054335d
        ;   XREF to: 00543410 (CONDITIONAL_JUMP)  ; LAB_00543410
    MOV EAX,dword ptr [ESP + 0x68]      ; 00543363
    MOV dword ptr [ESP + 0x3c],EAX      ; 00543367
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054336b
    MOV dword ptr [ESP + 0x38],EAX      ; 0054336f
    JMP 0x00543447                      ; 00543373
        ;   XREF to: 00543447 (UNCONDITIONAL_JUMP)  ; LAB_00543447
    XOR EAX,EAX                         ; 00543378
        ;   Label: LAB_00543378
    MOV AX,word ptr [EDI]               ; 0054337a
    IMUL EAX,EAX,0xc                    ; 0054337d
    MOV EDX,dword ptr [ESP + 0x58]      ; 00543380
    MOV EDX,dword ptr [EDX + 0x2234]    ; 00543384
    LEA EBX,[ESP + 0x1c]                ; 0054338a
    ADD EAX,EDX                         ; 0054338e
    FILD dword ptr [EAX]                ; 00543390
    FMUL float ptr [0x005fb9a0]         ; 00543392 | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00543398
    FILD dword ptr [EAX + 0x4]          ; 0054339a
    FMUL float ptr [0x005fb9a0]         ; 0054339d | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 005433a3
    FILD dword ptr [EAX + 0x8]          ; 005433a6
    FMUL float ptr [0x005fb9a0]         ; 005433a9 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 005433af
    FLD float ptr [ESP + 0x1c]          ; 005433b2
    FSUB float ptr [ESP + 0x4]          ; 005433b6
    FMUL ST0                            ; 005433ba
    FLD float ptr [ESP + 0x20]          ; 005433bc
    FSUB float ptr [ESP + 0x8]          ; 005433c0
    FMUL ST0                            ; 005433c4
    FLD float ptr [ESP + 0x24]          ; 005433c6
    FXCH                                ; 005433ca
    FADDP ST2,ST0                       ; 005433cc
    FSUB float ptr [ESP + 0xc]          ; 005433ce
    FMUL ST0                            ; 005433d2
    ADD EDI,0x2                         ; 005433d4
    MOV EAX,dword ptr [ESP + 0x60]      ; 005433d7
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005433db
    FADDP                               ; 005433df
    INC EAX                             ; 005433e1
    FADD float ptr [ESP + 0x64]         ; 005433e2
    MOV dword ptr [ESP + 0x60],EAX      ; 005433e6
    FSTP float ptr [ESP + 0x64]         ; 005433ea
    CMP EDI,EDX                         ; 005433ee
    JZ 0x00543325                       ; 005433f0
        ;   XREF to: 00543325 (CONDITIONAL_JUMP)  ; LAB_00543325
    JMP 0x005432eb                      ; 005433f6
        ;   XREF to: 005432eb (UNCONDITIONAL_JUMP)  ; LAB_005432eb
    FLD float ptr [ESP + 0x68]          ; 005433fb
        ;   Label: LAB_005433fb
    FADD float ptr [EDX + 0x4]          ; 005433ff
    FSTP float ptr [ESP + 0x68]         ; 00543402
    ADD EDX,0x4                         ; 00543406
    INC EAX                             ; 00543409
    INC EBX                             ; 0054340a
    JMP 0x00543305                      ; 0054340b
        ;   XREF to: 00543305 (UNCONDITIONAL_JUMP)  ; LAB_00543305
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 00543410
        ;   Label: LAB_00543410
    JNZ 0x00543447                      ; 00543418
        ;   XREF to: 00543447 (CONDITIONAL_JUMP)  ; LAB_00543447
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054341a
    MOV dword ptr [ESP + 0x6c],EAX      ; 0054341e
    FILD dword ptr [ESP + 0x6c]         ; 00543422
    FDIVR float ptr [ESP + 0x64]        ; 00543426
    FST float ptr [ESP + 0x64]          ; 0054342a
    FCOMP float ptr [ESP + 0x34]        ; 0054342e
    FNSTSW AX                           ; 00543432
    SAHF                                ; 00543434
    JNC 0x00543447                      ; 00543435
        ;   XREF to: 00543447 (CONDITIONAL_JUMP)  ; LAB_00543447
    MOV EAX,dword ptr [ESP + 0x64]      ; 00543437
    MOV dword ptr [ESP + 0x34],EAX      ; 0054343b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054343f
    MOV dword ptr [ESP + 0x38],EAX      ; 00543443
    MOV ESI,dword ptr [ESP + 0x40]      ; 00543447
        ;   Label: LAB_00543447
    MOV EDI,dword ptr [ESP + 0x44]      ; 0054344b
    MOV EDX,dword ptr [ESP + 0x80]      ; 0054344f
    ADD ESI,0x60                        ; 00543456
    INC EDI                             ; 00543459
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0054345a
    MOV dword ptr [ESP + 0x40],ESI      ; 00543460
    MOV dword ptr [ESP + 0x44],EDI      ; 00543464
    CMP EDI,ECX                         ; 00543468
    JL 0x0054329b                       ; 0054346a
        ;   XREF to: 0054329b (CONDITIONAL_JUMP)  ; LAB_0054329b
    MOV EBX,dword ptr [ESP + 0x58]      ; 00543470
        ;   Label: LAB_00543470
    TEST EBX,EBX                        ; 00543474
    JZ 0x00543483                       ; 00543476
        ;   XREF to: 00543483 (CONDITIONAL_JUMP)  ; LAB_00543483
    PUSH 0x2                            ; 00543478
    MOV EAX,dword ptr [EBX + 0x50]      ; 0054347a
    PUSH EBX                            ; 0054347d
    CALL dword ptr [EAX]                ; 0054347e
    ADD ESP,0x8                         ; 00543480
    MOV EAX,dword ptr [ESP + 0x38]      ; 00543483
        ;   Label: LAB_00543483
    POP ESI                             ; 00543487
    ADD ESP,0x6c                        ; 00543488
    POP EBP                             ; 0054348b
    POP EDI                             ; 0054348c
    POP EBX                             ; 0054348d
    RET                                 ; 0054348e

