; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
; float            Stack[0x10]:4   blend_weight
; int              Stack[0x14]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   callback_func
; Local Variables:
; undefined4       Stack[-0x980]:4  local_980
; undefined        Stack[-0x97c]:1  local_97c
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
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
;
; XREF[7]:
;   core_charactr.cpp_FUN_004320d0 at 004321d0
;   core_ghoul.cpp_FUN_004c6eb0 at 004c720d
;   core_prye.cpp_FUN_0051c1c0 at 0051cbea
;   core_prye.cpp_FUN_0051e6d0 at 0051e9e7
;   core_prye.cpp_FUN_0051ee10 at 0051ef50
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 at 0054c169
;   core_zombprie.cpp_FUN_0058e8d0 at 0058eb7a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1fd4
;   TerminatedCString s_Write_me_005d1fe9
;   undefined4 DAT_005d1ff4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_motion.cpp_FUN_004fcb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_00548140
;   core_skeleton.cpp_FUN_005481d0
;   core_xform.cpp_FUN_00585b20
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_negateFirstComponent_FUN_00585930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cc90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
    PUSH ESI                            ; 0054cc91
    PUSH EDI                            ; 0054cc92
    PUSH EBP                            ; 0054cc93
    MOV EBP,ESP                         ; 0054cc94
    SUB ESP,0x96c                       ; 0054cc96
    AND ESP,0xfffffff8                  ; 0054cc9c
    FLD float ptr [EBP + 0x20]          ; 0054cc9f
    FCOMP double ptr [0x005d1ff4]       ; 0054cca2 | DAT_005d1ff4
    FNSTSW AX                           ; 0054cca8
    SAHF                                ; 0054ccaa
    JA 0x0054ccb4                       ; 0054ccab
        ;   XREF to: 0054ccb4 (CONDITIONAL_JUMP)  ; LAB_0054ccb4
    MOV ESP,EBP                         ; 0054ccad
        ;   Label: LAB_0054ccad
    POP EBP                             ; 0054ccaf
    POP EDI                             ; 0054ccb0
    POP ESI                             ; 0054ccb1
    POP EBX                             ; 0054ccb2
    RET                                 ; 0054ccb3
    MOV EAX,ESP                         ; 0054ccb4
        ;   Label: LAB_0054ccb4
    PUSH EAX                            ; 0054ccb6
    LEA EAX,[ESP + 0x930]               ; 0054ccb7
    PUSH EAX                            ; 0054ccbe
    LEA EAX,[ESP + 0x92c]               ; 0054ccbf
    PUSH EAX                            ; 0054ccc6
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054ccc7
    PUSH dword ptr [EBP + 0x1c]         ; 0054ccca
    PUSH EDX                            ; 0054cccd
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054ccce
    PUSH ECX                            ; 0054ccd1
    CALL core_motion.cpp_FUN_004fcb50   ; 0054ccd2
        ;   XREF to: 004fcb50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcb50(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0054ccd7
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054ccda
    PUSH EBX                            ; 0054ccdd
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054ccde
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054cce3
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054cce6
    MOV EDI,dword ptr [ESI + 0x2340]    ; 0054cce9
    MOV EBX,EAX                         ; 0054ccef
    TEST EDI,EDI                        ; 0054ccf1
    JNZ 0x0054d092                      ; 0054ccf3
        ;   XREF to: 0054d092 (CONDITIONAL_JUMP)  ; LAB_0054d092
    MOV ESI,dword ptr [EAX + 0x1de78]   ; 0054ccf9
    MOV dword ptr [ESP + 0x964],EDI     ; 0054ccff
    TEST ESI,ESI                        ; 0054cd06
    JLE 0x0054ce19                      ; 0054cd08
        ;   XREF to: 0054ce19 (CONDITIONAL_JUMP)  ; LAB_0054ce19
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cd0e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054cd11
    ADD EAX,0x6b0                       ; 0054cd14
    MOV dword ptr [ESP + 0x93c],ESI     ; 0054cd19
    MOV dword ptr [ESP + 0x944],EAX     ; 0054cd20
    MOV ESI,dword ptr [EBP + 0x24]      ; 0054cd27
        ;   Label: LAB_0054cd27
    PUSH ESI                            ; 0054cd2a
    MOV EDI,dword ptr [ESP + 0x968]     ; 0054cd2b
    PUSH EDI                            ; 0054cd32
    PUSH EBX                            ; 0054cd33
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054cd34
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054cd39
    TEST EAX,EAX                        ; 0054cd3c
    JL 0x0054cdda                       ; 0054cd3e
        ;   XREF to: 0054cdda (CONDITIONAL_JUMP)  ; LAB_0054cdda
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054cd44
    PUSH EDX                            ; 0054cd47
    PUSH EAX                            ; 0054cd48
    PUSH dword ptr [EBP + 0x20]         ; 0054cd49
    PUSH ESI                            ; 0054cd4c
    PUSH EDI                            ; 0054cd4d
    CALL dword ptr [EBP + 0x28]         ; 0054cd4e
    MOV dword ptr [ESP + 0x97c],EAX     ; 0054cd51
    FLD float ptr [ESP + 0x97c]         ; 0054cd58
    ADD ESP,0x14                        ; 0054cd5f
    SUB ESP,0x4                         ; 0054cd62
    MOV ESI,EDI                         ; 0054cd65
    FSTP float ptr [ESP]                ; 0054cd67
    MOV EDI,dword ptr [ESP + 0x930]     ; 0054cd6a
    PUSH dword ptr [ESP + 0x4]          ; 0054cd71
    PUSH EDI                            ; 0054cd75
    MOV EAX,dword ptr [ESP + 0x930]     ; 0054cd76
    PUSH EAX                            ; 0054cd7d
    MOV EDX,ESI                         ; 0054cd7e
    PUSH EDX                            ; 0054cd80
    PUSH EBX                            ; 0054cd81
    LEA ESI,[ESP + 0x85c]               ; 0054cd82
    LEA EDI,[ESP + 0x83c]               ; 0054cd89
    CALL core_skeleton.cpp_FUN_00548140 ; 0054cd90
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    LEA ESI,[ESP + 0x85c]               ; 0054cd95
    ADD ESP,0x14                        ; 0054cd9c
    LEA EAX,[ESP + 0x828]               ; 0054cd9f
    MOV ECX,dword ptr [ESP + 0x948]     ; 0054cda6
    PUSH EAX                            ; 0054cdad
    MOVSD ES:EDI,ESI                    ; 0054cdae
    MOVSD ES:EDI,ESI                    ; 0054cdaf
    MOVSD ES:EDI,ESI                    ; 0054cdb0
    MOVSD ES:EDI,ESI                    ; 0054cdb1
    PUSH ECX                            ; 0054cdb2
    LEA ESI,[ESP + 0x7e0]               ; 0054cdb3
    CALL core_xform.cpp_FUN_00585b20    ; 0054cdba
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    ADD ESP,0xc                         ; 0054cdbf
    MOV EDI,dword ptr [ESP + 0x93c]     ; 0054cdc2
    LEA ESI,[ESP + 0x7d4]               ; 0054cdc9
    LEA EDI,[EDI + 0x6b0]               ; 0054cdd0
    MOVSD ES:EDI,ESI                    ; 0054cdd6
    MOVSD ES:EDI,ESI                    ; 0054cdd7
    MOVSD ES:EDI,ESI                    ; 0054cdd8
    MOVSD ES:EDI,ESI                    ; 0054cdd9
    MOV EDI,dword ptr [ESP + 0x93c]     ; 0054cdda
        ;   Label: LAB_0054cdda
    MOV EAX,dword ptr [ESP + 0x944]     ; 0054cde1
    MOV EDX,dword ptr [ESP + 0x964]     ; 0054cde8
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054cdef
    ADD EDI,0x10                        ; 0054cdf5
    ADD EAX,0x10                        ; 0054cdf8
    INC EDX                             ; 0054cdfb
    MOV dword ptr [ESP + 0x93c],EDI     ; 0054cdfc
    MOV dword ptr [ESP + 0x944],EAX     ; 0054ce03
    MOV dword ptr [ESP + 0x964],EDX     ; 0054ce0a
    CMP EDX,ECX                         ; 0054ce11
    JL 0x0054cd27                       ; 0054ce13
        ;   XREF to: 0054cd27 (CONDITIONAL_JUMP)  ; LAB_0054cd27
    CMP dword ptr [EBP + 0x24],0x0      ; 0054ce19
        ;   Label: LAB_0054ce19
    JGE 0x0054ccad                      ; 0054ce1d
        ;   XREF to: 0054ccad (CONDITIONAL_JUMP)  ; LAB_0054ccad
    MOV ESI,dword ptr [ESP + 0x92c]     ; 0054ce23
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054ce2a
    MOV EBX,dword ptr [EBX + 0x1ec94]   ; 0054ce31
    SUB EAX,ESI                         ; 0054ce37
    FLD float ptr [EBX + EAX*0x4]       ; 0054ce39
    FMUL float ptr [ESP]                ; 0054ce3c
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0054ce3f
    FMUL float ptr [ESP]                ; 0054ce43
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0054ce46
    FMUL float ptr [ESP]                ; 0054ce4a
    LEA EDI,[ESP + 0x894]               ; 0054ce4d
    LEA ESI,[ESP + 0x8c4]               ; 0054ce54
    FXCH ST2                            ; 0054ce5b
    FSTP float ptr [ESP + 0x8c4]        ; 0054ce5d
    FSTP float ptr [ESP + 0x8c8]        ; 0054ce64
    FSTP float ptr [ESP + 0x8cc]        ; 0054ce6b
    MOVSD ES:EDI,ESI                    ; 0054ce72
    MOVSD ES:EDI,ESI                    ; 0054ce73
    MOVSD ES:EDI,ESI                    ; 0054ce74
    FLD float ptr [ESP]                 ; 0054ce75
    MOV ESI,dword ptr [ESP + 0x924]     ; 0054ce78
    FLD1                                ; 0054ce7f
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054ce81
    FSUBRP                              ; 0054ce88
    SUB EAX,ESI                         ; 0054ce8a
    FSTP float ptr [ESP + 0x928]        ; 0054ce8c
    FLD float ptr [EBX + EAX*0x4]       ; 0054ce93
    FMUL float ptr [ESP + 0x928]        ; 0054ce96
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0054ce9d
    FMUL float ptr [ESP + 0x928]        ; 0054cea1
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0054cea8
    FMUL float ptr [ESP + 0x928]        ; 0054ceac
    LEA EDI,[ESP + 0x8b8]               ; 0054ceb3
    LEA ESI,[ESP + 0x8dc]               ; 0054ceba
    FXCH ST2                            ; 0054cec1
    FSTP float ptr [ESP + 0x8dc]        ; 0054cec3
    FSTP float ptr [ESP + 0x8e0]        ; 0054ceca
    FSTP float ptr [ESP + 0x8e4]        ; 0054ced1
    MOVSD ES:EDI,ESI                    ; 0054ced8
    MOVSD ES:EDI,ESI                    ; 0054ced9
    MOVSD ES:EDI,ESI                    ; 0054ceda
    FLD float ptr [ESP + 0x8b8]         ; 0054cedb
    FLD float ptr [ESP + 0x8bc]         ; 0054cee2
    FLD float ptr [ESP + 0x8c0]         ; 0054cee9
    LEA EDI,[ESP + 0x8f4]               ; 0054cef0
    LEA ESI,[ESP + 0x900]               ; 0054cef7
    FXCH ST2                            ; 0054cefe
    FADD float ptr [ESP + 0x894]        ; 0054cf00
    FXCH                                ; 0054cf07
    FADD float ptr [ESP + 0x898]        ; 0054cf09
    FXCH ST2                            ; 0054cf10
    FADD float ptr [ESP + 0x89c]        ; 0054cf12
    FXCH                                ; 0054cf19
    FSTP float ptr [ESP + 0x900]        ; 0054cf1b
    FXCH                                ; 0054cf22
    FSTP float ptr [ESP + 0x904]        ; 0054cf24
    FSTP float ptr [ESP + 0x908]        ; 0054cf2b
    MOVSD ES:EDI,ESI                    ; 0054cf32
    MOVSD ES:EDI,ESI                    ; 0054cf33
    MOVSD ES:EDI,ESI                    ; 0054cf34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf35
    FLD float ptr [ESP + 0x8f4]         ; 0054cf38
    FMUL float ptr [EAX + 0x508]        ; 0054cf3f
    FLD float ptr [ESP + 0x8f8]         ; 0054cf45
    FMUL float ptr [EAX + 0x50c]        ; 0054cf4c
    FLD float ptr [ESP + 0x8fc]         ; 0054cf52
    FMUL float ptr [EAX + 0x510]        ; 0054cf59
    FXCH ST2                            ; 0054cf5f
    FST float ptr [ESP + 0x8f4]         ; 0054cf61
    FLD float ptr [EBP + 0x20]          ; 0054cf68
    FXCH                                ; 0054cf6b
    FMUL ST1                            ; 0054cf6d
    FXCH ST2                            ; 0054cf6f
    FST float ptr [ESP + 0x8f8]         ; 0054cf71
    FMUL ST1                            ; 0054cf78
    FXCH ST3                            ; 0054cf7a
    FST float ptr [ESP + 0x8fc]         ; 0054cf7c
    FMUL ST1                            ; 0054cf83
    FLD1                                ; 0054cf85
    FSUBRP ST2,ST0                      ; 0054cf87
    LEA EBX,[EAX + 0x6a4]               ; 0054cf89
    LEA EDI,[ESP + 0x918]               ; 0054cf8f
    LEA ESI,[ESP + 0x8a0]               ; 0054cf96
    FXCH ST2                            ; 0054cf9d
    FSTP float ptr [ESP + 0x8a0]        ; 0054cf9f
    FXCH ST2                            ; 0054cfa6
    FSTP float ptr [ESP + 0x8a4]        ; 0054cfa8
    FSTP float ptr [ESP + 0x8a8]        ; 0054cfaf
    MOVSD ES:EDI,ESI                    ; 0054cfb6
    MOVSD ES:EDI,ESI                    ; 0054cfb7
    MOVSD ES:EDI,ESI                    ; 0054cfb8
    FSTP float ptr [ESP + 0x930]        ; 0054cfb9
    FLD float ptr [EBX]                 ; 0054cfc0
    FMUL float ptr [ESP + 0x930]        ; 0054cfc2
    FLD float ptr [EBX + 0x4]           ; 0054cfc9
    FMUL float ptr [ESP + 0x930]        ; 0054cfcc
    FLD float ptr [EBX + 0x8]           ; 0054cfd3
    FMUL float ptr [ESP + 0x930]        ; 0054cfd6
    LEA EDI,[ESP + 0x8d0]               ; 0054cfdd
    LEA ESI,[ESP + 0x8ac]               ; 0054cfe4
    FXCH ST2                            ; 0054cfeb
    FSTP float ptr [ESP + 0x8ac]        ; 0054cfed
    FSTP float ptr [ESP + 0x8b0]        ; 0054cff4
    FSTP float ptr [ESP + 0x8b4]        ; 0054cffb
    MOVSD ES:EDI,ESI                    ; 0054d002
    MOVSD ES:EDI,ESI                    ; 0054d003
    MOVSD ES:EDI,ESI                    ; 0054d004
    LEA EAX,[ESP + 0x90c]               ; 0054d005
    FLD float ptr [ESP + 0x8d0]         ; 0054d00c
    FLD float ptr [ESP + 0x8d4]         ; 0054d013
    FLD float ptr [ESP + 0x8d8]         ; 0054d01a
    LEA EDI,[ESP + 0x90c]               ; 0054d021
    LEA ESI,[ESP + 0x8e8]               ; 0054d028
    FXCH ST2                            ; 0054d02f
    FADD float ptr [ESP + 0x918]        ; 0054d031
    FXCH                                ; 0054d038
    FADD float ptr [ESP + 0x91c]        ; 0054d03a
    FXCH ST2                            ; 0054d041
    FADD float ptr [ESP + 0x920]        ; 0054d043
    FXCH                                ; 0054d04a
    FSTP float ptr [ESP + 0x8e8]        ; 0054d04c
    FXCH                                ; 0054d053
    FSTP float ptr [ESP + 0x8ec]        ; 0054d055
    FSTP float ptr [ESP + 0x8f0]        ; 0054d05c
    MOVSD ES:EDI,ESI                    ; 0054d063
    MOVSD ES:EDI,ESI                    ; 0054d064
    MOVSD ES:EDI,ESI                    ; 0054d065
    CMP EBX,EAX                         ; 0054d066
    JZ 0x0054ccad                       ; 0054d068
        ;   XREF to: 0054ccad (CONDITIONAL_JUMP)  ; LAB_0054ccad
    MOV EAX,dword ptr [ESP + 0x90c]     ; 0054d06e
    MOV dword ptr [EBX],EAX             ; 0054d075
    MOV EAX,dword ptr [ESP + 0x910]     ; 0054d077
    MOV dword ptr [EBX + 0x4],EAX       ; 0054d07e
    MOV EAX,dword ptr [ESP + 0x914]     ; 0054d081
    MOV dword ptr [EBX + 0x8],EAX       ; 0054d088
    MOV ESP,EBP                         ; 0054d08b
    POP EBP                             ; 0054d08d
    POP EDI                             ; 0054d08e
    POP ESI                             ; 0054d08f
    POP EBX                             ; 0054d090
    RET                                 ; 0054d091
    CMP EDI,0x1                         ; 0054d092
        ;   Label: LAB_0054d092
    JNZ 0x0054d390                      ; 0054d095
        ;   XREF to: 0054d390 (CONDITIONAL_JUMP)  ; LAB_0054d390
    XOR EDI,EDI                         ; 0054d09b
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054d09d
    MOV dword ptr [ESP + 0x960],EDI     ; 0054d0a3
    TEST EDX,EDX                        ; 0054d0aa
    JLE 0x0054d122                      ; 0054d0ac
        ;   XREF to: 0054d122 (CONDITIONAL_JUMP)  ; LAB_0054d122
    MOV dword ptr [ESP + 0x940],EDI     ; 0054d0ae
    MOV dword ptr [ESP + 0x958],EDI     ; 0054d0b5
    MOV EAX,dword ptr [EBP + 0x24]      ; 0054d0bc
        ;   Label: LAB_0054d0bc
    PUSH EAX                            ; 0054d0bf
    MOV EDX,dword ptr [ESP + 0x964]     ; 0054d0c0
    PUSH EDX                            ; 0054d0c7
    PUSH EBX                            ; 0054d0c8
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054d0c9
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054d0ce
    MOV ESI,dword ptr [ESP + 0x958]     ; 0054d0d1
    MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX ; 0054d0d8
    TEST EAX,EAX                        ; 0054d0df
    JGE 0x0054d2a1                      ; 0054d0e1
        ;   XREF to: 0054d2a1 (CONDITIONAL_JUMP)  ; LAB_0054d2a1
    MOV EDI,dword ptr [ESP + 0x958]     ; 0054d0e7
        ;   Label: LAB_0054d0e7
    MOV EAX,dword ptr [ESP + 0x940]     ; 0054d0ee
    MOV EDX,dword ptr [ESP + 0x960]     ; 0054d0f5
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054d0fc
    ADD EDI,0x4                         ; 0054d102
    ADD EAX,0x10                        ; 0054d105
    INC EDX                             ; 0054d108
    MOV dword ptr [ESP + 0x958],EDI     ; 0054d109
    MOV dword ptr [ESP + 0x940],EAX     ; 0054d110
    MOV dword ptr [ESP + 0x960],EDX     ; 0054d117
    CMP EDX,ECX                         ; 0054d11e
    JL 0x0054d0bc                       ; 0054d120
        ;   XREF to: 0054d0bc (CONDITIONAL_JUMP)  ; LAB_0054d0bc
    MOV ESI,dword ptr [EBP + 0x24]      ; 0054d122
        ;   Label: LAB_0054d122
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054d125
    ADD EAX,ESI                         ; 0054d12c
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 0054d12e
    TEST EDI,EDI                        ; 0054d135
    JL 0x0054d16f                       ; 0054d137
        ;   XREF to: 0054d16f (CONDITIONAL_JUMP)  ; LAB_0054d16f
    MOV ESI,dword ptr [ESP + 0x92c]     ; 0054d139
    PUSH dword ptr [ESP]                ; 0054d140
    PUSH ESI                            ; 0054d143
    MOV EAX,dword ptr [ESP + 0x92c]     ; 0054d144
    PUSH EAX                            ; 0054d14b
    PUSH EDI                            ; 0054d14c
    PUSH EBX                            ; 0054d14d
    LEA ESI,[ESP + 0x828]               ; 0054d14e
    CALL core_skeleton.cpp_FUN_00548140 ; 0054d155
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    SHL EDI,0x4                         ; 0054d15a
    ADD ESP,0x14                        ; 0054d15d
    LEA ESI,[ESP + 0x814]               ; 0054d160
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0054d167
    MOVSD ES:EDI,ESI                    ; 0054d16b
    MOVSD ES:EDI,ESI                    ; 0054d16c
    MOVSD ES:EDI,ESI                    ; 0054d16d
    MOVSD ES:EDI,ESI                    ; 0054d16e
    XOR EDX,EDX                         ; 0054d16f
        ;   Label: LAB_0054d16f
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054d171
    MOV dword ptr [ESP + 0x95c],EDX     ; 0054d177
    TEST ECX,ECX                        ; 0054d17e
    JLE 0x0054ce19                      ; 0054d180
        ;   XREF to: 0054ce19 (CONDITIONAL_JUMP)  ; LAB_0054ce19
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d186
    ADD EAX,0x6b0                       ; 0054d189
    MOV dword ptr [ESP + 0x934],EAX     ; 0054d18e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d195
    MOV dword ptr [ESP + 0x950],EDX     ; 0054d198
    MOV dword ptr [ESP + 0x948],EAX     ; 0054d19f
    MOV EAX,dword ptr [ESP + 0x934]     ; 0054d1a6
    MOV dword ptr [ESP + 0x954],EBX     ; 0054d1ad
    MOV dword ptr [ESP + 0x94c],EAX     ; 0054d1b4
    MOV EAX,dword ptr [ESP + 0x950]     ; 0054d1bb
        ;   Label: LAB_0054d1bb
    CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0 ; 0054d1c2
    JL 0x0054d23b                       ; 0054d1ca
        ;   XREF to: 0054d23b (CONDITIONAL_JUMP)  ; LAB_0054d23b
    MOV ESI,dword ptr [ESP + 0x95c]     ; 0054d1cc
    MOV EAX,dword ptr [ESP + 0x954]     ; 0054d1d3
    SHL ESI,0x4                         ; 0054d1da
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054d1dd
    MOV dword ptr [ESP + 0x938],ESI     ; 0054d1e3
    TEST EAX,EAX                        ; 0054d1ea
    JGE 0x0054d2e7                      ; 0054d1ec
        ;   XREF to: 0054d2e7 (CONDITIONAL_JUMP)  ; LAB_0054d2e7
    LEA EDI,[ESP + 0x834]               ; 0054d1f2
    LEA ESI,[ESP + ESI*0x1 + 0x4]       ; 0054d1f9
    MOVSD ES:EDI,ESI                    ; 0054d1fd
        ;   Label: LAB_0054d1fd
    MOVSD ES:EDI,ESI                    ; 0054d1fe
    MOVSD ES:EDI,ESI                    ; 0054d1ff
    MOVSD ES:EDI,ESI                    ; 0054d200
    LEA EAX,[ESP + 0x834]               ; 0054d201
    PUSH dword ptr [EBP + 0x20]         ; 0054d208
    PUSH EAX                            ; 0054d20b
    MOV ESI,dword ptr [ESP + 0x954]     ; 0054d20c
    PUSH ESI                            ; 0054d213
    LEA ESI,[ESP + 0x890]               ; 0054d214
    CALL core_xform.cpp_FUN_00585b20    ; 0054d21b
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    ADD ESP,0xc                         ; 0054d220
    MOV EDI,dword ptr [ESP + 0x948]     ; 0054d223
    LEA ESI,[ESP + 0x884]               ; 0054d22a
    LEA EDI,[EDI + 0x6b0]               ; 0054d231
    MOVSD ES:EDI,ESI                    ; 0054d237
    MOVSD ES:EDI,ESI                    ; 0054d238
    MOVSD ES:EDI,ESI                    ; 0054d239
    MOVSD ES:EDI,ESI                    ; 0054d23a
    MOV EDX,dword ptr [ESP + 0x950]     ; 0054d23b
        ;   Label: LAB_0054d23b
    MOV ECX,dword ptr [ESP + 0x954]     ; 0054d242
    MOV ESI,dword ptr [ESP + 0x948]     ; 0054d249
    MOV EDI,dword ptr [ESP + 0x94c]     ; 0054d250
    MOV EAX,dword ptr [ESP + 0x95c]     ; 0054d257
    ADD EDX,0x4                         ; 0054d25e
    ADD ECX,0x24                        ; 0054d261
    ADD ESI,0x10                        ; 0054d264
    ADD EDI,0x10                        ; 0054d267
    INC EAX                             ; 0054d26a
    MOV dword ptr [ESP + 0x950],EDX     ; 0054d26b
    MOV dword ptr [ESP + 0x954],ECX     ; 0054d272
    MOV dword ptr [ESP + 0x948],ESI     ; 0054d279
    MOV dword ptr [ESP + 0x94c],EDI     ; 0054d280
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 0054d287
    MOV dword ptr [ESP + 0x95c],EAX     ; 0054d28d
    CMP EAX,EDX                         ; 0054d294
    JGE 0x0054ce19                      ; 0054d296
        ;   XREF to: 0054ce19 (CONDITIONAL_JUMP)  ; LAB_0054ce19
    JMP 0x0054d1bb                      ; 0054d29c
        ;   XREF to: 0054d1bb (UNCONDITIONAL_JUMP)  ; LAB_0054d1bb
    MOV ESI,dword ptr [ESP + 0x92c]     ; 0054d2a1
        ;   Label: LAB_0054d2a1
    PUSH dword ptr [ESP]                ; 0054d2a8
    PUSH ESI                            ; 0054d2ab
    MOV EDI,dword ptr [ESP + 0x92c]     ; 0054d2ac
    PUSH EDI                            ; 0054d2b3
    MOV EAX,dword ptr [ESP + 0x96c]     ; 0054d2b4
    PUSH EAX                            ; 0054d2bb
    PUSH EBX                            ; 0054d2bc
    LEA ESI,[ESP + 0x7f8]               ; 0054d2bd
    CALL core_skeleton.cpp_FUN_00548140 ; 0054d2c4
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054d2c9
    MOV EDI,dword ptr [ESP + 0x940]     ; 0054d2cc
    LEA ESI,[ESP + 0x7e4]               ; 0054d2d3
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0054d2da
    MOVSD ES:EDI,ESI                    ; 0054d2de
    MOVSD ES:EDI,ESI                    ; 0054d2df
    MOVSD ES:EDI,ESI                    ; 0054d2e0
    MOVSD ES:EDI,ESI                    ; 0054d2e1
    JMP 0x0054d0e7                      ; 0054d2e2
        ;   XREF to: 0054d0e7 (UNCONDITIONAL_JUMP)  ; LAB_0054d0e7
    SHL EAX,0x4                         ; 0054d2e7
        ;   Label: LAB_0054d2e7
    MOV dword ptr [ESP + 0x968],EAX     ; 0054d2ea
    LEA EAX,[ESP + 0x4]                 ; 0054d2f1
    ADD EAX,dword ptr [ESP + 0x968]     ; 0054d2f5
    PUSH EAX                            ; 0054d2fc
    LEA ESI,[ESP + 0x878]               ; 0054d2fd
    LEA EDI,[ESP + 0x858]               ; 0054d304
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054d30b
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054d310
    LEA EAX,[ESP + 0x854]               ; 0054d313
    MOV EDX,dword ptr [ESP + 0x938]     ; 0054d31a
    PUSH EAX                            ; 0054d321
    LEA EAX,[ESP + 0x8]                 ; 0054d322
    LEA ESI,[ESP + 0x878]               ; 0054d326
    ADD EAX,EDX                         ; 0054d32d
    MOVSD ES:EDI,ESI                    ; 0054d32f
    MOVSD ES:EDI,ESI                    ; 0054d330
    MOVSD ES:EDI,ESI                    ; 0054d331
    MOVSD ES:EDI,ESI                    ; 0054d332
    PUSH EAX                            ; 0054d333
    LEA ESI,[ESP + 0x7fc]               ; 0054d334
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054d33b
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054d340
    MOV EAX,dword ptr [ESP + 0x934]     ; 0054d343
    MOV ECX,dword ptr [ESP + 0x968]     ; 0054d34a
    LEA EDI,[ESP + 0x804]               ; 0054d351
    ADD EAX,ECX                         ; 0054d358
    LEA ESI,[ESP + 0x7f4]               ; 0054d35a
    PUSH EAX                            ; 0054d361
    LEA EAX,[ESP + 0x808]               ; 0054d362
    MOVSD ES:EDI,ESI                    ; 0054d369
    MOVSD ES:EDI,ESI                    ; 0054d36a
    MOVSD ES:EDI,ESI                    ; 0054d36b
    MOVSD ES:EDI,ESI                    ; 0054d36c
    PUSH EAX                            ; 0054d36d
    LEA ESI,[ESP + 0x86c]               ; 0054d36e
    LEA EDI,[ESP + 0x83c]               ; 0054d375
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054d37c
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x86c]               ; 0054d381
    ADD ESP,0x8                         ; 0054d388
    JMP 0x0054d1fd                      ; 0054d38b
        ;   XREF to: 0054d1fd (UNCONDITIONAL_JUMP)  ; LAB_0054d1fd
    MOV ECX,0x5d1fd4                    ; 0054d390 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054d390
    MOV ESI,0xa98                       ; 0054d395
    PUSH 0x5d1fe9                       ; 0054d39a | = "Write me!"
    MOV dword ptr [0x01d71de0],ECX      ; 0054d39f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054d3a5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054d3ab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054d3b0
    JMP 0x0054ce19                      ; 0054d3b3
        ;   XREF to: 0054ce19 (UNCONDITIONAL_JUMP)  ; LAB_0054ce19

