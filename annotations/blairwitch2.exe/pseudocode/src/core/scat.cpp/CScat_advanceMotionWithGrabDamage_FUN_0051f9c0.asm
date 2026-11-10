; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_0051ecc0 at 0051ed46
;
; Referenced Globals:
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f9c0
        ;   Label: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0
    PUSH ESI                            ; 0051f9c1
    PUSH EDI                            ; 0051f9c2
    PUSH EBP                            ; 0051f9c3
    MOV EBP,ESP                         ; 0051f9c4
    SUB ESP,0x3c                        ; 0051f9c6
    AND ESP,0xfffffff8                  ; 0051f9c9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051f9cc
    LEA EDI,[ESI + 0x2b4]               ; 0051f9cf
    LEA EAX,[EBP + 0x18]                ; 0051f9d5
        ;   Label: LAB_0051f9d5
    PUSH EAX                            ; 0051f9d8
    PUSH EDI                            ; 0051f9d9
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0051f9da
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0051f9df
    CMP EAX,0x64                        ; 0051f9e2
    JZ 0x0051fa04                       ; 0051f9e5
        ;   XREF to: 0051fa04 (CONDITIONAL_JUMP)  ; LAB_0051fa04
    PUSH EAX                            ; 0051f9e7
    PUSH ESI                            ; 0051f9e8
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0051f9e9
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0051f9ee
        ;   Label: LAB_0051f9ee
    FLD float ptr [EBP + 0x18]          ; 0051f9f1
        ;   Label: LAB_0051f9f1
    FLDZ                                ; 0051f9f4
    FCOMPP                              ; 0051f9f6
    FNSTSW AX                           ; 0051f9f8
    SAHF                                ; 0051f9fa
    JC 0x0051f9d5                       ; 0051f9fb
        ;   XREF to: 0051f9d5 (CONDITIONAL_JUMP)  ; LAB_0051f9d5
    MOV ESP,EBP                         ; 0051f9fd
    POP EBP                             ; 0051f9ff
    POP EDI                             ; 0051fa00
    POP ESI                             ; 0051fa01
    POP EBX                             ; 0051fa02
    RET                                 ; 0051fa03
    MOV EDX,dword ptr [0x01c264e0]      ; 0051fa04 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0051fa04
    PUSH EDX                            ; 0051fa0a
    MOV ECX,dword ptr [ESI + 0x276c]    ; 0051fa0b
    PUSH ECX                            ; 0051fa11
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0051fa12
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 0051fa17
    ADD ESP,0x8                         ; 0051fa19
    TEST EAX,EAX                        ; 0051fa1c
    JZ 0x0051f9f1                       ; 0051fa1e
        ;   XREF to: 0051f9f1 (CONDITIONAL_JUMP)  ; LAB_0051f9f1
    MOV EAX,ESP                         ; 0051fa20
    PUSH EAX                            ; 0051fa22
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0051fa23
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,0x40a00000                  ; 0051fa28
    ADD ESP,0x4                         ; 0051fa2d
    MOV EDX,ESP                         ; 0051fa30
    MOV dword ptr [ESP + 0x4],EAX       ; 0051fa32
    PUSH EDX                            ; 0051fa36
    MOV dword ptr [ESP + 0x38],ESI      ; 0051fa37
    MOV dword ptr [ESP + 0x3c],ESI      ; 0051fa3b
    PUSH EBX                            ; 0051fa3f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051fa40
    CALL dword ptr [EAX + 0x110]        ; 0051fa46
    JMP 0x0051f9ee                      ; 0051fa4c
        ;   XREF to: 0051f9ee (UNCONDITIONAL_JUMP)  ; LAB_0051f9ee

