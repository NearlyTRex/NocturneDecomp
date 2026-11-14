; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_0047cc20(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; float            Stack[0xc]:4   spread_angle
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510 at 0047b68b
;
; Referenced Globals:
;   undefined4 DAT_005daeb5
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0047cf20
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cc20
        ;   Label: core_dracbrid.cpp_CDraculaBride_explode_FUN_0047cc20
    PUSH ESI                            ; 0047cc21
    PUSH EDI                            ; 0047cc22
    PUSH EBP                            ; 0047cc23
    MOV EBP,ESP                         ; 0047cc24
    SUB ESP,0xf4                        ; 0047cc26
    AND ESP,0xfffffff8                  ; 0047cc2c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047cc2f
    MOV EBX,dword ptr [EBP + 0x18]      ; 0047cc32
    MOV dword ptr [ESP],EAX             ; 0047cc35
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047cc38
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047cc3b
    MOV DL,byte ptr [ESI + 0x24a8]      ; 0047cc3e
    ADD EAX,0x158                       ; 0047cc44
    TEST DL,DL                          ; 0047cc49
    JZ 0x0047ccce                       ; 0047cc4b
        ;   XREF to: 0047ccce (CONDITIONAL_JUMP)  ; LAB_0047ccce
    PUSH EAX                            ; 0047cc51
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0047cc52
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047cc57
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0047cc5a
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047cc60
    CMP EAX,0x1                         ; 0047cc67
    JLE 0x0047ccce                      ; 0047cc6a
        ;   XREF to: 0047ccce (CONDITIONAL_JUMP)  ; LAB_0047ccce
    FLD float ptr [ESP]                 ; 0047cc6c
    FLDZ                                ; 0047cc6f
    FCOMPP                              ; 0047cc71
    FNSTSW AX                           ; 0047cc73
    SAHF                                ; 0047cc75
    JBE 0x0047cc7f                      ; 0047cc76
        ;   XREF to: 0047cc7f (CONDITIONAL_JUMP)  ; LAB_0047cc7f
    MOV dword ptr [ESP],0x41a00000      ; 0047cc78
    XOR ECX,ECX                         ; 0047cc7f
        ;   Label: LAB_0047cc7f
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0047cc81
    MOV dword ptr [ESP + 0xec],ECX      ; 0047cc88
    TEST ESI,ESI                        ; 0047cc8f
    JLE 0x0047ccce                      ; 0047cc91
        ;   XREF to: 0047ccce (CONDITIONAL_JUMP)  ; LAB_0047ccce
    TEST EBX,EBX                        ; 0047cc93
        ;   Label: LAB_0047cc93
    JNZ 0x0047cdca                      ; 0047cc95
        ;   XREF to: 0047cdca (CONDITIONAL_JUMP)  ; LAB_0047cdca
    MOV ECX,dword ptr [EBP + 0x20]      ; 0047cc9b
        ;   Label: LAB_0047cc9b
    PUSH ECX                            ; 0047cc9e
    PUSH EBX                            ; 0047cc9f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 0047cca0
    PUSH ESI                            ; 0047cca7
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047cca8
    PUSH EDI                            ; 0047ccab
    CALL core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0047cf20 ; 0047ccac
        ;   XREF to: 0047cf20 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0047cf20(CDraculaBride * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
        ;   Label: LAB_0047ccac
    ADD ESP,0x10                        ; 0047ccb1
    MOV EDI,dword ptr [ESP + 0xec]      ; 0047ccb4
    INC EDI                             ; 0047ccbb
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0047ccbc
    MOV dword ptr [ESP + 0xec],EDI      ; 0047ccc3
    CMP EDI,EDX                         ; 0047ccca
    JL 0x0047cc93                       ; 0047cccc
        ;   XREF to: 0047cc93 (CONDITIONAL_JUMP)  ; LAB_0047cc93
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047ccce
        ;   Label: LAB_0047ccce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047ccd1
    PUSH EDX                            ; 0047ccd4
    MOV EAX,dword ptr [EAX + 0x154]     ; 0047ccd5
    LEA ESI,[ESP + 0x30]                ; 0047ccdb
    LEA EDI,[ESP + 0x48]                ; 0047ccdf
    CALL dword ptr [EAX + 0x1c]         ; 0047cce3
    MOV ECX,0x6                         ; 0047cce6
    LEA ESI,[ESP + 0x30]                ; 0047cceb
    ADD ESP,0x4                         ; 0047ccef
    MOVSD.REP ES:EDI,ESI                ; 0047ccf2
    FLD float ptr [ESP + 0x44]          ; 0047ccf4
    FLD float ptr [ESP + 0x48]          ; 0047ccf8
    LEA ESI,[ESP + 0x44]                ; 0047ccfc
    FLD float ptr [ESP + 0x4c]          ; 0047cd00
    LEA EDI,[ESP + 0x98]                ; 0047cd04
    FXCH ST2                            ; 0047cd0b
    FADD float ptr [ESI + 0xc]          ; 0047cd0d
    FXCH                                ; 0047cd10
    FADD float ptr [ESI + 0x10]         ; 0047cd12
    FXCH ST2                            ; 0047cd15
    FADD float ptr [ESI + 0x14]         ; 0047cd17
    FXCH                                ; 0047cd1a
    FSTP float ptr [ESP + 0xc8]         ; 0047cd1c
    FXCH                                ; 0047cd23
    FSTP float ptr [ESP + 0xcc]         ; 0047cd25
    LEA ESI,[ESP + 0xc8]                ; 0047cd2c
    FSTP float ptr [ESP + 0xd0]         ; 0047cd33
    MOVSD ES:EDI,ESI                    ; 0047cd3a
    MOVSD ES:EDI,ESI                    ; 0047cd3b
    MOVSD ES:EDI,ESI                    ; 0047cd3c
    FLD float ptr [0x005daeb5]          ; 0047cd3d | DAT_005daeb5
    FLD float ptr [ESP + 0x98]          ; 0047cd43
    FMUL ST1                            ; 0047cd4a
    FLD float ptr [ESP + 0x9c]          ; 0047cd4c
    FMUL ST2                            ; 0047cd53
    LEA EAX,[ESP + 0x8c]                ; 0047cd55
    FLD float ptr [ESP + 0xa0]          ; 0047cd5c
    FMULP ST3                           ; 0047cd63
    PUSH EAX                            ; 0047cd65
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047cd66
    LEA EDI,[ESP + 0x90]                ; 0047cd69
    LEA ESI,[ESP + 0xc0]                ; 0047cd70
    FXCH                                ; 0047cd77
    FSTP float ptr [ESP + 0xc0]         ; 0047cd79
    FSTP float ptr [ESP + 0xc4]         ; 0047cd80
    FSTP float ptr [ESP + 0xc8]         ; 0047cd87
    MOVSD ES:EDI,ESI                    ; 0047cd8e
    MOVSD ES:EDI,ESI                    ; 0047cd8f
    MOVSD ES:EDI,ESI                    ; 0047cd90
    PUSH ECX                            ; 0047cd91
    LEA ESI,[ESP + 0x64]                ; 0047cd92
    LEA EDI,[ESP + 0x70]                ; 0047cd96
    CALL core_actor.cpp_FUN_00408b40    ; 0047cd9a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0047cd9f
    LEA ESI,[ESP + 0x5c]                ; 0047cda2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047cda6
    MOVSD ES:EDI,ESI                    ; 0047cda9
    MOVSD ES:EDI,ESI                    ; 0047cdaa
    MOVSD ES:EDI,ESI                    ; 0047cdab
    CMP dword ptr [EAX + 0xb9e8],0x0    ; 0047cdac
    JZ 0x0047cef6                       ; 0047cdb3
        ;   XREF to: 0047cef6 (CONDITIONAL_JUMP)  ; LAB_0047cef6
    MOV dword ptr [EAX + 0x3120],0x0    ; 0047cdb9
    MOV ESP,EBP                         ; 0047cdc3
    POP EBP                             ; 0047cdc5
    POP EDI                             ; 0047cdc6
    POP ESI                             ; 0047cdc7
    POP EBX                             ; 0047cdc8
    RET                                 ; 0047cdc9
    FLD float ptr [ESP]                 ; 0047cdca
        ;   Label: LAB_0047cdca
    FLDZ                                ; 0047cdcd
    FCOMPP                              ; 0047cdcf
    FNSTSW AX                           ; 0047cdd1
    SAHF                                ; 0047cdd3
    JNC 0x0047cc9b                      ; 0047cdd4
        ;   XREF to: 0047cc9b (CONDITIONAL_JUMP)  ; LAB_0047cc9b
    PUSH EBX                            ; 0047cdda
    LEA ESI,[ESP + 0x78]                ; 0047cddb
    LEA EDI,[ESP + 0xb4]                ; 0047cddf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0047cde6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 0047cdeb
    LEA ESI,[ESP + 0x74]                ; 0047cdee
    PUSH dword ptr [ESP]                ; 0047cdf2
    FLD float ptr [ESP + 0x4]           ; 0047cdf5
    FCHS                                ; 0047cdf9
    FSTP float ptr [ESP + 0xe8]         ; 0047cdfb
    PUSH dword ptr [ESP + 0xe8]         ; 0047ce02
    MOVSD ES:EDI,ESI                    ; 0047ce09
    MOVSD ES:EDI,ESI                    ; 0047ce0a
    MOVSD ES:EDI,ESI                    ; 0047ce0b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047ce0c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0047ce11
    FLD float ptr [ESP + 0xf8]          ; 0047ce18
    ADD ESP,0x8                         ; 0047ce1f
    PUSH dword ptr [ESP]                ; 0047ce22
    FADD float ptr [ESP + 0xb8]         ; 0047ce25
    PUSH dword ptr [ESP + 0xe8]         ; 0047ce2c
    FSTP float ptr [ESP + 0xbc]         ; 0047ce33
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0047ce3a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0047ce3f
    FLD float ptr [ESP + 0xf8]          ; 0047ce46
    ADD ESP,0x8                         ; 0047ce4d
    LEA ESI,[ESP + 0xb0]                ; 0047ce50
    PUSH ESI                            ; 0047ce57
    LEA ESI,[ESP + 0x8]                 ; 0047ce58
    FADD float ptr [ESP + 0xb4]         ; 0047ce5c
    PUSH ESI                            ; 0047ce63
    FSTP float ptr [ESP + 0xb8]         ; 0047ce64
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0047ce6b
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 0047ce70
    FMUL ST0                            ; 0047ce73
    FLD float ptr [EBX]                 ; 0047ce75
    FMUL ST0                            ; 0047ce77
    FADDP                               ; 0047ce79
    FLD float ptr [EBX + 0x8]           ; 0047ce7b
    FMUL ST0                            ; 0047ce7e
    FADDP                               ; 0047ce80
    ADD ESP,0x8                         ; 0047ce82
    FSQRT                               ; 0047ce85
    LEA ESI,[ESP + 0xa4]                ; 0047ce87
    LEA EDI,[ESP + 0x80]                ; 0047ce8e
    PUSH ESI                            ; 0047ce95
    LEA ESI,[ESP + 0x8]                 ; 0047ce96
    XOR ECX,ECX                         ; 0047ce9a
    PUSH ESI                            ; 0047ce9c
    LEA ESI,[ESP + 0xdc]                ; 0047ce9d
    MOV dword ptr [ESP + 0xac],ECX      ; 0047cea4
    FSTP float ptr [ESP + 0xe8]         ; 0047ceab
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0047ceb2
    MOV dword ptr [ESP + 0xb0],ECX      ; 0047ceb9
    MOV dword ptr [ESP + 0xb4],EAX      ; 0047cec0
    CALL core_dirmat.cpp_FUN_0045f690   ; 0047cec7
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xdc]                ; 0047cecc
    ADD ESP,0x8                         ; 0047ced3
    MOVSD ES:EDI,ESI                    ; 0047ced6
    MOVSD ES:EDI,ESI                    ; 0047ced7
    MOVSD ES:EDI,ESI                    ; 0047ced8
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047ced9
    PUSH EDI                            ; 0047cedc
    LEA ESI,[ESP + 0x84]                ; 0047cedd
    PUSH ESI                            ; 0047cee4
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0047cee5
    PUSH EAX                            ; 0047ceec
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047ceed
    PUSH EDX                            ; 0047cef0
    JMP 0x0047ccac                      ; 0047cef1
        ;   XREF to: 0047ccac (UNCONDITIONAL_JUMP)  ; LAB_0047ccac
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 0047cef6
        ;   Label: LAB_0047cef6
    PUSH EDI                            ; 0047cefc
    PUSH 0x64                           ; 0047cefd
    PUSH EBX                            ; 0047ceff
    LEA EAX,[ESP + 0x74]                ; 0047cf00
    PUSH EAX                            ; 0047cf04
    MOV EAX,[0x0061dca4]                ; 0047cf05 | g_CGorePtr
    PUSH EAX                            ; 0047cf0a
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 0047cf0b
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0047cf10
    MOV ESP,EBP                         ; 0047cf13
    POP EBP                             ; 0047cf15
    POP EDI                             ; 0047cf16
    POP ESI                             ; 0047cf17
    POP EBX                             ; 0047cf18
    RET                                 ; 0047cf19

