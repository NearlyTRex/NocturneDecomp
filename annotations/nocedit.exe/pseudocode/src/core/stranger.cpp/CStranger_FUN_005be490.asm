; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_stranger_cpp_CStranger_FUN_005be490(void)
;
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bbb2d
;
; Referenced Globals:
;   float FLOAT_006537ec = 0.5
;   int INT_03f6bb00
;   int INT_03f6bb04
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be490
        ;   Label: core_stranger.cpp_CStranger_FUN_005be490
    PUSH ESI                            ; 005be491
    PUSH EDI                            ; 005be492
    SUB ESP,0x24                        ; 005be493
    MOV ESI,dword ptr [ESP + 0x38]      ; 005be496
    MOV EDX,dword ptr [0x03f6bb04]      ; 005be49a | INT_03f6bb04
    PUSH EDX                            ; 005be4a0
    LEA EAX,[ESP + 0x4]                 ; 005be4a1
    MOV EDI,dword ptr [ESP + 0x38]      ; 005be4a5
    PUSH EAX                            ; 005be4a9
    ADD EDI,0x158                       ; 005be4aa
    PUSH EDI                            ; 005be4b0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005be4b1
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005be4b6
    MOV ECX,dword ptr [0x03f6bb00]      ; 005be4b9 | INT_03f6bb00
    PUSH ECX                            ; 005be4bf
    MOV EBX,EAX                         ; 005be4c0
    LEA EAX,[ESP + 0x1c]                ; 005be4c2
    PUSH EAX                            ; 005be4c6
    PUSH EDI                            ; 005be4c7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005be4c8
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [EAX]                 ; 005be4cd
    FADD float ptr [EBX]                ; 005be4cf
    ADD ESP,0xc                         ; 005be4d1
    FSTP float ptr [ESP + 0xc]          ; 005be4d4
    FLD float ptr [EAX + 0x4]           ; 005be4d8
    FADD float ptr [EBX + 0x4]          ; 005be4db
    FLD float ptr [ESP + 0xc]           ; 005be4de
    FXCH                                ; 005be4e2
    FSTP float ptr [ESP + 0x10]         ; 005be4e4
    FLD float ptr [EAX + 0x8]           ; 005be4e8
    FADD float ptr [EBX + 0x8]          ; 005be4eb
    FXCH                                ; 005be4ee
    FLD float ptr [0x006537ec]          ; 005be4f0 | FLOAT_006537ec
    FXCH                                ; 005be4f6
    FMUL ST1                            ; 005be4f8
    FXCH ST2                            ; 005be4fa
    FSTP float ptr [ESP + 0x14]         ; 005be4fc
    FXCH                                ; 005be500
    FSTP float ptr [ESI]                ; 005be502
    FLD float ptr [ESP + 0x10]          ; 005be504
    FMUL ST1                            ; 005be508
    FSTP float ptr [ESI + 0x4]          ; 005be50a
    FMUL float ptr [ESP + 0x14]         ; 005be50d
    MOV EAX,ESI                         ; 005be511
    FSTP float ptr [ESI + 0x8]          ; 005be513
    ADD ESP,0x24                        ; 005be516
    POP EDI                             ; 005be519
    POP ESI                             ; 005be51a
    POP EBX                             ; 005be51b
    RET                                 ; 005be51c

