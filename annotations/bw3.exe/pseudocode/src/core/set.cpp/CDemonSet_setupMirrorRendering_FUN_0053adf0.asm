; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet *this_ptr,int mirror_index,int enable_flag)
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533d0a
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 at 00535c07
;   core_set.cpp_FUN_00535da0 at 00535ed5
;   core_set.cpp_FUN_00536c90 at 00536f13
;   core_set.cpp_FUN_00536f90 at 00537202
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_021221d4
;   undefined4 DAT_021221d8
;   undefined4 DAT_021221dc
;   undefined4 DAT_021221e0
;   undefined4 DAT_021221e4
;   undefined4 DAT_021221e8
;   undefined4 DAT_021221ec
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850
;   engine_drender.cpp_FUN_0046d1c0
;   engine_drender.cpp_FUN_0046d250
;   engine_drender.cpp_FUN_0046d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053adf0
        ;   Label: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0
    PUSH ESI                            ; 0053adf1
    PUSH EDI                            ; 0053adf2
    PUSH EBP                            ; 0053adf3
    SUB ESP,0x34                        ; 0053adf4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0053adf7
    MOV EDX,dword ptr [0x005f2afc]      ; 0053adfb | DAT_005f2afc
    PUSH EDX                            ; 0053ae01 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x4]                 ; 0053ae02
    LEA EDI,[ESP + 0x28]                ; 0053ae06
    CALL engine_drender.cpp_FUN_0046d1c0 ; 0053ae0a
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1c0()
    LEA ESI,[ESP + 0x4]                 ; 0053ae0f
    ADD ESP,0x4                         ; 0053ae13
    LEA EAX,[ESP + 0x24]                ; 0053ae16
    MOVSD ES:EDI,ESI                    ; 0053ae1a
    MOVSD ES:EDI,ESI                    ; 0053ae1b
    MOVSD ES:EDI,ESI                    ; 0053ae1c
    CMP EAX,0x21221d4                   ; 0053ae1d
    JZ 0x0053ae3f                       ; 0053ae22
        ;   XREF to: 0053ae3f (CONDITIONAL_JUMP)  ; LAB_0053ae3f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0053ae24
    MOV [0x021221d4],EAX                ; 0053ae28 | DAT_021221d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053ae2d
    MOV [0x021221d8],EAX                ; 0053ae31 | DAT_021221d8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053ae36
    MOV [0x021221dc],EAX                ; 0053ae3a | DAT_021221dc
    MOV ECX,dword ptr [0x005f2afc]      ; 0053ae3f | DAT_005f2afc
        ;   Label: LAB_0053ae3f
    PUSH ECX                            ; 0053ae45 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x10]                ; 0053ae46
    LEA EDI,[ESP + 0x1c]                ; 0053ae4a
    CALL engine_drender.cpp_FUN_0046d250 ; 0053ae4e
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d250()
    LEA ESI,[ESP + 0x10]                ; 0053ae53
    ADD ESP,0x4                         ; 0053ae57
    LEA EAX,[ESP + 0x18]                ; 0053ae5a
    MOVSD ES:EDI,ESI                    ; 0053ae5e
    MOVSD ES:EDI,ESI                    ; 0053ae5f
    MOVSD ES:EDI,ESI                    ; 0053ae60
    CMP EAX,0x21221e0                   ; 0053ae61
    JZ 0x0053ae83                       ; 0053ae66
        ;   XREF to: 0053ae83 (CONDITIONAL_JUMP)  ; LAB_0053ae83
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053ae68
    MOV [0x021221e0],EAX                ; 0053ae6c | DAT_021221e0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053ae71
    MOV [0x021221e4],EAX                ; 0053ae75 | DAT_021221e4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053ae7a
    MOV [0x021221e8],EAX                ; 0053ae7e | DAT_021221e8
    MOV ESI,dword ptr [0x005f2afc]      ; 0053ae83 | DAT_005f2afc
        ;   Label: LAB_0053ae83
    PUSH ESI                            ; 0053ae89 | DAT_01bdd7e4
    CALL engine_drender.cpp_FUN_0046d2d0 ; 0053ae8a
        ;   XREF to: 0046d2d0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d2d0()
    MOV dword ptr [ESP + 0x34],EAX      ; 0053ae8f
    LEA ESI,[EBX*0x4 + 0x0]             ; 0053ae93
    FLD float ptr [ESP + 0x34]          ; 0053ae9a
    ADD ESP,0x4                         ; 0053ae9e
    FSTP float ptr [0x021221ec]         ; 0053aea1 | DAT_021221ec
    MOV EDI,dword ptr [ESP + 0x48]      ; 0053aea7
    PUSH dword ptr [0x021221ec]         ; 0053aeab | DAT_021221ec
    ADD ESI,EDI                         ; 0053aeb1
    PUSH 0x21221e0                      ; 0053aeb3 | DAT_021221e0
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0053aeb8
    PUSH 0x21221d4                      ; 0053aebe | DAT_021221d4
    ADD EAX,0x21c                       ; 0053aec3
    PUSH EAX                            ; 0053aec8
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0 ; 0053aec9
        ;   XREF to: 004f40b0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0(CMirrorReflection * this_ptr, CVector3f * camera_position, CVector3f * camera_rotation, float projection_scale)
    ADD ESP,0x10                        ; 0053aece
    PUSH 0x1                            ; 0053aed1
    MOV EBP,dword ptr [0x005f2afc]      ; 0053aed3 | DAT_005f2afc
    PUSH EBP                            ; 0053aed9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870 ; 0053aeda
        ;   XREF to: 0046d870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053aedf
    INC EBX                             ; 0053aee2
    MOV EAX,[0x007e2a54]                ; 0053aee3 | DAT_007e2a54
    PUSH EBX                            ; 0053aee8
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0053aee9
    PUSH EAX                            ; 0053aeec
    CALL dword ptr [EDX + 0x10]         ; 0053aeed
    ADD ESP,0x8                         ; 0053aef0
    PUSH EBX                            ; 0053aef3
    MOV EAX,[0x005f2afc]                ; 0053aef4 | DAT_005f2afc
    PUSH EAX                            ; 0053aef9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850 ; 0053aefa
        ;   XREF to: 0046d850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(CDemonRenderer * this_ptr, int alpha_mask)
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0053aeff
    ADD EAX,0x21c                       ; 0053af05
    ADD ESP,0x8                         ; 0053af0a
    MOV dword ptr [EDI + 0x161668],EAX  ; 0053af0d
    ADD ESP,0x34                        ; 0053af13
    POP EBP                             ; 0053af16
    POP EDI                             ; 0053af17
    POP ESI                             ; 0053af18
    POP EBX                             ; 0053af19
    RET                                 ; 0053af1a

