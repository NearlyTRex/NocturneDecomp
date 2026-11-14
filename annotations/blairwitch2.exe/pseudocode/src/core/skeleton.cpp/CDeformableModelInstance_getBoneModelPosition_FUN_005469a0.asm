; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[43]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411cf2
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413601
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041dda7
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 at 0042aa62
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 00439626
;   core_doc.cpp_CDoc_doHeroAction_FUN_0045ca30 at 0045ceee
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 00450875
;   core_doc.cpp_FUN_00453250 at 004532f5
;   core_doc.cpp_FUN_00453cc0 at 00453ce2
;   core_doc.cpp_FUN_00453d80 at 00453ece
;   ... and 33 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005469a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
    PUSH EDI                            ; 005469a1
    PUSH EBP                            ; 005469a2
    SUB ESP,0x84                        ; 005469a3
    MOV EDI,dword ptr [ESP + 0x98]      ; 005469a9
    MOV EBX,ESI                         ; 005469b0
    MOV ESI,dword ptr [ESP + 0x94]      ; 005469b2
    TEST EDI,EDI                        ; 005469b9
    JGE 0x005469df                      ; 005469bb
        ;   XREF to: 005469df (CONDITIONAL_JUMP)  ; LAB_005469df
    LEA EDI,[ESP + 0x78]                ; 005469bd
    LEA ESI,[ESI + 0x6a4]               ; 005469c1
    MOVSD ES:EDI,ESI                    ; 005469c7
        ;   Label: LAB_005469c7
    MOVSD ES:EDI,ESI                    ; 005469c8
    MOVSD ES:EDI,ESI                    ; 005469c9
    LEA ESI,[ESP + 0x78]                ; 005469ca
    MOV EDI,EBX                         ; 005469ce
    MOVSD ES:EDI,ESI                    ; 005469d0
    MOVSD ES:EDI,ESI                    ; 005469d1
    MOVSD ES:EDI,ESI                    ; 005469d2
    MOV EAX,EBX                         ; 005469d3
    ADD ESP,0x84                        ; 005469d5
    POP EBP                             ; 005469db
    POP EDI                             ; 005469dc
    POP EBX                             ; 005469dd
    RET                                 ; 005469de
    PUSH ESI                            ; 005469df
        ;   Label: LAB_005469df
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005469e0
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV EBP,EAX                         ; 005469e5
    LEA EAX,[EDI*0x8 + 0x0]             ; 005469e7
    ADD EAX,EDI                         ; 005469ee
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x1d21c] ; 005469f0
    LEA EAX,[EDI*0x4 + 0x0]             ; 005469f7
    SUB EAX,EDI                         ; 005469fe
    LEA ECX,[ESI + 0x58]                ; 00546a00
    SHL EAX,0x2                         ; 00546a03
    ADD ESP,0x4                         ; 00546a06
    LEA EBP,[ECX + EAX*0x1]             ; 00546a09
    TEST EDX,EDX                        ; 00546a0c
    JGE 0x00546a4e                      ; 00546a0e
        ;   XREF to: 00546a4e (CONDITIONAL_JUMP)  ; LAB_00546a4e
    FLD float ptr [EBP]                 ; 00546a10
    FLD float ptr [EBP + 0x4]           ; 00546a13
    FLD float ptr [EBP + 0x8]           ; 00546a16
    LEA EDI,[ESP + 0x78]                ; 00546a19
    FXCH ST2                            ; 00546a1d
    FADD float ptr [ESI + 0x6a4]        ; 00546a1f
    FXCH                                ; 00546a25
    FADD float ptr [ESI + 0x6a8]        ; 00546a27
    FXCH ST2                            ; 00546a2d
    FADD float ptr [ESI + 0x6ac]        ; 00546a2f
    FXCH                                ; 00546a35
    FSTP float ptr [ESP + 0x60]         ; 00546a37
    FXCH                                ; 00546a3b
    FSTP float ptr [ESP + 0x64]         ; 00546a3d
    LEA ESI,[ESP + 0x60]                ; 00546a41
    FSTP float ptr [ESP + 0x68]         ; 00546a45
    JMP 0x005469c7                      ; 00546a49
        ;   XREF to: 005469c7 (UNCONDITIONAL_JUMP)  ; LAB_005469c7
    PUSH EDX                            ; 00546a4e
        ;   Label: LAB_00546a4e
    PUSH ESI                            ; 00546a4f
    LEA ESI,[ESP + 0x8]                 ; 00546a50
    LEA EDI,[ESP + 0x38]                ; 00546a54
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790 ; 00546a58
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 00546a5d
    ADD ESP,0x8                         ; 00546a62
    LEA EAX,[ESP + 0x30]                ; 00546a65
    MOV ESI,ESP                         ; 00546a69
    PUSH EAX                            ; 00546a6b
    MOVSD.REP ES:EDI,ESI                ; 00546a6c
    PUSH EBP                            ; 00546a6e
    LEA ESI,[ESP + 0x74]                ; 00546a6f
    LEA EDI,[ESP + 0x80]                ; 00546a73
    CALL core_xform.cpp_FUN_00591530    ; 00546a7a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x74]                ; 00546a7f
    ADD ESP,0x8                         ; 00546a83
    JMP 0x005469c7                      ; 00546a86
        ;   XREF to: 005469c7 (UNCONDITIONAL_JUMP)  ; LAB_005469c7

