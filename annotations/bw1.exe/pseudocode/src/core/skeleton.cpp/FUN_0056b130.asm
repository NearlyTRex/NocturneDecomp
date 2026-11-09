; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0056b130(float *param_1,CDeformableModelInstance *param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_00569fb0 at 0056a037
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b7410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b130
        ;   Label: core_skeleton.cpp_FUN_0056b130
    PUSH ESI                            ; 0056b131
    PUSH EDI                            ; 0056b132
    PUSH EBP                            ; 0056b133
    SUB ESP,0x38                        ; 0056b134
    MOV EDX,dword ptr [ESP + 0x50]      ; 0056b137
    PUSH EDX                            ; 0056b13b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056b13c
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056b141
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 0056b144
    XOR ECX,ECX                         ; 0056b14a
    MOV dword ptr [ESP + 0x18],EAX      ; 0056b14c
    MOV dword ptr [ESP + 0x2c],ECX      ; 0056b150
    TEST EBX,EBX                        ; 0056b154
    JLE 0x0056b265                      ; 0056b156
        ;   XREF to: 0056b265 (CONDITIONAL_JUMP)  ; LAB_0056b265
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0056b15c
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0056b160
    MOV dword ptr [ESP + 0x28],ECX      ; 0056b164
    MOV dword ptr [ESP + 0x20],EAX      ; 0056b168
    ADD EBX,0x7dc                       ; 0056b16c
    ADD ESI,0xc                         ; 0056b172
    MOV dword ptr [ESP + 0x30],EBX      ; 0056b175
    MOV EBX,dword ptr [ESP + 0x50]      ; 0056b179
    MOV dword ptr [ESP + 0x24],ESI      ; 0056b17d
    ADD EBX,0x58                        ; 0056b181
    MOV EBP,dword ptr [ESP + 0x30]      ; 0056b184
    MOV dword ptr [ESP + 0x1c],EBX      ; 0056b188
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0056b18c
    MOV dword ptr [ESP + 0x34],EBP      ; 0056b190
    MOV EBP,EBX                         ; 0056b194
    IMUL ESI,dword ptr [ESP + 0x2c],0x30 ; 0056b196
        ;   Label: LAB_0056b196
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056b19b
    PUSH ECX                            ; 0056b19f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0056b1a0
    PUSH EAX                            ; 0056b1a4
    CALL core_xform.cpp_FUN_005b7410    ; 0056b1a5
        ;   XREF to: 005b7410 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005b7410(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0x64c]     ; 0056b1aa
    ADD ESP,0x8                         ; 0056b1b0
    CMP EDX,0x3f800000                  ; 0056b1b3
    JNZ 0x0056b26d                      ; 0056b1b9
        ;   XREF to: 0056b26d (CONDITIONAL_JUMP)  ; LAB_0056b26d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056b1bf
        ;   Label: LAB_0056b1bf
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0056b1c3
    TEST EAX,EAX                        ; 0056b1c9
    JL 0x0056b32a                       ; 0056b1cb
        ;   XREF to: 0056b32a (CONDITIONAL_JUMP)  ; LAB_0056b32a
    IMUL EAX,EAX,0x30                   ; 0056b1d1
    ADD EAX,dword ptr [ESP + 0x30]      ; 0056b1d4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0056b1d8
    PUSH EAX                            ; 0056b1dc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056b1dd
    ADD EAX,EDI                         ; 0056b1e1
    PUSH EAX                            ; 0056b1e3
    LEA ESI,[ESP + 0x14]                ; 0056b1e4
    LEA EDI,[ESP + 0x8]                 ; 0056b1e8
    CALL core_xform.cpp_FUN_005b5080    ; 0056b1ec
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x14]                ; 0056b1f1
    ADD ESP,0x8                         ; 0056b1f5
    MOVSD ES:EDI,ESI                    ; 0056b1f8
    MOVSD ES:EDI,ESI                    ; 0056b1f9
    MOVSD ES:EDI,ESI                    ; 0056b1fa
    MOV EAX,dword ptr [ESP]             ; 0056b1fb
    MOV dword ptr [EBP + 0x7e8],EAX     ; 0056b1fe
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b204
    MOV dword ptr [EBP + 0x7f8],EAX     ; 0056b208
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056b20e
    MOV dword ptr [EBP + 0x808],EAX     ; 0056b212
    MOV ESI,dword ptr [ESP + 0x34]      ; 0056b218
        ;   Label: LAB_0056b218
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056b21c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056b220
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056b224
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0056b228
    ADD EBX,0x4                         ; 0056b22c
    ADD EBP,0x30                        ; 0056b22f
    ADD ESI,0x30                        ; 0056b232
    ADD EDI,0x10                        ; 0056b235
    ADD EAX,0xc                         ; 0056b238
    ADD EDX,0x24                        ; 0056b23b
    INC ECX                             ; 0056b23e
    MOV dword ptr [ESP + 0x34],ESI      ; 0056b23f
    MOV dword ptr [ESP + 0x24],EDI      ; 0056b243
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056b247
    MOV dword ptr [ESP + 0x28],EAX      ; 0056b24b
    MOV dword ptr [ESP + 0x20],EDX      ; 0056b24f
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0056b253
    MOV dword ptr [ESP + 0x2c],ECX      ; 0056b259
    CMP ECX,EDI                         ; 0056b25d
    JL 0x0056b196                       ; 0056b25f
        ;   XREF to: 0056b196 (CONDITIONAL_JUMP)  ; LAB_0056b196
    ADD ESP,0x38                        ; 0056b265
        ;   Label: LAB_0056b265
    POP EBP                             ; 0056b268
    POP EDI                             ; 0056b269
    POP ESI                             ; 0056b26a
    POP EBX                             ; 0056b26b
    RET                                 ; 0056b26c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0056b26d
        ;   Label: LAB_0056b26d
    FLD float ptr [EBX + 0x64c]         ; 0056b271
    FMUL float ptr [ESI + EAX*0x1 + 0x7dc] ; 0056b277
    FSTP float ptr [ESI + EAX*0x1 + 0x7dc] ; 0056b27e
    FLD float ptr [EBX + 0x64c]         ; 0056b285
    FMUL float ptr [ESI + EAX*0x1 + 0x7e0] ; 0056b28b
    FSTP float ptr [ESI + EAX*0x1 + 0x7e0] ; 0056b292
    FLD float ptr [EBX + 0x64c]         ; 0056b299
    FMUL float ptr [ESI + EAX*0x1 + 0x7e4] ; 0056b29f
    FSTP float ptr [ESI + EAX*0x1 + 0x7e4] ; 0056b2a6
    FLD float ptr [EBX + 0x64c]         ; 0056b2ad
    FMUL float ptr [ESI + EAX*0x1 + 0x7ec] ; 0056b2b3
    FSTP float ptr [ESI + EAX*0x1 + 0x7ec] ; 0056b2ba
    FLD float ptr [EBX + 0x64c]         ; 0056b2c1
    FMUL float ptr [ESI + EAX*0x1 + 0x7f0] ; 0056b2c7
    FSTP float ptr [ESI + EAX*0x1 + 0x7f0] ; 0056b2ce
    FLD float ptr [EBX + 0x64c]         ; 0056b2d5
    FMUL float ptr [ESI + EAX*0x1 + 0x7f4] ; 0056b2db
    FSTP float ptr [ESI + EAX*0x1 + 0x7f4] ; 0056b2e2
    FLD float ptr [EBX + 0x64c]         ; 0056b2e9
    FMUL float ptr [ESI + EAX*0x1 + 0x7fc] ; 0056b2ef
    FSTP float ptr [ESI + EAX*0x1 + 0x7fc] ; 0056b2f6
    FLD float ptr [EBX + 0x64c]         ; 0056b2fd
    FMUL float ptr [ESI + EAX*0x1 + 0x800] ; 0056b303
    FSTP float ptr [ESI + EAX*0x1 + 0x800] ; 0056b30a
    FLD float ptr [EBX + 0x64c]         ; 0056b311
    FMUL float ptr [ESI + EAX*0x1 + 0x804] ; 0056b317
    FSTP float ptr [ESI + EAX*0x1 + 0x804] ; 0056b31e
    JMP 0x0056b1bf                      ; 0056b325
        ;   XREF to: 0056b1bf (UNCONDITIONAL_JUMP)  ; LAB_0056b1bf
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056b32a
        ;   Label: LAB_0056b32a
    ADD EAX,dword ptr [ESP + 0x28]      ; 0056b32e
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0056b332
    FLD float ptr [EAX + 0x58]          ; 0056b336
    FADD float ptr [ESI]                ; 0056b339
    FSTP float ptr [EBP + 0x7e8]        ; 0056b33b
    FLD float ptr [EAX + 0x5c]          ; 0056b341
    FADD float ptr [ESI + 0x4]          ; 0056b344
    FSTP float ptr [EBP + 0x7f8]        ; 0056b347
    FLD float ptr [EAX + 0x60]          ; 0056b34d
    FADD float ptr [ESI + 0x8]          ; 0056b350
    FSTP float ptr [EBP + 0x808]        ; 0056b353
    JMP 0x0056b218                      ; 0056b359
        ;   XREF to: 0056b218 (UNCONDITIONAL_JUMP)  ; LAB_0056b218

