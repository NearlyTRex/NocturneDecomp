; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_004311a0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[14]:
;   core_batcreat.cpp_FUN_00412170 at 00412334
;   core_batman.cpp_FUN_00413c40 at 00413d81
;   core_carved.cpp_FUN_0042b580 at 0042b6bc
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90 at 00430e2e
;   core_cow.cpp_FUN_00448b70 at 00448c4d
;   core_gargoyle.cpp_FUN_004dd390 at 004dd4c1
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0 at 004e06ec
;   core_imp.cpp_FUN_004f3cb0 at 004f3df1
;   core_mobster.cpp_FUN_0051ec80 at 0051ee04
;   core_moocow.cpp_FUN_00521810 at 005218bb
;   ... and 4 more
;
; Called Functions:
;   core_bodypart.cpp_FUN_00418940
;   core_bodypart.cpp_FUN_00419b90
;   core_charactr.cpp_FUN_00431210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004311a0
        ;   Label: core_charactr.cpp_FUN_004311a0
    PUSH ESI                            ; 004311a1
    PUSH EBP                            ; 004311a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004311a3
    LEA ESI,[EBX + 0x24a8]              ; 004311a7
    CMP byte ptr [ESI],0x0              ; 004311ad
    JZ 0x004311c0                       ; 004311b0
        ;   XREF to: 004311c0 (CONDITIONAL_JUMP)  ; LAB_004311c0
    MOV ESI,dword ptr [ESP + 0x14]      ; 004311b2
    CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0 ; 004311b6
    JNZ 0x004311c4                      ; 004311be
        ;   XREF to: 004311c4 (CONDITIONAL_JUMP)  ; LAB_004311c4
    POP EBP                             ; 004311c0
        ;   Label: LAB_004311c0
    POP ESI                             ; 004311c1
    POP EBX                             ; 004311c2
    RET                                 ; 004311c3
    PUSH EDI                            ; 004311c4
        ;   Label: LAB_004311c4
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 004311c5
    PUSH ECX                            ; 004311cb
    PUSH 0x0                            ; 004311cc
    PUSH 0x0                            ; 004311ce
    PUSH EBX                            ; 004311d0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004311d1
    PUSH ESI                            ; 004311d5
    LEA ESI,[EBX + 0x30]                ; 004311d6
    PUSH ESI                            ; 004311d9
    LEA ESI,[EBX + 0x20]                ; 004311da
    PUSH ESI                            ; 004311dd
    CALL core_bodypart.cpp_FUN_00418940 ; 004311de
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004311e3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004311e6
    PUSH EDI                            ; 004311ea
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004311eb
    PUSH EBP                            ; 004311ef
    PUSH EAX                            ; 004311f0
    PUSH EBX                            ; 004311f1
    MOV ESI,EAX                         ; 004311f2
    CALL core_charactr.cpp_FUN_00431210 ; 004311f4
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004311f9
    PUSH ESI                            ; 004311fc
    CALL core_bodypart.cpp_FUN_00419b90 ; 004311fd
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00419b90(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00431202
    POP EDI                             ; 00431205
    POP EBP                             ; 00431206
    POP ESI                             ; 00431207
    POP EBX                             ; 00431208
    RET                                 ; 00431209

