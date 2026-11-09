; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_FUN_00541af0(CScat *this_ptr,float delta_time)
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
;   core_scat.cpp_FUN_00540df0 at 00540e76
;
; Referenced Globals:
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541af0
        ;   Label: core_scat.cpp_FUN_00541af0
    PUSH ESI                            ; 00541af1
    PUSH EDI                            ; 00541af2
    PUSH EBP                            ; 00541af3
    MOV EBP,ESP                         ; 00541af4
    SUB ESP,0x3c                        ; 00541af6
    AND ESP,0xfffffff8                  ; 00541af9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00541afc
    LEA EDI,[ESI + 0x158]               ; 00541aff
    LEA EAX,[EBP + 0x18]                ; 00541b05
        ;   Label: LAB_00541b05
    PUSH EAX                            ; 00541b08
    PUSH EDI                            ; 00541b09
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00541b0a
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00541b0f
    CMP EAX,0x64                        ; 00541b12
    JZ 0x00541b34                       ; 00541b15
        ;   XREF to: 00541b34 (CONDITIONAL_JUMP)  ; LAB_00541b34
    PUSH EAX                            ; 00541b17
    PUSH ESI                            ; 00541b18
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00541b19
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00541b1e
        ;   Label: LAB_00541b1e
    FLD float ptr [EBP + 0x18]          ; 00541b21
        ;   Label: LAB_00541b21
    FLDZ                                ; 00541b24
    FCOMPP                              ; 00541b26
    FNSTSW AX                           ; 00541b28
    SAHF                                ; 00541b2a
    JC 0x00541b05                       ; 00541b2b
        ;   XREF to: 00541b05 (CONDITIONAL_JUMP)  ; LAB_00541b05
    MOV ESP,EBP                         ; 00541b2d
    POP EBP                             ; 00541b2f
    POP EDI                             ; 00541b30
    POP ESI                             ; 00541b31
    POP EBX                             ; 00541b32
    RET                                 ; 00541b33
    MOV EDX,dword ptr [0x01c3f6a0]      ; 00541b34 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00541b34
    PUSH EDX                            ; 00541b3a
    MOV ECX,dword ptr [ESI + 0x26fc]    ; 00541b3b
    PUSH ECX                            ; 00541b41
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00541b42
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 00541b47
    ADD ESP,0x8                         ; 00541b49
    TEST EAX,EAX                        ; 00541b4c
    JZ 0x00541b21                       ; 00541b4e
        ;   XREF to: 00541b21 (CONDITIONAL_JUMP)  ; LAB_00541b21
    MOV EAX,ESP                         ; 00541b50
    PUSH EAX                            ; 00541b52
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00541b53
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,0x40a00000                  ; 00541b58
    ADD ESP,0x4                         ; 00541b5d
    MOV EDX,ESP                         ; 00541b60
    MOV dword ptr [ESP + 0x4],EAX       ; 00541b62
    PUSH EDX                            ; 00541b66
    MOV dword ptr [ESP + 0x38],ESI      ; 00541b67
    MOV dword ptr [ESP + 0x3c],ESI      ; 00541b6b
    PUSH EBX                            ; 00541b6f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00541b70
    CALL dword ptr [EAX + 0x108]        ; 00541b76
    JMP 0x00541b1e                      ; 00541b7c
        ;   XREF to: 00541b1e (UNCONDITIONAL_JUMP)  ; LAB_00541b1e

