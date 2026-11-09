; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 at 0054e7fd
;
; Referenced Globals:
;   undefined4 DAT_005d20f0
;   undefined4 DAT_005e4760
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
;   core_skeleton.cpp_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e850
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850
    PUSH ESI                            ; 0054e851
    PUSH EDI                            ; 0054e852
    PUSH EBP                            ; 0054e853
    SUB ESP,0x54                        ; 0054e854
    MOV EBP,dword ptr [ESP + 0x68]      ; 0054e857
    MOV EDX,0x7fffffff                  ; 0054e85b
    MOV ESI,0x80000001                  ; 0054e860
    PUSH EBP                            ; 0054e865
    MOV dword ptr [ESP + 0x24],EDX      ; 0054e866
    MOV dword ptr [ESP + 0x20],EDX      ; 0054e86a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0054e86e
    MOV dword ptr [ESP + 0xc],ESI       ; 0054e872
    MOV dword ptr [ESP + 0x8],ESI       ; 0054e876
    MOV dword ptr [ESP + 0x4],ESI       ; 0054e87a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e87e
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e883
    PUSH 0x0                            ; 0054e886
    PUSH 0x0                            ; 0054e888
    PUSH EBP                            ; 0054e88a
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0054e88b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180 ; 0054e88e
        ;   XREF to: 0054c180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 0054e893
    PUSH 0x0                            ; 0054e896
    PUSH EBP                            ; 0054e898
    CALL core_skeleton.cpp_FUN_0054e420 ; 0054e899
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e89e
    TEST ESI,ESI                        ; 0054e8a1
    JLE 0x0054e921                      ; 0054e8a3
        ;   XREF to: 0054e921 (CONDITIONAL_JUMP)  ; LAB_0054e921
    LEA ECX,[ESI*0x4 + 0x0]             ; 0054e8a9
    SUB ECX,ESI                         ; 0054e8b0
    XOR EDX,EDX                         ; 0054e8b2
    SHL ECX,0x2                         ; 0054e8b4
    MOV ESI,dword ptr [EBP + 0x2324]    ; 0054e8b7
        ;   Label: LAB_0054e8b7
    LEA EDI,[ESP + 0xc]                 ; 0054e8bd
    ADD ESI,EDX                         ; 0054e8c1
    MOVSD ES:EDI,ESI                    ; 0054e8c3
    MOVSD ES:EDI,ESI                    ; 0054e8c4
    MOVSD ES:EDI,ESI                    ; 0054e8c5
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054e8c6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054e8ca
    CMP EAX,EBX                         ; 0054e8ce
    JGE 0x0054e8d6                      ; 0054e8d0
        ;   XREF to: 0054e8d6 (CONDITIONAL_JUMP)  ; LAB_0054e8d6
    MOV dword ptr [ESP + 0x18],EAX      ; 0054e8d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054e8d6
        ;   Label: LAB_0054e8d6
    CMP EAX,dword ptr [ESP]             ; 0054e8da
    JLE 0x0054e8e2                      ; 0054e8dd
        ;   XREF to: 0054e8e2 (CONDITIONAL_JUMP)  ; LAB_0054e8e2
    MOV dword ptr [ESP],EAX             ; 0054e8df
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e8e2
        ;   Label: LAB_0054e8e2
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0054e8e6
    JGE 0x0054e8f0                      ; 0054e8ea
        ;   XREF to: 0054e8f0 (CONDITIONAL_JUMP)  ; LAB_0054e8f0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054e8ec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e8f0
        ;   Label: LAB_0054e8f0
    CMP EAX,dword ptr [ESP + 0x4]       ; 0054e8f4
    JLE 0x0054e8fe                      ; 0054e8f8
        ;   XREF to: 0054e8fe (CONDITIONAL_JUMP)  ; LAB_0054e8fe
    MOV dword ptr [ESP + 0x4],EAX       ; 0054e8fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054e8fe
        ;   Label: LAB_0054e8fe
    CMP EAX,dword ptr [ESP + 0x20]      ; 0054e902
    JGE 0x0054e90c                      ; 0054e906
        ;   XREF to: 0054e90c (CONDITIONAL_JUMP)  ; LAB_0054e90c
    MOV dword ptr [ESP + 0x20],EAX      ; 0054e908
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054e90c
        ;   Label: LAB_0054e90c
    CMP EAX,dword ptr [ESP + 0x8]       ; 0054e910
    JLE 0x0054e91a                      ; 0054e914
        ;   XREF to: 0054e91a (CONDITIONAL_JUMP)  ; LAB_0054e91a
    MOV dword ptr [ESP + 0x8],EAX       ; 0054e916
    ADD EDX,0xc                         ; 0054e91a
        ;   Label: LAB_0054e91a
    CMP EDX,ECX                         ; 0054e91d
    JL 0x0054e8b7                       ; 0054e91f
        ;   XREF to: 0054e8b7 (CONDITIONAL_JUMP)  ; LAB_0054e8b7
    LEA EDX,[EBP + 0x2328]              ; 0054e921
        ;   Label: LAB_0054e921
    LEA EAX,[ESP + 0x18]                ; 0054e927
    MOV EBX,EDX                         ; 0054e92b
    LEA EDI,[ESP + 0x3c]                ; 0054e92d
    FILD dword ptr [EAX]                ; 0054e931
    FMUL float ptr [0x005e4760]         ; 0054e933 | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054e939
    FILD dword ptr [EAX + 0x4]          ; 0054e93b
    FMUL float ptr [0x005e4760]         ; 0054e93e | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054e944
    FILD dword ptr [EAX + 0x8]          ; 0054e947
    FMUL float ptr [0x005e4760]         ; 0054e94a | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054e950
    ADD EBP,0x2334                      ; 0054e953
    MOV EAX,ESP                         ; 0054e959
    MOV EBX,EBP                         ; 0054e95b
    LEA ESI,[ESP + 0x30]                ; 0054e95d
    FILD dword ptr [EAX]                ; 0054e961
    FMUL float ptr [0x005e4760]         ; 0054e963 | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054e969
    FILD dword ptr [EAX + 0x4]          ; 0054e96b
    FMUL float ptr [0x005e4760]         ; 0054e96e | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054e974
    FILD dword ptr [EAX + 0x8]          ; 0054e977
    FMUL float ptr [0x005e4760]         ; 0054e97a | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054e980
    FLD float ptr [EBP]                 ; 0054e983
    FLD float ptr [EBP + 0x4]           ; 0054e986
    FLD float ptr [EBP + 0x8]           ; 0054e989
    FXCH ST2                            ; 0054e98c
    FSUB float ptr [EDX]                ; 0054e98e
    FXCH                                ; 0054e990
    FSUB float ptr [EDX + 0x4]          ; 0054e992
    FXCH ST2                            ; 0054e995
    FSUB float ptr [EDX + 0x8]          ; 0054e997
    FXCH                                ; 0054e99a
    FSTP float ptr [ESP + 0x30]         ; 0054e99c
    FXCH                                ; 0054e9a0
    FSTP float ptr [ESP + 0x34]         ; 0054e9a2
    FSTP float ptr [ESP + 0x38]         ; 0054e9a6
    MOVSD ES:EDI,ESI                    ; 0054e9aa
    MOVSD ES:EDI,ESI                    ; 0054e9ab
    MOVSD ES:EDI,ESI                    ; 0054e9ac
    FLD float ptr [0x005d20f0]          ; 0054e9ad | DAT_005d20f0
    FLD float ptr [ESP + 0x3c]          ; 0054e9b3
    FMUL ST1                            ; 0054e9b7
    FLD float ptr [ESP + 0x40]          ; 0054e9b9
    FMUL ST2                            ; 0054e9bd
    FLD float ptr [ESP + 0x44]          ; 0054e9bf
    FMULP ST3                           ; 0054e9c3
    LEA EDI,[ESP + 0x24]                ; 0054e9c5
    LEA ESI,[ESP + 0x48]                ; 0054e9c9
    FXCH                                ; 0054e9cd
    FSTP float ptr [ESP + 0x48]         ; 0054e9cf
    FSTP float ptr [ESP + 0x4c]         ; 0054e9d3
    FSTP float ptr [ESP + 0x50]         ; 0054e9d7
    MOVSD ES:EDI,ESI                    ; 0054e9db
    MOVSD ES:EDI,ESI                    ; 0054e9dc
    MOVSD ES:EDI,ESI                    ; 0054e9dd
    FLD float ptr [EDX]                 ; 0054e9de
    FLD float ptr [EDX + 0x4]           ; 0054e9e0
    FLD float ptr [EDX + 0x8]           ; 0054e9e3
    FXCH ST2                            ; 0054e9e6
    FSUB float ptr [ESP + 0x24]         ; 0054e9e8
    FXCH                                ; 0054e9ec
    FSUB float ptr [ESP + 0x28]         ; 0054e9ee
    FXCH ST2                            ; 0054e9f2
    FSUB float ptr [ESP + 0x2c]         ; 0054e9f4
    FXCH                                ; 0054e9f8
    FSTP float ptr [EDX]                ; 0054e9fa
    FXCH                                ; 0054e9fc
    FSTP float ptr [EDX + 0x4]          ; 0054e9fe
    FSTP float ptr [EDX + 0x8]          ; 0054ea01
    FLD float ptr [EBP]                 ; 0054ea04
    FLD float ptr [EBP + 0x4]           ; 0054ea07
    FLD float ptr [EBP + 0x8]           ; 0054ea0a
    FXCH ST2                            ; 0054ea0d
    FADD float ptr [ESP + 0x24]         ; 0054ea0f
    FXCH                                ; 0054ea13
    FADD float ptr [ESP + 0x28]         ; 0054ea15
    FXCH ST2                            ; 0054ea19
    FADD float ptr [ESP + 0x2c]         ; 0054ea1b
    FXCH                                ; 0054ea1f
    FSTP float ptr [EBP]                ; 0054ea21
    FXCH                                ; 0054ea24
    FSTP float ptr [EBP + 0x4]          ; 0054ea26
    FSTP float ptr [EBP + 0x8]          ; 0054ea29
    ADD ESP,0x54                        ; 0054ea2c
    POP EBP                             ; 0054ea2f
    POP EDI                             ; 0054ea30
    POP ESI                             ; 0054ea31
    POP EBX                             ; 0054ea32
    RET                                 ; 0054ea33

