; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(float *param_1,int param_2)
;
; Local Variables:
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
;
; XREF[2]:
;   FUN_0051f3f0 at 0051f54a
;   core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120 at 0051e192
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f1d0
        ;   Label: core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
    PUSH ESI                            ; 0051f1d1
    PUSH EDI                            ; 0051f1d2
    PUSH EBP                            ; 0051f1d3
    SUB ESP,0x2c                        ; 0051f1d4
    MOV EDI,dword ptr [ESP + 0x40]      ; 0051f1d7
    MOV EDX,dword ptr [ESP + 0x44]      ; 0051f1db
    PUSH EDX                            ; 0051f1df
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051f1e0
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051f1e5
    MOV EBX,dword ptr [EAX + 0x28558]   ; 0051f1e8
    XOR ECX,ECX                         ; 0051f1ee
    MOV dword ptr [ESP + 0x10],EAX      ; 0051f1f0
    MOV dword ptr [ESP + 0x28],ECX      ; 0051f1f4
    TEST EBX,EBX                        ; 0051f1f8
    JLE 0x0051f2ed                      ; 0051f1fa
        ;   XREF to: 0051f2ed (CONDITIONAL_JUMP)  ; LAB_0051f2ed
    LEA EBX,[EDI + 0x7dc]               ; 0051f200
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051f206
    MOV dword ptr [ESP + 0x14],EBX      ; 0051f20a
    LEA ESI,[EDI + 0xc]                 ; 0051f20e
    MOV EBX,dword ptr [ESP + 0x44]      ; 0051f211
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051f215
    MOV dword ptr [ESP + 0x24],ESI      ; 0051f219
    ADD EBX,0x58                        ; 0051f21d
    MOV dword ptr [ESP + 0x20],EBP      ; 0051f220
    MOV ESI,EDI                         ; 0051f224
    MOV dword ptr [ESP + 0xc],EBX       ; 0051f226
    XOR EBP,EBP                         ; 0051f22a
    MOV EBX,EDI                         ; 0051f22c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051f22e
        ;   Label: LAB_0051f22e
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051f232
    PUSH EAX                            ; 0051f236
    IMUL EAX,EDX,0x30                   ; 0051f237
    MOV ECX,dword ptr [ESP + 0x24]      ; 0051f23a
    PUSH ECX                            ; 0051f23e
    MOV dword ptr [ESP + 0x20],EAX      ; 0051f23f
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0051f243
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70()
    MOV EDX,dword ptr [EBX + 0x64c]     ; 0051f248
    ADD ESP,0x8                         ; 0051f24e
    CMP EDX,0x3f800000                  ; 0051f251
    JNZ 0x0051f2f5                      ; 0051f257
        ;   XREF to: 0051f2f5 (CONDITIONAL_JUMP)  ; LAB_0051f2f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051f25d
        ;   Label: LAB_0051f25d
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051f261
    TEST EAX,EAX                        ; 0051f267
    JL 0x0051f3b2                       ; 0051f269
        ;   XREF to: 0051f3b2 (CONDITIONAL_JUMP)  ; LAB_0051f3b2
    IMUL EAX,EAX,0x30                   ; 0051f26f
    ADD EAX,dword ptr [ESP + 0x14]      ; 0051f272
    PUSH EAX                            ; 0051f276
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051f277
    ADD EAX,EBP                         ; 0051f27b
    PUSH EAX                            ; 0051f27d
    LEA EAX,[ESP + 0x8]                 ; 0051f27e
    PUSH EAX                            ; 0051f282
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051f283
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 0051f288
    MOV EAX,dword ptr [ESP]             ; 0051f28b
    MOV dword ptr [ESI + 0x7e8],EAX     ; 0051f28e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f294
    MOV dword ptr [ESI + 0x7f8],EAX     ; 0051f298
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051f29e
    MOV dword ptr [ESI + 0x808],EAX     ; 0051f2a2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051f2a8
        ;   Label: LAB_0051f2a8
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051f2ac
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051f2b0
    ADD EBX,0x4                         ; 0051f2b4
    ADD ESI,0x30                        ; 0051f2b7
    ADD EBP,0xc                         ; 0051f2ba
    ADD EAX,0x30                        ; 0051f2bd
    ADD EDX,0x10                        ; 0051f2c0
    ADD ECX,0x24                        ; 0051f2c3
    MOV dword ptr [ESP + 0x20],EAX      ; 0051f2c6
    MOV dword ptr [ESP + 0x24],EDX      ; 0051f2ca
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051f2ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051f2d2
    MOV dword ptr [ESP + 0x1c],ECX      ; 0051f2d6
    INC EAX                             ; 0051f2da
    MOV ECX,dword ptr [EDX + 0x28558]   ; 0051f2db
    MOV dword ptr [ESP + 0x28],EAX      ; 0051f2e1
    CMP EAX,ECX                         ; 0051f2e5
    JL 0x0051f22e                       ; 0051f2e7
        ;   XREF to: 0051f22e (CONDITIONAL_JUMP)  ; LAB_0051f22e
    ADD ESP,0x2c                        ; 0051f2ed
        ;   Label: LAB_0051f2ed
    POP EBP                             ; 0051f2f0
    POP EDI                             ; 0051f2f1
    POP ESI                             ; 0051f2f2
    POP EBX                             ; 0051f2f3
    RET                                 ; 0051f2f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051f2f5
        ;   Label: LAB_0051f2f5
    FLD float ptr [EBX + 0x64c]         ; 0051f2f9
    FMUL float ptr [EDI + EAX*0x1 + 0x7dc] ; 0051f2ff
    FSTP float ptr [EDI + EAX*0x1 + 0x7dc] ; 0051f306
    FLD float ptr [EBX + 0x64c]         ; 0051f30d
    FMUL float ptr [EDI + EAX*0x1 + 0x7e0] ; 0051f313
    FSTP float ptr [EDI + EAX*0x1 + 0x7e0] ; 0051f31a
    FLD float ptr [EBX + 0x64c]         ; 0051f321
    FMUL float ptr [EDI + EAX*0x1 + 0x7e4] ; 0051f327
    FSTP float ptr [EDI + EAX*0x1 + 0x7e4] ; 0051f32e
    FLD float ptr [EBX + 0x64c]         ; 0051f335
    FMUL float ptr [EDI + EAX*0x1 + 0x7ec] ; 0051f33b
    FSTP float ptr [EDI + EAX*0x1 + 0x7ec] ; 0051f342
    FLD float ptr [EBX + 0x64c]         ; 0051f349
    FMUL float ptr [EDI + EAX*0x1 + 0x7f0] ; 0051f34f
    FSTP float ptr [EDI + EAX*0x1 + 0x7f0] ; 0051f356
    FLD float ptr [EBX + 0x64c]         ; 0051f35d
    FMUL float ptr [EDI + EAX*0x1 + 0x7f4] ; 0051f363
    FSTP float ptr [EDI + EAX*0x1 + 0x7f4] ; 0051f36a
    FLD float ptr [EBX + 0x64c]         ; 0051f371
    FMUL float ptr [EDI + EAX*0x1 + 0x7fc] ; 0051f377
    FSTP float ptr [EDI + EAX*0x1 + 0x7fc] ; 0051f37e
    FLD float ptr [EBX + 0x64c]         ; 0051f385
    FMUL float ptr [EDI + EAX*0x1 + 0x800] ; 0051f38b
    FSTP float ptr [EDI + EAX*0x1 + 0x800] ; 0051f392
    FLD float ptr [EBX + 0x64c]         ; 0051f399
    FMUL float ptr [EDI + EAX*0x1 + 0x804] ; 0051f39f
    FSTP float ptr [EDI + EAX*0x1 + 0x804] ; 0051f3a6
    JMP 0x0051f25d                      ; 0051f3ad
        ;   XREF to: 0051f25d (UNCONDITIONAL_JUMP)  ; LAB_0051f25d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051f3b2
        ;   Label: LAB_0051f3b2
    FLD float ptr [EAX + EBP*0x1 + 0x58] ; 0051f3b6
    FADD float ptr [EDI]                ; 0051f3ba
    FSTP float ptr [ESI + 0x7e8]        ; 0051f3bc
    FLD float ptr [EAX + EBP*0x1 + 0x5c] ; 0051f3c2
    FADD float ptr [EDI + 0x4]          ; 0051f3c6
    FSTP float ptr [ESI + 0x7f8]        ; 0051f3c9
    FLD float ptr [EAX + EBP*0x1 + 0x60] ; 0051f3cf
    FADD float ptr [EDI + 0x8]          ; 0051f3d3
    FSTP float ptr [ESI + 0x808]        ; 0051f3d6
    JMP 0x0051f2a8                      ; 0051f3dc
        ;   XREF to: 0051f2a8 (UNCONDITIONAL_JUMP)  ; LAB_0051f2a8

