; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_004135e0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004131f7
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_baron.cpp_CBaron_releaseTarget_FUN_004135a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004135e0
        ;   Label: core_baron.cpp_CBaron_updateMountedPosition_FUN_004135e0
    PUSH ESI                            ; 004135e1
    PUSH EDI                            ; 004135e2
    PUSH EBP                            ; 004135e3
    MOV EBP,ESP                         ; 004135e4
    SUB ESP,0x24                        ; 004135e6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004135e9
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 004135ec
    TEST EDX,EDX                        ; 004135f2
    JNZ 0x004135fd                      ; 004135f4
        ;   XREF to: 004135fd (CONDITIONAL_JUMP)  ; LAB_004135fd
    MOV ESP,EBP                         ; 004135f6
        ;   Label: LAB_004135f6
    POP EBP                             ; 004135f8
    POP EDI                             ; 004135f9
    POP ESI                             ; 004135fa
    POP EBX                             ; 004135fb
    RET                                 ; 004135fc
    LEA EAX,[EDX + 0x30]                ; 004135fd
        ;   Label: LAB_004135fd
    MOV ESI,dword ptr [EBX + 0x154]     ; 00413600
    PUSH EAX                            ; 00413606
    MOV EAX,0xc0000000                  ; 00413607
    XOR ECX,ECX                         ; 0041360c
    MOV dword ptr [EBP + -0x4],EAX      ; 0041360e
    LEA EAX,[EBP + -0xc]                ; 00413611
    MOV dword ptr [EBP + -0xc],ECX      ; 00413614
    PUSH EAX                            ; 00413617
    LEA EAX,[EBP + -0x18]               ; 00413618
    MOV dword ptr [EBP + -0x8],ECX      ; 0041361b
    PUSH EAX                            ; 0041361e
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 0041361f
    PUSH EDX                            ; 00413625
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00413626
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 0041362b
    FLD float ptr [EDX + 0x20]          ; 00413631
    FADD float ptr [EAX]                ; 00413634
    FSTP float ptr [EBP + -0x24]        ; 00413636
    FLD float ptr [EDX + 0x24]          ; 00413639
    FADD float ptr [EAX + 0x4]          ; 0041363c
    ADD ESP,0xc                         ; 0041363f
    FSTP float ptr [EBP + -0x20]        ; 00413642
    FLD float ptr [EDX + 0x28]          ; 00413645
    FADD float ptr [EAX + 0x8]          ; 00413648
    LEA EAX,[EBP + -0x24]               ; 0041364b
    PUSH EAX                            ; 0041364e
    PUSH EBX                            ; 0041364f
    FSTP float ptr [EBP + -0x1c]        ; 00413650
    CALL dword ptr [ESI + 0x60]         ; 00413653
    ADD ESP,0xc                         ; 00413656
    MOV ECX,dword ptr [0x00823c4c]      ; 00413659 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0041365f
    MOV ESI,dword ptr [EBX + 0x1fcac]   ; 00413660
    PUSH ESI                            ; 00413666
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00413667
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0041366c
    TEST EAX,EAX                        ; 0041366f
    JZ 0x004135f6                       ; 00413671
        ;   XREF to: 004135f6 (CONDITIONAL_JUMP)  ; LAB_004135f6
    PUSH EAX                            ; 00413673
    MOV EDX,dword ptr [EAX + 0x154]     ; 00413674
    CALL dword ptr [EDX + 0x120]        ; 0041367a
    ADD ESP,0x4                         ; 00413680
    CMP EAX,0x2                         ; 00413683
    JNZ 0x004135f6                      ; 00413686
        ;   XREF to: 004135f6 (CONDITIONAL_JUMP)  ; LAB_004135f6
    MOV EDI,dword ptr [EBX + 0x1fcac]   ; 0041368c
    PUSH EDI                            ; 00413692
    PUSH EBX                            ; 00413693
    CALL core_baron.cpp_CBaron_releaseTarget_FUN_004135a0 ; 00413694
        ;   XREF to: 004135a0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_releaseTarget_FUN_004135a0(CBaron * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 00413699
    MOV ESP,EBP                         ; 0041369c
    POP EBP                             ; 0041369e
    POP EDI                             ; 0041369f
    POP ESI                             ; 004136a0
    POP EBX                             ; 004136a1
    RET                                 ; 004136a2

