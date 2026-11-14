; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_0058c1e0(CZombie *this_ptr,CVector3f *out_attract_position)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_attract_position
;
; Referenced Globals:
;   undefined4 DAT_005d88f3
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_motion.cpp_FUN_004fc350
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c1e0
        ;   Label: core_zombie.cpp_CZombie_canBeAttracted_FUN_0058c1e0
    PUSH EBP                            ; 0058c1e1
    SUB ESP,0x7c                        ; 0058c1e2
    MOV EBP,dword ptr [ESP + 0x88]      ; 0058c1e5
    PUSH 0x5                            ; 0058c1ec
    LEA EBX,[EBP + 0x158]               ; 0058c1ee
    PUSH EBX                            ; 0058c1f4
    CALL core_motion.cpp_FUN_004fc350   ; 0058c1f5
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x80],EAX      ; 0058c1fa
    FLD float ptr [ESP + 0x80]          ; 0058c201
    FLDZ                                ; 0058c208
    ADD ESP,0x8                         ; 0058c20a
    FCOMPP                              ; 0058c20d
    FNSTSW AX                           ; 0058c20f
    SAHF                                ; 0058c211
    JC 0x0058c21c                       ; 0058c212
        ;   XREF to: 0058c21c (CONDITIONAL_JUMP)  ; LAB_0058c21c
    XOR EAX,EAX                         ; 0058c214
    ADD ESP,0x7c                        ; 0058c216
    POP EBP                             ; 0058c219
    POP EBX                             ; 0058c21a
    RET                                 ; 0058c21b
    PUSH EDI                            ; 0058c21c
        ;   Label: LAB_0058c21c
    PUSH ESI                            ; 0058c21d
    MOV EDX,dword ptr [EBP + 0xd0ec]    ; 0058c21e
    PUSH EDX                            ; 0058c224
    PUSH EBX                            ; 0058c225
    LEA ESI,[ESP + 0x70]                ; 0058c226
    LEA EDI,[ESP + 0x10]                ; 0058c22a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 0058c22e
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x70]                ; 0058c233
    ADD ESP,0x8                         ; 0058c237
    MOVSD ES:EDI,ESI                    ; 0058c23a
    MOVSD ES:EDI,ESI                    ; 0058c23b
    MOVSD ES:EDI,ESI                    ; 0058c23c
    MOV ECX,dword ptr [EBP + 0xd0f0]    ; 0058c23d
    PUSH ECX                            ; 0058c243
    PUSH EBX                            ; 0058c244
    LEA ESI,[ESP + 0x40]                ; 0058c245
    LEA EDI,[ESP + 0x58]                ; 0058c249
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 0058c24d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0058c252
    LEA ESI,[ESP + 0x38]                ; 0058c255
    FLD float ptr [ESP + 0x8]           ; 0058c259
    FLD float ptr [ESP + 0xc]           ; 0058c25d
    MOVSD ES:EDI,ESI                    ; 0058c261
    MOVSD ES:EDI,ESI                    ; 0058c262
    MOVSD ES:EDI,ESI                    ; 0058c263
    FLD float ptr [ESP + 0x10]          ; 0058c264
    LEA EDI,[ESP + 0x44]                ; 0058c268
    LEA ESI,[ESP + 0x74]                ; 0058c26c
    FXCH ST2                            ; 0058c270
    FADD float ptr [ESP + 0x50]         ; 0058c272
    FXCH                                ; 0058c276
    FADD float ptr [ESP + 0x54]         ; 0058c278
    FXCH ST2                            ; 0058c27c
    FADD float ptr [ESP + 0x58]         ; 0058c27e
    FXCH                                ; 0058c282
    FSTP float ptr [ESP + 0x74]         ; 0058c284
    FXCH                                ; 0058c288
    FSTP float ptr [ESP + 0x78]         ; 0058c28a
    FSTP float ptr [ESP + 0x7c]         ; 0058c28e
    MOVSD ES:EDI,ESI                    ; 0058c292
    MOVSD ES:EDI,ESI                    ; 0058c293
    MOVSD ES:EDI,ESI                    ; 0058c294
    FLD float ptr [0x005d88f3]          ; 0058c295 | DAT_005d88f3
    FLD float ptr [ESP + 0x44]          ; 0058c29b
    FMUL ST1                            ; 0058c29f
    FLD float ptr [ESP + 0x48]          ; 0058c2a1
    FMUL ST2                            ; 0058c2a5
    LEA EAX,[ESP + 0x20]                ; 0058c2a7
    FLD float ptr [ESP + 0x4c]          ; 0058c2ab
    FMULP ST3                           ; 0058c2af
    PUSH EAX                            ; 0058c2b1
    LEA EDI,[ESP + 0x24]                ; 0058c2b2
    LEA ESI,[ESP + 0x18]                ; 0058c2b6
    FXCH                                ; 0058c2ba
    FSTP float ptr [ESP + 0x18]         ; 0058c2bc
    FSTP float ptr [ESP + 0x1c]         ; 0058c2c0
    FSTP float ptr [ESP + 0x20]         ; 0058c2c4
    MOVSD ES:EDI,ESI                    ; 0058c2c8
    MOVSD ES:EDI,ESI                    ; 0058c2c9
    MOVSD ES:EDI,ESI                    ; 0058c2ca
    PUSH EBP                            ; 0058c2cb
    LEA ESI,[ESP + 0x64]                ; 0058c2cc
    LEA EDI,[ESP + 0x34]                ; 0058c2d0
    CALL core_actor.cpp_FUN_00408b80    ; 0058c2d4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x64]                ; 0058c2d9
    ADD ESP,0x8                         ; 0058c2dd
    LEA EAX,[ESP + 0x2c]                ; 0058c2e0
    MOV EBX,dword ptr [ESP + 0x94]      ; 0058c2e4
    MOVSD ES:EDI,ESI                    ; 0058c2eb
    MOVSD ES:EDI,ESI                    ; 0058c2ec
    MOVSD ES:EDI,ESI                    ; 0058c2ed
    CMP EAX,EBX                         ; 0058c2ee
    JZ 0x0058c306                       ; 0058c2f0
        ;   XREF to: 0058c306 (CONDITIONAL_JUMP)  ; LAB_0058c306
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058c2f2
    MOV dword ptr [EBX],EAX             ; 0058c2f6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058c2f8
    MOV dword ptr [EBX + 0x4],EAX       ; 0058c2fc
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058c2ff
    MOV dword ptr [EBX + 0x8],EAX       ; 0058c303
    MOV EAX,0x1                         ; 0058c306
        ;   Label: LAB_0058c306
    POP ESI                             ; 0058c30b
    POP EDI                             ; 0058c30c
    ADD ESP,0x7c                        ; 0058c30d
    POP EBP                             ; 0058c310
    POP EBX                             ; 0058c311
    RET                                 ; 0058c312

