; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)
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
; XREF[38]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0dcf
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596fd4
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fbfb
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426d85
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 at 00434012
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004454af
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 00456458
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 00462ccc
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c7b0a
;   core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40 at 005982f5
;   ... and 28 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dbd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
    PUSH EDI                            ; 0054dbd1
    PUSH EBP                            ; 0054dbd2
    SUB ESP,0x84                        ; 0054dbd3
    MOV EDI,dword ptr [ESP + 0x98]      ; 0054dbd9
    MOV EBX,ESI                         ; 0054dbe0
    MOV ESI,dword ptr [ESP + 0x94]      ; 0054dbe2
    TEST EDI,EDI                        ; 0054dbe9
    JGE 0x0054dc0f                      ; 0054dbeb
        ;   XREF to: 0054dc0f (CONDITIONAL_JUMP)  ; LAB_0054dc0f
    LEA EDI,[ESP + 0x78]                ; 0054dbed
    LEA ESI,[ESI + 0x6a4]               ; 0054dbf1
    MOVSD ES:EDI,ESI                    ; 0054dbf7
        ;   Label: LAB_0054dbf7
    MOVSD ES:EDI,ESI                    ; 0054dbf8
    MOVSD ES:EDI,ESI                    ; 0054dbf9
    LEA ESI,[ESP + 0x78]                ; 0054dbfa
    MOV EDI,EBX                         ; 0054dbfe
    MOVSD ES:EDI,ESI                    ; 0054dc00
    MOVSD ES:EDI,ESI                    ; 0054dc01
    MOVSD ES:EDI,ESI                    ; 0054dc02
    MOV EAX,EBX                         ; 0054dc03
    ADD ESP,0x84                        ; 0054dc05
    POP EBP                             ; 0054dc0b
    POP EDI                             ; 0054dc0c
    POP EBX                             ; 0054dc0d
    RET                                 ; 0054dc0e
    PUSH ESI                            ; 0054dc0f
        ;   Label: LAB_0054dc0f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054dc10
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV EBP,EAX                         ; 0054dc15
    LEA EAX,[EDI*0x8 + 0x0]             ; 0054dc17
    ADD EAX,EDI                         ; 0054dc1e
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x1de9c] ; 0054dc20
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054dc27
    SUB EAX,EDI                         ; 0054dc2e
    LEA ECX,[ESI + 0x58]                ; 0054dc30
    SHL EAX,0x2                         ; 0054dc33
    ADD ESP,0x4                         ; 0054dc36
    LEA EBP,[ECX + EAX*0x1]             ; 0054dc39
    TEST EDX,EDX                        ; 0054dc3c
    JGE 0x0054dc7e                      ; 0054dc3e
        ;   XREF to: 0054dc7e (CONDITIONAL_JUMP)  ; LAB_0054dc7e
    FLD float ptr [EBP]                 ; 0054dc40
    FLD float ptr [EBP + 0x4]           ; 0054dc43
    FLD float ptr [EBP + 0x8]           ; 0054dc46
    LEA EDI,[ESP + 0x78]                ; 0054dc49
    FXCH ST2                            ; 0054dc4d
    FADD float ptr [ESI + 0x6a4]        ; 0054dc4f
    FXCH                                ; 0054dc55
    FADD float ptr [ESI + 0x6a8]        ; 0054dc57
    FXCH ST2                            ; 0054dc5d
    FADD float ptr [ESI + 0x6ac]        ; 0054dc5f
    FXCH                                ; 0054dc65
    FSTP float ptr [ESP + 0x60]         ; 0054dc67
    FXCH                                ; 0054dc6b
    FSTP float ptr [ESP + 0x64]         ; 0054dc6d
    LEA ESI,[ESP + 0x60]                ; 0054dc71
    FSTP float ptr [ESP + 0x68]         ; 0054dc75
    JMP 0x0054dbf7                      ; 0054dc79
        ;   XREF to: 0054dbf7 (UNCONDITIONAL_JUMP)  ; LAB_0054dbf7
    PUSH EDX                            ; 0054dc7e
        ;   Label: LAB_0054dc7e
    PUSH ESI                            ; 0054dc7f
    LEA ESI,[ESP + 0x8]                 ; 0054dc80
    LEA EDI,[ESP + 0x38]                ; 0054dc84
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0 ; 0054dc88
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 0054dc8d
    ADD ESP,0x8                         ; 0054dc92
    LEA EAX,[ESP + 0x30]                ; 0054dc95
    MOV ESI,ESP                         ; 0054dc99
    PUSH EAX                            ; 0054dc9b
    MOVSD.REP ES:EDI,ESI                ; 0054dc9c
    PUSH EBP                            ; 0054dc9e
    LEA ESI,[ESP + 0x74]                ; 0054dc9f
    LEA EDI,[ESP + 0x80]                ; 0054dca3
    CALL core_xform.cpp_FUN_00583260    ; 0054dcaa
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x74]                ; 0054dcaf
    ADD ESP,0x8                         ; 0054dcb3
    JMP 0x0054dbf7                      ; 0054dcb6
        ;   XREF to: 0054dbf7 (UNCONDITIONAL_JUMP)  ; LAB_0054dbf7

