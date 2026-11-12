; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 at 00433e9e
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 0043012c
;   core_cloth.cpp_FUN_0043eea0 at 0043f2e8
;   core_doc.cpp_FUN_00469550 at 0046a2a9
;   core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0 at 005104bf
;   core_mimic.cpp_CMimic_setup_FUN_0050f290 at 0050f4f1
;   core_passngr.cpp_CPassenger_setup_FUN_00532930 at 0053296e
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 at 00567592
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 at 0056760e
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 at 005658d0
;   ... and 5 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005b7410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569180
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
    PUSH ESI                            ; 00569181
    PUSH EDI                            ; 00569182
    PUSH EBP                            ; 00569183
    SUB ESP,0x38                        ; 00569184
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00569187
    PUSH EDX                            ; 0056918b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056918c
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569191
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 00569194
    XOR ECX,ECX                         ; 0056919a
    MOV dword ptr [ESP + 0x18],EAX      ; 0056919c
    MOV dword ptr [ESP + 0x28],ECX      ; 005691a0
    TEST EBX,EBX                        ; 005691a4
    JLE 0x005692b8                      ; 005691a6
        ;   XREF to: 005692b8 (CONDITIONAL_JUMP)  ; LAB_005692b8
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005691ac
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005691b0
    MOV dword ptr [ESP + 0x2c],ECX      ; 005691b4
    MOV dword ptr [ESP + 0x20],EAX      ; 005691b8
    ADD EBX,0xe80                       ; 005691bc
    ADD ESI,0x6b0                       ; 005691c2
    MOV dword ptr [ESP + 0x1c],EBX      ; 005691c8
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005691cc
    MOV dword ptr [ESP + 0x34],ESI      ; 005691d0
    ADD EBX,0x58                        ; 005691d4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005691d7
    MOV dword ptr [ESP + 0x30],EBX      ; 005691db
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005691df
    MOV dword ptr [ESP + 0x24],EBP      ; 005691e3
    MOV EBP,EBX                         ; 005691e7
    IMUL ESI,dword ptr [ESP + 0x28],0x30 ; 005691e9
        ;   Label: LAB_005691e9
    MOV ECX,dword ptr [ESP + 0x34]      ; 005691ee
    PUSH ECX                            ; 005691f2
    MOV EAX,dword ptr [ESP + 0x28]      ; 005691f3
    PUSH EAX                            ; 005691f7
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005b7410 ; 005691f8
        ;   XREF to: 005b7410 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005b7410(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0xcf0]     ; 005691fd
    ADD ESP,0x8                         ; 00569203
    CMP EDX,0x3f800000                  ; 00569206
    JNZ 0x005692ce                      ; 0056920c
        ;   XREF to: 005692ce (CONDITIONAL_JUMP)  ; LAB_005692ce
    MOV EAX,dword ptr [ESP + 0x20]      ; 00569212
        ;   Label: LAB_00569212
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 00569216
    TEST EAX,EAX                        ; 0056921c
    JL 0x0056938b                       ; 0056921e
        ;   XREF to: 0056938b (CONDITIONAL_JUMP)  ; LAB_0056938b
    IMUL EAX,EAX,0x30                   ; 00569224
    ADD EAX,dword ptr [ESP + 0x1c]      ; 00569227
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056922b
    PUSH EAX                            ; 0056922f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00569230
    ADD EAX,EDI                         ; 00569234
    PUSH EAX                            ; 00569236
    LEA ESI,[ESP + 0x14]                ; 00569237
    LEA EDI,[ESP + 0x8]                 ; 0056923b
    CALL core_xform.cpp_FUN_005b5080    ; 0056923f
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x14]                ; 00569244
    ADD ESP,0x8                         ; 00569248
    MOVSD ES:EDI,ESI                    ; 0056924b
    MOVSD ES:EDI,ESI                    ; 0056924c
    MOVSD ES:EDI,ESI                    ; 0056924d
    MOV EAX,dword ptr [ESP]             ; 0056924e
    MOV dword ptr [EBP + 0xe8c],EAX     ; 00569251
    MOV EAX,dword ptr [ESP + 0x4]       ; 00569257
    MOV dword ptr [EBP + 0xe9c],EAX     ; 0056925b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00569261
    MOV dword ptr [EBP + 0xeac],EAX     ; 00569265
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056926b
        ;   Label: LAB_0056926b
    MOV EDI,dword ptr [ESP + 0x34]      ; 0056926f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00569273
    MOV EDX,dword ptr [ESP + 0x20]      ; 00569277
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056927b
    ADD EBX,0x4                         ; 0056927f
    ADD EBP,0x30                        ; 00569282
    ADD ESI,0x30                        ; 00569285
    ADD EDI,0x10                        ; 00569288
    ADD EAX,0xc                         ; 0056928b
    ADD EDX,0x24                        ; 0056928e
    INC ECX                             ; 00569291
    MOV dword ptr [ESP + 0x24],ESI      ; 00569292
    MOV dword ptr [ESP + 0x34],EDI      ; 00569296
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056929a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056929e
    MOV dword ptr [ESP + 0x20],EDX      ; 005692a2
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 005692a6
    MOV dword ptr [ESP + 0x28],ECX      ; 005692ac
    CMP ECX,EDI                         ; 005692b0
    JL 0x005691e9                       ; 005692b2
        ;   XREF to: 005691e9 (CONDITIONAL_JUMP)  ; LAB_005691e9
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005692b8
        ;   Label: LAB_005692b8
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 005692bc
    ADD ESP,0x38                        ; 005692c6
    POP EBP                             ; 005692c9
    POP EDI                             ; 005692ca
    POP ESI                             ; 005692cb
    POP EBX                             ; 005692cc
    RET                                 ; 005692cd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005692ce
        ;   Label: LAB_005692ce
    FLD float ptr [EBX + 0xcf0]         ; 005692d2
    FMUL float ptr [ESI + EAX*0x1 + 0xe80] ; 005692d8
    FSTP float ptr [ESI + EAX*0x1 + 0xe80] ; 005692df
    FLD float ptr [EBX + 0xcf0]         ; 005692e6
    FMUL float ptr [ESI + EAX*0x1 + 0xe84] ; 005692ec
    FSTP float ptr [ESI + EAX*0x1 + 0xe84] ; 005692f3
    FLD float ptr [EBX + 0xcf0]         ; 005692fa
    FMUL float ptr [ESI + EAX*0x1 + 0xe88] ; 00569300
    FSTP float ptr [ESI + EAX*0x1 + 0xe88] ; 00569307
    FLD float ptr [EBX + 0xcf0]         ; 0056930e
    FMUL float ptr [ESI + EAX*0x1 + 0xe90] ; 00569314
    FSTP float ptr [ESI + EAX*0x1 + 0xe90] ; 0056931b
    FLD float ptr [EBX + 0xcf0]         ; 00569322
    FMUL float ptr [ESI + EAX*0x1 + 0xe94] ; 00569328
    FSTP float ptr [ESI + EAX*0x1 + 0xe94] ; 0056932f
    FLD float ptr [EBX + 0xcf0]         ; 00569336
    FMUL float ptr [ESI + EAX*0x1 + 0xe98] ; 0056933c
    FSTP float ptr [ESI + EAX*0x1 + 0xe98] ; 00569343
    FLD float ptr [EBX + 0xcf0]         ; 0056934a
    FMUL float ptr [ESI + EAX*0x1 + 0xea0] ; 00569350
    FSTP float ptr [ESI + EAX*0x1 + 0xea0] ; 00569357
    FLD float ptr [EBX + 0xcf0]         ; 0056935e
    FMUL float ptr [ESI + EAX*0x1 + 0xea4] ; 00569364
    FSTP float ptr [ESI + EAX*0x1 + 0xea4] ; 0056936b
    FLD float ptr [EBX + 0xcf0]         ; 00569372
    FMUL float ptr [ESI + EAX*0x1 + 0xea8] ; 00569378
    FSTP float ptr [ESI + EAX*0x1 + 0xea8] ; 0056937f
    JMP 0x00569212                      ; 00569386
        ;   XREF to: 00569212 (UNCONDITIONAL_JUMP)  ; LAB_00569212
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0056938b
        ;   Label: LAB_0056938b
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0056938f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00569393
    FLD float ptr [EAX + 0x58]          ; 00569397
    FADD float ptr [ESI + 0x6a4]        ; 0056939a
    FSTP float ptr [EBP + 0xe8c]        ; 005693a0
    FLD float ptr [EAX + 0x5c]          ; 005693a6
    FADD float ptr [ESI + 0x6a8]        ; 005693a9
    FSTP float ptr [EBP + 0xe9c]        ; 005693af
    FLD float ptr [EAX + 0x60]          ; 005693b5
    FADD float ptr [ESI + 0x6ac]        ; 005693b8
    FSTP float ptr [EBP + 0xeac]        ; 005693be
    JMP 0x0056926b                      ; 005693c4
        ;   XREF to: 0056926b (UNCONDITIONAL_JUMP)  ; LAB_0056926b

