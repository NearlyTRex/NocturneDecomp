; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle *this_ptr,CMatrix3x4f *out_matrix)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0xfc]:48  local_fc
; CMatrix3x4f      Stack[-0xcc]:48  local_cc
; CMatrix3x4f      Stack[-0x9c]:48  local_9c
; CMatrix3x4f      Stack[-0x6c]:48  local_6c
; CMatrix3x4f      Stack[-0x3c]:48  local_3c
;
; XREF[2]:
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db204
;   core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0 at 005dba57
;
; Referenced Globals:
;   int[4] g_TentacleIndices
;   undefined4 g_TentacleIndices[1]
;   undefined4 g_TentacleIndices[2]
;   undefined4 g_TentacleIndices[3]
;
; Called Functions:
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbb70
        ;   Label: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
    PUSH EDI                            ; 005dbb71
    PUSH EBP                            ; 005dbb72
    SUB ESP,0xf0                        ; 005dbb73
    MOV EBX,ESI                         ; 005dbb79
    MOV EBP,dword ptr [0x03f6cd0c]      ; 005dbb7b | g_TentacleIndices[1]
    LEA EAX,[EBP*0x4 + 0x0]             ; 005dbb81
    SUB EAX,EBP                         ; 005dbb88
    MOV EBP,dword ptr [ESP + 0x100]     ; 005dbb8a
    SHL EAX,0x4                         ; 005dbb91
    ADD EBP,0xfd8                       ; 005dbb94
    PUSH 0x3f000000                     ; 005dbb9a
    ADD EAX,EBP                         ; 005dbb9f
    MOV ESI,dword ptr [0x03f6cd08]      ; 005dbba1 | g_TentacleIndices
    PUSH EAX                            ; 005dbba7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbba8
    SUB EAX,ESI                         ; 005dbbaf
    SHL EAX,0x4                         ; 005dbbb1
    ADD EAX,EBP                         ; 005dbbb4
    PUSH EAX                            ; 005dbbb6
    LEA ESI,[ESP + 0x9c]                ; 005dbbb7
    LEA EDI,[ESP + 0x3c]                ; 005dbbbe
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbbc2
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc3213                      ; 005dbbc7
        ;   XREF to: 03fc3213 (UNCONDITIONAL_JUMP)  ; LAB_03fc3213
    MOV ESI,dword ptr [0x03f6cd14]      ; 005dbbd8 | g_TentacleIndices[3]
        ;   Label: LAB_005dbbd8
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbbde
    SUB EAX,ESI                         ; 005dbbe5
    SHL EAX,0x4                         ; 005dbbe7
    PUSH 0x3f000000                     ; 005dbbea
    ADD EAX,EBP                         ; 005dbbef
    MOV ESI,dword ptr [0x03f6cd10]      ; 005dbbf1 | g_TentacleIndices[2]
    PUSH EAX                            ; 005dbbf7
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dbbf8
    SUB EAX,ESI                         ; 005dbbff
    SHL EAX,0x4                         ; 005dbc01
    ADD EAX,EBP                         ; 005dbc04
    PUSH EAX                            ; 005dbc06
    LEA ESI,[ESP + 0xc]                 ; 005dbc07
    LEA EDI,[ESP + 0x6c]                ; 005dbc0b
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbc0f
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    ADD ESP,0xc                         ; 005dbc14
    JMP 0x03fc3275                      ; 005dbc17
        ;   XREF to: 03fc3275 (UNCONDITIONAL_JUMP)  ; LAB_03fc3275
    PUSH EAX                            ; 005dbc30
        ;   Label: LAB_005dbc30
    LEA ESI,[ESP + 0xcc]                ; 005dbc31
    MOV EDI,EBX                         ; 005dbc38
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dbc3a
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc32df                      ; 005dbc3f
        ;   XREF to: 03fc32df (UNCONDITIONAL_JUMP)  ; LAB_03fc32df
    MOV EAX,EBX                         ; 005dbc50
        ;   Label: LAB_005dbc50
    ADD ESP,0xf0                        ; 005dbc52
    POP EBP                             ; 005dbc58
    POP EDI                             ; 005dbc59
    POP EBX                             ; 005dbc5a
    RET                                 ; 005dbc5b
    MOV ECX,0xc                         ; 03fc3213
        ;   Label: LAB_03fc3213
    LEA ESI,[ESP + 0x9c]                ; 03fc3218
    ADD ESP,0xc                         ; 03fc321f
    MOV ECX,dword ptr [ESI]             ; 03fc3222
    MOV dword ptr [EDI],ECX             ; 03fc3224
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3226
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3229
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc322c
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc322f
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3232
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3235
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3238
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc323b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc323e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3241
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3244
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3247
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc324a
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc324d
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3250
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3253
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3256
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3259
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc325c
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc325f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3262
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3265
    ADD ESI,0x30                        ; 03fc3268
    ADD EDI,0x30                        ; 03fc326b
    XOR ECX,ECX                         ; 03fc326e
    JMP 0x005dbbd8                      ; 03fc3270
        ;   XREF to: 005dbbd8 (UNCONDITIONAL_JUMP)  ; LAB_005dbbd8
    MOV ECX,0xc                         ; 03fc3275
        ;   Label: LAB_03fc3275
    LEA EAX,[ESP + 0x60]                ; 03fc327a
    PUSH 0x3f000000                     ; 03fc327e
    LEA ESI,[ESP + 0x4]                 ; 03fc3283
    PUSH EAX                            ; 03fc3287
    LEA EAX,[ESP + 0x38]                ; 03fc3288
    MOV ECX,dword ptr [ESI]             ; 03fc328c
    MOV dword ptr [EDI],ECX             ; 03fc328e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3290
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3293
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3296
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3299
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc329c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc329f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc32a2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc32a5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc32a8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc32ab
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc32ae
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc32b1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc32b4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc32b7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc32ba
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc32bd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc32c0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc32c3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc32c6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc32c9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc32cc
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc32cf
    ADD ESI,0x30                        ; 03fc32d2
    ADD EDI,0x30                        ; 03fc32d5
    XOR ECX,ECX                         ; 03fc32d8
    JMP 0x005dbc30                      ; 03fc32da
        ;   XREF to: 005dbc30 (UNCONDITIONAL_JUMP)  ; LAB_005dbc30
    MOV ECX,0xc                         ; 03fc32df
        ;   Label: LAB_03fc32df
    LEA ESI,[ESP + 0xcc]                ; 03fc32e4
    ADD ESP,0xc                         ; 03fc32eb
    MOV ECX,dword ptr [ESI]             ; 03fc32ee
    MOV dword ptr [EDI],ECX             ; 03fc32f0
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc32f2
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc32f5
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc32f8
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc32fb
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc32fe
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3301
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3304
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3307
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc330a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc330d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3310
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3313
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3316
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3319
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc331c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc331f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3322
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3325
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3328
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc332b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc332e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3331
    ADD ESI,0x30                        ; 03fc3334
    ADD EDI,0x30                        ; 03fc3337
    XOR ECX,ECX                         ; 03fc333a
    JMP 0x005dbc50                      ; 03fc333c
        ;   XREF to: 005dbc50 (UNCONDITIONAL_JUMP)  ; LAB_005dbc50

