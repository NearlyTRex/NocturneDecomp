; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet *this_ptr,int mirror_index,int enable_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mirror_index
; int              Stack[0xc]:4   enable_flag
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e54a
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 005503e7
;   core_set.cpp_FUN_00550580 at 005506b5
;   core_set.cpp_FUN_00551480 at 00551647
;   core_set.cpp_FUN_005516c0 at 00551870
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_007c6120
;   undefined4 DAT_01bc120c
;   undefined4 DAT_020af5ac
;   undefined4 DAT_020af5b0
;   undefined4 DAT_020af5b4
;   undefined4 DAT_020af5b8
;   undefined4 DAT_020af5bc
;   undefined4 DAT_020af5c0
;   undefined4 DAT_020af5c4
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_00484170
;   engine_matrix.c_FUN_00483ae0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_FUN_00483bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555460
        ;   Label: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460
    PUSH ESI                            ; 00555461
    PUSH EDI                            ; 00555462
    PUSH EBP                            ; 00555463
    SUB ESP,0x34                        ; 00555464
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00555467
    MOV EDX,dword ptr [0x00612560]      ; 0055546b | DAT_00612560
    PUSH EDX                            ; 00555471 | DAT_01bc120c
    LEA ESI,[ESP + 0x4]                 ; 00555472
    LEA EDI,[ESP + 0x28]                ; 00555476
    CALL engine_matrix.c_FUN_00483ae0   ; 0055547a
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x4]                 ; 0055547f
    ADD ESP,0x4                         ; 00555483
    LEA EAX,[ESP + 0x24]                ; 00555486
    MOVSD ES:EDI,ESI                    ; 0055548a
    MOVSD ES:EDI,ESI                    ; 0055548b
    MOVSD ES:EDI,ESI                    ; 0055548c
    CMP EAX,0x20af5ac                   ; 0055548d
    JZ 0x005554af                       ; 00555492
        ;   XREF to: 005554af (CONDITIONAL_JUMP)  ; LAB_005554af
    MOV EAX,dword ptr [ESP + 0x24]      ; 00555494
    MOV [0x020af5ac],EAX                ; 00555498 | DAT_020af5ac
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055549d
    MOV [0x020af5b0],EAX                ; 005554a1 | DAT_020af5b0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005554a6
    MOV [0x020af5b4],EAX                ; 005554aa | DAT_020af5b4
    MOV ECX,dword ptr [0x00612560]      ; 005554af | DAT_00612560
        ;   Label: LAB_005554af
    PUSH ECX                            ; 005554b5 | DAT_01bc120c
    LEA ESI,[ESP + 0x10]                ; 005554b6
    LEA EDI,[ESP + 0x1c]                ; 005554ba
    CALL engine_matrix.c_FUN_00483b70   ; 005554be
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    LEA ESI,[ESP + 0x10]                ; 005554c3
    ADD ESP,0x4                         ; 005554c7
    LEA EAX,[ESP + 0x18]                ; 005554ca
    MOVSD ES:EDI,ESI                    ; 005554ce
    MOVSD ES:EDI,ESI                    ; 005554cf
    MOVSD ES:EDI,ESI                    ; 005554d0
    CMP EAX,0x20af5b8                   ; 005554d1
    JZ 0x005554f3                       ; 005554d6
        ;   XREF to: 005554f3 (CONDITIONAL_JUMP)  ; LAB_005554f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005554d8
    MOV [0x020af5b8],EAX                ; 005554dc | DAT_020af5b8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005554e1
    MOV [0x020af5bc],EAX                ; 005554e5 | DAT_020af5bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005554ea
    MOV [0x020af5c0],EAX                ; 005554ee | DAT_020af5c0
    MOV ESI,dword ptr [0x00612560]      ; 005554f3 | DAT_00612560
        ;   Label: LAB_005554f3
    PUSH ESI                            ; 005554f9 | DAT_01bc120c
    CALL engine_matrix.c_FUN_00483bf0   ; 005554fa
        ;   XREF to: 00483bf0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483bf0()
    MOV dword ptr [ESP + 0x34],EAX      ; 005554ff
    LEA ESI,[EBX*0x4 + 0x0]             ; 00555503
    FLD float ptr [ESP + 0x34]          ; 0055550a
    ADD ESP,0x4                         ; 0055550e
    FSTP float ptr [0x020af5c4]         ; 00555511 | DAT_020af5c4
    MOV EDI,dword ptr [ESP + 0x48]      ; 00555517
    PUSH dword ptr [0x020af5c4]         ; 0055551b | DAT_020af5c4
    ADD ESI,EDI                         ; 00555521
    PUSH 0x20af5b8                      ; 00555523 | DAT_020af5b8
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00555528
    PUSH 0x20af5ac                      ; 0055552e | DAT_020af5ac
    ADD EAX,0x1ec                       ; 00555533
    PUSH EAX                            ; 00555538
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0 ; 00555539
        ;   XREF to: 005188e0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0(CMirrorReflection * this_ptr, CVector3f * camera_position, CVector3f * camera_rotation, float projection_scale)
    ADD ESP,0x10                        ; 0055553e
    PUSH 0x1                            ; 00555541
    MOV EBP,dword ptr [0x00612560]      ; 00555543 | DAT_00612560
    PUSH EBP                            ; 00555549 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190 ; 0055554a
        ;   XREF to: 00484190 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0055554f
    INC EBX                             ; 00555552
    MOV EAX,[0x007c6120]                ; 00555553 | DAT_007c6120
    PUSH EBX                            ; 00555558
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00555559
    PUSH EAX                            ; 0055555c
    CALL dword ptr [EDX + 0x10]         ; 0055555d
    ADD ESP,0x8                         ; 00555560
    PUSH EBX                            ; 00555563
    MOV EAX,[0x00612560]                ; 00555564 | DAT_00612560
    PUSH EAX                            ; 00555569 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_00484170 ; 0055556a
        ;   XREF to: 00484170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_00484170(CDemonRenderer * this_ptr, int alpha_mask)
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0055556f
    ADD EAX,0x1ec                       ; 00555575
    ADD ESP,0x8                         ; 0055557a
    MOV dword ptr [EDI + 0x161668],EAX  ; 0055557d
    ADD ESP,0x34                        ; 00555583
    POP EBP                             ; 00555586
    POP EDI                             ; 00555587
    POP ESI                             ; 00555588
    POP EBX                             ; 00555589
    RET                                 ; 0055558a

