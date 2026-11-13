; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00569040(CDeformableModelInstance *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[49]:
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411948
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00413301
;   core_bird.cpp_CBird_process_FUN_00415340 at 004153fb
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00423d5b
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429ac9
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 at 00434ae2
;   core_cow.cpp_CZombieCow_process_FUN_00448570 at 004488e6
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 0045a43d
;   core_doc.cpp_CDoc_aimLeftPistol_FUN_00473160 at 00473427
;   core_doc.cpp_CDoc_doHeroAction_FUN_00474fc0 at 0047547e
;   ... and 39 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00568e30
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569040
        ;   Label: core_skeleton.cpp_FUN_00569040
    PUSH EDI                            ; 00569041
    PUSH EBP                            ; 00569042
    SUB ESP,0x84                        ; 00569043
    MOV EDI,dword ptr [ESP + 0x98]      ; 00569049
    MOV EBX,ESI                         ; 00569050
    MOV ESI,dword ptr [ESP + 0x94]      ; 00569052
    TEST EDI,EDI                        ; 00569059
    JGE 0x0056907f                      ; 0056905b
        ;   XREF to: 0056907f (CONDITIONAL_JUMP)  ; LAB_0056907f
    LEA EDI,[ESP + 0x78]                ; 0056905d
    LEA ESI,[ESI + 0x6a4]               ; 00569061
    MOVSD ES:EDI,ESI                    ; 00569067
        ;   Label: LAB_00569067
    MOVSD ES:EDI,ESI                    ; 00569068
    MOVSD ES:EDI,ESI                    ; 00569069
    LEA ESI,[ESP + 0x78]                ; 0056906a
    MOV EDI,EBX                         ; 0056906e
    MOVSD ES:EDI,ESI                    ; 00569070
    MOVSD ES:EDI,ESI                    ; 00569071
    MOVSD ES:EDI,ESI                    ; 00569072
    MOV EAX,EBX                         ; 00569073
    ADD ESP,0x84                        ; 00569075
    POP EBP                             ; 0056907b
    POP EDI                             ; 0056907c
    POP EBX                             ; 0056907d
    RET                                 ; 0056907e
    PUSH ESI                            ; 0056907f
        ;   Label: LAB_0056907f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00569080
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV EBP,EAX                         ; 00569085
    LEA EAX,[EDI*0x8 + 0x0]             ; 00569087
    ADD EAX,EDI                         ; 0056908e
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x1de9c] ; 00569090
    LEA EAX,[EDI*0x4 + 0x0]             ; 00569097
    SUB EAX,EDI                         ; 0056909e
    LEA ECX,[ESI + 0x58]                ; 005690a0
    SHL EAX,0x2                         ; 005690a3
    ADD ESP,0x4                         ; 005690a6
    LEA EBP,[ECX + EAX*0x1]             ; 005690a9
    TEST EDX,EDX                        ; 005690ac
    JGE 0x005690ee                      ; 005690ae
        ;   XREF to: 005690ee (CONDITIONAL_JUMP)  ; LAB_005690ee
    FLD float ptr [EBP]                 ; 005690b0
    FLD float ptr [EBP + 0x4]           ; 005690b3
    FLD float ptr [EBP + 0x8]           ; 005690b6
    LEA EDI,[ESP + 0x78]                ; 005690b9
    FXCH ST2                            ; 005690bd
    FADD float ptr [ESI + 0x6a4]        ; 005690bf
    FXCH                                ; 005690c5
    FADD float ptr [ESI + 0x6a8]        ; 005690c7
    FXCH ST2                            ; 005690cd
    FADD float ptr [ESI + 0x6ac]        ; 005690cf
    FXCH                                ; 005690d5
    FSTP float ptr [ESP + 0x60]         ; 005690d7
    FXCH                                ; 005690db
    FSTP float ptr [ESP + 0x64]         ; 005690dd
    LEA ESI,[ESP + 0x60]                ; 005690e1
    FSTP float ptr [ESP + 0x68]         ; 005690e5
    JMP 0x00569067                      ; 005690e9
        ;   XREF to: 00569067 (UNCONDITIONAL_JUMP)  ; LAB_00569067
    PUSH EDX                            ; 005690ee
        ;   Label: LAB_005690ee
    PUSH ESI                            ; 005690ef
    LEA ESI,[ESP + 0x8]                 ; 005690f0
    LEA EDI,[ESP + 0x38]                ; 005690f4
    CALL core_skeleton.cpp_FUN_00568e30 ; 005690f8
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568e30()
    MOV ECX,0xc                         ; 005690fd
    ADD ESP,0x8                         ; 00569102
    LEA EAX,[ESP + 0x30]                ; 00569105
    MOV ESI,ESP                         ; 00569109
    PUSH EAX                            ; 0056910b
    MOVSD.REP ES:EDI,ESI                ; 0056910c
    PUSH EBP                            ; 0056910e
    LEA ESI,[ESP + 0x74]                ; 0056910f
    LEA EDI,[ESP + 0x80]                ; 00569113
    CALL core_xform.cpp_FUN_005b5080    ; 0056911a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x74]                ; 0056911f
    ADD ESP,0x8                         ; 00569123
    JMP 0x00569067                      ; 00569126
        ;   XREF to: 00569067 (UNCONDITIONAL_JUMP)  ; LAB_00569067

